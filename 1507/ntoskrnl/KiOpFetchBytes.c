/*
 * XREFs of KiOpFetchBytes @ 0x14012314C
 * Callers:
 *     KiOpDecode @ 0x140117F50 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x140118144 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x140170514 (KiOpDecodeModRM.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall KiOpFetchBytes(__int64 a1, unsigned int a2, void *a3)
{
  memmove(a3, *(const void **)(a1 + 8), a2);
  *(_QWORD *)(a1 + 8) += a2;
  return 0LL;
}
