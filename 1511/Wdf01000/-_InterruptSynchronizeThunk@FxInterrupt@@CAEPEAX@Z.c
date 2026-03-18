/*
 * XREFs of ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C00356A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00035B0 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0003600 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

char __fastcall FxInterrupt::_InterruptSynchronizeThunk(_QWORD *SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  FxInterrupt *v3; // rcx
  unsigned __int64 v4; // rcx
  char v5; // di
  _FX_DRIVER_GLOBALS *v6; // rdx
  unsigned __int64 v7; // rcx

  v3 = (FxInterrupt *)*SyncContext;
  if ( v3->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(v3, a2);
    if ( *(_WORD *)(*SyncContext + 10LL) )
      v4 = *SyncContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v4 = 0LL;
    v5 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SyncContext[1])(v4, SyncContext[2]);
    FxInterrupt::ReleaseLock((FxInterrupt *)*SyncContext, v6);
  }
  else
  {
    if ( v3->m_ObjectSize )
      v7 = (unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v7 = 0LL;
    return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SyncContext[1])(v7, SyncContext[2]);
  }
  return v5;
}
