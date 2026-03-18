/*
 * XREFs of xxxConsoleControl @ 0x140278BE4
 * Callers:
 *     NtUserConsoleControl @ 0x14025F390 (NtUserConsoleControl.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1401A4808 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     LockThreadByClientId @ 0x1401C702C (LockThreadByClientId.c)
 *     ProcessInfoFromPID @ 0x1402192BC (ProcessInfoFromPID.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x14022DB70 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, _QWORD *a2, int a3)
{
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  PEPROCESS *ProcessInfo; // r14
  void *v19; // rcx
  PEPROCESS ThreadProcess; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  PETHREAD v25; // rcx
  void *v26; // rcx
  char v27; // r15
  NTSTATUS v28; // eax
  PETHREAD v29; // r12
  int ProcessSessionId; // ebx
  __int64 v31; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  bool v35; // r13
  int v36; // ebx
  __int64 UserSessionState; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // r13
  int v41; // ebx
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rax
  unsigned int v46; // eax
  _BYTE v48[80]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v49[128]; // [rsp+A0h] [rbp-29h] BYREF
  PETHREAD Thread; // [rsp+148h] [rbp+7Fh] BYREF

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 != 8 )
      return (unsigned int)-1073741811;
    return (unsigned int)xxxUserNotifyConsoleApplication((struct _CONSOLE_PROCESS_INFO *)a2, (__int64)a2);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5529LL);
    v46 = -1073741637;
    if ( a3 != 24 )
      return (unsigned int)-1073741811;
    return v46;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 == 24 )
    {
      xxxSetConsoleCaretInfo((struct _CONSOLE_CARET_INFO *)a2);
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 == 16 )
    {
      v45 = ValidateHwnd(*a2);
      if ( v45 )
      {
        *(_DWORD *)(*(_QWORD *)(v45 + 16) + 916LL) = *((_DWORD *)a2 + 2);
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 == 16 )
    {
      v26 = (void *)*a2;
      v27 = 1;
      Thread = 0LL;
      v28 = ObReferenceObjectByHandle(v26, 0x200u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Thread, 0LL);
      v29 = Thread;
      v5 = v28;
      if ( v28 < 0 )
        return v5;
      ProcessSessionId = PsGetProcessSessionIdEx(Thread);
      if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId(v31) )
      {
        ProcessWin32Process = PsGetProcessWin32Process(v29);
        v34 = ProcessWin32Process;
        if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
        {
          if ( *((_DWORD *)a2 + 2) )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v27 = 0;
            }
            v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v36 = *(_DWORD *)(ProcessWin32Process + 56);
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
              LOBYTE(v38) = v35;
              LOBYTE(v39) = v27;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v39,
                v38,
                *(_QWORD *)(UserSessionState + 69152),
                4,
                2,
                34,
                (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
                v36);
            }
            *(_DWORD *)(v34 + 12) |= 0x4080000u;
          }
          else
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v27 = 0;
            }
            v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v41 = *(_DWORD *)(ProcessWin32Process + 56);
              v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
              LOBYTE(v43) = v40;
              LOBYTE(v44) = v27;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v44,
                v43,
                *(_QWORD *)(v42 + 69152),
                4,
                2,
                35,
                (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
                v41);
            }
            *(_DWORD *)(v34 + 12) &= 0xFBF7FFFF;
          }
        }
        else
        {
          v5 = -1073741816;
        }
      }
      else
      {
        v5 = -1073741811;
      }
      v25 = v29;
      goto LABEL_34;
    }
    return (unsigned int)-1073741811;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741821;
  v5 = -1073741811;
  if ( a3 == 16 )
  {
    v5 = -1073741790;
    v11 = ValidateHwnd(*a2);
    v13 = v11;
    if ( v11 )
    {
      v14 = *(_QWORD *)(v11 + 40);
      if ( *(char *)(v14 + 19) >= 0 && (*(_BYTE *)(v14 + 18) & 4) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
        v16 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 456LL) == v16 )
        {
          if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
          {
            CLockProcessByPid::CLockProcessByPid((__int64)v48, *((int *)a2 + 2), 0, v17, 1);
            ProcessInfo = (PEPROCESS *)CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v48);
            CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v48);
          }
          else
          {
            ProcessInfo = (PEPROCESS *)ProcessInfoFromPID(*((_DWORD *)a2 + 2));
          }
          if ( ProcessInfo )
          {
            v19 = (void *)*((unsigned int *)a2 + 3);
            Thread = 0LL;
            if ( (int)LockThreadByClientId(v19, &Thread) >= 0 )
            {
              ThreadProcess = PsGetThreadProcess(Thread);
              if ( ThreadProcess && ThreadProcess == *ProcessInfo )
              {
                if ( (*(_DWORD *)(v13 + 380) & 0x8000000) != 0 )
                {
                  IsEnabledDeviceUsageNoInline = Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline();
                  v23 = *(_QWORD *)(v13 + 40);
                  if ( IsEnabledDeviceUsageNoInline )
                  {
                    CLockProcessByPid::CLockProcessByPid((__int64)v49, *(int *)(v23 + 332), 0, v22, 1);
                    v24 = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v49);
                    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v49);
                  }
                  else
                  {
                    v24 = ProcessInfoFromPID(*(_DWORD *)(v23 + 332));
                  }
                  if ( v24 )
                    tagWND::DwsUnlinkProcess(v13, v24, 1LL);
                }
                if ( *(PEPROCESS **)(*(_QWORD *)(v13 + 16) + 456LL) != ProcessInfo && IsTopLevelWindow(v13) )
                  tagWND::DwsLinkProcess(v13, ProcessInfo, 1LL);
                v5 = 0;
                *(_DWORD *)(*(_QWORD *)(v13 + 40) + 328LL) = *((_DWORD *)a2 + 3);
                *(_DWORD *)(*(_QWORD *)(v13 + 40) + 332LL) = *((_DWORD *)a2 + 2);
              }
              v25 = Thread;
LABEL_34:
              ObfDereferenceObject(v25);
            }
          }
        }
      }
    }
  }
  return v5;
}
