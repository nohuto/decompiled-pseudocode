/*
 * XREFs of ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180094B58
 * Callers:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180093430 (-Abandon@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180007384 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180038BEC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180040AFC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 */

__int64 __fastcall CStoryboard::ScheduleStopAnimation(CStoryboard *this)
{
  unsigned int v2; // edi
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rbx
  int v5; // edx
  int v6; // eax
  unsigned int v7; // edx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 7);
    if ( v5 != -1 )
    {
      v6 = CAnimationEngine::ScheduleStopAnimation(v3, v5);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x1759u);
    }
  }
  CStoryboard::_Cleanup(this);
  if ( v4 )
    CAnimationEngine::Release(v4, v7);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v2;
}
