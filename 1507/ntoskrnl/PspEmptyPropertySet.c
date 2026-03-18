/*
 * XREFs of PspEmptyPropertySet @ 0x140420D18
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x14010D630 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
