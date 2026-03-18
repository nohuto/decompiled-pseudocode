/*
 * XREFs of ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0014968
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C002DDA0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0082510 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008C814 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0016870 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0028498 (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C005C594 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rsi
  FxRequestContext *v10; // rax
  FxRequestContext *v11; // rcx
  void ***v12; // r14
  unsigned int v13; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int _a2; // eax
  unsigned __int8 v16; // r8
  unsigned int v17; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v19; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  unsigned __int8 PreviousIrql[8]; // [rsp+40h] [rbp-58h] BYREF
  void **bufs[3]; // [rsp+48h] [rbp-50h] BYREF
  _LIST_ENTRY *Caller; // [rsp+98h] [rbp+0h]

  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 2 )
    {
      v10 = (FxRequestContext *)FxPoolAllocator(
                                  this->m_Globals,
                                  (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0x70uLL,
                                  this->m_Globals->Tag,
                                  Caller);
      m_RequestContext = v10;
      if ( v10 )
      {
        v10->m_RequestMemory = 0LL;
        v10->m_RequestType = 2;
        memset(&v10->m_CompletionParams, 0, sizeof(v10->m_CompletionParams));
        m_RequestContext->m_CompletionParams.Size = 72;
        m_RequestContext->m_CompletionParams.Type = WdfRequestTypeNoFormat;
        m_RequestContext->__vftable = (FxRequestContext_vtbl *)&FxInternalIoctlOthersContext::`vftable';
        m_RequestContext[1].__vftable = 0LL;
        *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = 0LL;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x35u, WPP_FxIoTarget_cpp_Traceguids);
        return 3221225626LL;
      }
      v11 = Request->m_RequestContext;
      if ( v11 != m_RequestContext )
      {
        if ( v11 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v11->~FxRequestContext)(v11, 1LL);
        Request->m_RequestContext = m_RequestContext;
      }
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffers);
    FxRequestContext::_StoreAndReferenceMemoryWorker(m_RequestContext, (IFxMemory **)&m_RequestContext[1], Buffers + 1);
    FxRequestContext::_StoreAndReferenceMemoryWorker(
      m_RequestContext,
      (IFxMemory **)&m_RequestContext[1].m_CompletionParams,
      Buffers + 2);
    memset(&Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1], 0, 0x38uLL);
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    v12 = bufs;
    v13 = 0;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    bufs[0] = &CurrentStackLocation[-1].Parameters.Others.Argument1;
    bufs[1] = &CurrentStackLocation[-1].Parameters.QueryEa.EaList;
    bufs[2] = &CurrentStackLocation[-1].Parameters.SetFile.DeleteHandle;
    do
    {
      _a2 = FxRequestBuffer::GetBuffer(&Buffers[v13], *v12);
      v17 = _a2;
      if ( _a2 < 0 )
      {
        WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTarget_cpp_Traceguids, v13 + 1, _a2);
        FxRequestBase::ContextReleaseAndRestore(Request);
        return v17;
      }
      ++v13;
      ++v12;
    }
    while ( v13 < 3 );
    m_Globals = Request->m_Globals;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
    {
      FxNonPagedObject::Lock(Request, PreviousIrql, v16);
      Request->m_VerifierFlags |= 0x80u;
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
        FxVerifierLock::Unlock(m_IrpQueue, PreviousIrql[0], v19);
      else
        KeReleaseSpinLock(&Request->m_NPLock.m_Lock, PreviousIrql[0]);
    }
    return v17;
  }
  return result;
}
