/*
 * XREFs of ?Dispose@FxTimer@@UEAAEXZ @ 0x1C0077820
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C0077874 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxTimer::Dispose(FxTimer *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *m_CallbackThread; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_RunningDown = 1;
  if ( m_ObjectFlags < 0 && (m_CallbackThread = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
    FxVerifierLock::Unlock(m_CallbackThread, irql, v4);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  FxTimer::FlushAndRundown(this);
  return 1;
}
