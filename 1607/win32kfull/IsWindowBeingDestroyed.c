/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C0065CC0
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0097780 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0099CB0 (UserDetachQueueFromInputWindowApiExt.c)
 *     _GhostWindowFromHungWindow @ 0x1C00A72F8 (_GhostWindowFromHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00D55A4 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00ED700 (NtUserSetBrokeredForeground.c)
 *     _HungWindowFromGhostWindow @ 0x1C01154F8 (_HungWindowFromGhostWindow.c)
 *     NtUserSetWindowFNID @ 0x1C01188A0 (NtUserSetWindowFNID.c)
 *     xxxCreateCaret @ 0x1C0122D94 (xxxCreateCaret.c)
 *     xxxMNMouseMove @ 0x1C0142A74 (xxxMNMouseMove.c)
 *     xxxRegisterGhostWindow @ 0x1C0148380 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C014B548 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C014E400 (UserRemoveWindowedSwapChain.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE34C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE434 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01EE5E8 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01EE634 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01EE750 (xxxRegisterSiblingFrostWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0211870 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowBeingDestroyed(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax

  v1 = 0;
  if ( *(char *)(a1 + 43) < 0 )
    return 1;
  if ( *(char *)(a1 + 44) < 0 )
    return 1;
  if ( *(__int16 *)(a1 + 66) < 0 )
    return 1;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 440) & 1) != 0 )
      return 1;
  }
  return v1;
}
