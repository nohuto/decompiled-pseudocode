/*
 * XREFs of KiSwitchQueue @ 0x1401229BC
 * Callers:
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KiSwapToUmsThreadContinue @ 0x14020BC24 (KiSwapToUmsThreadContinue.c)
 * Callees:
 *     KiActivateWaiterQueueWithNoLocks @ 0x14000C528 (KiActivateWaiterQueueWithNoLocks.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiSwitchQueue(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // rsi
  __int64 result; // rax
  _QWORD *v8; // rcx

  v3 = 0;
  v4 = (_QWORD *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, (_QWORD *)(a1 + 520));
  *(_QWORD *)(a1 + 232) = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 40));
  while ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( (*(_DWORD *)a2 & 0x80u) != 0 );
  }
  result = a2 + 48;
  v8 = *(_QWORD **)(a2 + 56);
  *v4 = a2 + 48;
  v4[1] = v8;
  if ( *v8 != a2 + 48 )
    __fastfail(3u);
  *v8 = v4;
  *(_QWORD *)(a2 + 56) = v4;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
