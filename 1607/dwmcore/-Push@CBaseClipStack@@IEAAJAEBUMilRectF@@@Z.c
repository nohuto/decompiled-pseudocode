/*
 * XREFs of ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800211D8
 * Callers:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18006DE9C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Top@CBaseClipStack@@IEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A37D8 (-Top@CBaseClipStack@@IEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A3854 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CBaseClipStack::Push(CBaseClipStack *this, const struct MilRectF *a2)
{
  float *v2; // r10
  __int64 v3; // r11
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  int v9; // eax
  unsigned int v10; // ebx
  float v12; // [rsp+30h] [rbp-20h] BYREF
  float v13; // [rsp+34h] [rbp-1Ch]
  float v14; // [rsp+38h] [rbp-18h]
  float v15; // [rsp+3Ch] [rbp-14h]

  CBaseClipStack::Top(this, &v12);
  v4 = v12;
  v5 = v2[1];
  if ( *v2 > v12 )
  {
    v4 = *v2;
    v12 = *v2;
  }
  v6 = v13;
  if ( v5 > v13 )
  {
    v6 = v5;
    v13 = v5;
  }
  v7 = v14;
  if ( v14 > v2[2] )
  {
    v7 = v2[2];
    v14 = v7;
  }
  v8 = v15;
  if ( v15 > v2[3] )
  {
    v8 = v2[3];
    v15 = v8;
  }
  if ( v7 <= v4 || v8 <= v6 )
  {
    v15 = 0.0;
    v14 = 0.0;
    v13 = 0.0;
    v12 = 0.0;
  }
  v9 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(v3 + 8, &v12);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x40u);
  return v10;
}
