/*
 * XREFs of KeCopyPage @ 0x140186CC0
 * Callers:
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiMakeZeroedPageTableRange @ 0x140069E70 (MiMakeZeroedPageTableRange.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiCopyKstack @ 0x140134B58 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x140219888 (MiSlowRotateCopy.c)
 *     MiFillCombinePage @ 0x14022A650 (MiFillCombinePage.c)
 *     MiScrubPage @ 0x140232D48 (MiScrubPage.c)
 *     MiRevertRelocatedImagePfn @ 0x1404B1740 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MxCopyPage @ 0x1407C648C (MxCopyPage.c)
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
