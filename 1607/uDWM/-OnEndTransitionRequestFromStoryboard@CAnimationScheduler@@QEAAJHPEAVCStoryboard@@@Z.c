/*
 * XREFs of ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800106BC
 * Callers:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180031094 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180092B20 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000436C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18000FE7C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180010438 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18003BFCC (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 */

__int64 __fastcall CAnimationScheduler::OnEndTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        struct CStoryboard *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  struct _GUID v12; // xmm6
  int v13; // r9d
  unsigned __int64 v14; // rax
  struct _GUID v16; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v7, &UdwmSystemAnimation_EndTransitionRequest, a2);
  v8 = -2147467259;
  v9 = (unsigned int)(*((_DWORD *)this + 10) - 1);
  if ( (int)v9 >= 0 )
  {
    v6 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 8 * v9);
      if ( !*(_DWORD *)(v10 + 24) && *(_DWORD *)(v10 + 72) == a2 && *(struct CStoryboard **)(v10 + 80) == a3 )
        break;
      v9 = (unsigned int)(v9 - 1);
      if ( (int)v9 < 0 )
        goto LABEL_21;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 72LL))(*(_QWORD *)(v6 + 8 * v9));
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A92F8, 1u, v11, 0x131u);
    }
    else
    {
      v12 = *(struct _GUID *)(v10 + 48);
      v13 = -2147024809;
      v14 = *(_QWORD *)(v10 + 48) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v14 )
        v14 = _mm_srli_si128((__m128i)v12, 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
      if ( v14 )
      {
        v16 = *(struct _GUID *)(v10 + 48);
        v13 = CAnimationClockCoordinator::OnEndAnimationClock(
                *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 19),
                &v16);
        if ( v13 == -2147019873 )
        {
          v16 = v12;
          v13 = CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(this, &v16);
        }
        v8 = v13;
        if ( v13 >= 0 )
          goto LABEL_15;
      }
      else
      {
        v8 = -2147024809;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1800A92F8, 1u, v13, 0x134u);
    }
LABEL_21:
    if ( *(_DWORD *)(v10 + 72) == a2 && (!*(_DWORD *)(v10 + 24) || !*(_BYTE *)(v10 + 76)) )
      CStoryboard::Abandon((struct _GUID *)v10);
  }
LABEL_15:
  CAnimationScheduler::_RecycleAbandonedStoryboards(this, v6);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v8;
}
