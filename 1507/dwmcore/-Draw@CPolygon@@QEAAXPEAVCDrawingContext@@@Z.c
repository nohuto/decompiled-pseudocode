/*
 * XREFs of ?Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z @ 0x18011B6EC
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F2618 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPolygon::Draw(CPolygon *this, struct CDrawingContext *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 104LL))(
      v2,
      a2,
      *((_QWORD *)this + 26) + 148LL,
      0LL,
      0LL);
}
