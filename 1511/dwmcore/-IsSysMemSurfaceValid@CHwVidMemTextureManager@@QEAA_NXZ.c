/*
 * XREFs of ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x180151674
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801516D0 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801519D0 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CHwVidMemTextureManager::IsSysMemSurfaceValid(CHwVidMemTextureManager *this)
{
  __int64 v1; // rsi
  char v2; // di

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 24LL))(*((_QWORD *)this + 1)) != 0;
  return v2;
}
