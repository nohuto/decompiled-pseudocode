/*
 * XREFs of ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18018CF90
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000BE6C (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x18000D248 (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisi.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z @ 0x1801122A4 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspChildVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  _DWORD *v2; // r10
  __int64 v3; // r11
  float v4; // xmm2_4
  int v5; // eax

  if ( (*((_BYTE *)a2 + 154) & 1) != 0 )
    CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 72);
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetOpacityInternal(a2) - 1.0)) & _xmm);
  if ( v4 >= 0.0000011920929 )
    CWatermarkStack<bool,64,2,10>::Pop(v2 + 64);
  if ( (*(_BYTE *)(v3 + 156) & 0x10) != 0 )
    CWatermarkStack<bool,64,2,10>::Pop(v2 + 56);
  if ( (*(_BYTE *)(v3 + 156) & 8) != 0 )
    CWatermarkStack<bool,64,2,10>::Pop(v2 + 48);
  if ( (*(_BYTE *)(v3 + 156) & 2) != 0 )
    CWatermarkStack<bool,64,2,10>::Pop(v2 + 40);
  if ( (*(_BYTE *)(v3 + 156) & 0x40) != 0 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop(v2 + 32);
  v5 = v2[24];
  if ( v5 )
    v2[24] = v5 - 1;
}
