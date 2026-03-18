/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1C0078AAC
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0008C08 (SetWindowCompositionFreezeSWR.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0078A00 (SetWindowCompositionNCRenderingExiled.c)
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
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
    v11 = dword_1C02E87B8[4 * v4];
    v14[4] = v9;
    LOWORD(v14[0]) = v11 + 24;
    v12 = dword_1C02E87B8[4 * v4];
    *(_QWORD *)&v14[5] = v10;
    HIDWORD(v14[3]) = v12;
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}
