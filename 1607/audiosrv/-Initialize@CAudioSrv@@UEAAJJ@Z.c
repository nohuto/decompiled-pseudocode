/*
 * XREFs of ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180030C50
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18002F478 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18002FBD4 (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x18003125C (-MME_ServiceStart@@YAJXZ.c)
 *     ??$make_unique@VCPdcActivationClient@@$$V@std@@YA?AV?$unique_ptr@VCPdcActivationClient@@U?$default_delete@VCPdcActivationClient@@@std@@@0@XZ @ 0x1800312E0 (--$make_unique@VCPdcActivationClient@@$$V@std@@YA-AV-$unique_ptr@VCPdcActivationClient@@U-$defau.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x180031338 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x180031424 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     Template_zq @ 0x180034658 (Template_zq.c)
 *     ??R?$default_delete@VCPdcActivationClient@@@std@@QEBAXPEAVCPdcActivationClient@@@Z @ 0x1800359C8 (--R-$default_delete@VCPdcActivationClient@@@std@@QEBAXPEAVCPdcActivationClient@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::Initialize(CAudioSrv *this, unsigned int a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rdi
  CAudioDGProcess *v6; // rax
  struct IMonitorDGTermination *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  CAudioDGProcess *v15; // [rsp+20h] [rbp-98h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+28h] [rbp-90h] BYREF
  __int64 v17; // [rsp+40h] [rbp-78h]
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+50h] [rbp-68h] BYREF

  v17 = -2LL;
  memset(&spc, 0, sizeof(spc));
  if ( !a2 )
  {
    v4 = operator new(0x68uLL);
    v5 = v4;
    v15 = (CAudioDGProcess *)v4;
    if ( v4 )
    {
      ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(v4);
      *(_QWORD *)v5 = &CAudioServiceModule::`vftable';
      v5[96] = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) = v5;
    if ( !v5 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
      }
      a2 = -2147024882;
    }
  }
  GetPwrCapabilities(&spc);
  if ( !a2 )
  {
    v6 = (CAudioDGProcess *)operator new(0x90uLL);
    v15 = v6;
    if ( v6 )
    {
      if ( this )
        v7 = (CAudioSrv *)((char *)this + 80);
      else
        v7 = 0LL;
      v6 = CAudioDGProcess::CAudioDGProcess(v6, v7);
    }
    g_ADGProcess = (LPCRITICAL_SECTION)v6;
    if ( v6 )
    {
      v8 = (__int64 *)std::make_unique<CPdcActivationClient,>(&v15);
      if ( &g_pdcActivationClient != v8 )
      {
        v9 = *v8;
        *v8 = 0LL;
        v10 = g_pdcActivationClient;
        g_pdcActivationClient = v9;
        if ( v10 )
          std::default_delete<CPdcActivationClient>::operator()();
      }
      if ( v15 )
        std::default_delete<CPdcActivationClient>::operator()();
      a2 = CAudioSrv::VAD_AudiosrvServiceStart(this);
      if ( !a2 )
      {
        v11 = MME_ServiceStart();
        v13 = v11;
        if ( v11 < 0 && (Microsoft_Windows_AudioEnableBits & 4) != 0 )
          Template_zq(v12, &EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP, L"MME", (unsigned int)v11);
        EventAttributes.nLength = 24;
        EventAttributes.lpSecurityDescriptor = 0LL;
        EventAttributes.bInheritHandle = 0;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
        }
        if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
               L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
               1u,
               &EventAttributes.lpSecurityDescriptor,
               0LL) )
        {
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
          }
          g_hCanAcceptMMCClientEvent = CreateEventExW(
                                         &EventAttributes,
                                         L"Global\\AudioSrv_CanAcceptMMCClient",
                                         1u,
                                         0x100002u);
          LocalFree(EventAttributes.lpSecurityDescriptor);
        }
        if ( v13 < 0 )
          AudSrvTraceLoggingErrorHelper("CAudioSrv::Initialize", 559, v13);
        return (unsigned int)KsNotifications_ServiceStart();
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
      }
      return (unsigned int)-2147024882;
    }
  }
  return a2;
}
