/*
 * XREFs of ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18001E690
 * Callers:
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003F54 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18006A63C (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180088FE8 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x18001E790 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x527u);
  return v3;
}
