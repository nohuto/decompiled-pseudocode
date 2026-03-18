/*
 * XREFs of ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@@Z @ 0x180034E5C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEAVCVisual@@PEBV1@W4Enum@CpuClippingMode@@@Z @ 0x180059B30 (-Update@CCpuClippingData@@QEAAJPEAVCVisual@@PEBV1@W4Enum@CpuClippingMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::UpdateCpuClippingData(CVisual *a1, const struct CVisualTree *a2)
{
  const struct CVisualTree *v2; // rdx
  __int64 v3; // r10
  struct CTreeData *TreeData; // r11
  char *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx

  TreeData = CVisual::FindTreeData(a1, a2);
  v5 = 0LL;
  if ( *((_QWORD *)v2 + 3) != v3 )
    v5 = (char *)CVisual::FindTreeData(*(CVisual **)(v3 + 80), v2) + 184;
  v6 = CCpuClippingData::Update((char *)TreeData + 184, v3, v5);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x5B9u);
  return v7;
}
