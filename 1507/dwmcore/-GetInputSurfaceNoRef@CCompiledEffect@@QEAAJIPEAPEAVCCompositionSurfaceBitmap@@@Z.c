/*
 * XREFs of ?GetInputSurfaceNoRef@CCompiledEffect@@QEAAJIPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801129BC
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1800FF6A0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindInput@CCompiledEffect@@AEAAPEAVInternalFilterInput@@I@Z @ 0x180112620 (-FindInput@CCompiledEffect@@AEAAPEAVInternalFilterInput@@I@Z.c)
 */

__int64 __fastcall CCompiledEffect::GetInputSurfaceNoRef(
        CCompiledEffect *this,
        int a2,
        struct CCompositionSurfaceBitmap **a3)
{
  struct InternalFilterInput *Input; // rax
  _QWORD *v4; // r11
  unsigned int v5; // ebx

  Input = CCompiledEffect::FindInput(this, a2);
  v5 = 0;
  if ( Input )
  {
    *v4 = *((_QWORD *)Input + 6);
  }
  else
  {
    v5 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x1B6u);
  }
  return v5;
}
