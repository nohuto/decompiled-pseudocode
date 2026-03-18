/*
 * XREFs of ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0027324
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00A1E20 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetVSyncState(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 1936) )
    return 0x10000LL;
  else
    return *(_BYTE *)(a1 + 1960) != 0 ? 3 : 0;
}
