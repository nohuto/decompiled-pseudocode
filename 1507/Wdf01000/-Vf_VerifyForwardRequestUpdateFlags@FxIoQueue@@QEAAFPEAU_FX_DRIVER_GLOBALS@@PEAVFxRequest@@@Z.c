/*
 * XREFs of ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D1FE8
 * Callers:
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0095C5C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *Request,
        FxRequest *FxDriverGlobals)
{
  unsigned __int8 v4; // r8
  unsigned __int16 m_VerifierFlags; // di
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _FX_DRIVER_GLOBALS *irql; // [rsp+38h] [rbp+10h] BYREF

  irql = Request;
  FxNonPagedObject::Lock(FxDriverGlobals, (unsigned __int8 *)&irql, (unsigned __int8)FxDriverGlobals);
  m_VerifierFlags = FxDriverGlobals->m_VerifierFlags;
  FxDriverGlobals->m_VerifierFlags = m_VerifierFlags & 0xFFF2 | 4;
  if ( SLOBYTE(FxDriverGlobals->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)FxDriverGlobals[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, (KIRQL)irql, v4);
  }
  else
  {
    KeReleaseSpinLock(&FxDriverGlobals->m_NPLock.m_Lock, (KIRQL)irql);
  }
  return m_VerifierFlags;
}
