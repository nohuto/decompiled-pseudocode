/*
 * XREFs of ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017320
 * Callers:
 *     AudioServerInitialize @ 0x18000CF80 (AudioServerInitialize.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x1800208E0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180084F40 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180017550 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDGProcess::LockADGProcess(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  CAudioThreadPool *v2; // rdi
  struct _TP_TIMER *DebugInfo; // rcx
  void (__fastcall *v4)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD); // rax
  void (__fastcall *v5)(CAudioThreadPool *, struct _TP_TIMER *, BOOL); // rax
  unsigned int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v9; // [rsp+40h] [rbp-28h]
  LPCRITICAL_SECTION v10; // [rsp+48h] [rbp-20h] BYREF
  char v11; // [rsp+50h] [rbp-18h]

  v1 = g_ADGProcess;
  v10 = g_ADGProcess;
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v10);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
  }
  if ( ++LODWORD(v1[1].DebugInfo) == 1 )
  {
    v2 = ThreadPool;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
    }
    lpCriticalSection = v1;
    v9 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    DebugInfo = (struct _TP_TIMER *)v1[3].DebugInfo;
    if ( DebugInfo )
    {
      v4 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD))(*(_QWORD *)v2 + 24LL);
      if ( v4 == CAudioThreadPool::SetTimer )
        SetThreadpoolTimer(DebugInfo, 0LL, 0, 0);
      else
        v4(v2, DebugInfo, 0LL, 0LL, 0);
      v5 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, BOOL))(*(_QWORD *)v2 + 32LL);
      if ( v5 == CAudioThreadPool::WaitForTimerCallbacks )
        WaitForThreadpoolTimerCallbacks((PTP_TIMER)v1[3].DebugInfo, 1);
      else
        v5(v2, (struct _TP_TIMER *)v1[3].DebugInfo, 1LL);
    }
    if ( v9 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v9 = 0;
    }
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v1);
  }
  v6 = (unsigned int)v1[1].DebugInfo;
  if ( v11 )
  {
    LeaveCriticalSection(v10);
    v11 = 0;
  }
  return v6;
}
