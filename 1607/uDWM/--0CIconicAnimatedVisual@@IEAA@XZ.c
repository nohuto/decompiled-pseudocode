/*
 * XREFs of ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800998C0
 * Callers:
 *     ?Create@CIconicAnimatedVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18008E3D0 (-Create@CIconicAnimatedVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 */

CIconicAnimatedVisual *__fastcall CIconicAnimatedVisual::CIconicAnimatedVisual(CIconicAnimatedVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CIconicAnimatedVisual::`vftable'{for `CVisual'};
  *(_QWORD *)(v1 + 264) = &CIconicAnimatedVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_DWORD *)(v1 + 368) = 0;
  return (CIconicAnimatedVisual *)v1;
}
