/*
 * XREFs of ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0013850
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0011508 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0011550 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptDisableThunk(_DWORD *SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _FX_DRIVER_GLOBALS *v11; // rdx

  v2 = *(_QWORD *)SyncContext;
  v3 = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)SyncContext + 258LL) )
  {
    FxInterrupt::AcquireLock((FxInterrupt *)v2, a2);
    v9 = *(_QWORD *)(v2 + 96);
    if ( *(_WORD *)(v9 + 10) )
      v10 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v10 = 0LL;
    if ( *(_WORD *)(v2 + 10) )
      v3 = v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v7 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v2 + 320))(v3, v10);
    FxInterrupt::ReleaseLock((FxInterrupt *)v2, v11);
  }
  else
  {
    v5 = *(_QWORD *)(v2 + 96);
    if ( *(_WORD *)(v5 + 10) )
      v6 = v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v6 = 0LL;
    if ( *(_WORD *)(v2 + 10) )
      v3 = v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v7 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v2 + 320))(v3, v6);
  }
  SyncContext[2] = v7;
  return 1;
}
