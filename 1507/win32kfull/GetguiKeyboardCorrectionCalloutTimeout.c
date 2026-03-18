/*
 * XREFs of GetguiKeyboardCorrectionCalloutTimeout @ 0x1C0157530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int *__fastcall GetguiKeyboardCorrectionCalloutTimeout(_QWORD *a1)
{
  unsigned int *result; // rax

  result = &guiKeyboardCorrectionCalloutTimeout;
  *a1 = &guiKeyboardCorrectionCalloutTimeout;
  return result;
}
