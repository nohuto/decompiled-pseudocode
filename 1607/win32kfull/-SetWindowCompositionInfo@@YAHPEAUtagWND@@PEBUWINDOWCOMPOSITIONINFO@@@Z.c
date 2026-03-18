/*
 * XREFs of ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00A7124
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C000C5B8 (SetWindowCompositionFreezeSWR.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C00A6FAC (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C00A71DC (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0124F18 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C01286F8 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C012BA18 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C012D774 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C012DB8C (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C02247CC (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C022487C (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C022492C (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C02249B8 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0224A68 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0224B18 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0224BC8 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 */

__int64 __fastcall SetWindowCompositionInfo(struct tagWND *a1, const struct WINDOWCOMPOSITIONINFO *a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rax
  unsigned int v6; // r8d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8

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
      v3 = InternalSetProp(a1, v10, v8, 1LL);
      if ( !v3 )
        Win32FreePool(v9, v11, v12);
    }
  }
  return v3;
}
