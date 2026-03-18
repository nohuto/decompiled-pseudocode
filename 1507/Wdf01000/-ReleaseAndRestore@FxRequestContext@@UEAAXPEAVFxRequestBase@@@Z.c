/*
 * XREFs of ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0028570
 * Callers:
 *     ?ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0028440 (-ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008CE30 (-ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0091620 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00916A0 (-ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxRequestContext::ReleaseAndRestore(FxRequestContext *this, FxRequestBase *Request)
{
  _MDL *MdlAddress; // rbx
  IFxMemory *m_RequestMemory; // rcx
  __int16 MdlFlags; // cx
  _MDL *Next; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v9; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( Request->m_IrpAllocation && !Request->m_CanComplete )
  {
    MdlAddress = Request->m_Irp.m_Irp->MdlAddress;
    if ( MdlAddress )
    {
      do
      {
        MdlFlags = MdlAddress->MdlFlags;
        Next = MdlAddress->Next;
        if ( (MdlFlags & 2) != 0 )
        {
          MmUnlockPages(MdlAddress);
        }
        else if ( Request->m_Globals->FxVerifierOn )
        {
          DbgPrint("pMdl %p, Flags 0x%x in PIRP %p should be locked", MdlAddress, MdlFlags, Request->m_Irp.m_Irp);
          m_Globals = Request->m_Globals;
          v10 = 7567731;
          Mx::MxDbgPrint(
            "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
            m_Globals->Public.DriverName,
            (const char *)&v10,
            m_Globals->Public.DriverName,
            (const char *)&v10);
          if ( *(_BYTE *)(v9 + 318) )
            DbgBreakPoint();
        }
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
    }
    Request->m_Irp.m_Irp->MdlAddress = 0LL;
  }
  m_RequestMemory = this->m_RequestMemory;
  if ( m_RequestMemory )
  {
    m_RequestMemory->Release(
      m_RequestMemory,
      this,
      112,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    this->m_RequestMemory = 0LL;
  }
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
