/*
 * XREFs of ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x1800102B0
 * Callers:
 *     ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000F850 (-IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?GetTextureFormat@CD2DBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x18009FB00 (-GetTextureFormat@CD2DBitmap@@UEBA-AW4DXGI_FORMAT@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetTextureFormat(CDxHandleBitmapRealization *this)
{
  CDxHandleBitmapRealization *v2; // rcx
  unsigned int v3; // ebx
  __int64 (*v4)(void); // rax
  int v5; // eax
  CD2DBitmap *v6; // rcx
  __int64 (*v7)(void); // rax

  v2 = (CDxHandleBitmapRealization *)((char *)this - 112);
  v3 = 0;
  v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 112LL);
  if ( (char *)v4 == (char *)CDxHandleBitmapRealization::EnsureD2DBitmap )
    v5 = CDxHandleBitmapRealization::EnsureD2DBitmap(v2);
  else
    v5 = v4();
  if ( v5 >= 0 )
  {
    v6 = (CD2DBitmap *)(*((_QWORD *)this + 38) + 112LL);
    v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 32LL);
    if ( (char *)v7 == (char *)CD2DBitmap::GetTextureFormat )
      return (unsigned int)CD2DBitmap::GetTextureFormat(v6);
    else
      return (unsigned int)v7();
  }
  return v3;
}
