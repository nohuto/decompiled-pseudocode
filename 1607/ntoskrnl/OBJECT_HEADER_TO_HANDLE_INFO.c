/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x140096064
 * Callers:
 *     ObpUnlockHandleDatabaseEntry @ 0x1404A6BB0 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpInsertHandleCount @ 0x1404A6DC4 (ObpInsertHandleCount.c)
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
