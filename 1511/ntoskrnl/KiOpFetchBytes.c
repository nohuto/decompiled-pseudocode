/*
 * XREFs of KiOpFetchBytes @ 0x1400E7EE8
 * Callers:
 *     KiOpDecode @ 0x140023740 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x140023934 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x1401426EC (KiOpDecodeModRM.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall KiOpFetchBytes(__int64 a1, unsigned int a2, void *a3)
{
  memmove(a3, *(const void **)(a1 + 8), a2);
  *(_QWORD *)(a1 + 8) += a2;
  return 0LL;
}
