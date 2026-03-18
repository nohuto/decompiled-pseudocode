/*
 * XREFs of ?DrawPencil@CDrawingContext@@QEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@23M@Z @ 0x180122B64
 * Callers:
 *     ?Draw@CPencil@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D9D0 (-Draw@CPencil@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18006F230 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawPencil(
        CDrawingContext *this,
        struct ID2D1PencilStroke *a2,
        const struct D2D1_PENCIL_STYLE *a3,
        struct CCompositionSurfaceBitmap *a4,
        const struct tagRECT *a5,
        struct CCompositionSurfaceBitmap *a6,
        const struct tagRECT *a7,
        float a8)
{
  unsigned __int64 v8; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // ecx
  __int64 v16; // r9
  int v17; // ecx
  int v18; // r9d
  unsigned int v20; // [rsp+20h] [rbp-58h]

  v8 = (unsigned __int64)this + 128;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 128)) )
  {
    v14 = -2147467263;
    v20 = 2189;
    v18 = -2147467263;
    goto LABEL_13;
  }
  v13 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    v20 = 2173;
    goto LABEL_10;
  }
  v15 = *((_DWORD *)this + 83);
  v16 = 0LL;
  if ( v15 )
  {
    v17 = v15 - 1;
    if ( v17 )
    {
      if ( v17 == 3 )
        v16 = 2LL;
    }
    else
    {
      v16 = 1LL;
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, __int64, struct ID2D1PencilStroke *, const struct D2D1_PENCIL_STYLE *, struct CCompositionSurfaceBitmap *, const struct tagRECT *, struct CCompositionSurfaceBitmap *, const struct tagRECT *, _DWORD))(**((_QWORD **)this + 57) + 208LL))(
          *((_QWORD *)this + 57),
          v8 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          *((_DWORD *)this + 82) != 0,
          v16,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          LODWORD(a8));
  v14 = v13;
  if ( v13 < 0 )
  {
    v20 = 2185;
LABEL_10:
    v18 = v13;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v20);
  }
  return v14;
}
