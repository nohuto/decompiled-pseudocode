/*
 * XREFs of KeCheckForZeroPage @ 0x1401573D0
 * Callers:
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 *     MiSlistGetFreePage @ 0x140012D54 (MiSlistGetFreePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 *     MiConvertPrivateToDemandZero @ 0x14012B468 (MiConvertPrivateToDemandZero.c)
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
