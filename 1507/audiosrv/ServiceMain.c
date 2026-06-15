/*
 * XREFs of ServiceMain @ 0x180038CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WppInitUm @ 0x180038AB8 (WppInitUm.c)
 *     AudioWriteLogHeader @ 0x180038B38 (AudioWriteLogHeader.c)
 *     StringCbCopyW @ 0x180038F18 (StringCbCopyW.c)
 *     ReportStatusToSCMgr @ 0x1800396A0 (ReportStatusToSCMgr.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ServiceMain(unsigned int a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r9
  DWORD v5; // eax
  LPVOID v6; // rbx
  __int64 v7; // r9
  __int64 dwServiceSpecificExitCode; // rdx
  HANDLE v9; // rcx
  LPVOID v10; // rax
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rax
  SIZE_T v15; // r15
  wchar_t *v16; // rcx
  HANDLE Thread; // rax
  DWORD CurrentProcessId; // eax
  __int64 v19; // rdx
  unsigned int i; // edi
  void *v21; // r8

  v2 = a1;
  if ( !a1 )
    return;
  qword_1800E81B8 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  qword_1800E81B0 = 0LL;
  *(_QWORD *)&WPP_GLOBAL_Control.Data1 = &WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  WppInitUm();
  AudioWriteLogHeader(*a2);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    CurrentProcessId = GetCurrentProcessId();
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xBu,
      (__int64)&WPP_eb2fdc9f7b10d3db27f8d70b9a146365_Traceguids,
      CurrentProcessId);
  }
  sshStatusHandle = RegisterServiceCtrlHandlerExW((LPCWSTR)*a2, (LPHANDLER_FUNCTION_EX)ServiceCtrl, 0LL);
  if ( !sshStatusHandle )
    return;
  ssStatus.dwServiceType = 32;
  ssStatus.dwServiceSpecificExitCode = 0;
  if ( !(unsigned int)ReportStatusToSCMgr(2LL, 0LL, 5000LL, v4) )
    return;
  hEventShutdown = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEventShutdown )
  {
    ssStatus.dwServiceSpecificExitCode = GetLastError();
    dwServiceSpecificExitCode = ssStatus.dwServiceSpecificExitCode;
LABEL_27:
    ReportStatusToSCMgr(1LL, dwServiceSpecificExitCode, 0LL, v7);
    return;
  }
  v5 = (*(__int64 (__fastcall **)(HANDLE *, __int64, HANDLE, __int64 (__fastcall *)(), _QWORD, int))(gpSvchostSharedGlobals + 192))(
         &hEventShutdownWait,
         *a2,
         hEventShutdown,
         OnServiceShutdown,
         0LL,
         8);
  ssStatus.dwServiceSpecificExitCode = v5;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xCu,
      (__int64)&WPP_eb2fdc9f7b10d3db27f8d70b9a146365_Traceguids,
      v5);
  }
  v6 = HeapAlloc(hHeap, 0, 0x18uLL);
  dwServiceSpecificExitCode = 8LL;
  if ( !v6 )
  {
    ssStatus.dwServiceSpecificExitCode = 8;
    goto LABEL_27;
  }
  v9 = hHeap;
  *(_QWORD *)v6 = sshStatusHandle;
  *((_DWORD *)v6 + 2) = v2;
  v10 = HeapAlloc(v9, 8u, 8 * v2);
  *((_QWORD *)v6 + 2) = v10;
  if ( v10 )
  {
    v12 = 0;
    if ( (_DWORD)v2 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( *(_WORD *)(a2[v13] + 2 * v14) );
        v15 = (unsigned int)(2 * v14 + 2);
        *(_QWORD *)(v13 * 8 + *((_QWORD *)v6 + 2)) = HeapAlloc(hHeap, 8u, v15);
        v16 = *(wchar_t **)(v13 * 8 + *((_QWORD *)v6 + 2));
        if ( !v16 || StringCbCopyW(v16, (unsigned int)v15, (STRSAFE_LPCWSTR)a2[v13]) < 0 )
          break;
        ++v12;
        ++v13;
        if ( v12 >= (unsigned int)v2 )
          goto LABEL_22;
      }
      ssStatus.dwServiceSpecificExitCode = 8;
      v19 = 8LL;
    }
    else
    {
LABEL_22:
      Thread = CreateThread(0LL, 0LL, AudioSrvStartupThread, v6, 0, 0LL);
      if ( Thread )
      {
        CloseHandle(Thread);
        return;
      }
      ssStatus.dwServiceSpecificExitCode = GetLastError();
      v19 = ssStatus.dwServiceSpecificExitCode;
    }
  }
  else
  {
    ssStatus.dwServiceSpecificExitCode = 8;
    v19 = 8LL;
  }
  ReportStatusToSCMgr(1LL, v19, 0LL, v11);
  if ( *((_QWORD *)v6 + 2) )
  {
    for ( i = 0; i < *((_DWORD *)v6 + 2); ++i )
    {
      v21 = *(void **)(*((_QWORD *)v6 + 2) + 8LL * i);
      if ( v21 )
        HeapFree(hHeap, 0, v21);
    }
    HeapFree(hHeap, 0, *((LPVOID *)v6 + 2));
  }
  HeapFree(hHeap, 0, v6);
}
