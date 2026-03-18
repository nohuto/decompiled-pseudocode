/*
 * XREFs of ?MilCompositingModeToBlendMode@@YA?AW4Enum@BlendMode@@W41MilCompositingMode@@@Z @ 0x18013511C
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801373F0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MilCompositingModeToBlendMode(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 5LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 21LL;
    if ( v2 == 2 )
      return 22LL;
  }
  return 0LL;
}
