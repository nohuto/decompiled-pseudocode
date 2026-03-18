/*
 * XREFs of GetSMSLookaside @ 0x1C0132E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall GetSMSLookaside(_QWORD *a1)
{
  void **result; // rax

  result = &SMSLookaside;
  *a1 = &SMSLookaside;
  return result;
}
