/*
 * XREFs of ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18003F4A0
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800130A4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180013490 (-ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::BindAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  CAnimatedTransitionVisual *v4; // r14
  bool (__fastcall *v5)(CAnimatedTransitionVisual *); // rax
  int v8; // eax

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 1) )
  {
    while ( 1 )
    {
      v4 = **(CAnimatedTransitionVisual ***)(*((_QWORD *)this + 3) + 8 * v2);
      v5 = *(bool (__fastcall **)(CAnimatedTransitionVisual *))(*(_QWORD *)v4 + 208LL);
      if ( v5 == CAnimatedTransitionVisual::ShouldUseDComp ? CAnimatedTransitionVisual::ShouldUseDComp(v4) : v5(v4) )
      {
        v8 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *))(*(_QWORD *)v4 + 224LL))(v4);
        v1 = v8;
        if ( v8 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 1) )
        return v1;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6D6u);
  }
  return v1;
}
