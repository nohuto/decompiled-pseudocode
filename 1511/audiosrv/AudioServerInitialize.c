/*
 * XREFs of AudioServerInitialize @ 0x18002BC30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180005B50 (-AddRef@CBackgroundSessionCallbacks@@UEAAKXZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180017B70 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18001B9C0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180028B80 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002C030 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18002CAA0 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003315C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18003375C (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x1800339E0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dS @ 0x1800776A8 (WPP_SF_dS.c)
 */

__int64 __fastcall AudioServerInitialize(
        CAudioDGProcess *a1,
        unsigned __int16 *a2,
        enum _AUDCLNT_SHAREMODE a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct tWAVEFORMATEX *a5,
        struct _GUID *a6,
        unsigned int a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        CVADServer **a10)
{
  CAudioDGProcess *v14; // rcx
  int v15; // edi
  int (__fastcall *v16)(CWindowsPolicyManager *, void *, struct IAudioProcess **); // rdi
  int v17; // eax
  __int64 (__fastcall *v18)(CProcess *); // rdi
  DWORD ProcessId; // eax
  int v20; // eax
  CVADServer *v21; // rbx
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rdi
  __int64 (__fastcall *v23)(CVADServer *, struct IAudioProcess *, const unsigned __int16 *, enum _AUDCLNT_SHAREMODE, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct tWAVEFORMATEX *, struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **); // rdi
  int v24; // eax
  CAudioDGProcess *v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 *v31; // rax
  int i; // r8d
  __int64 v33; // rax
  __int64 (__fastcall *v34)(CBackgroundSessionCallbacks *); // rdi
  __int64 (__fastcall *v35)(LPVOID); // rsi
  LPCRITICAL_SECTION v36; // rbx
  int v39; // eax
  CProcess *v40; // [rsp+50h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-40h] BYREF
  char v42; // [rsp+60h] [rbp-38h]
  HANDLE Timer; // [rsp+68h] [rbp-30h] BYREF

  v40 = 0LL;
  lpCriticalSection = 0LL;
  Timer = 0LL;
  if ( g_AudioSrvWatchDogTimerInMs >= 0x3E8 )
    CreateTimerQueueTimer(
      &Timer,
      0LL,
      CWatchDogTimer::TimerCallback,
      L"AudioServerInitialize",
      g_AudioSrvWatchDogTimerInMs,
      0,
      0x20u);
  *a10 = 0LL;
  CAudioDGProcess::LockADGProcess(a1);
  v15 = CAudioDGProcess::CheckADGStatus(v14);
  if ( v15 >= 0 )
  {
    v16 = *(int (__fastcall **)(CWindowsPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                         + 32LL);
    v17 = v16 == CWindowsPolicyManager::RpcGetProcess
        ? CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, a1, &v40)
        : v16(g_PolicyManager, a1, &v40);
    v15 = v17;
    if ( v17 >= 0 )
    {
      v18 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v40 + 40LL);
      if ( v18 == CProcess::GetProcessId )
        ProcessId = CProcess::GetProcessId(v40);
      else
        ProcessId = v18(v40);
      if ( (unsigned int)IsProcessAllowed(ProcessId, a2) )
      {
        v20 = ATL::CComObject<CVADServer>::CreateInstance(&lpCriticalSection);
        v21 = (CVADServer *)lpCriticalSection;
        v15 = v20;
        if ( v20 )
          goto LABEL_31;
        CriticalSection = lpCriticalSection->DebugInfo->CriticalSection;
        if ( CriticalSection == (struct _RTL_CRITICAL_SECTION *)CBackgroundSessionCallbacks::AddRef )
          CBackgroundSessionCallbacks::AddRef((CBackgroundSessionCallbacks *)lpCriticalSection);
        else
          ((void (__fastcall *)(LPCRITICAL_SECTION))CriticalSection)(lpCriticalSection);
        v23 = *(__int64 (__fastcall **)(CVADServer *, struct IAudioProcess *, const unsigned __int16 *, enum _AUDCLNT_SHAREMODE, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct tWAVEFORMATEX *, struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **))(*(_QWORD *)v21 + 40LL);
        v24 = v23 == CVADServer::Initialize
            ? CVADServer::Initialize(v21, v40, a2, a3, a4, a5, a6, a7, a8, a9)
            : v23(v21, v40, a2, a3, a4, a5, a6, a7, a8, a9);
        v15 = v24;
        if ( v24 < 0 )
        {
LABEL_31:
          if ( v21 )
          {
            v35 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL);
            if ( v35 == ATL::CComObject<CVADServer>::Release )
              ATL::CComObject<CVADServer>::Release(v21);
            else
              v35(v21);
          }
          goto LABEL_34;
        }
        CAudioDGProcess::LockADGProcess(v25);
        EnterCriticalSection(&g_csVadList);
        v26 = (__int64 *)qword_1800E54E0;
        v27 = g_VADServerList;
        if ( qword_1800E54E0 )
        {
LABEL_26:
          v33 = *v26;
          v26[2] = (__int64)v21;
          qword_1800E54E0 = v33;
          v26[1] = 0LL;
          *v26 = v27;
          ++qword_1800E54D0;
          if ( g_VADServerList )
            *(_QWORD *)(g_VADServerList + 8) = v26;
          else
            qword_1800E54C8 = (__int64)v26;
          g_VADServerList = (__int64)v26;
          LeaveCriticalSection(&g_csVadList);
          *a10 = v21;
          v34 = *(__int64 (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)v21 + 8LL);
          if ( v34 == CBackgroundSessionCallbacks::AddRef )
            CBackgroundSessionCallbacks::AddRef(v21);
          else
            v34(v21);
          v15 = 0;
          goto LABEL_31;
        }
        if ( dword_1800E54E8 )
        {
          if ( dword_1800E54E8 == 10LL )
            v28 = 0x1999999999999999LL;
          else
            v28 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_1800E54E8;
          if ( v28 < 0x18 )
            goto LABEL_60;
          v29 = 24LL * (unsigned int)dword_1800E54E8;
        }
        else
        {
          v29 = 0LL;
        }
        if ( (unsigned __int64)(-1 - v29) >= 8 )
        {
          v30 = malloc(v29 + 8);
          if ( v30 )
          {
            *v30 = qword_1800E54D8;
            qword_1800E54D8 = (__int64)v30;
            v26 = (__int64 *)qword_1800E54E0;
            v31 = &v30[3 * (unsigned int)(dword_1800E54E8 - 1) + 1];
            for ( i = dword_1800E54E8 - 1; i >= 0; --i )
            {
              *v31 = (__int64)v26;
              v26 = v31;
              qword_1800E54E0 = (__int64)v31;
              v31 -= 3;
            }
            goto LABEL_26;
          }
        }
LABEL_60:
        ATL::AtlThrowImpl(-2147024882);
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v39 = (*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v40 + 40LL))(v40);
        WPP_SF_dS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          76,
          (unsigned int)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
          v39,
          (__int64)a2);
      }
      v15 = -2147024891;
    }
  }
LABEL_34:
  if ( v40 )
  {
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v40 + 16LL))(v40);
    v40 = 0LL;
  }
  v36 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v42 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
  }
  if ( LODWORD(v36[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v36);
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v15 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      77LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v15);
  }
  if ( Timer )
    DeleteTimerQueueTimer(0LL, Timer, 0LL);
  return (unsigned int)v15;
}
