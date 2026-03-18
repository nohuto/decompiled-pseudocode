/*
 * XREFs of KeCheckForZeroPage @ 0x140186B40
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveAnyPage @ 0x140100180 (MiRemoveAnyPage.c)
 *     MiConvertPrivateToDemandZero @ 0x140228598 (MiConvertPrivateToDemandZero.c)
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
