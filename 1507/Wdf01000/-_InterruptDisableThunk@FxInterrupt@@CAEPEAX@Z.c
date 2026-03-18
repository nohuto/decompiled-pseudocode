/*
 * XREFs of ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0007A80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00A1BC0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00A20C8 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptDisableThunk(_DWORD *SyncContext)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  int v6; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx

  v1 = *(_QWORD *)SyncContext;
  v2 = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)SyncContext + 258LL) )
  {
    FxInterrupt::AcquireLock((FxInterrupt *)v1);
    v8 = *(_QWORD *)(v1 + 96);
    if ( *(_WORD *)(v8 + 10) )
      v9 = v8 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v9 = 0LL;
    if ( *(_WORD *)(v1 + 10) )
      v2 = v1 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v6 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v1 + 320))(v2, v9);
    FxInterrupt::ReleaseLock((FxInterrupt *)v1);
  }
  else
  {
    v4 = *(_QWORD *)(v1 + 96);
    if ( *(_WORD *)(v4 + 10) )
      v5 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v5 = 0LL;
    if ( *(_WORD *)(v1 + 10) )
      v2 = v1 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v6 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v1 + 320))(v2, v5);
  }
  SyncContext[2] = v6;
  return 1;
}
