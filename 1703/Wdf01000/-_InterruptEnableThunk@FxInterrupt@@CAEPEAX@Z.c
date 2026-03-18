/*
 * XREFs of ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0017FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0004EDC (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0004F3C (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptEnableThunk(_DWORD *SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int16 v5; // ax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // esi
  unsigned __int8 result; // al
  __int64 v10; // rdx
  __int16 v11; // ax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx

  v2 = *(_QWORD *)SyncContext;
  if ( *(_BYTE *)(*(_QWORD *)SyncContext + 258LL) )
  {
    FxInterrupt::AcquireLock((FxInterrupt *)v2, a2);
    v10 = *(_QWORD *)(v2 + 96);
    v11 = *(_WORD *)(v10 + 10);
    v12 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v11 )
      v12 = 0LL;
    v13 = v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v2 + 10) )
      v13 = 0LL;
    v8 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v2 + 312))(v13, v12);
    FxInterrupt::ReleaseLock((FxInterrupt *)v2);
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 96);
    v5 = *(_WORD *)(v4 + 10);
    v6 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v5 )
      v6 = 0LL;
    v7 = v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v2 + 10) )
      v7 = 0LL;
    v8 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v2 + 312))(v7, v6);
  }
  result = 1;
  SyncContext[2] = v8;
  return result;
}
