/*
 * XREFs of xxxWaitForInputIdle @ 0x14022D64C
 * Callers:
 *     NtUserWaitForInputIdle @ 0x14022D5E0 (NtUserWaitForInputIdle.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     LockProcessByClientId @ 0x1400FC590 (LockProcessByClientId.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1402157B8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     WaitOnPseudoEvent @ 0x140229124 (WaitOnPseudoEvent.c)
 *     ?LockW32Process@@YAXPEAU_W32PROCESS@@PEAU?$Win32RawOptionalLockedItemAlways@U_W32PROCESS@@$0A@@@@Z @ 0x1402456B0 (-LockW32Process@@YAXPEAU_W32PROCESS@@PEAU-$Win32RawOptionalLockedItemAlways@U_W32PROCESS@@$0A@@@.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2)
{
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // r9
  struct tagPROCESSINFO *ProcessInfo; // rax
  struct tagPROCESSINFO *v7; // rbx
  int v8; // eax
  __int64 k; // rax
  unsigned int v10; // edi
  __int64 m; // rax
  char ProcessExitProcessCalled; // al
  PVOID v14; // rcx
  __int64 ProcessWin32Process; // rax
  ULONG_PTR v16; // rbx
  int *v17; // rsi
  int v18; // eax
  __int64 i; // rax
  __int64 j; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v22; // [rsp+48h] [rbp-39h]
  _BYTE v23[8]; // [rsp+58h] [rbp-29h] BYREF
  int v24; // [rsp+60h] [rbp-21h]
  void *v25; // [rsp+70h] [rbp-11h]
  PVOID Object; // [rsp+E8h] [rbp+67h] BYREF

  Object = 0LL;
  v4 = PtiCurrent((__int64)a1);
  if ( PsGetThreadProcessId(*(PETHREAD *)v4) == a1 && v4 == *(struct tagTHREADINFO **)(*((_QWORD *)v4 + 57) + 336LL) )
    return 0xFFFFFFFFLL;
  if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) < 0 )
      return 0xFFFFFFFFLL;
    ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
    v14 = Object;
    if ( !ProcessExitProcessCalled )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      v16 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        if ( *(_QWORD *)ProcessWin32Process )
        {
          v17 = (int *)(ProcessWin32Process + 12);
          v18 = *(_DWORD *)(ProcessWin32Process + 12);
          if ( (v18 & 0x21) == 0x20 )
          {
            *v17 = v18 | 0x20000;
            for ( i = *(_QWORD *)(v16 + 328); i; i = *(_QWORD *)(i + 696) )
              _InterlockedOr((volatile signed __int32 *)(i + 520), 0x4000u);
            v22 = -1LL;
            *(_OWORD *)BugCheckParameter2 = 0LL;
            LockW32Process(v16, (ULONG_PTR)BugCheckParameter2);
            ObfDereferenceObject(Object);
            v10 = WaitOnPseudoEvent((PVOID *)(v16 + 16), a2);
            if ( v10 == 128 )
              v10 = xxxPollAndWaitForSingleObject(*(PVOID *)(v16 + 16), Object, a2);
            *v17 &= ~0x20000u;
            for ( j = *(_QWORD *)(v16 + 328); j; j = *(_QWORD *)(j + 696) )
              _InterlockedAnd((volatile signed __int32 *)(j + 520), 0xFFFFBFFF);
            if ( v22 != -1 )
              PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter2);
            return v10;
          }
        }
      }
      UserSetLastError(1471);
      v14 = Object;
    }
    ObfDereferenceObject(v14);
    return 0xFFFFFFFFLL;
  }
  CLockProcessByPid::CLockProcessByPid((__int64)v23, (__int64)a1, 4096, v5, 13);
  if ( v24 >= 0 )
  {
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v23);
    v7 = ProcessInfo;
    if ( ProcessInfo && (v8 = *((_DWORD *)ProcessInfo + 3), (v8 & 0x21) == 0x20) )
    {
      *((_DWORD *)v7 + 3) = v8 | 0x20000;
      for ( k = *((_QWORD *)v7 + 41); k; k = *(_QWORD *)(k + 696) )
        _InterlockedOr((volatile signed __int32 *)(k + 520), 0x4000u);
      v10 = WaitOnPseudoEvent((PVOID *)v7 + 2, a2);
      if ( v10 != 128
        || (v10 = xxxPollAndWaitForSingleObject(*((PVOID *)v7 + 2), v25, a2),
            (v7 = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v23)) != 0LL) )
      {
        *((_DWORD *)v7 + 3) &= ~0x20000u;
        for ( m = *((_QWORD *)v7 + 41); m; m = *(_QWORD *)(m + 696) )
          _InterlockedAnd((volatile signed __int32 *)(m + 520), 0xFFFFBFFF);
      }
    }
    else
    {
      UserSetLastError(1471);
      v10 = -1;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v23);
    return v10;
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v23);
  return 0xFFFFFFFFLL;
}
