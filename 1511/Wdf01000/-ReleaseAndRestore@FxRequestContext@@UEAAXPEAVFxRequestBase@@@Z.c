/*
 * XREFs of ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0032430
 * Callers:
 *     ?ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0032370 (-ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00352D0 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00358D0 (-ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C007C1A0 (-ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequestContext::ReleaseAndRestore(FxRequestContext *this, FxRequestBase *Request)
{
  _MDL *MdlAddress; // rdi
  IFxMemory *m_RequestMemory; // rcx
  __int16 MdlFlags; // cx
  _MDL *Next; // rbp

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
          FxVerifierDbgBreakPoint(Request->m_Globals);
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
