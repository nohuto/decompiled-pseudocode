/*
 * XREFs of RtlSparseBitmapCtxInitialize @ 0x180100590
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void *__fastcall RtlSparseBitmapCtxInitialize(_QWORD *a1)
{
  void *result; // rax

  result = memset(a1, 0, 0x50uLL);
  *a1 = 0LL;
  return result;
}
