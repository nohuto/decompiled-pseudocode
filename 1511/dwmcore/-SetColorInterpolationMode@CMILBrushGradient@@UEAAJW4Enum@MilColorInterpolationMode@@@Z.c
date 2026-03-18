/*
 * XREFs of ?SetColorInterpolationMode@CMILBrushGradient@@UEAAJW4Enum@MilColorInterpolationMode@@@Z @ 0x180014C80
 * Callers:
 *     ?SetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilColorInterpolationMode@@@Z @ 0x1800BCFF0 (-SetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilColorInterpolationMode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushGradient::SetColorInterpolationMode(__int64 a1, int a2)
{
  int v2; // eax

  *(_DWORD *)(a1 + 108) = a2;
  v2 = ++*(_DWORD *)(a1 + 8);
  if ( !v2 )
    v2 = 1;
  *(_DWORD *)(a1 + 8) = v2;
  return 0LL;
}
