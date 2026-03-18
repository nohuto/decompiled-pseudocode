/*
 * XREFs of ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x180154A68
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180122CAC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPolygon::GetRenderOptions(CPolygon *this, struct MilRenderOptions *a2)
{
  *(_DWORD *)a2 = 0;
  if ( *((_DWORD *)this + 58) != -1 )
  {
    *(_DWORD *)a2 = 2;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 58);
  }
  if ( *((_DWORD *)this + 59) != -1 )
  {
    *(_DWORD *)a2 |= 8u;
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 59);
  }
  if ( *((_DWORD *)this + 57) != 5 )
  {
    *(_DWORD *)a2 |= 0x10u;
    *((_DWORD *)a2 + 5) = *((_DWORD *)this + 57);
  }
}
