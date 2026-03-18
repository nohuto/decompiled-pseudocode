/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C00633C4
 * Callers:
 *     IsWindowShellCloaked @ 0x1C0043140 (IsWindowShellCloaked.c)
 *     GetWindowExtendedMargin @ 0x1C0044788 (GetWindowExtendedMargin.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0064940 (NtUserGetWindowCompositionAttribute.c)
 *     DecVisWindows @ 0x1C0081EF0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0082188 (IncVisWindows.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C00828E0 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C0082B10 (SetWindowExtendedBoundsMargin.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00FA308 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C00FCCD0 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C00FD534 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C00FEB68 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C00FEC88 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C00FF2A4 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C021C540 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0223C2C (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0223CDC (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0223D8C (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C0223E18 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0223EC8 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0223F78 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0224028 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0063AFC (IsTopLevelOrLayeredChildWindow.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 Prop; // rax
  unsigned int v6; // r8d

  v4 = 0;
  if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) )
  {
    Prop = GetProp(a1, (unsigned __int16)atomDWMProp, 1LL);
    if ( Prop )
    {
      *(_OWORD *)a2 = *(_OWORD *)Prop;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(Prop + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(Prop + 32);
    }
    else
    {
      *(_DWORD *)a2 &= 0xFFFFE000;
      *(_DWORD *)(a2 + 4) = 0;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_OWORD *)(a2 + 8) = 0uLL;
    }
    return v6;
  }
  return v4;
}
