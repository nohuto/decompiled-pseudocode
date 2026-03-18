/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x1400D79B4
 * Callers:
 *     ObpUnlockHandleDatabaseEntry @ 0x14049CE60 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpInsertHandleCount @ 0x14049D074 (ObpInsertHandleCount.c)
 *     ObpReleaseHandleInfo @ 0x14062E160 (ObpReleaseHandleInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  else
    return 0LL;
}
