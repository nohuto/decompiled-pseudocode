/*
 * XREFs of ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18000C688
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180055530 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 */

__int64 __fastcall CVisual::UpdateCpuClippingData(CVisual *a1, const struct CVisualTree *a2, unsigned int a3, char a4)
{
  struct CTreeData *TreeData; // rax
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // [rsp+20h] [rbp-18h]

  TreeData = CVisual::FindTreeData(a1, a2);
  v12 = a4;
  v9 = CCpuClippingData::Update((char *)TreeData + 136, a2, a1, a3, v12);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5FDu);
  return v10;
}
