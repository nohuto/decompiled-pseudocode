/*
 * XREFs of ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008EAAC
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180043C90 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180038A7C (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x1800393D4 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAnimationEngine::Cleanup(CAnimationEngine *this)
{
  __int64 i; // rbx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
    CAnimationEngine::CTransitionVisualSet::StopStoryboard(*(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8 * i));
  CAnimationEngine::StopAnimations(this);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_BYTE *)this + 120) = 0;
}
