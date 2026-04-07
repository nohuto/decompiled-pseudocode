/*
 * XREFs of ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18003AEE8
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18003312C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::BindAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // esi
  __int64 v2; // rdi
  __int64 v4; // r14
  int v6; // eax

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 1) )
  {
    while ( 1 )
    {
      v4 = **(_QWORD **)(*((_QWORD *)this + 3) + 8 * v2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
        v1 = v6;
        if ( v6 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 1) )
        return v1;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x6D6u);
  }
  return v1;
}
