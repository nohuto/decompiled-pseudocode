/*
 * XREFs of ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18003C210
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18003CBA4 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     Template_zq @ 0x180002EC8 (Template_zq.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003B888 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18003CE58 (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     PdcActivationClientRegister @ 0x18003D674 (PdcActivationClientRegister.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18003D900 (-TS_ServiceStart@@YAXXZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x18003D994 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x180044B24 (-MME_ServiceStart@@YAJXZ.c)
 *     ??0CAudioDGProcess@@QEAA@XZ @ 0x1800458EC (--0CAudioDGProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     Template_pq @ 0x180069DC8 (Template_pq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::Initialize(CAudioSrv *this, unsigned int a2)
{
  PVOID v4; // rbx
  _BYTE *v5; // rax
  _BYTE *v6; // rsi
  CAudioDGProcess *v7; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  TraceLoggingHProvider v16; // rcx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-88h]
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+50h] [rbp-78h] BYREF

  v19 = -2LL;
  v4 = 0LL;
  spc.PowerButtonPresent = 0;
  memset_0(&spc.SleepButtonPresent, 0, 0x4BuLL);
  if ( !a2 )
  {
    v5 = operator new(0x68uLL);
    v6 = v5;
    if ( v5 )
    {
      ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(v5);
      *(_QWORD *)v6 = &CAudioServiceModule::`vftable';
      v6[96] = 0;
    }
    else
    {
      v6 = 0LL;
    }
    *((_QWORD *)this + 9) = v6;
    if ( !v6 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
      }
      a2 = -2147024882;
    }
  }
  if ( !GetPwrCapabilities(&spc) || (g_bIsAoAcSystem = 1, !spc.spare2[2]) )
    g_bIsAoAcSystem = 0;
  if ( !a2 )
  {
    v7 = (CAudioDGProcess *)operator new(0x88uLL);
    if ( v7 )
      v8 = (struct _RTL_CRITICAL_SECTION *)CAudioDGProcess::CAudioDGProcess(v7);
    else
      v8 = 0LL;
    g_ADGProcess = v8;
    if ( v8 )
    {
      a2 = CAudioSrv::VAD_AudiosrvServiceStart(this);
      if ( !a2 )
      {
        v9 = MME_ServiceStart();
        v11 = v9;
        if ( v9 < 0 && (Microsoft_Windows_AudioEnableBits & 4) != 0 )
          Template_zq(v10, (__int64)&EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP, L"MME", v9);
        TS_ServiceStart();
        *((_DWORD *)this + 23) = 1;
        EventAttributes.nLength = 24;
        EventAttributes.lpSecurityDescriptor = 0LL;
        EventAttributes.bInheritHandle = 0;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
        }
        if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
               L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
               1u,
               &EventAttributes.lpSecurityDescriptor,
               0LL) )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x12u,
              (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
          }
          g_hCanAcceptMMCClientEvent = CreateEventExW(
                                         &EventAttributes,
                                         L"Global\\AudioSrv_CanAcceptMMCClient",
                                         1u,
                                         0x100002u);
          LocalFree(EventAttributes.lpSecurityDescriptor);
        }
        v14 = PdcActivationClientRegister(v13, v12);
        v15 = v14;
        if ( v14 < 0 )
        {
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x13u,
              (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
              v14);
            v16 = WPP_GLOBAL_Control;
          }
          g_hPdcActivator = 0LL;
        }
        else
        {
          v16 = WPP_GLOBAL_Control;
          v4 = g_hPdcActivator;
        }
        if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
        {
          Template_pq(v16, &EVT_AUDIOSRV_PdcActivationClientRegister, v4, v15);
          v16 = WPP_GLOBAL_Control;
        }
        if ( v16 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)v16 + 28) & 0x10) != 0
          && *((_BYTE *)v16 + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)v16 + 2), 0x14u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v11);
        }
        return (unsigned int)KsNotifications_ServiceStart();
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
      }
      return (unsigned int)-2147024882;
    }
  }
  return a2;
}
