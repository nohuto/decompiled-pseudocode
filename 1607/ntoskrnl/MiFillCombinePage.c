/*
 * XREFs of MiFillCombinePage @ 0x1401F9994
 * Callers:
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiMapSinglePage @ 0x140107F04 (MiMapSinglePage.c)
 *     MiUnmapSinglePage @ 0x14010A354 (MiUnmapSinglePage.c)
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 */

ULONG_PTR __fastcall MiFillCombinePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int8 v8; // cl
  ULONG_PTR result; // rax
  unsigned __int64 v10; // rbx

  v6 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  v8 = *(_BYTE *)(a3 + 34);
  if ( ((v8 ^ *(_BYTE *)(a2 + 34)) & 0xC0) != 0 )
    MiChangePageAttribute(a2, v8 >> 6, 2);
  result = MiMapSinglePage(0LL, v7, 0x40000010uLL);
  v10 = result;
  if ( result )
  {
    KeCopyPage(result, a4);
    MiUnmapSinglePage(v10);
    return 1LL;
  }
  return result;
}
