/*
 * XREFs of ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18013FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::PrepareForDrawing(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx

  if ( a3->width > 0.0
    && a3->height > 0.0
    && (*(unsigned __int8 (__fastcall **)(CNineGridBrush *))(*(_QWORD *)this + 176LL))(this)
    && (v6 = *((_QWORD *)this + 16)) != 0
    && (v7 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v6 + 184LL))(
               v6,
               a2,
               a3),
        v8 = v7,
        v7 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1D1u);
  }
  else
  {
    return 0;
  }
  return v8;
}
