/*
 * XREFs of ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180010438
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800100A0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800106BC (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000436C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D208 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000ED7C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000F6B0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000FC80 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000FD54 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000FDF8 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002BE20 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int v3; // ebx
  struct _GUID *v4; // rcx
  struct _GUID *v5; // r15
  unsigned int v6; // r9d
  struct _GUID **v7; // r8
  __int64 v8; // r10
  signed int Data1; // r14d
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  int started; // eax
  __int128 v16; // [rsp+30h] [rbp-38h]

  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
  {
    v7 = (struct _GUID **)*((_QWORD *)this + 2);
    v8 = v6;
    do
    {
      a2 = *v7;
      if ( !*(_DWORD *)(*v7)[1].Data4 && (!v4 || (signed int)v4[4].Data1 < (signed int)a2[4].Data1) )
        v4 = *v7;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  Data1 = 0;
  if ( v4 )
    Data1 = v4[4].Data1;
  v10 = 0LL;
  if ( !v6 )
  {
LABEL_22:
    v13 = CTransitionVisualController::SetupZOrder(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 23));
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x26Eu);
    }
    else
    {
      started = CAnimationScheduler::_ScheduleStartAnimations(this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x271u);
      else
        CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165));
    }
    return (unsigned int)v3;
  }
  do
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v10);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v16 = *(_OWORD *)(v11 + 48);
    v12 = v16 - *(_QWORD *)&v5->Data1;
    if ( (_QWORD)v16 == *(_QWORD *)&v5->Data1 )
      v12 = *((_QWORD *)&v16 + 1) - *(_QWORD *)v5->Data4;
    if ( !v12 )
    {
      if ( v3 >= 0 )
      {
        if ( *(_DWORD *)(v11 + 24) > 1u )
          goto LABEL_20;
        if ( *(_DWORD *)(v11 + 64) < Data1 )
        {
          *(_DWORD *)(v11 + 24) = 1;
          CStoryboard::_LogStoryboardEvent(v11, (__int64)a2);
          v3 = 0;
          goto LABEL_20;
        }
        v3 = CAnimationScheduler::_ScheduleStoryboard((CAnimationScheduler *)v4, (struct CStoryboard *)v11);
        if ( v3 >= 0 )
        {
          CAnimationScheduler::_ScheduleBlockedStoryboards(this, *(_DWORD *)(v11 + 64));
          goto LABEL_20;
        }
      }
      CStoryboard::Abandon((struct _GUID *)v11);
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
