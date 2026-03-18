/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C007E090
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C004EF40 (GreUpdateSpriteVisRgn.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C008D268 (_GhostWindowFromHungWindow.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00CF020 (UserDetachQueueFromInputWindowApiExt.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00D1D3C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D58E0 (NtUserSetBrokeredForeground.c)
 *     _HungWindowFromGhostWindow @ 0x1C00F41C4 (_HungWindowFromGhostWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C010C060 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 *     xxxRegisterGhostWindow @ 0x1C0142840 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C0145438 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0149650 (UserRemoveWindowedSwapChain.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F71BC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F72A4 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01F7414 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01F7460 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F7580 (xxxRegisterSiblingFrostWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0218BB0 (NtUserDisableImmersiveOwner.c)
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
