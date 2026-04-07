/*
 * XREFs of ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180020960
 * Callers:
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800057D8 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180005B88 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180074BE0 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180020A10 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateOpacity(CVisual *this)
{
  __int64 (*v1)(void); // rax
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *(__int64 (**)(void))(*(_QWORD *)this + 176LL);
  if ( (char *)v1 == (char *)CVisual::SendSetOpacity )
    v2 = CVisual::SendSetOpacity(this, *((double *)this + 22));
  else
    v2 = v1();
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x4C7u);
  return v3;
}
