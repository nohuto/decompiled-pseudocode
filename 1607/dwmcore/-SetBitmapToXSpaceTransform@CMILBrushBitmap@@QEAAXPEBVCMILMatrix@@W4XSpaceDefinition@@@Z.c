/*
 * XREFs of ?SetBitmapToXSpaceTransform@CMILBrushBitmap@@QEAAXPEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x1800845D8
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::SetBitmapToXSpaceTransform(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int128 v4; // xmm3
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax

  *(_DWORD *)(a1 + 124) = a3;
  v3 = *(_DWORD *)(a2 + 64);
  v4 = *(_OWORD *)(a2 + 16);
  v5 = *(_OWORD *)(a2 + 32);
  v6 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 144) = v4;
  *(_OWORD *)(a1 + 160) = v5;
  *(_OWORD *)(a1 + 176) = v6;
  *(_DWORD *)(a1 + 192) = v3;
  result = (unsigned int)(*(_DWORD *)(a1 + 120) + 1);
  if ( *(_DWORD *)(a1 + 120) == -1 )
    result = 1LL;
  *(_DWORD *)(a1 + 120) = result;
  return result;
}
