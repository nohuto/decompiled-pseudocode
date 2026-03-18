/*
 * XREFs of ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x180074380
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800769A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x18011D1A8 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x180073ED4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x180075708 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::InitFullScreen(
        CHwndRenderTarget *this,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD),
        __int128 *a4,
        int a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v11; // rcx
  __int128 v12; // xmm0

  *((_QWORD *)this + 22) = a2;
  CHwndRenderTarget::ReleaseResources(this);
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *((_QWORD *)this + 19) = a3;
  if ( a3 )
    (**a3)(a3);
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 1241LL)
    && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 144LL))(this) )
  {
    *(_OWORD *)(*((_QWORD *)this + 19) + 104LL) = *((_OWORD *)this + 24);
    *(_OWORD *)(*((_QWORD *)this + 19) + 88LL) = *((_OWORD *)this + 25);
    *(_DWORD *)(*((_QWORD *)this + 19) + 292LL) = *((_DWORD *)this + 104);
  }
  v12 = *a4;
  *((_BYTE *)this + 744) = a7;
  *((_BYTE *)this + 757) = a8;
  *((_DWORD *)this + 86) = a5;
  *((_DWORD *)this + 91) = a5 & 0xFFFEFFFF;
  *((_BYTE *)this + 746) = a6;
  *((_OWORD *)this + 23) = v12;
  CHwndRenderTarget::EnsureWNFHandles(this);
  return 0LL;
}
