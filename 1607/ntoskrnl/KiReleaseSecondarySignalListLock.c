/*
 * XREFs of KiReleaseSecondarySignalListLock @ 0x1401D5FAC
 * Callers:
 *     KiInsertSecondarySignalList @ 0x1401D5D20 (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x1401D5EA8 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 */

void __fastcall KiReleaseSecondarySignalListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&KiSecondarySignalListLock);
  __writecr8(v1);
}
