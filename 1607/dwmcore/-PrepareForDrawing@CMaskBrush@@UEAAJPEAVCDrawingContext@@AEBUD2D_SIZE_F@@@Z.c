/*
 * XREFs of ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18013EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::PrepareForDrawing(
        CMaskBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax

  if ( a3->width <= 0.0
    || a3->height <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(CMaskBrush *))(*(_QWORD *)this + 176LL))(this) )
  {
    return 0;
  }
  v6 = *((_QWORD *)this + 16);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v6 + 184LL))(
           v6,
           a2,
           a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x8Cu);
      return v8;
    }
  }
  v9 = *((_QWORD *)this + 17);
  if ( v9
    && (v10 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 184LL))(
                v9,
                a2,
                a3),
        v8 = v10,
        v10 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x91u);
  }
  else
  {
    return 0;
  }
  return v8;
}
