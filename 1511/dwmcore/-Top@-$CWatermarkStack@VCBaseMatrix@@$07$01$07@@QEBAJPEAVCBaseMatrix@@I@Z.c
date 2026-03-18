/*
 * XREFs of ?Top@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEBAJPEAVCBaseMatrix@@I@Z @ 0x18005DDC8
 * Callers:
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x18004E7C0 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?PushOffset@CBaseMatrixStack@@IEAAJMMM@Z @ 0x18013A690 (-PushOffset@CBaseMatrixStack@@IEAAJMMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CBaseMatrix,8,2,8>::Top(int *a1, _OWORD *a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = *a1;
  v3 = 0;
  if ( *a1 )
  {
    v5 = *((_QWORD *)a1 + 2);
    v6 = (unsigned __int64)(unsigned int)(v2 - 1) << 6;
    *a2 = *(_OWORD *)(v6 + v5);
    a2[1] = *(_OWORD *)(v6 + v5 + 16);
    a2[2] = *(_OWORD *)(v6 + v5 + 32);
    a2[3] = *(_OWORD *)(v6 + v5 + 48);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
