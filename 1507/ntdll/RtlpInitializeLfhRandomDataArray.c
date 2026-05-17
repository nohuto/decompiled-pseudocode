/*
 * XREFs of RtlpInitializeLfhRandomDataArray @ 0x180038310
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x1800040E8 (RtlpHpLfhContextInitialize.c)
 *     RtlpCreateLowFragHeap @ 0x180004D48 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180035950 (RtlpHeapGenerateRandomValue64.c)
 */

unsigned __int64 RtlpInitializeLfhRandomDataArray()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  unsigned __int64 result; // rax

  v0 = RtlpLowFragHeapRandomData;
  v1 = 32LL;
  do
  {
    result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
    *v0++ = result;
    --v1;
  }
  while ( v1 );
  return result;
}
