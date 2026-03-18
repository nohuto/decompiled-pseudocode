/*
 * XREFs of ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004E930
 * Callers:
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051A10 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x18004AF38 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B824 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E820 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::GetBounds(CRenderData *this, struct IDrawingContext **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool (__fastcall *v8)(__int64, int); // rax
  bool v9; // al
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  struct IDrawingContext *v13; // rax

  v4 = 0;
  *(_DWORD *)(a4 + 12) = 0;
  *(_DWORD *)(a4 + 8) = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)a4 = 0;
  if ( this )
  {
    v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)this + 48LL);
    if ( v8 == CRenderData::IsOfType )
      v9 = CRenderData::IsOfType((__int64)this, 35);
    else
      v9 = v8((__int64)this, 35);
    if ( v9 )
    {
      v10 = CContentBounder::EnsureDrawingContextFrame((CContentBounder *)a2);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC6u);
      }
      else
      {
        v12 = CRenderData::Draw(this, a2[1], v11);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC9u);
        }
        else
        {
          v4 = 0;
          *(_OWORD *)a4 = *(_OWORD *)((char *)a2[2] + 52);
          if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered((float *)a4) )
            *(_OWORD *)a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        CDrawingContext::EndFrame(a2[1]);
      }
    }
    else
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD1u);
    }
  }
  v13 = a2[2];
  if ( v13 )
    *(_OWORD *)((char *)v13 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return v4;
}
