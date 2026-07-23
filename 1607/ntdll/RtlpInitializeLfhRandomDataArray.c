/*
 * XREFs of RtlpInitializeLfhRandomDataArray @ 0x18003F30C
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x180029C24 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x18007F704 (RtlpHpLfhContextInitialize.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180041760 (RtlpHeapGenerateRandomValue64.c)
 */

__int64 RtlpInitializeLfhRandomDataArray()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

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
