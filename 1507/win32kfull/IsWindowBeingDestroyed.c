/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C0056CC4
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateCaret @ 0x1C0077AD0 (xxxCreateCaret.c)
 *     _HungWindowFromGhostWindow @ 0x1C0085B70 (_HungWindowFromGhostWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C00873C0 (_GhostWindowFromHungWindow.c)
 *     NtUserSetWindowFNID @ 0x1C00F00B0 (NtUserSetWindowFNID.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00FF7D0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMNMouseMove @ 0x1C010BB60 (xxxMNMouseMove.c)
 *     xxxRegisterGhostWindow @ 0x1C01178D0 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C011AAE8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0120060 (UserRemoveWindowedSwapChain.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0149EF4 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C01549C0 (NtUserSetBrokeredForeground.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C01F6B40 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F6D00 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F6DE8 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01F6F58 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01F6FA4 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F70C0 (xxxRegisterSiblingFrostWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0218D30 (NtUserDisableImmersiveOwner.c)
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
    if ( (*(_DWORD *)(v2 + 448) & 1) != 0 )
      return 1;
  }
  return v1;
}
