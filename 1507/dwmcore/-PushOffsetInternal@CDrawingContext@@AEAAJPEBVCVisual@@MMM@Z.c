/*
 * XREFs of ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x1800F4178
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x180022580 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18005B05C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B08C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800E0700 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?PushOffset@CBaseMatrixStack@@IEAAJMMM@Z @ 0x18012549C (-PushOffset@CBaseMatrixStack@@IEAAJMMM@Z.c)
 */

__int64 __fastcall CDrawingContext::PushOffsetInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3,
        float a4,
        float a5)
{
  int *v5; // r14
  char v7; // si
  char v8; // bp
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  CBaseMatrix *TopByReference; // rax
  int v13; // eax
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  const struct CVisual *v17; // [rsp+88h] [rbp+10h] BYREF

  v17 = a2;
  *((_QWORD *)&v16 + 1) = 0LL;
  v5 = (int *)((char *)this + 424);
  LODWORD(v16) = 4;
  v7 = 0;
  v8 = 0;
  v9 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 106, &v16);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v7 = 1;
    v11 = CBaseMatrixStack::PushOffset((CDrawingContext *)((char *)this + 456), a3, a4, a5);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v8 = 1;
      TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
      LOBYTE(v17) = (unsigned int)CBaseMatrix::Is2DAffineOrNaN(TopByReference) == 0;
      v13 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 61, &v17);
      v10 = v13;
      if ( v13 >= 0 )
        *((_BYTE *)this + 5928) = 1;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x18CBu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x18C5u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x18BFu);
  }
  if ( v10 < 0 )
  {
    if ( v8 )
    {
      v14 = *((_DWORD *)this + 114);
      if ( v14 )
        *((_DWORD *)this + 114) = v14 - 1;
    }
    if ( v7 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v5, 0LL);
  }
  return (unsigned int)v10;
}
