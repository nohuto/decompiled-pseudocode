/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x140096864
 * Callers:
 *     ObpUnlockHandleDatabaseEntry @ 0x1404BAE80 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpInsertHandleCount @ 0x1404BB094 (ObpInsertHandleCount.c)
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
