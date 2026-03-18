/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800365B0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1D0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1800DBF8C (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x1800F4768 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x180103A28 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // r14
  unsigned int v6; // edi
  CRenderData *v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, unsigned __int64); // r12
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int i; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  int v23; // eax
  _BYTE v24[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v25[2]; // [rsp+38h] [rbp-51h] BYREF
  float v26; // [rsp+48h] [rbp-41h] BYREF
  float v27; // [rsp+4Ch] [rbp-3Dh]
  float v28; // [rsp+50h] [rbp-39h]
  float v29; // [rsp+54h] [rbp-35h]
  _BYTE v30[64]; // [rsp+60h] [rbp-29h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 352LL) != *((_QWORD *)this + 29) )
  {
    *((_DWORD *)this + 76) = 0;
    *(_QWORD *)((char *)this + 308) = 1LL;
    *((_BYTE *)this + 90) &= ~2u;
  }
  v6 = 0;
  if ( *((_BYTE *)a2 + 5936) )
  {
    if ( qword_1801930E8 )
    {
      v12 = *((_DWORD *)qword_1801930E8 + 18);
      v13 = 0;
      if ( v12 )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(*((_QWORD *)qword_1801930E8 + 6) + 8LL * v13);
          if ( *(_BYTE *)(v14 + 149) || *(_BYTE *)(v14 + 148) || *(_BYTE *)(v14 + 288) || *(_DWORD *)(v14 + 284) )
            break;
          if ( ++v13 >= v12 )
            goto LABEL_4;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 32LL) )
        {
          v15 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 152LL))(
                  this,
                  *((_QWORD *)a2 + 414),
                  &v26);
          v6 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1DF9u);
          }
          else
          {
            CBaseMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 456), (struct CBaseMatrix *)v30);
            CBaseMatrix::Transform2DBounds((CBaseMatrix *)v30, (const struct MilRectF *)&v26, (struct MilRectF *)v25);
            for ( i = 0; i < *((_DWORD *)a2 + 1424); ++i )
              CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 709) + 8LL * i), v25, a2);
          }
        }
      }
    }
  }
LABEL_4:
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC29u);
    return v6;
  }
  v7 = (CRenderData *)*((_QWORD *)this + 47);
  if ( !v7 )
    return v6;
  v24[0] = 0;
  *(_OWORD *)v25 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v7 + 104LL);
  if ( (char *)v8 == (char *)CRenderData::Draw )
  {
    CRenderData::Draw(v7, a2);
  }
  else if ( (char *)v8 == (char *)CPrimitiveGroup::Draw )
  {
    CPrimitiveGroup::Draw(v7, a2, (__int64)v25);
  }
  else if ( v8 == CCompositionSurfaceBitmap::Draw )
  {
    CCompositionSurfaceBitmap::Draw((__int64)v7, (__int64)a2, (unsigned __int64)this + 148);
  }
  else
  {
    ((void (__fastcall *)(CRenderData *, struct CDrawingContext *, char *, _BYTE *, __int64 *))v8)(
      v7,
      a2,
      (char *)this + 148,
      v24,
      v25);
  }
  if ( !v24[0] )
    return v6;
  if ( !qword_1801930E8 )
    return v6;
  v10 = *((_DWORD *)qword_1801930E8 + 18);
  if ( !v10 )
    return v6;
  while ( 1 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)qword_1801930E8 + 6) + 8 * v4);
    if ( *(_BYTE *)(v11 + 149) || *(_BYTE *)(v11 + 148) || *(_BYTE *)(v11 + 288) || *(_DWORD *)(v11 + 284) )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v10 )
      return v6;
  }
  v17 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 152LL))(
          this,
          *((_QWORD *)a2 + 414),
          &v26);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v19 = *(float *)v25;
    if ( v26 > *(float *)v25 )
    {
      v19 = v26;
      *(float *)v25 = v26;
    }
    v20 = *((float *)v25 + 1);
    if ( v27 > *((float *)v25 + 1) )
    {
      v20 = v27;
      *((float *)v25 + 1) = v27;
    }
    v21 = *(float *)&v25[1];
    if ( *(float *)&v25[1] > v28 )
    {
      v21 = v28;
      *(float *)&v25[1] = v28;
    }
    v22 = *((float *)&v25[1] + 1);
    if ( *((float *)&v25[1] + 1) > v29 )
    {
      v22 = v29;
      *((float *)&v25[1] + 1) = v29;
    }
    if ( v21 <= v19 || v22 <= v20 )
    {
      v25[1] = 0LL;
      v25[0] = 0LL;
    }
    if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) )
      CDrawingContext::RecordVisualMove(a2, this);
    v23 = CDrawingContext::VisualWasRendered(a2, v25, this);
    v6 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC50u);
    return v6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC40u);
  return v18;
}
