/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x180022088
 * Callers:
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x18000E19C (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x18001A410 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ??0CText@@AEAA@XZ @ 0x18001BA00 (--0CText@@AEAA@XZ.c)
 *     ??0CCanvas@@IEAA@XZ @ 0x18001F8A0 (--0CCanvas@@IEAA@XZ.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180020EA4 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x18002A97C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x1800362BC (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C630 (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003D184 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18003D968 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003EC0C (-WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003FA20 (-Create@CAccentBlurBehind@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x180043A7C (--0CLivePreview@@IEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180046B6C (-Create@CDesktopWindowReplacement@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180047684 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x180079588 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007B9BC (-Create@CProjectionBorderVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007F288 (-Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007F394 (-Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180083E48 (-Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180099814 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x18009CCC8 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
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
