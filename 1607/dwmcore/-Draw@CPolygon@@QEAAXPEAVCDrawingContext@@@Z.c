/*
 * XREFs of ?Draw@CPolygon@@QEAAXPEAVCDrawingContext@@@Z @ 0x180154A24
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180122CAC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPolygon::Draw(CPolygon *this, struct CDrawingContext *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    (*(void (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 120LL))(
      v3,
      a2,
      *((_QWORD *)this + 27) + 192LL,
      0LL,
      0LL);
}
