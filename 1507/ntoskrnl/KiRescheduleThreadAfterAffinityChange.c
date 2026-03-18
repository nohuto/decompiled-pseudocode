/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x140133514
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14013328C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x140205E64 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D3438 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  unsigned int v8; // ebx

  if ( a3 == 1 )
  {
    v8 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(a4, a5, a1, v8);
    KiPrepareReadyThreadForRescheduling(a1, v8, a6);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3
      && (*(unsigned __int8 *)(a4 + 1616) != *(_WORD *)(a2 + 8) || (*(_QWORD *)(a4 + 1608) & *(_QWORD *)a2) == 0LL) )
    {
      KiSelectNextThread(a4, a6);
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = *a6;
      *a6 = a1 + 216;
    }
    return 0LL;
  }
  if ( *(unsigned __int8 *)(a4 + 1616) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a4 + 1608) & *(_QWORD *)a2) != 0LL )
    return 0LL;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    *(_BYTE *)(a1 + 112) |= 8u;
    return 0LL;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
  if ( *(_QWORD *)(a4 + 16) )
    return 0LL;
  KiSelectNextThread(a4, a6);
  return 1LL;
}
