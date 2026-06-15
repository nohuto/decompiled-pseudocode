/*
 * XREFs of AudioServerInitialize @ 0x18000A980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180006374 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180006974 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180006BEC (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x180009A20 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180009CE0 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18000AD80 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000AF90 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180010DD0 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180021EB0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dS @ 0x18007C3B8 (WPP_SF_dS.c)
 */

__int64 __fastcall AudioServerInitialize(
        CAudioDGProcess *a1,
        unsigned __int16 *a2,
        enum _AUDCLNT_SHAREMODE a3,
        unsigned int a4,
        struct tWAVEFORMATEX *a5,
        struct _GUID *a6,
        unsigned int a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        CVADServer **a10)
{
  CAudioDGProcess *v14; // rcx
  int v15; // edi
  __int64 (__fastcall *v16)(CWindowsPolicyManager *__hidden, void *, struct IAudioProcess **); // rdi
  int v17; // eax
  unsigned int (__fastcall *v18)(CProcess *__hidden); // rdi
  DWORD ProcessId; // eax
  int Instance; // eax
  CVADServer *v21; // rbx
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rdi
  int (*v23)(CVADServer *__hidden, struct IAudioProcess *, const unsigned __int16 *, enum _AUDCLNT_SHAREMODE, unsigned int, const struct tWAVEFORMATEX *, const struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **); // rdi
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
  void (__fastcall *v34)(CVADServer *); // rdi
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
    v16 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL);
    v17 = v16 == CWindowsPolicyManager::RpcGetProcess
        ? CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, a1, &v40)
        : v16(g_PolicyManager, a1, &v40);
    v15 = v17;
    if ( v17 >= 0 )
    {
      v18 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v40 + 40LL);
      if ( v18 == CProcess::GetProcessId )
        ProcessId = CProcess::GetProcessId(v40);
      else
        ProcessId = v18(v40);
      if ( (unsigned int)IsProcessAllowed(ProcessId, a2) )
      {
        Instance = ATL::CComObject<CVADServer>::CreateInstance((CVADServer **)&lpCriticalSection);
        v21 = (CVADServer *)lpCriticalSection;
        v15 = Instance;
        if ( Instance )
          goto LABEL_31;
        CriticalSection = lpCriticalSection->DebugInfo->CriticalSection;
        if ( CriticalSection == (struct _RTL_CRITICAL_SECTION *)ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
          ATL::CComObject<CAudioSessionManagerProvider>::AddRef(lpCriticalSection);
        else
          ((void (__fastcall *)(LPCRITICAL_SECTION))CriticalSection)(lpCriticalSection);
        v23 = *(int (**)(CVADServer *__hidden, struct IAudioProcess *, const unsigned __int16 *, enum _AUDCLNT_SHAREMODE, unsigned int, const struct tWAVEFORMATEX *, const struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **))(*(_QWORD *)v21 + 40LL);
        v24 = v23 == CVADServer::Initialize
            ? CVADServer::Initialize(v21, v40, a2, a3, a4, a5, a6, a7, a8, a9)
            : ((__int64 (__fastcall *)(CVADServer *, CProcess *, unsigned __int16 *, _QWORD, unsigned int, struct tWAVEFORMATEX *, struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **))v23)(
                v21,
                v40,
                a2,
                (unsigned int)a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9);
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
        v26 = (__int64 *)qword_1800E74E0;
        v27 = g_VADServerList;
        if ( qword_1800E74E0 )
        {
LABEL_26:
          v33 = *v26;
          v26[2] = (__int64)v21;
          qword_1800E74E0 = v33;
          v26[1] = 0LL;
          *v26 = v27;
          ++qword_1800E74D0;
          if ( g_VADServerList )
            *(_QWORD *)(g_VADServerList + 8) = v26;
          else
            qword_1800E74C8 = (__int64)v26;
          g_VADServerList = (__int64)v26;
          LeaveCriticalSection(&g_csVadList);
          *a10 = v21;
          v34 = *(void (__fastcall **)(CVADServer *))(*(_QWORD *)v21 + 8LL);
          if ( (char *)v34 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
            ATL::CComObject<CAudioSessionManagerProvider>::AddRef(v21);
          else
            v34(v21);
          v15 = 0;
          goto LABEL_31;
        }
        if ( dword_1800E74E8 )
        {
          if ( dword_1800E74E8 == 10LL )
            v28 = 0x1999999999999999LL;
          else
            v28 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_1800E74E8;
          if ( v28 < 0x18 )
            goto LABEL_60;
          v29 = 24LL * (unsigned int)dword_1800E74E8;
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
            *v30 = qword_1800E74D8;
            qword_1800E74D8 = (__int64)v30;
            v26 = (__int64 *)qword_1800E74E0;
            v31 = &v30[3 * (unsigned int)(dword_1800E74E8 - 1) + 1];
            for ( i = dword_1800E74E8 - 1; i >= 0; --i )
            {
              *v31 = (__int64)v26;
              v26 = v31;
              qword_1800E74E0 = (__int64)v31;
              v31 -= 3;
            }
            goto LABEL_26;
          }
        }
LABEL_60:
        ATL::AtlThrowImpl(-2147024882);
      }
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
      {
        v39 = (*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v40 + 40LL))(v40);
        WPP_SF_dS(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          83,
          (unsigned int)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
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
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x35u,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
  }
  if ( LODWORD(v36[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v36);
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v15 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      84LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v15);
  }
  if ( Timer )
    DeleteTimerQueueTimer(0LL, Timer, 0LL);
  return (unsigned int)v15;
}
