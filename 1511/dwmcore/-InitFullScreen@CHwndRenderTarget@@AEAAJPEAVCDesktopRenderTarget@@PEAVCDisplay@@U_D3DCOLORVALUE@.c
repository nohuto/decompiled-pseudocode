/*
 * XREFs of ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18007C4E4
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18007575C (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180106CE0 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 * Callees:
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x18007E0E8 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::InitFullScreen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  __int128 v9; // xmm0

  v8 = 0LL;
  if ( a2 )
    v8 = a2 + 80;
  *(_QWORD *)(a1 + 104) = v8;
  *(_QWORD *)(a1 + 80) = a3;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
  v9 = *a4;
  *(_BYTE *)(a1 + 552) = a7;
  *(_BYTE *)(a1 + 564) = a8;
  *(_DWORD *)(a1 + 200) = a5;
  *(_DWORD *)(a1 + 220) = a5 & 0xFFFEFFFF;
  *(_BYTE *)(a1 + 553) = a6;
  *(_OWORD *)(a1 + 224) = v9;
  CHwndRenderTarget::EnsureWNFHandles((CHwndRenderTarget *)a1);
  return 0LL;
}
