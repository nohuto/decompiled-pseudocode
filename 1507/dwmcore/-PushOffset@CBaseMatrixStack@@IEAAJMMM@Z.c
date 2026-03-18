/*
 * XREFs of ?PushOffset@CBaseMatrixStack@@IEAAJMMM@Z @ 0x18012549C
 * Callers:
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x1800F4178 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEBAJPEAVCBaseMatrix@@I@Z @ 0x180019EAC (-Top@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEBAJPEAVCBaseMatrix@@I@Z.c)
 *     ?Push@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z @ 0x180019EFC (-Push@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CBaseMatrixStack::PushOffset(CBaseMatrixStack *this, float a2, float a3, float a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  const void **v7; // r10
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm2_4
  int v13; // eax
  __int128 v15; // [rsp+38h] [rbp-29h] BYREF
  float v16; // [rsp+48h] [rbp-19h]
  float v17; // [rsp+4Ch] [rbp-15h]
  float v18; // [rsp+50h] [rbp-11h]
  float v19; // [rsp+54h] [rbp-Dh]
  float v20; // [rsp+58h] [rbp-9h]
  float v21; // [rsp+5Ch] [rbp-5h]
  float v22; // [rsp+60h] [rbp-1h]
  float v23; // [rsp+64h] [rbp+3h]
  float v24; // [rsp+68h] [rbp+7h]
  float v25; // [rsp+6Ch] [rbp+Bh]
  float v26; // [rsp+70h] [rbp+Fh]
  float v27; // [rsp+74h] [rbp+13h]

  if ( *(_DWORD *)this )
  {
    v6 = CWatermarkStack<CBaseMatrix,8,2,8>::Top((int *)this, &v15);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v9 = v24 + (float)((float)(a3 * v16) + (float)(a2 * *(float *)&v15));
      v10 = v25 + (float)((float)(a3 * v17) + (float)(a2 * *((float *)&v15 + 1)));
      v24 = v9;
      v25 = v10;
      v11 = v27 + (float)((float)(v8 * v19) + (float)(a2 * *((float *)&v15 + 3)));
      v12 = v26 + (float)((float)(v8 * v18) + (float)(a2 * *((float *)&v15 + 2)));
      v27 = v11;
      v26 = v12;
      if ( a4 != 0.0 )
      {
        v24 = v9 + (float)(a4 * v20);
        v25 = v10 + (float)(a4 * v21);
        v26 = v12 + (float)(a4 * v22);
        v27 = v11 + (float)(a4 * v23);
      }
      v13 = CWatermarkStack<CBaseMatrix,8,2,8>::Push(v7, &v15);
      v5 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x83u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x6Fu);
    }
  }
  else
  {
    v23 = 0.0;
    v21 = 0.0;
    v20 = 0.0;
    v19 = 0.0;
    v18 = 0.0;
    v16 = 0.0;
    v24 = a2;
    v25 = a3;
    v26 = a4;
    v27 = 1.0;
    v22 = 1.0;
    v17 = 1.0;
    v15 = 0x3F800000uLL;
    v4 = CWatermarkStack<CBaseMatrix,8,2,8>::Push((const void **)this, &v15);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x67u);
  }
  return v5;
}
