/*
 * XREFs of ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAB8C
 * Callers:
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000AFE0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000DAC0 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *Request,
        FxRequest *FxDriverGlobals)
{
  unsigned __int16 m_VerifierFlags; // bx
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *irql; // [rsp+38h] [rbp+10h] BYREF

  irql = Request;
  FxNonPagedObject::Lock(FxDriverGlobals, (unsigned __int8 *)&irql, (unsigned __int8)FxDriverGlobals);
  m_VerifierFlags = FxDriverGlobals->m_VerifierFlags;
  v5 = (unsigned __int8)irql;
  FxDriverGlobals->m_VerifierFlags = m_VerifierFlags & 0xFFF2 | 4;
  FxNonPagedObject::Unlock(FxDriverGlobals, v5, v6);
  return m_VerifierFlags;
}
