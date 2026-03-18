/*
 * XREFs of ?SetBitmapToXSpaceTransform@CMILBrushBitmap@@QEAAXPEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x1800896A8
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005CEA0 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::SetBitmapToXSpaceTransform(__int64 a1, _OWORD *a2, int a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int64 result; // rax

  *(_DWORD *)(a1 + 124) = a3;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  *(_OWORD *)(a1 + 128) = *a2;
  *(_OWORD *)(a1 + 144) = v3;
  *(_OWORD *)(a1 + 160) = v4;
  *(_OWORD *)(a1 + 176) = v5;
  result = (unsigned int)(*(_DWORD *)(a1 + 120) + 1);
  if ( *(_DWORD *)(a1 + 120) == -1 )
    result = 1LL;
  *(_DWORD *)(a1 + 120) = result;
  return result;
}
