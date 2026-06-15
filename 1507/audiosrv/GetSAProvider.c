/*
 * XREFs of GetSAProvider @ 0x18002E018
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180001D28 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001E410 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     VADServerUserSessionChanged @ 0x18002BC60 (VADServerUserSessionChanged.c)
 *     ?FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ @ 0x18002EFE0 (-FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18006B3A0 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 *     ?IsUsingResource@CAudioStream@@UEAAH_K@Z @ 0x180082370 (-IsUsingResource@CAudioStream@@UEAAH_K@Z.c)
 *     ?RegisterStream@CAudioStream@@QEAAJXZ @ 0x1800824C0 (-RegisterStream@CAudioStream@@QEAAJXZ.c)
 *     ?ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z @ 0x1800826BC (-ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z.c)
 *     ?UnregisterStream@CAudioStream@@QEAAJXZ @ 0x180082C18 (-UnregisterStream@CAudioStream@@QEAAJXZ.c)
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?CreateInstance@?$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002DF24 (-CreateInstance@-$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?QueryInterface@?$CComObject@VCSaProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002E2D0 (-QueryInterface@-$CComObject@VCSaProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall GetSAProvider(__int64 a1)
{
  struct ISaProvider *v2; // rbx
  int Instance; // edi
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v5)(_QWORD, GUID *, struct ISaProvider **); // rbx
  int Interface; // eax
  __int64 (__fastcall *v7)(struct ISaProvider *, GUID *, __int64); // rdi
  int v8; // eax
  LPCRITICAL_SECTION v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct ISaProvider **); // [rsp+58h] [rbp+10h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, &g_CritsSaProvider);
  v2 = g_SingletonSaProvider;
  if ( !g_SingletonSaProvider )
  {
    Instance = ATL::CComObject<CSaProvider>::CreateInstance((__int64 *)&v12);
    if ( Instance < 0 )
      goto LABEL_10;
    v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
    v5 = **v12;
    if ( (char *)v5 == (char *)ATL::CComObject<CSaProvider>::QueryInterface )
      Interface = ATL::CComObject<CSaProvider>::QueryInterface(
                    v12,
                    &GUID_26f1b44f_2b86_4934_9e5b_be4f8abd7f6e,
                    &g_SingletonSaProvider);
    else
      Interface = v5(v12, &GUID_26f1b44f_2b86_4934_9e5b_be4f8abd7f6e, &g_SingletonSaProvider);
    Instance = Interface;
    if ( Interface < 0 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), __int64))(*v4)[10])(v4, 1LL);
      goto LABEL_10;
    }
    v2 = g_SingletonSaProvider;
  }
  v7 = **(__int64 (__fastcall ***)(struct ISaProvider *, GUID *, __int64))v2;
  if ( (char *)v7 == (char *)ATL::CComObject<CSaProvider>::QueryInterface )
    v8 = ATL::CComObject<CSaProvider>::QueryInterface(v2, &GUID_26f1b44f_2b86_4934_9e5b_be4f8abd7f6e, a1);
  else
    v8 = v7(v2, &GUID_26f1b44f_2b86_4934_9e5b_be4f8abd7f6e, a1);
  Instance = v8;
LABEL_10:
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  if ( Instance < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      38LL,
      &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      (unsigned int)Instance);
  }
  return (unsigned int)Instance;
}
