/*
 * XREFs of ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005CA10
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000FE00 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180139270 (-AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801396E0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CLinearGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18013EF70 (-AddOcclusionInformation@CLinearGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801432F0 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawOcclusionRectangle(__int64 a1, float *a2, char a3)
{
  int v3; // ebx
  __int64 v6; // r10
  int v7; // eax
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  int v16; // eax
  unsigned int v17; // r9d
  float v18; // xmm1_4
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  float *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v27; // eax
  _BYTE v28[64]; // [rsp+30h] [rbp-49h] BYREF
  int v29; // [rsp+70h] [rbp-9h]
  __int128 v30; // [rsp+80h] [rbp+7h]
  __int128 v31; // [rsp+90h] [rbp+17h] BYREF
  int v32; // [rsp+A0h] [rbp+27h]
  float v33; // [rsp+A8h] [rbp+2Fh] BYREF
  float v34; // [rsp+ACh] [rbp+33h]
  float v35; // [rsp+B0h] [rbp+37h]
  float v36; // [rsp+B4h] [rbp+3Bh]

  v3 = 0;
  if ( *(_DWORD *)(a1 + 884) || a2[2] <= *a2 || a2[3] <= a2[1] )
    return (unsigned int)v3;
  v32 = 0;
  v29 = 0;
  CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 8), (struct CMILMatrix *)v28);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v28, v6, &v33);
  if ( *(_DWORD *)(a1 + 56) )
  {
    v7 = *(_DWORD *)(a1 + 56);
    if ( v7 )
      v30 = *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * (unsigned int)(v7 - 1));
    v8 = *(float *)&v30;
    v9 = *((float *)&v30 + 1);
    v10 = *((float *)&v30 + 2);
    v11 = *((float *)&v30 + 3);
  }
  else
  {
    v8 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v9 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v10 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v11 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  }
  v12 = v33;
  if ( v8 > v33 )
    v12 = v8;
  v13 = v34;
  if ( v9 > v34 )
    v13 = v9;
  v14 = v35;
  if ( v35 > v10 )
    v14 = v10;
  v15 = v36;
  if ( v36 > v11 )
    v15 = v11;
  if ( v14 <= v12 || v15 <= v13 )
  {
    v12 = 0.0;
    v15 = 0.0;
    v14 = 0.0;
    v13 = 0.0;
  }
  *(_QWORD *)&v31 = __PAIR64__(LODWORD(v13), LODWORD(v12));
  *((_QWORD *)&v31 + 1) = __PAIR64__(LODWORD(v15), LODWORD(v14));
  if ( !a3 )
  {
    v16 = *(_DWORD *)(a1 + 920);
    v17 = -1;
    v18 = (float)(v15 - v13) * (float)(v14 - v12);
    if ( v16 )
      v17 = *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4LL * (unsigned int)(v16 - 1));
    v19 = *(_DWORD *)(a1 + 488);
    v20 = 0;
    if ( !v19 )
      goto LABEL_28;
    v21 = (float *)(a1 + 620);
    while ( ((v17 >> v20) & 1) == 0 || v18 <= (float)(*v21 * 0.25) )
    {
      ++v20;
      ++v21;
      if ( v20 >= v19 )
        goto LABEL_28;
    }
  }
  v22 = *(unsigned int *)(a1 + 272);
  v23 = v22 + 1;
  if ( (int)v22 + 1 < (unsigned int)v22 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_38:
    if ( v3 >= 0 )
      return (unsigned int)v3;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x73Du);
    goto LABEL_28;
  }
  if ( v23 > *(_DWORD *)(a1 + 268) )
  {
    v27 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 248, 20LL, 1LL, &v31);
    v3 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
    goto LABEL_38;
  }
  v24 = *(_QWORD *)(a1 + 248);
  v25 = 5 * v22;
  *(_OWORD *)(v24 + 4 * v25) = v31;
  *(_DWORD *)(v24 + 4 * v25 + 16) = v32;
  *(_DWORD *)(a1 + 272) = v23;
LABEL_28:
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4EAu);
  return (unsigned int)v3;
}
