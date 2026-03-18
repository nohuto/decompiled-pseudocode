/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C007251C
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C000C5B8 (SetWindowCompositionFreezeSWR.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0078810 (NtUserGetWindowCompositionAttribute.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00937D8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     DecVisWindows @ 0x1C009EA10 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C00A20E4 (IncVisWindows.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C00A6FAC (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C00A71DC (SetWindowExtendedBoundsMargin.c)
 *     GetWindowExtendedMargin @ 0x1C00ACD48 (GetWindowExtendedMargin.c)
 *     IsWindowShellCloaked @ 0x1C00DC56C (IsWindowShellCloaked.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0124F18 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C01286F8 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C012BA18 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C012D774 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C012DB8C (SetWindowCompositionForceActiveWindowAppearance.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C02154E0 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C02247CC (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C022487C (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C022492C (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C02249B8 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0224A68 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0224B18 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0224BC8 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00725BC (IsTopLevelOrLayeredChildWindow.c)
 *     _FindProp @ 0x1C007B010 (_FindProp.c)
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
    if ( *(_QWORD *)(a1 + 168)
      && (Prop = (__int64 *)FindProp(a1, (unsigned __int16)atomDWMProp, 1LL)) != 0LL
      && (v7 = *Prop) != 0 )
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
