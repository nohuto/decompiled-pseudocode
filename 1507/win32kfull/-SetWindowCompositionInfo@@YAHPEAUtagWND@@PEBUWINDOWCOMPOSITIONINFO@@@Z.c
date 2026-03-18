/*
 * XREFs of ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082A58
 * Callers:
 *     SetWindowCompositionNCRenderingExiled @ 0x1C00828E0 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C0082B10 (SetWindowExtendedBoundsMargin.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00FA308 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C00FCCD0 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C00FD534 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C00FEB68 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C00FEC88 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C00FF2A4 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0223C2C (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0223CDC (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0223D8C (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C0223E18 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0223EC8 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0223F78 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0224028 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 */

__int64 __fastcall SetWindowCompositionInfo(struct tagWND *a1, const struct WINDOWCOMPOSITIONINFO *a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rax
  unsigned int v6; // r8d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx

  v3 = 0;
  Prop = GetProp((__int64)a1, (unsigned __int16)atomDWMProp, 1LL);
  if ( Prop )
  {
    v3 = v6;
    *(_OWORD *)Prop = *(_OWORD *)a2;
    *(_OWORD *)(Prop + 16) = *((_OWORD *)a2 + 1);
    *(_QWORD *)(Prop + 32) = *((_QWORD *)a2 + 4);
  }
  else
  {
    v8 = Win32AllocPool(40LL, 1684239189LL);
    v9 = v8;
    if ( v8 )
    {
      v10 = (unsigned __int16)atomDWMProp;
      *(_OWORD *)v8 = *(_OWORD *)a2;
      *(_OWORD *)(v8 + 16) = *((_OWORD *)a2 + 1);
      *(_QWORD *)(v8 + 32) = *((_QWORD *)a2 + 4);
      v3 = InternalSetProp((__int64)a1, v10, v8, 1);
      if ( !v3 )
        Win32FreePool(v9);
    }
  }
  return v3;
}
