/*
 * XREFs of ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N33@Z @ 0x1800B8AF4
 * Callers:
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800744A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::ResetRenderTarget(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 result; // rax

  *(_QWORD *)(a1 + 176) = a2;
  CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(a1 + 112));
  v9 = *(_QWORD *)(a1 + 152);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v10 = *a3;
  *(_BYTE *)(a1 + 744) = a6;
  *(_BYTE *)(a1 + 757) = a7;
  *(_DWORD *)(a1 + 344) = a4;
  *(_DWORD *)(a1 + 364) = a4 & 0xFFFEFFFF;
  *(_BYTE *)(a1 + 746) = a5;
  result = 0LL;
  *(_OWORD *)(a1 + 368) = v10;
  return result;
}
