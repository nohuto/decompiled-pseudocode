/*
 * XREFs of ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009EB00
 * Callers:
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180049710 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DC4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EAE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x1800A0C74 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderData::GetBounds(CRenderData *this, struct IDrawingContext **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool (__fastcall *v8)(__int64, int); // rbx
  bool v9; // al
  int v10; // eax
  int v11; // eax
  struct IDrawingContext *v12; // rax

  v4 = 0;
  *(_DWORD *)(a4 + 12) = 0;
  *(_DWORD *)(a4 + 8) = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)a4 = 0;
  if ( this )
  {
    v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)this + 48LL);
    if ( v8 == CRenderData::IsOfType )
      v9 = CRenderData::IsOfType((__int64)this, 34);
    else
      v9 = v8((__int64)this, 34);
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
        v11 = CRenderData::Draw(this, a2[1]);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC9u);
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
  v12 = a2[2];
  if ( v12 )
    *(_OWORD *)((char *)v12 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return v4;
}
