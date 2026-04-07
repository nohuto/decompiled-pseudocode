/*
 * XREFs of ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x1800394B8
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180038AE8 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180039B30 (-ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::BindAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  CAnimatedTransitionVisual **v4; // rcx
  CAnimatedTransitionVisual *v5; // r14
  bool (__fastcall *v6)(CAnimatedTransitionVisual *__hidden); // rbp
  int v9; // eax

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 1) )
  {
    while ( 1 )
    {
      v4 = *(CAnimatedTransitionVisual ***)(*((_QWORD *)this + 3) + 8 * v2);
      v5 = *v4;
      v6 = *(bool (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)*v4 + 208LL);
      if ( v6 == CAnimatedTransitionVisual::ShouldUseDComp ? CAnimatedTransitionVisual::ShouldUseDComp(*v4) : v6(*v4) )
      {
        v9 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *))(*(_QWORD *)v5 + 224LL))(v5);
        v1 = v9;
        if ( v9 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 1) )
        return v1;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x6D6u);
  }
  return v1;
}
