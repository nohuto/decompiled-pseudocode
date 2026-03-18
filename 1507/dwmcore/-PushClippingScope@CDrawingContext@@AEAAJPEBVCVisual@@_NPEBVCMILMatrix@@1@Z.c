/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x1800106A0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z @ 0x18000EABC (-EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180027EDC (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18005B05C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B08C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(
        CDrawingContext *this,
        const struct CVisual *a2,
        char a3,
        const struct CMILMatrix *a4,
        bool a5)
{
  char v9; // bp
  char v10; // si
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+30h] [rbp-28h] BYREF
  const struct CVisual *v17; // [rsp+38h] [rbp-20h]

  v9 = 0;
  v10 = 0;
  v11 = CDrawingContext::FlushDeferredD2DLayers(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x13E3u);
    goto LABEL_7;
  }
  if ( a5 )
  {
    v16 = 3;
    v17 = a2;
    v13 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 424, &v16);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x13E8u);
      goto LABEL_7;
    }
    v9 = 1;
  }
  v14 = CScopedClipStack::EnterClippingScope((CDrawingContext *)((char *)this + 680), a3, a4);
  v12 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x13ECu);
  else
    v10 = 1;
LABEL_7:
  if ( v12 < 0 )
  {
    if ( v10 )
      --*((_DWORD *)this + 176);
    if ( v9 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 424, 0LL);
  }
  return (unsigned int)v12;
}
