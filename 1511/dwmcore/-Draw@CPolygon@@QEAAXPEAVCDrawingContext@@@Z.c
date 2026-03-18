/*
 * XREFs of ?Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z @ 0x180132290
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CPolygon::Draw(CPolygon *this, struct CDrawingContext *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 112LL))(
      v2,
      a2,
      *((_QWORD *)this + 26) + 132LL,
      0LL,
      0LL);
}
