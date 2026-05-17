/*
 * XREFs of RtlAddVectoredContinueHandler @ 0x180090C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall RtlAddVectoredContinueHandler(int a1, __int64 a2)
{
  return RtlpAddVectoredHandler(a1, a2, 1u);
}
