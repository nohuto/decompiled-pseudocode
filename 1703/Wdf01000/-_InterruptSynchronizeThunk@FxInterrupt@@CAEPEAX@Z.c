/*
 * XREFs of ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C003D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0004EDC (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0004F3C (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

char __fastcall FxInterrupt::_InterruptSynchronizeThunk(_QWORD *SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  FxInterrupt *v3; // rcx
  unsigned __int64 v4; // rcx
  char v5; // di
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v8; // rcx

  v3 = (FxInterrupt *)*SyncContext;
  if ( v3->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(v3, a2);
    v4 = *SyncContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(*SyncContext + 10LL) )
      v4 = 0LL;
    v5 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SyncContext[1])(v4, SyncContext[2]);
    FxInterrupt::ReleaseLock((FxInterrupt *)*SyncContext);
  }
  else
  {
    m_ObjectSize = v3->m_ObjectSize;
    v8 = (unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v8 = 0LL;
    return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SyncContext[1])(v8, SyncContext[2]);
  }
  return v5;
}
