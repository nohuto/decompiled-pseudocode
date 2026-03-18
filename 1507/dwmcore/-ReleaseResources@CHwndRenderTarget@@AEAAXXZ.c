/*
 * XREFs of ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980
 * Callers:
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18004967C (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18004ABD8 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18004B0F0 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18004B220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18004D4A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800DC4A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x1800EBA30 (-ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x180058508 (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800625C0 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x18006278C (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseResources(CHwndRenderTarget *this)
{
  __int64 v2; // rbp
  char *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  *((_BYTE *)this + 561) = 1;
  v3 = (char *)this + 248;
  *((_DWORD *)v3 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3, 0x10u);
  v4 = *((_QWORD *)this + 14);
  *((_BYTE *)this + 566) = 0;
  *((_BYTE *)this + 568) = 0;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  CRenderTarget::ReleaseDrawingContext(this);
  v5 = *((_QWORD *)this + 69);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 69));
    *((_QWORD *)this + 69) = 0LL;
  }
  (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 256LL))(this);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v2 + 96));
  if ( *(_QWORD *)(v2 + 376) )
  {
    if ( ++*(_DWORD *)(v2 + 384) > 8u )
      ++*(_DWORD *)(v2 + 392);
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v2 + 96));
  }
}
