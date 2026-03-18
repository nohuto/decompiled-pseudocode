/*
 * XREFs of xxxActivateDebugger @ 0x1402F0D94
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     LockProcessByClientId @ 0x1400FC590 (LockProcessByClientId.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_BOOL8 __fastcall xxxActivateDebugger(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 UserGdiSessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  void *ThreadProcess; // rax
  __int64 ProcessDebugPort; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _BYTE v28[8]; // [rsp+20h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v30[6]; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+60h] [rbp-A0h]
  HANDLE ProcessId; // [rsp+70h] [rbp-90h]
  HANDLE ThreadId; // [rsp+78h] [rbp-88h]

  memset_0(v30, 0, 0x3B8uLL);
  Object = 0LL;
  if ( (a1 & 2) != 0 )
    return 0LL;
  v4 = a1 & 4;
  if ( v4 )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v3);
    if ( !PsGetProcessDebugPort(*(_QWORD *)(UserGdiSessionState + 40)) )
      return 0LL;
    v7 = W32GetUserGdiSessionState(v6);
    ProcessId = PsGetProcessId(*(PEPROCESS *)(v7 + 40));
  }
  else
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v3, v2) + 18928) )
      return 0LL;
    v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18928);
    if ( !*(_QWORD *)(v13 + 104) )
      return 0LL;
    UserSessionState = W32GetUserSessionState(v13, v12);
    ProcessId = PsGetThreadProcessId(**(PETHREAD **)(*(_QWORD *)(UserSessionState + 18928) + 104LL));
    v17 = W32GetUserSessionState(v16, v15);
    ThreadId = PsGetThreadId(**(PETHREAD **)(*(_QWORD *)(v17 + 18928) + 104LL));
    if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      v20 = W32GetUserSessionState(v19, v18);
      ThreadProcess = PsGetThreadProcess(**(PETHREAD **)(*(_QWORD *)(v20 + 18928) + 104LL));
      Object = ThreadProcess;
    }
    else
    {
      if ( (int)LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) < 0 )
        return 0LL;
      ThreadProcess = Object;
    }
    ProcessDebugPort = PsGetProcessDebugPort(ThreadProcess);
    if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
      ObfDereferenceObject(Object);
    if ( !ProcessDebugPort )
      return 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 71272) )
  {
    LOBYTE(v23) = 1;
    v30[0] = 5242920LL;
    v30[5] = 0LL;
    v31 = 197635;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v28, v23);
    v26 = W32GetUserSessionState(v25, v24);
    LpcRequestPort(*(_QWORD *)(v26 + 71272), v30);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v28);
  }
  return v4 != 0;
}
