/*
 * XREFs of ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180005F80
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800056F0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x180005C8C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180005DB4 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800060A0 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180006250 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x1800063B0 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000761C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180093430 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x180094804 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnAnimationClockChanged(__int64 a1, struct _GUID *a2, int a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 i; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 j; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 k; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+20h] [rbp-29h] BYREF
  struct _GUID v23; // [rsp+30h] [rbp-19h] BYREF
  struct _GUID v24; // [rsp+40h] [rbp-9h] BYREF
  __int128 v25; // [rsp+50h] [rbp+7h]
  __int128 v26; // [rsp+60h] [rbp+17h]
  __int128 v27; // [rsp+70h] [rbp+27h]

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = a3 - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 1 )
              CAnimationScheduler::_RecycleAbandonedStoryboards((CAnimationScheduler *)(a1 - 8), v6);
          }
          else
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 32); i = (unsigned int)(i + 1) )
            {
              v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
              v27 = *(_OWORD *)(v13 + 48);
              v14 = v27 - *(_QWORD *)&a2->Data1;
              if ( (_QWORD)v27 == *(_QWORD *)&a2->Data1 )
                v14 = *((_QWORD *)&v27 + 1) - *(_QWORD *)a2->Data4;
              if ( !v14 )
                CAnimationScheduler::OnAnimationComplete((CAnimationScheduler *)(a1 - 8), *(_DWORD *)(v13 + 72));
            }
          }
        }
        else
        {
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 32); j = (unsigned int)(j + 1) )
          {
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * j);
            v25 = *(_OWORD *)(v17 + 48);
            v18 = v25 - *(_QWORD *)&a2->Data1;
            if ( (_QWORD)v25 == *(_QWORD *)&a2->Data1 )
              v18 = *((_QWORD *)&v25 + 1) - *(_QWORD *)a2->Data4;
            if ( !v18 && *(_DWORD *)(v17 + 24) != 4 )
              CStoryboard::Abandon((CStoryboard *)v17);
          }
        }
      }
      else
      {
        v24 = *a2;
        CAnimationScheduler::_ScheduleStoryboardsForAnimationClock((CAnimationScheduler *)(a1 - 8), &v24);
      }
    }
    else
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a1 + 32); k = (unsigned int)(k + 1) )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * k);
        if ( v20 )
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        v26 = *(_OWORD *)(v20 + 48);
        v21 = v26 - *(_QWORD *)&a2->Data1;
        if ( (_QWORD)v26 == *(_QWORD *)&a2->Data1 )
          v21 = *((_QWORD *)&v26 + 1) - *(_QWORD *)a2->Data4;
        if ( !v21
          && !*(_DWORD *)(v20 + 24)
          && (int)CStoryboard::OnStoryboardTimeout((CStoryboard *)v20) >= 0
          && *(_DWORD *)(v20 + 24) == 4 )
        {
          CAnimationScheduler::_ScheduleBlockedStoryboards((CAnimationScheduler *)(a1 - 8), *(_DWORD *)(v20 + 64));
        }
        CStoryboard::Release((CStoryboard *)v20);
      }
    }
  }
  else
  {
    v23 = *a2;
    CAnimationScheduler::_SetStoryboardTriggerForAnimationClock((CAnimationScheduler *)(a1 - 8), &v23);
  }
  return CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
}
