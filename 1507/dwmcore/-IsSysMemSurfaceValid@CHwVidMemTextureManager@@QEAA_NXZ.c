/*
 * XREFs of ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x180143304
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x180143360 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801437F4 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
