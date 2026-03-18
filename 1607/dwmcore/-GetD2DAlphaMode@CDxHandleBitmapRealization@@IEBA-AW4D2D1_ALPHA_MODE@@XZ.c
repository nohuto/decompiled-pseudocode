/*
 * XREFs of ?GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180054A48
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

enum DXGI_ALPHA_MODE __fastcall CDxHandleBitmapRealization::GetD2DAlphaMode(CDxHandleBitmapRealization *this)
{
  CBitmapRealization *v1; // rcx
  unsigned int (*v2)(void); // rax

  v1 = (CDxHandleBitmapRealization *)((char *)this + 112);
  v2 = *(unsigned int (**)(void))(*(_QWORD *)v1 + 48LL);
  if ( (char *)v2 == (char *)CBitmapRealization::GetAlphaMode )
    return CBitmapRealization::GetAlphaMode(v1);
  else
    return v2();
}
