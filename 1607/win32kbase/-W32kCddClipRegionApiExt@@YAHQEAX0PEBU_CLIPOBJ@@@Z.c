/*
 * XREFs of ?W32kCddClipRegionApiExt@@YAHQEAX0PEBU_CLIPOBJ@@@Z @ 0x1C00C3AC0
 * Callers:
 *     <none>
 * Callees:
 *     IsW32kCddClipRegionSupported_0 @ 0x1C00015E8 (IsW32kCddClipRegionSupported_0.c)
 *     W32kCddClipRegion_0 @ 0x1C00015F0 (W32kCddClipRegion_0.c)
 */

__int64 __fastcall W32kCddClipRegionApiExt(void *const a1, void *const a2, const struct _CLIPOBJ *a3)
{
  int v3; // eax
  unsigned int v4; // r9d

  v3 = IsW32kCddClipRegionSupported_0();
  v4 = 0;
  if ( v3 >= 0 )
    return (unsigned int)W32kCddClipRegion_0();
  return v4;
}
