/*
 * XREFs of KeCopyPage @ 0x140157550
 * Callers:
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiCopyKstack @ 0x1400D8638 (MiCopyKstack.c)
 *     MiFillCombinePage @ 0x14012B61C (MiFillCombinePage.c)
 *     MiSlowRotateCopy @ 0x1401D6D90 (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x1401E5FC4 (MiScrubPage.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x1404DB678 (MiRevertRelocatedImagePfn.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 *     MxCopyPage @ 0x140747934 (MxCopyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm3

  v2 = a1 + 4096;
  v3 = a2 + 4096;
  v4 = -4096LL;
  do
  {
    _mm_prefetch((const char *)(v4 + v3), 0);
    _mm_prefetch((const char *)(v4 + v3 + 64), 0);
    _mm_prefetch((const char *)(v4 + v3 + 128), 0);
    _mm_prefetch((const char *)(v4 + v3 + 192), 0);
    v4 += 256LL;
  }
  while ( v4 );
  result = -4096LL;
  do
  {
    v6 = *(__m128i *)(result + v3 + 16);
    v7 = *(__m128i *)(result + v3 + 32);
    v8 = *(__m128i *)(result + v3 + 48);
    _mm_stream_si128((__m128i *)(result + v2), *(__m128i *)(result + v3));
    _mm_stream_si128((__m128i *)(result + v2 + 16), v6);
    _mm_stream_si128((__m128i *)(result + v2 + 32), v7);
    _mm_stream_si128((__m128i *)(result + v2 + 48), v8);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
