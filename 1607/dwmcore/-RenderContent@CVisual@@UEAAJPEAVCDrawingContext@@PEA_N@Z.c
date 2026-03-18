/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800513D0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180139050 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A440 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D5F0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x180054998 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180067B3C (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180124B50 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  int v7; // edi
  CRenderData *v8; // rcx
  float *v9; // r8
  void (__fastcall *v10)(CRenderData *, struct CDrawingContext *, float *, bool *, __int64 *); // rax
  int v12; // edx
  int *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  unsigned int i; // r15d
  int v24; // eax
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  int v29; // eax
  bool v30[16]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v31[64]; // [rsp+40h] [rbp-49h] BYREF
  int v32; // [rsp+80h] [rbp-9h]
  __int64 v33[2]; // [rsp+90h] [rbp+7h] BYREF
  float v34; // [rsp+A0h] [rbp+17h] BYREF
  float v35; // [rsp+A4h] [rbp+1Bh]
  float v36; // [rsp+A8h] [rbp+1Fh]
  float v37; // [rsp+ACh] [rbp+23h]

  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 352LL) != *((_QWORD *)this + 35) )
  {
    v6 = *((_QWORD *)this + 34);
    if ( (*(_DWORD *)(v6 + 4) & 0x20000) != 0 )
    {
      v12 = *(_DWORD *)(v6 + 12);
      v13 = (int *)(v6 + 12);
      if ( (v12 & 0x7F000000) != 0xF000000 )
      {
        do
        {
          v13 = (int *)((char *)v13 + (v12 & 0xFFFFFF) + 4);
          v12 = *v13;
        }
        while ( (*v13 & 0x7F000000) != 0xF000000 );
      }
      v33[0] = *(_QWORD *)(v13 + 1);
      v14 = v33[0];
      if ( v33[0] )
      {
        *(_DWORD *)(v33[0] + 64) = 0;
        *(_QWORD *)(v14 + 68) = 1LL;
      }
    }
    *((_BYTE *)this + 153) &= ~0x80u;
  }
  v7 = 0;
  if ( *((_BYTE *)a2 + 6532) )
  {
    if ( qword_1801EFD28 )
    {
      v17 = *((_DWORD *)qword_1801EFD28 + 18);
      v18 = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(*((_QWORD *)qword_1801EFD28 + 6) + 8LL * v18);
          if ( *(_BYTE *)(v19 + 304) || *(_BYTE *)(v19 + 303) || *(_BYTE *)(v19 + 220) || *(_DWORD *)(v19 + 216) )
            break;
          if ( ++v18 >= v17 )
            goto LABEL_5;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 34LL) )
        {
          v20 = *(_QWORD *)this;
          v21 = *((_QWORD *)a2 + 476);
          v32 = 0;
          v22 = (*(__int64 (__fastcall **)(CVisual *, __int64, float *))(v20 + 160))(this, v21, &v34);
          v7 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1E18u);
          }
          else
          {
            CBaseMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 536), (struct CMILMatrix *)v31);
            CMILMatrix::Transform2DBoundsHelper<0>(v31, &v34, v33);
            for ( i = 0; i < *((_DWORD *)a2 + 1604); ++i )
              CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 799) + 8LL * i), v33, a2);
          }
        }
      }
    }
  }
LABEL_5:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xCD9u);
  }
  else
  {
    v8 = (CRenderData *)*((_QWORD *)this + 38);
    if ( v8 )
    {
      v30[0] = 0;
      v9 = (float *)((char *)this + 192);
      *(_OWORD *)v33 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v10 = *(void (__fastcall **)(CRenderData *, struct CDrawingContext *, float *, bool *, __int64 *))(*(_QWORD *)v8 + 120LL);
      if ( (char *)v10 == (char *)CRenderData::Draw )
      {
        CRenderData::Draw(v8, a2, (__int64)v9);
      }
      else if ( (char *)v10 == (char *)CPrimitiveGroup::Draw )
      {
        CPrimitiveGroup::Draw(v8, (const struct _D3DCOLORVALUE *)a2, (__int64)v9, v30, (float *)v33);
      }
      else if ( (char *)v10 == (char *)CCompositionSurfaceBitmap::Draw )
      {
        CCompositionSurfaceBitmap::Draw(v8, (__int64)a2, v9);
      }
      else if ( (char *)v10 == (char *)CHwndBitmap::Draw )
      {
        CHwndBitmap::Draw((__int64)v8, (__int64)a2);
      }
      else
      {
        v10(v8, a2, v9, v30, v33);
      }
      if ( v30[0] )
      {
        if ( qword_1801EFD28 )
        {
          v15 = *((_DWORD *)qword_1801EFD28 + 18);
          if ( v15 )
          {
            while ( 1 )
            {
              v16 = *(_QWORD *)(*((_QWORD *)qword_1801EFD28 + 6) + 8 * v4);
              if ( *(_BYTE *)(v16 + 304) || *(_BYTE *)(v16 + 303) || *(_BYTE *)(v16 + 220) || *(_DWORD *)(v16 + 216) )
                break;
              v4 = (unsigned int)(v4 + 1);
              if ( (unsigned int)v4 >= v15 )
                return (unsigned int)v7;
            }
            v24 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 160LL))(
                    this,
                    *((_QWORD *)a2 + 476),
                    &v34);
            v7 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xCF0u);
            }
            else
            {
              v25 = *(float *)v33;
              if ( v34 > *(float *)v33 )
              {
                v25 = v34;
                *(float *)v33 = v34;
              }
              v26 = *((float *)v33 + 1);
              if ( v35 > *((float *)v33 + 1) )
              {
                v26 = v35;
                *((float *)v33 + 1) = v35;
              }
              v27 = *(float *)&v33[1];
              if ( *(float *)&v33[1] > v36 )
              {
                v27 = v36;
                *(float *)&v33[1] = v36;
              }
              v28 = *((float *)&v33[1] + 1);
              if ( *((float *)&v33[1] + 1) > v37 )
              {
                v28 = v37;
                *((float *)&v33[1] + 1) = v37;
              }
              if ( v27 <= v25 || v28 <= v26 )
              {
                v33[1] = 0LL;
                v33[0] = 0LL;
              }
              if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 224LL))(this) )
                CDrawingContext::RecordVisualMove(a2, this);
              v29 = CDrawingContext::VisualWasRendered(a2, v33, this);
              v7 = v29;
              if ( v29 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xD00u);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
