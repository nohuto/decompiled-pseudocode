/*
 * XREFs of ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C00711A0
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     CitDisplayRequestChange @ 0x1C0071068 (CitDisplayRequestChange.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 * Callees:
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C000FE34 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 */

void __fastcall CitpBitmapUpdateForTimeRange(struct _CIT_BITMAP *a1, int a2, int a3)
{
  if ( byte_1C011E5BD )
    CitpBitmapUpdateForTimeRange(a1, a2, a3, dword_1C011E5E0, dword_1C011E590);
}
