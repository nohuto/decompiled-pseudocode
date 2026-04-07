/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x180099F48
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800752C4 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::AddSolidBrushInstruction(
        CThumbnailAnimatedVisual *this,
        struct CResource *a2,
        int a3,
        float a4)
{
  __int64 v4; // rax
  int v8; // eax
  CResource *v9; // rsi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  CBaseObject *v14; // rdi
  int v15; // eax
  struct CRenderDataInstruction *v17; // [rsp+38h] [rbp-39h] BYREF
  CResource *v18; // [rsp+40h] [rbp-31h] BYREF
  int v19; // [rsp+48h] [rbp-29h] BYREF
  int v20; // [rsp+4Ch] [rbp-25h] BYREF
  double v21; // [rsp+50h] [rbp-21h]
  float v22; // [rsp+58h] [rbp-19h]
  float v23; // [rsp+5Ch] [rbp-15h]
  float v24; // [rsp+60h] [rbp-11h]
  float v25; // [rsp+64h] [rbp-Dh]
  int v26; // [rsp+6Ch] [rbp-5h]
  int v27; // [rsp+70h] [rbp-1h]

  v4 = *((_QWORD *)this + 2);
  v17 = 0LL;
  v8 = CResource::Create(0x43u, *(_QWORD *)(v4 + 16), &v18);
  v9 = v18;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v19 = 248;
    memset_0(&v20, 0, 0x28uLL);
    v11 = *((_DWORD *)v9 + 6);
    v26 = 0;
    v27 = 0;
    v21 = DOUBLE_1_0;
    v20 = v11;
    v25 = a4;
    v22 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
    v23 = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
    v24 = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
    v12 = CResource::Send(v9, &v19, 0x2Cu);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v13 = CDrawGeometryInstruction::Create(v9, a2, &v17);
      v14 = v17;
      v10 = v13;
      if ( v13 >= 0 )
      {
        v15 = CVisual::AddInstruction(this, v17);
        v10 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xFAu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xF9u);
      }
      if ( v14 )
        CBaseObject::Release(v14);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xF8u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xECu);
  }
  if ( v9 )
    CBaseObject::Release(v9);
  return v10;
}
