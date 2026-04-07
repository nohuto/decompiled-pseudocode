/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x18001F310
 * Callers:
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18000A4E4 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180014FBC (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180015D54 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x1800176A8 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017790 (-Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CText@@AEAA@XZ @ 0x180017EEC (--0CText@@AEAA@XZ.c)
 *     ??0CCanvas@@IEAA@XZ @ 0x18001C6A0 (--0CCanvas@@IEAA@XZ.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001DC94 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x1800278E0 (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18002A9CC (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039FF0 (-Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18004144C (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x180044E6C (--0CLivePreview@@IEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180047E10 (-Create@CDesktopWindowReplacement@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180048870 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x18007A6C0 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007C744 (-Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007FBB8 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007FCAC (-Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180084564 (-Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800965C4 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800998C0 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
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
  result = this;
  *((_DWORD *)this + 46) = -2;
  *((_QWORD *)this + 5) = this;
  *((_DWORD *)this + 30) = 0x7FFFFFFF;
  *((_DWORD *)this + 32) = 0x7FFFFFFF;
  *((_DWORD *)this + 31) = 0x7FFFFFFF;
  *((_DWORD *)this + 33) = 0x7FFFFFFF;
  return result;
}
