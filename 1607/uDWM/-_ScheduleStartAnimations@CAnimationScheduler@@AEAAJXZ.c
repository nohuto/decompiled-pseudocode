/*
 * XREFs of ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000FC80
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180010438 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000F810 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180010620 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180010FB0 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012F18 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStartAnimations(CAnimationScheduler *this)
{
  CAnimationEngine *v1; // rbx
  int v2; // esi
  bool IsIdle; // bp
  __int64 v5; // rcx
  CAnimationEngine *v6; // rax
  CAnimationEngine *v8; // rax
  CAnimationEngine *v9; // r14
  int v10; // eax

  v1 = 0LL;
  v2 = 0;
  IsIdle = 1;
  if ( !*((_BYTE *)this + 80) )
  {
    v8 = CDesktopManager::AcquireAnimationEngine();
    v9 = v8;
    if ( v8 )
    {
      v10 = CAnimationEngine::RegisterForAnimationCompleteNotification(v8, this);
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x20Fu);
      else
        *((_BYTE *)this + 80) = 1;
      CAnimationEngine::Release(v9);
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3D7u);
LABEL_18:
        CAnimationScheduler::_CleanupTransition(this);
        goto LABEL_9;
      }
    }
  }
  if ( *((_DWORD *)this + 10) )
  {
    do
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * (_QWORD)v1);
      if ( *(_DWORD *)(v5 + 24) == 2 )
        CStoryboard::ScheduleStartAnimation((struct _GUID *)v5);
      v1 = (CAnimationEngine *)(unsigned int)((_DWORD)v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 10) );
  }
  v6 = CDesktopManager::AcquireAnimationEngine();
  v1 = v6;
  if ( v6 )
    IsIdle = CAnimationEngine::IsIdle(v6);
  if ( IsIdle )
    goto LABEL_18;
LABEL_9:
  if ( v1 )
    CAnimationEngine::Release(v1);
  return (unsigned int)v2;
}
