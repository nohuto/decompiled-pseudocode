/*
 * XREFs of ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0075FB4
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0008C08 (SetWindowCompositionFreezeSWR.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0078A00 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C0078F8C (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0103784 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C01071D0 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0107980 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C010B884 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010C214 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0223C74 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0223D24 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0223DD4 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C0223E60 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0223F10 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0223FC0 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0224070 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
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
    v8 = Win32AllocPool(40LL);
    v9 = v8;
    if ( v8 )
    {
      v10 = (unsigned __int16)atomDWMProp;
      *(_OWORD *)v8 = *(_OWORD *)a2;
      *(_OWORD *)(v8 + 16) = *((_OWORD *)a2 + 1);
      *(_QWORD *)(v8 + 32) = *((_QWORD *)a2 + 4);
      v3 = InternalSetProp(a1, v10, v8, 1LL);
      if ( !v3 )
        Win32FreePool(v9);
    }
  }
  return v3;
}
