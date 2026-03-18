/*
 * XREFs of ?PushOffset@CBaseMatrixStack@@IEAAJMMM@Z @ 0x180163D54
 * Callers:
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180124730 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x180025674 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x1800256D0 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x180058E78 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18005B478 (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CBaseMatrixStack::PushOffset(CBaseMatrixStack *this, float a2, float a3, float a4)
{
  unsigned int *v4; // r11
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  float v8; // xmm4_4
  unsigned int *v9; // r11
  int v10; // eax
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  v13 = 0;
  if ( *(_DWORD *)this )
  {
    v7 = CWatermarkStack<CMILMatrix,8,2,8>::Top((__int64)this, (__int64)v12);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x6Eu);
    }
    else
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v12, v8, a3, a4);
      v10 = CWatermarkStack<CMILMatrix,8,2,8>::Push(v9, (__int64)v12);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x77u);
    }
  }
  else
  {
    CMILMatrix::SetTranslation((CMILMatrix *)v12, a2, a3, a4);
    v5 = CWatermarkStack<CMILMatrix,8,2,8>::Push(v4, (__int64)v12);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x66u);
  }
  return v6;
}
