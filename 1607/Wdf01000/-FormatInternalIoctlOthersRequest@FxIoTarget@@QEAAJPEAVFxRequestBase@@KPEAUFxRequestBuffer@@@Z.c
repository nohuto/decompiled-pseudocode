/*
 * XREFs of ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C002AFD8
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C002F260 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00828D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008BCE4 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000CF00 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0029720 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C002D8D4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C002EF98 (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0063190 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rdi
  FxRequestContext *v10; // rax
  void ***v11; // r14
  unsigned int v12; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int _a2; // eax
  unsigned int v15; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  void **bufs[3]; // [rsp+40h] [rbp-48h] BYREF
  void *Caller; // [rsp+88h] [rbp+0h]

  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 2 )
    {
      v10 = (FxRequestContext *)FxPoolAllocator(
                                  this->m_Globals,
                                  &this->m_Globals->FxPoolFrameworks,
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
      FxRequestBase::SetContext(Request, m_RequestContext);
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
    v11 = bufs;
    v12 = 0;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    bufs[0] = &CurrentStackLocation[-1].Parameters.Others.Argument1;
    bufs[1] = &CurrentStackLocation[-1].Parameters.QueryEa.EaList;
    bufs[2] = &CurrentStackLocation[-1].Parameters.SetFile.DeleteHandle;
    do
    {
      _a2 = FxRequestBuffer::GetBuffer(&Buffers[v12], (IFxMemory **)*v11);
      v15 = _a2;
      if ( _a2 < 0 )
      {
        WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTarget_cpp_Traceguids, v12 + 1, _a2);
        FxRequestBase::ContextReleaseAndRestore(Request);
        return v15;
      }
      ++v12;
      ++v11;
    }
    while ( v12 < 3 );
    m_Globals = Request->m_Globals;
    if ( m_Globals->FxVerifierOn )
    {
      if ( m_Globals->FxVerifierIO )
        FxRequestBase::SetVerifierFlags(Request, 128);
    }
    return v15;
  }
  return result;
}
