/*
 * XREFs of KiReleaseSecondarySignalListLock @ 0x1401D5DD8
 * Callers:
 *     KiInsertSecondarySignalList @ 0x1401D5B4C (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x1401D5CD4 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 */

void __fastcall KiReleaseSecondarySignalListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&KiSecondarySignalListLock);
  __writecr8(v1);
}
