/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800332A0
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000FCE4 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003CA5C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E54C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E95C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x180097C9C (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x1800333B8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  struct IAnimatedVisual **v4; // r15
  unsigned int v9; // esi
  __int64 v10; // rdi
  struct IAnimatedVisual **v11; // rax
  __int64 v12; // r8
  int started; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v9 = -2147024809;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v15 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v10 = 8LL * *(unsigned int *)(a3 + 24);
    if ( !is_mul_ok(*(unsigned int *)(a3 + 24), 8uLL) )
      v10 = -1LL;
    v11 = (struct IAnimatedVisual **)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       v10);
    v12 = 0LL;
    v4 = v11;
    if ( v11 )
    {
      if ( *(_DWORD *)(a3 + 24) )
      {
        do
        {
          v11[v12] = *(struct IAnimatedVisual **)(*(_QWORD *)a3 + 8 * v12);
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *(_DWORD *)(a3 + 24) );
      }
      started = CAnimationEngine::ScheduleStartAnimation(this, a2, v11, *(_DWORD *)(a3 + 24), a4);
      v9 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0xA2u);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x9Cu);
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct IAnimatedVisual **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return v9;
}
