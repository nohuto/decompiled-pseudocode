/*
 * XREFs of ServiceMain @ 0x180045270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ReportStatusToSCMgr @ 0x18003DC08 (ReportStatusToSCMgr.c)
 *     StringCbCopyW @ 0x1800454E8 (StringCbCopyW.c)
 *     AudioWriteLogHeader @ 0x18004556C (AudioWriteLogHeader.c)
 *     WppInitUm @ 0x1800456CC (WppInitUm.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ServiceMain(unsigned int a1, LPCWSTR *a2)
{
  __int64 v2; // rsi
  DWORD v4; // eax
  LPVOID v5; // rbx
  DWORD dwServiceSpecificExitCode; // edx
  HANDLE v7; // rcx
  LPVOID v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // rax
  SIZE_T v12; // r15
  wchar_t *v13; // rcx
  HANDLE Thread; // rax
  DWORD CurrentProcessId; // eax
  DWORD v16; // edx
  unsigned int i; // edi
  void *v18; // r8

  v2 = a1;
  if ( !a1 )
    return;
  qword_1800E61B8 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  qword_1800E61B0 = 0LL;
  WPP_GLOBAL_Control = (TraceLoggingHProvider)&WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  WppInitUm();
  AudioWriteLogHeader(*a2);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    CurrentProcessId = GetCurrentProcessId();
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_eb2fdc9f7b10d3db27f8d70b9a146365_Traceguids,
      CurrentProcessId);
  }
  sshStatusHandle = RegisterServiceCtrlHandlerExW(*a2, (LPHANDLER_FUNCTION_EX)ServiceCtrl, 0LL);
  if ( !sshStatusHandle )
    return;
  ssStatus.dwServiceType = 32;
  ssStatus.dwServiceSpecificExitCode = 0;
  if ( !(unsigned int)ReportStatusToSCMgr(2u, 0, 0x1388u) )
    return;
  hEventShutdown = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEventShutdown )
  {
    ssStatus.dwServiceSpecificExitCode = GetLastError();
    dwServiceSpecificExitCode = ssStatus.dwServiceSpecificExitCode;
LABEL_27:
    ReportStatusToSCMgr(1u, dwServiceSpecificExitCode, 0);
    return;
  }
  v4 = (*(__int64 (__fastcall **)(HANDLE *, LPCWSTR, HANDLE, __int64 (__fastcall *)(), _QWORD, int))(gpSvchostSharedGlobals + 192))(
         &hEventShutdownWait,
         *a2,
         hEventShutdown,
         OnServiceShutdown,
         0LL,
         8);
  ssStatus.dwServiceSpecificExitCode = v4;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_eb2fdc9f7b10d3db27f8d70b9a146365_Traceguids, v4);
  }
  v5 = HeapAlloc(hHeap, 0, 0x18uLL);
  dwServiceSpecificExitCode = 8;
  if ( !v5 )
  {
    ssStatus.dwServiceSpecificExitCode = 8;
    goto LABEL_27;
  }
  v7 = hHeap;
  *(_QWORD *)v5 = sshStatusHandle;
  *((_DWORD *)v5 + 2) = v2;
  v8 = HeapAlloc(v7, 8u, 8 * v2);
  *((_QWORD *)v5 + 2) = v8;
  if ( v8 )
  {
    v9 = 0;
    if ( (_DWORD)v2 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v10][v11] );
        v12 = (unsigned int)(2 * v11 + 2);
        *(_QWORD *)(v10 * 8 + *((_QWORD *)v5 + 2)) = HeapAlloc(hHeap, 8u, v12);
        v13 = *(wchar_t **)(v10 * 8 + *((_QWORD *)v5 + 2));
        if ( !v13 || StringCbCopyW(v13, (unsigned int)v12, a2[v10]) < 0 )
          break;
        ++v9;
        ++v10;
        if ( v9 >= (unsigned int)v2 )
          goto LABEL_22;
      }
      ssStatus.dwServiceSpecificExitCode = 8;
      v16 = 8;
    }
    else
    {
LABEL_22:
      Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)AudioSrvStartupThread, v5, 0, 0LL);
      if ( Thread )
      {
        CloseHandle(Thread);
        return;
      }
      ssStatus.dwServiceSpecificExitCode = GetLastError();
      v16 = ssStatus.dwServiceSpecificExitCode;
    }
  }
  else
  {
    ssStatus.dwServiceSpecificExitCode = 8;
    v16 = 8;
  }
  ReportStatusToSCMgr(1u, v16, 0);
  if ( *((_QWORD *)v5 + 2) )
  {
    for ( i = 0; i < *((_DWORD *)v5 + 2); ++i )
    {
      v18 = *(void **)(*((_QWORD *)v5 + 2) + 8LL * i);
      if ( v18 )
        HeapFree(hHeap, 0, v18);
    }
    HeapFree(hHeap, 0, *((LPVOID *)v5 + 2));
  }
  HeapFree(hHeap, 0, v5);
}
