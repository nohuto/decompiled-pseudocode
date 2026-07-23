/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x1400C8DDC
 * Callers:
 *     KiSetAffinityThread @ 0x1400C885C (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1401115F4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x1401D7938 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x1400915B8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A8EC8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiPrcbInGroupAffinity @ 0x1400CABB0 (KiPrcbInGroupAffinity.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v7; // rcx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx
  unsigned __int64 *v12; // r8
  unsigned int v13; // ebx

  if ( a3 == 1 )
  {
    v13 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(a4, a5, a1, v13);
    KiPrepareReadyThreadForRescheduling(a1, v13, a6);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 && !(unsigned int)KiPrcbInGroupAffinity(a4, a2) )
    {
      KiSelectNextThread(v11, a6, v12);
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = *a6;
      *a6 = a1 + 216;
    }
    return 0LL;
  }
  if ( (unsigned int)KiPrcbInGroupAffinity(a4, a2) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    *(_BYTE *)(a1 + 112) |= 8u;
    return 0LL;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
  if ( *(_QWORD *)(v9 + 16) )
    return 0LL;
  KiSelectNextThread(v7, a6, v8);
  return 1LL;
}
