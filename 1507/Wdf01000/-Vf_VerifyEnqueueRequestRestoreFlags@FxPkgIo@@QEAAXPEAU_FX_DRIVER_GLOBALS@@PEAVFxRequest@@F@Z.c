/*
 * XREFs of ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00D19FC
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0094CBC (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *Request,
        FxRequest *OrigVerifierFlags,
        __int16 FxDriverGlobals)
{
  unsigned __int8 v6; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 irql; // [rsp+48h] [rbp+20h] BYREF

  FxNonPagedObject::Lock(OrigVerifierFlags, &irql, (unsigned __int8)OrigVerifierFlags);
  m_ObjectFlags = OrigVerifierFlags->m_ObjectFlags;
  OrigVerifierFlags->m_VerifierFlags = FxDriverGlobals;
  if ( m_ObjectFlags < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)OrigVerifierFlags[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v6);
  }
  else
  {
    KeReleaseSpinLock(&OrigVerifierFlags->m_NPLock.m_Lock, irql);
  }
}
