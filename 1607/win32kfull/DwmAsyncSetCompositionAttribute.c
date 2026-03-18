/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1C00A7058
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C000C5B8 (SetWindowCompositionFreezeSWR.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C00A6FAC (SetWindowCompositionNCRenderingExiled.c)
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
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncSetCompositionAttribute(PVOID Object, __int64 a2, int a3, __int128 *a4)
{
  __int64 v4; // rsi
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  _OWORD v14[6]; // [rsp+20h] [rbp-49h] BYREF

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    memset((char *)v14 + 2, 0, 0x56uLL);
    v9 = *a4;
    v10 = *((_QWORD *)a4 + 2);
    *(_DWORD *)((char *)v14 + 2) = -2147483560;
    *((_QWORD *)&v14[2] + 1) = 1073741866LL;
    *(_QWORD *)&v14[3] = a2;
    DWORD2(v14[3]) = v4;
    v11 = dword_1C02EDB68[4 * v4];
    v14[4] = v9;
    LOWORD(v14[0]) = v11 + 24;
    v12 = dword_1C02EDB68[4 * v4];
    *(_QWORD *)&v14[5] = v10;
    HIDWORD(v14[3]) = v12;
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}
