/*
 * XREFs of ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800095BC
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180035E70 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::UpdateCpuClippingData(CVisual *a1, const struct CVisualTree *a2)
{
  struct CTreeData *TreeData; // rax
  char v3; // r9
  unsigned int v4; // r11d
  __int64 v5; // rdx
  __int64 v6; // r10
  int v7; // eax
  unsigned int v8; // ebx
  char v10; // [rsp+20h] [rbp-18h]

  TreeData = CVisual::FindTreeData(a1, a2);
  v10 = v3;
  v7 = CCpuClippingData::Update((char *)TreeData + 184, v5, v6, v4, v10);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x58Bu);
  return v8;
}
