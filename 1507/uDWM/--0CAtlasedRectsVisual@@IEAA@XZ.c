/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001B84C
 * Callers:
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800081E8 (-Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x18001AB24 (--0CButton@@IEAA@XZ.c)
 *     ?Create@CAnimatedGlassSheet@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@_N@Z @ 0x18007B4F0 (-Create@CAnimatedGlassSheet@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
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
