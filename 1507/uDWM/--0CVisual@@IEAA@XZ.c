/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x18001CC18
 * Callers:
 *     ?WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800089A8 (-WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180008EDC (-Create@CAccentBlurBehind@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180011930 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800124AC (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800128A4 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180014840 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ??0CText@@AEAA@XZ @ 0x180016B20 (--0CText@@AEAA@XZ.c)
 *     ??0CCanvas@@IEAA@XZ @ 0x180019940 (--0CCanvas@@IEAA@XZ.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001B84C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x180024E2C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180027FDC (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180039124 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x180045D94 (--0CLivePreview@@IEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180046BA4 (-Create@CDesktopWindowReplacement@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180047784 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800713A8 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800737EC (-Create@CProjectionBorderVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180077498 (-Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800775A4 (-Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18007C418 (-Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180098154 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x18009B5F8 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this)
{
  CVisual *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 21) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 20) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 22) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 30) = 0x7FFFFFFF;
  *((_DWORD *)this + 32) = 0x7FFFFFFF;
  *((_DWORD *)this + 31) = 0x7FFFFFFF;
  *((_DWORD *)this + 33) = 0x7FFFFFFF;
  result = this;
  *((_DWORD *)this + 46) = -2;
  *((_QWORD *)this + 5) = this;
  return result;
}
