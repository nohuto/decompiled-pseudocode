/*
 * XREFs of PspEmptyPropertySet @ 0x1403F1EBC
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1400DCEE0 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
