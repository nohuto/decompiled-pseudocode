/*
 * XREFs of PspEmptyPropertySet @ 0x14051A414
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1400AF0AC (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
