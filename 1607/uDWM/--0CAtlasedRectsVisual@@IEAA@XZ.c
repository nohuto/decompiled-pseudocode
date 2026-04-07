/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001DC94
 * Callers:
 *     ??0CButton@@IEAA@XZ @ 0x18001C4B4 (--0CButton@@IEAA@XZ.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180038330 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x1800836CC (-Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CAtlasedRectsVisual::`vftable';
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_DWORD *)(v1 + 288) = 0;
  *(_QWORD *)(v1 + 296) = 0LL;
  return (CAtlasedRectsVisual *)v1;
}
