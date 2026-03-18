/*
 * XREFs of MiFillCombinePage @ 0x14022A650
 * Callers:
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 * Callees:
 *     MiMapSinglePage @ 0x140003778 (MiMapSinglePage.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 */

__int64 __fastcall MiFillCombinePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int8 v8; // cl
  __int64 result; // rax
  unsigned __int64 v10; // rbx

  v6 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  v8 = *(_BYTE *)(a3 + 34);
  if ( ((v8 ^ *(_BYTE *)(a2 + 34)) & 0xC0) != 0 )
    MiChangePageAttribute(a2, v8 >> 6, 2LL, a4);
  result = MiMapSinglePage(0LL, v7, 1073741840);
  v10 = result;
  if ( result )
  {
    KeCopyPage(result, a4);
    MiReleasePtes((__int64)&qword_14034FC70, (_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
    return 1LL;
  }
  return result;
}
