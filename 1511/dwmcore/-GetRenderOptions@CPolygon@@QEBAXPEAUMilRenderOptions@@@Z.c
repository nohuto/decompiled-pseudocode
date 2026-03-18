/*
 * XREFs of ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x180132300
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPolygon::GetRenderOptions(CPolygon *this, struct MilRenderOptions *a2)
{
  *(_DWORD *)a2 = 0;
  if ( *((_DWORD *)this + 56) != -1 )
  {
    *(_DWORD *)a2 = 2;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 56);
  }
  if ( *((_DWORD *)this + 57) != -1 )
  {
    *(_DWORD *)a2 |= 8u;
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 57);
  }
  if ( *((_DWORD *)this + 55) != 5 )
  {
    *(_DWORD *)a2 |= 0x10u;
    *((_DWORD *)a2 + 5) = *((_DWORD *)this + 55);
  }
}
