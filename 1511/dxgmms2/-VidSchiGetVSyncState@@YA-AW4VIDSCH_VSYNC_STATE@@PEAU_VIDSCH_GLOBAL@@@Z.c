/*
 * XREFs of ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0022DB4
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C008C470 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetVSyncState(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 1904) )
    return 0x10000LL;
  else
    return *(_BYTE *)(a1 + 1928) != 0 ? 3 : 0;
}
