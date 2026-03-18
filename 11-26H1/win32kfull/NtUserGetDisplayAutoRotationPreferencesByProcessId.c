/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1402B3470
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     LockProcessByClientId @ 0x1400FC590 (LockProcessByClientId.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, __int64 a2, __int64 a3)
{
  void *v5; // rsi
  int v6; // edi
  __int64 v7; // r9
  PVOID v8; // rcx
  unsigned __int64 ProcessInfo; // rsi
  __int64 ProcessWin32Process; // rax
  __int64 v12; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v14; // [rsp+68h] [rbp-40h]
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  v5 = (void *)a1;
  Object = 0LL;
  v6 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v13, (unsigned int)v5, 4096, v7, 1);
    if ( !v14 )
    {
      v6 = 0;
      UserSetLastError(87);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v13);
      goto LABEL_16;
    }
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v13);
    if ( !ProcessInfo )
    {
      v6 = 0;
      UserSetLastError(5);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v13);
      goto LABEL_14;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v13);
    goto LABEL_7;
  }
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
  {
    v6 = 0;
    UserSetLastError(87);
    goto LABEL_16;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  ProcessInfo = ProcessWin32Process;
  if ( ProcessWin32Process )
    ProcessInfo = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  if ( ProcessInfo )
  {
LABEL_7:
    RtlWriteULongToUser(a2, *(unsigned int *)(ProcessInfo + 904));
    RtlWriteULongToUser(a3, 0LL);
    goto LABEL_14;
  }
  v6 = 0;
  UserSetLastError(5);
LABEL_14:
  v8 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_16:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
