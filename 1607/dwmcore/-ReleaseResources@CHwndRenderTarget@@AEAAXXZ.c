/*
 * XREFs of ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x180073ED4
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x180074380 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800744A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800B8CA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x180037AC0 (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800B828C (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::ReleaseResources(CHwndRenderTarget *this)
{
  __int64 v2; // rdi
  char *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  *((_BYTE *)this + 747) = 1;
  v3 = (char *)this + 432;
  *((_DWORD *)v3 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3, 16LL);
  v4 = *((_QWORD *)this + 23);
  *((_BYTE *)this + 752) = 0;
  *((_BYTE *)this + 754) = 0;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_BYTE *)this + 745) = 0;
  CRenderTarget::ReleaseDrawingContext(this);
  v5 = *((_QWORD *)this + 92);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)this + 92) = 0LL;
  }
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 20) = 0LL;
  }
  v7 = *((_QWORD *)this + 21);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 21) = 0LL;
  }
  CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v2 + 96));
  CLegacySurfaceManager::ExpireCaptureBitsResponse((CLegacySurfaceManager *)(v2 + 96), 1);
}
