/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180048FE0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F450 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18003C6AC (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18004D87C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091920 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18010E44C (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // r14
  int v6; // edi
  CRenderData *v7; // rbx
  __int64 (__fastcall *v8)(); // r12
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // r9
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  unsigned int i; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  int v24; // eax
  _BYTE v25[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v26[2]; // [rsp+38h] [rbp-51h] BYREF
  float v27; // [rsp+48h] [rbp-41h] BYREF
  float v28; // [rsp+4Ch] [rbp-3Dh]
  float v29; // [rsp+50h] [rbp-39h]
  float v30; // [rsp+54h] [rbp-35h]
  _BYTE v31[64]; // [rsp+60h] [rbp-29h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 352LL) != *((_QWORD *)this + 27) )
  {
    *((_DWORD *)this + 72) = 0;
    *(_QWORD *)((char *)this + 292) = 1LL;
    *((_BYTE *)this + 73) &= ~0x80u;
  }
  v6 = 0;
  if ( *((_BYTE *)a2 + 5968) )
  {
    if ( qword_1801A39E8 )
    {
      v12 = 0;
      if ( *((_DWORD *)qword_1801A39E8 + 18) )
      {
        v13 = *((_QWORD *)qword_1801A39E8 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v13 + 8LL * v12)) )
        {
          v12 = v14 + 1;
          if ( v12 >= v15 )
            goto LABEL_4;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 33LL) )
        {
          v16 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 152LL))(
                  this,
                  *((_QWORD *)a2 + 418),
                  &v27);
          v6 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1DC1u);
          }
          else
          {
            CBaseMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 456), (struct CBaseMatrix *)v31);
            CBaseMatrix::Transform2DBounds((CBaseMatrix *)v31, (const struct MilRectF *)&v27, (struct MilRectF *)v26);
            for ( i = 0; i < *((_DWORD *)a2 + 1432); ++i )
              CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 713) + 8LL * i), v26, a2);
          }
        }
      }
    }
  }
LABEL_4:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB8Fu);
  }
  else
  {
    v7 = (CRenderData *)*((_QWORD *)this + 45);
    if ( v7 )
    {
      v25[0] = 0;
      *(_OWORD *)v26 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v8 = *(__int64 (__fastcall **)())(*(_QWORD *)v7 + 112LL);
      if ( v8 == CRenderData::Draw )
      {
        CRenderData::Draw(v7, a2);
      }
      else if ( (char *)v8 == (char *)CPrimitiveGroup::Draw )
      {
        CPrimitiveGroup::Draw(v7, a2, (__int64)v26);
      }
      else if ( (char *)v8 == (char *)CCompositionSurfaceBitmap::Draw )
      {
        CCompositionSurfaceBitmap::Draw(v7, (__int64)a2, (__int64)this + 132);
      }
      else if ( (char *)v8 == (char *)CHwndBitmap::Draw )
      {
        CHwndBitmap::Draw((__int64)v7, a2);
      }
      else
      {
        ((void (__fastcall *)(CRenderData *, struct CDrawingContext *, char *, _BYTE *, __int64 *))v8)(
          v7,
          a2,
          (char *)this + 132,
          v25,
          v26);
      }
      if ( v25[0] )
      {
        if ( qword_1801A39E8 )
        {
          v10 = *((_DWORD *)qword_1801A39E8 + 18);
          if ( v10 )
          {
            while ( 1 )
            {
              v11 = *(_QWORD *)(*((_QWORD *)qword_1801A39E8 + 6) + 8 * v4);
              if ( *(_BYTE *)(v11 + 304) || *(_BYTE *)(v11 + 303) || *(_BYTE *)(v11 + 220) || *(_DWORD *)(v11 + 216) )
                break;
              v4 = (unsigned int)(v4 + 1);
              if ( (unsigned int)v4 >= v10 )
                return (unsigned int)v6;
            }
            v18 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 152LL))(
                    this,
                    *((_QWORD *)a2 + 418),
                    &v27);
            v19 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xBA6u);
              return v19;
            }
            v20 = *(float *)v26;
            if ( v27 > *(float *)v26 )
            {
              v20 = v27;
              *(float *)v26 = v27;
            }
            v21 = *((float *)v26 + 1);
            if ( v28 > *((float *)v26 + 1) )
            {
              v21 = v28;
              *((float *)v26 + 1) = v28;
            }
            v22 = *(float *)&v26[1];
            if ( *(float *)&v26[1] > v29 )
            {
              v22 = v29;
              *(float *)&v26[1] = v29;
            }
            v23 = *((float *)&v26[1] + 1);
            if ( *((float *)&v26[1] + 1) > v30 )
            {
              v23 = v30;
              *((float *)&v26[1] + 1) = v30;
            }
            if ( v22 <= v20 || v23 <= v21 )
            {
              v26[1] = 0LL;
              v26[0] = 0LL;
            }
            if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) )
              CDrawingContext::RecordVisualMove(a2, this);
            v24 = CDrawingContext::VisualWasRendered((__int64)a2, (__int128 *)v26, (__int64)this);
            v6 = v24;
            if ( v24 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xBB6u);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
