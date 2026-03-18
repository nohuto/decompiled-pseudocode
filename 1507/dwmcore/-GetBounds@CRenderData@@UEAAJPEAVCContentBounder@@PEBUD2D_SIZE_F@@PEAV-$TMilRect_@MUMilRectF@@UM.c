/*
 * XREFs of ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004F2B0
 * Callers:
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800369A0 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E074 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004F290 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180050584 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRenderData::GetBounds(CRenderData *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool (__fastcall *v8)(__int64, int); // rbx
  bool v9; // al
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax

  v4 = 0;
  *(_DWORD *)(a4 + 12) = 0;
  *(_DWORD *)(a4 + 8) = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)a4 = 0;
  if ( this )
  {
    v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)this + 48LL);
    if ( v8 == CRenderData::IsOfType )
      v9 = CRenderData::IsOfType((__int64)this, 33);
    else
      v9 = v8((__int64)this, 33);
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
        v11 = CRenderData::Draw(this, *(struct _LIST_ENTRY **)(a2 + 8));
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC9u);
        }
        else
        {
          v4 = 0;
          *(_OWORD *)a4 = *(_OWORD *)(*(_QWORD *)(a2 + 16) + 52LL);
          if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered((float *)a4) )
            *(_OWORD *)a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        CDrawingContext::EndFrame(*(CDrawingContext **)(a2 + 8));
      }
    }
    else
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD1u);
    }
  }
  v12 = *(_QWORD *)(a2 + 16);
  if ( v12 )
    *(_OWORD *)(v12 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return v4;
}
