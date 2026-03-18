/*
 * XREFs of ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18013C520
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x180138A00 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z @ 0x18013C254 (-IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z.c)
 */

__int64 __fastcall CEffectBrush::PrepareForDrawing(
        CEffectBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  CVisual *CurrentVisual; // rax
  char HasSubtreeSurface; // al
  unsigned int v8; // r14d
  int v9; // edi
  __int64 i; // rsi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx

  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 128));
  if ( a3->width > 0.0
    && a3->height > 0.0
    && (HasSubtreeSurface = CVisual::HasSubtreeSurface(CurrentVisual),
        CEffectBrush::IsReadyToDraw(this, HasSubtreeSurface))
    && (v8 = *((_DWORD *)this + 68), v9 = 0, v8) )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v11 = *(_QWORD *)(i + *((_QWORD *)this + 31));
      if ( v11 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v11 + 184LL))(
                v11,
                a2,
                a3);
        v13 = v12;
        if ( v12 < 0 )
          break;
      }
      if ( ++v9 >= v8 )
        return 0;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xCAu);
  }
  else
  {
    return 0;
  }
  return v13;
}
