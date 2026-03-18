/*
 * XREFs of KiReleaseSecondarySignalListLock @ 0x1401C6E3C
 * Callers:
 *     KiInsertSecondarySignalList @ 0x1401C6BB0 (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x1401C6D38 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

void __fastcall KiReleaseSecondarySignalListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&KiSecondarySignalListLock);
  __writecr8(v1);
}
