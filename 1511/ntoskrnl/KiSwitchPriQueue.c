/*
 * XREFs of KiSwitchPriQueue @ 0x1400F1A30
 * Callers:
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140094210 (KiActivateWaiterQueueWithNoLocks.c)
 */

__int64 __fastcall KiSwitchPriQueue(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  _QWORD *v10; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, (_QWORD *)(a1 + 520));
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2, a2, a3);
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11, v6, v7);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_QWORD *)(a1 + 232) = a2;
  v8 = *(char *)(a1 + 563);
  *(_DWORD *)(a1 + 540) = v8;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v8 + 536));
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a2 + 672;
  v10 = *(_QWORD **)(a2 + 680);
  *v3 = a2 + 672;
  v3[1] = v10;
  if ( *v10 != a2 + 672 )
    __fastfail(3u);
  *v10 = v3;
  *(_QWORD *)(a2 + 680) = v3;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
