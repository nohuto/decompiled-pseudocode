/*
 * XREFs of ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D2058
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C0005710 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxIoQueue::Vf_VerifyGetRequestRestoreFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *pRequest,
        FxRequest *FxDriverGlobals)
{
  unsigned __int8 v4; // r8
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _FX_DRIVER_GLOBALS *irql; // [rsp+38h] [rbp+10h] BYREF

  irql = pRequest;
  FxNonPagedObject::Lock(FxDriverGlobals, (unsigned __int8 *)&irql, (unsigned __int8)FxDriverGlobals);
  FxDriverGlobals->m_VerifierFlags = FxDriverGlobals->m_VerifierFlags & 0xFFFC | 1;
  if ( SLOBYTE(FxDriverGlobals->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)FxDriverGlobals[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, (KIRQL)irql, v4);
  }
  else
  {
    KeReleaseSpinLock(&FxDriverGlobals->m_NPLock.m_Lock, (KIRQL)irql);
  }
}
