/*
 * XREFs of ?Draw@CDropShadowContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801600F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC (-DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@.c)
 *     ?UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014FE1C (-UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDropShadowContent::Draw(_QWORD *a1, __int64 a2, const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  struct CVisual *CurrentVisual; // rax
  CDropShadow *v8; // rcx
  int updated; // eax
  int v10; // eax

  v3 = 0;
  if ( a3->width != 0.0 && a3->height != 0.0 && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 176LL))(a1) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 128));
    v8 = (CDropShadow *)a1[15];
    if ( CurrentVisual == *((struct CVisual **)v8 + 26) )
    {
      updated = CDropShadow::UpdateCVI(v8, (struct CDrawingContext *)a2, a3);
      v3 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xC2u);
    }
    else
    {
      v10 = CDropShadow::DrawCommonRenderingEffect(v8, (struct CDrawingContext *)a2, a3, CurrentVisual);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC6u);
    }
  }
  return v3;
}
