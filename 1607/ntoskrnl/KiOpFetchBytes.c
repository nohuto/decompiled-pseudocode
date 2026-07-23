/*
 * XREFs of KiOpFetchBytes @ 0x14009A358
 * Callers:
 *     KiOpDecode @ 0x1400F28F0 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x1400F2AC0 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x1401DB0E4 (KiOpDecodeModRM.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall KiOpFetchBytes(__int64 a1, unsigned int a2, void *a3)
{
  memmove(a3, *(const void **)(a1 + 8), a2);
  *(_QWORD *)(a1 + 8) += a2;
  return 0LL;
}
