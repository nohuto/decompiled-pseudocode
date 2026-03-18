/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C0055F24
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0008C08 (SetWindowCompositionFreezeSWR.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0050DA0 (NtUserGetWindowCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0078A00 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C0078F8C (SetWindowExtendedBoundsMargin.c)
 *     DecVisWindows @ 0x1C007A068 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C007A2F4 (IncVisWindows.c)
 *     IsWindowShellCloaked @ 0x1C008B18C (IsWindowShellCloaked.c)
 *     GetWindowExtendedMargin @ 0x1C00916E4 (GetWindowExtendedMargin.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0103784 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C01071D0 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0107980 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C010B884 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010C214 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C021C320 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0223C74 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0223D24 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0223DD4 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C0223E60 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0223F10 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0223FC0 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0224070 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     _FindProp @ 0x1C0054934 (_FindProp.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0055FC4 (IsTopLevelOrLayeredChildWindow.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r8d
  __int64 *Prop; // rax
  __int64 v7; // rax

  v4 = 0;
  if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) )
  {
    v5 = 1;
    if ( *(_QWORD *)(a1 + 168) && (Prop = (__int64 *)FindProp(a1, atomDWMProp, 1)) != 0LL && (v7 = *Prop) != 0 )
    {
      *(_OWORD *)a2 = *(_OWORD *)v7;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v7 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(v7 + 32);
    }
    else
    {
      *(_DWORD *)a2 &= 0xFFFFE000;
      *(_DWORD *)(a2 + 4) = 0;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_OWORD *)(a2 + 8) = 0uLL;
    }
    return v5;
  }
  return v4;
}
