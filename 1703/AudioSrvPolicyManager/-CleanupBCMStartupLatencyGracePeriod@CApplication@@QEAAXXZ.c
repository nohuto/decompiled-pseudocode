/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000CC94
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x18000A950 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000CAF4 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180013C80 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180014690 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000C4BC (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000C970 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::CleanupBCMStartupLatencyGracePeriod(const wchar_t **this)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v5; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v6; // [rsp+48h] [rbp-18h] BYREF
  char v7; // [rsp+50h] [rbp-10h]

  v6 = (LPCRITICAL_SECTION)(this + 50);
  v7 = 0;
  ATL::CCritSecLock::Lock(&v6);
  if ( *((_DWORD *)this + 112) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, this[3]);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
      ThreadPool,
      this[55],
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      this[55],
      1LL);
    *((_DWORD *)this + 112) = 0;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)this) )
    {
      CApplication::RemoveAudioPlaybackRestriction((CApplication *)this);
      lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
      v5 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v2 = this[9];
      while ( v2 )
      {
        v3 = *((_QWORD *)v2 + 2);
        v2 = *(const wchar_t **)v2;
        if ( !*(_DWORD *)(v3 + 416) && *(_DWORD *)(v3 + 452) == 7 )
        {
          *(_QWORD *)(v3 + 452) = 0LL;
          *(_DWORD *)(v3 + 460) = 4;
        }
      }
      if ( v5 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v5 = 0;
      }
    }
  }
  if ( v7 )
    LeaveCriticalSection(v6);
}
