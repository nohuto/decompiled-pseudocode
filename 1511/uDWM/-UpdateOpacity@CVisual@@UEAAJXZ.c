/*
 * XREFs of ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180023AB0
 * Callers:
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D354 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180072DC8 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x18008CB58 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180023BB0 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateOpacity(CVisual *this)
{
  __int64 (__fastcall *v1)(CVisual *__hidden, double); // rdi
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *(__int64 (__fastcall **)(CVisual *__hidden, double))(*(_QWORD *)this + 176LL);
  if ( v1 == CVisual::SendSetOpacity )
    v2 = CVisual::SendSetOpacity(this, *((double *)this + 22));
  else
    v2 = ((__int64 (__fastcall *)(CVisual *))v1)(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x50Cu);
  return v3;
}
