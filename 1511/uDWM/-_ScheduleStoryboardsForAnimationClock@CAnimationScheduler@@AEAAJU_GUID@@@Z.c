/*
 * XREFs of ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180006250
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180005F80 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800064C8 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180005BB8 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x180005C8C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180005D30 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180006C18 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000761C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000908C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002C6E0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180093430 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int v3; // ebx
  CAnimationScheduler *v4; // rcx
  unsigned int v6; // r9d
  CAnimationScheduler **v7; // r8
  __int64 v8; // r10
  int v9; // r14d
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  int started; // eax
  __int128 v16; // [rsp+30h] [rbp-38h]

  v3 = 0;
  v4 = 0LL;
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
  {
    v7 = (CAnimationScheduler **)*((_QWORD *)this + 2);
    v8 = v6;
    do
    {
      if ( !*((_DWORD *)*v7 + 6) && (!v4 || *((_DWORD *)v4 + 16) < *((_DWORD *)*v7 + 16)) )
        v4 = *v7;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = 0;
  if ( v4 )
    v9 = *((_DWORD *)v4 + 16);
  v10 = 0LL;
  if ( !v6 )
  {
LABEL_22:
    v13 = CTransitionVisualController::SetupZOrder(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 25));
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x26Du);
    }
    else
    {
      started = CAnimationScheduler::_ScheduleStartAnimations(this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x270u);
      else
        CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167));
    }
    return (unsigned int)v3;
  }
  do
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v10);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v16 = *(_OWORD *)(v11 + 48);
    v12 = v16 - *(_QWORD *)&a2->Data1;
    if ( (_QWORD)v16 == *(_QWORD *)&a2->Data1 )
      v12 = *((_QWORD *)&v16 + 1) - *(_QWORD *)a2->Data4;
    if ( !v12 )
    {
      if ( v3 >= 0 )
      {
        if ( *(_DWORD *)(v11 + 24) > 1u )
          goto LABEL_20;
        if ( *(_DWORD *)(v11 + 64) < v9 )
        {
          *(_DWORD *)(v11 + 24) = 1;
          CStoryboard::_LogStoryboardEvent((CStoryboard *)v11);
          v3 = 0;
          goto LABEL_20;
        }
        v3 = CAnimationScheduler::_ScheduleStoryboard(v4, (struct CStoryboard *)v11);
        if ( v3 >= 0 )
        {
          CAnimationScheduler::_ScheduleBlockedStoryboards(this, *(_DWORD *)(v11 + 64));
          goto LABEL_20;
        }
      }
      CStoryboard::Abandon((CStoryboard *)v11);
    }
LABEL_20:
    CStoryboard::Release((CStoryboard *)v11);
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (unsigned int)v10 < *((_DWORD *)this + 10) );
  if ( v3 >= 0 )
    goto LABEL_22;
  return (unsigned int)v3;
}
