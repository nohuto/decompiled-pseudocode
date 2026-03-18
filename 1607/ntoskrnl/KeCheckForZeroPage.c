/*
 * XREFs of KeCheckForZeroPage @ 0x140161DA0
 * Callers:
 *     MiCreateSharedZeroPages @ 0x1400390B0 (MiCreateSharedZeroPages.c)
 *     MiGetFreeOrZeroPage @ 0x14003DC80 (MiGetFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x140061478 (MiSlistGetFreePage.c)
 *     MiRemoveAnyPage @ 0x140064740 (MiRemoveAnyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiConvertPrivateToDemandZero @ 0x1401F883C (MiConvertPrivateToDemandZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckForZeroPage(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = a1 + 512;
  result = 0LL;
  do
  {
    result |= a1[15] | a1[14] | a1[13] | a1[12] | a1[11] | a1[10] | a1[9] | a1[8] | a1[7] | a1[6] | a1[5] | a1[4] | a1[3] | a1[2] | a1[1] | *a1;
    a1 += 16;
  }
  while ( a1 < v1 );
  return result;
}
