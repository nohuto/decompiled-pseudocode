/*
 * XREFs of KiSwitchPriQueue @ 0x14012EFC4
 * Callers:
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 * Callees:
 *     KiActivateWaiterQueueWithNoLocks @ 0x14000C528 (KiActivateWaiterQueueWithNoLocks.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiSwitchPriQueue(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // r14
  unsigned int v6; // esi
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 result; // rax
  _QWORD *v10; // rcx

  v3 = (_QWORD *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, (_QWORD *)(a1 + 520));
  v6 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*(_DWORD *)a2 & 0x80u) != 0 );
  }
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
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
