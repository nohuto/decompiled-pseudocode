/*
 * XREFs of ?InvokeAllocateResourcesCallback@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0063660
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C00629A4 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIoQueue::InvokeAllocateResourcesCallback(FxIoQueue *this, unsigned __int64 Request)
{
  unsigned int v3; // ecx
  _FXIO_FORWARD_PROGRESS_CONTEXT **p_m_FwdProgContext; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8

  v3 = 0;
  p_m_FwdProgContext = &this->m_FwdProgContext;
  if ( this->m_FwdProgContext->m_IoResourcesAllocate.Method )
  {
    *(_BYTE *)(Request + 352) = 1;
    if ( *(_WORD *)(Request + 10) )
      v5 = Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v5 = 0LL;
    if ( this->m_ObjectSize )
      v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v6 = 0LL;
    return (unsigned int)(*p_m_FwdProgContext)->m_IoResourcesAllocate.Method((WDFQUEUE__ *)v6, (WDFREQUEST__ *)v5);
  }
  return v3;
}
