/*
 * XREFs of PspEmptyPropertySet @ 0x1404A2008
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1400B116C (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
