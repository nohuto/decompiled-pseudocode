/*
 * XREFs of ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180031550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180030F6C (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18003160C (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::OnStoryboardStatusChanged(
        CAnimationEngine *this,
        struct IUIAnimationStoryboard2 *a2,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001 a3,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001 a4)
{
  int v4; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int TransitionVisualSetIndex; // eax
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 == UI_ANIMATION_STORYBOARD_FINISHED && ((a4 - 1) & 0xFFFFFFFD) == 0 )
  {
    v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, unsigned int *))a2->lpVtbl->GetTag)(
           a2,
           0LL,
           &v12);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x5D3u);
    }
    else
    {
      v8 = v12;
      v11 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex(this, v8);
      if ( TransitionVisualSetIndex < 0 )
      {
        v4 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147467259, 0x571u);
      }
      else
      {
        v10 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, TransitionVisualSetIndex);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x56Du);
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x5D7u);
    }
  }
  return (unsigned int)v4;
}
