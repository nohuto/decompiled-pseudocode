/*
 * XREFs of ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0010030
 * Callers:
 *     <none>
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxIoContext::ReleaseAndRestore(FxIoContext *this, FxRequestBase *Request)
{
  _MDL *m_MdlToFree; // rcx
  IFxMemory *m_OtherMemory; // rcx
  IFxMemory *m_RequestMemory; // rcx
  _MDL *MdlAddress; // rsi
  __int16 MdlFlags; // cx
  _MDL *Next; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v11; // rax
  int v12; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_RestoreState )
  {
    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)this->m_OriginalSystemBuffer;
    Request->m_Irp.m_Irp->UserBuffer = this->m_OriginalUserBuffer;
    Request->m_Irp.m_Irp->MdlAddress = this->m_OriginalMdl;
    Request->m_Irp.m_Irp->Flags = this->m_OriginalFlags;
    this->m_OriginalSystemBuffer = 0LL;
    this->m_OriginalUserBuffer = 0LL;
    this->m_OriginalMdl = 0LL;
    this->m_OriginalFlags = 0;
    this->m_RestoreState = 0;
  }
  m_MdlToFree = this->m_MdlToFree;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      this->m_UnlockPages = 0;
    }
    this->m_OriginalMdl = (_MDL *)Request->m_Globals;
  }
  m_OtherMemory = this->m_OtherMemory;
  if ( m_OtherMemory )
  {
    m_OtherMemory->Release(
      m_OtherMemory,
      this,
      123,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\km\\fxiotargetkm.hpp");
    this->m_OtherMemory = 0LL;
  }
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
          v12 = 7567731;
          Mx::MxDbgPrint(
            "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
            m_Globals->Public.DriverName,
            (const char *)&v12,
            m_Globals->Public.DriverName,
            (const char *)&v12);
          if ( *(_BYTE *)(v11 + 318) )
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
  *(_QWORD *)&this->m_CompletionParams.Size = 0LL;
  this->m_CompletionParams.IoStatus.Pointer = 0LL;
  this->m_CompletionParams.IoStatus.Information = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
  this->m_CompletionParams.Parameters.Write.Length = 0LL;
  this->m_CompletionParams.Parameters.Write.Offset = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
  this->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
  this->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
