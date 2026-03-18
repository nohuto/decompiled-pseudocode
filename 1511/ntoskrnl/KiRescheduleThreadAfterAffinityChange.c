/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x140095BA0
 * Callers:
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140106E54 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x1401C8A4C (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x14002A910 (KiPrcbInGroupAffinity.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140096928 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v10; // rcx
  unsigned int v11; // ebx

  if ( a3 == 1 )
  {
    v11 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(a4, a5, a1, v11);
    KiPrepareReadyThreadForRescheduling(a1, v11, a6);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 && !KiPrcbInGroupAffinity(a4, a2) )
    {
      KiSelectNextThread(v10, a6);
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = *a6;
      *a6 = a1 + 216;
    }
    return 0LL;
  }
  if ( KiPrcbInGroupAffinity(a4, a2) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    *(_BYTE *)(a1 + 112) |= 8u;
    return 0LL;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
  if ( *(_QWORD *)(v8 + 16) )
    return 0LL;
  KiSelectNextThread(v7, a6);
  return 1LL;
}
