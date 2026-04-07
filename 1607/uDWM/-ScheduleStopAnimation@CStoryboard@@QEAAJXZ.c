/*
 * XREFs of ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800041FC
 * Callers:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000436C (-Abandon@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F414 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180013188 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStoryboard::ScheduleStopAnimation(CStoryboard *this)
{
  unsigned int v2; // edi
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rbx
  unsigned int v5; // edx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
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
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x15C3u);
    }
  }
  CStoryboard::_Cleanup(this);
  if ( v4 )
    CAnimationEngine::Release(v4);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v2;
}
