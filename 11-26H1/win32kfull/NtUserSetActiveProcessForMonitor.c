/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1401A10E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     LockProcessByClientId @ 0x1400FC590 (LockProcessByClientId.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     xxxSetActivePpiForMonitor @ 0x14023532C (xxxSetActivePpiForMonitor.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  __int64 v10; // rcx
  struct tagPROCESSINFO *ProcessInfo; // rdi
  PVOID v12; // rcx
  int v14; // ecx
  _BYTE v15[16]; // [rsp+38h] [rbp-9h] BYREF
  _BYTE v16[24]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v17; // [rsp+60h] [rbp+1Fh]
  PVOID Object; // [rsp+B8h] [rbp+77h] BYREF

  v3 = (void *)a1;
  Object = 0LL;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  v6 = PtiCurrent(v5);
  if ( !(unsigned int)IAMThreadAccessGranted(v6)
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v7) + 61) + 8LL) + 168LL) )
  {
    v14 = 5;
    goto LABEL_16;
  }
  if ( a2 )
  {
    v4 = ValidateHmonitor(a2);
    if ( !v4 )
    {
LABEL_15:
      v14 = 87;
LABEL_16:
      v8 = 0;
      UserSetLastError(v14);
      goto LABEL_10;
    }
  }
  v8 = 1;
  if ( (unsigned int)((__int64 (*)(void))Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline)() )
  {
    CLockProcessByPid::CLockProcessByPid(v16, (unsigned int)v3, 0x2000LL);
    if ( !v17 )
    {
      v8 = 0;
      UserSetLastError(87);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16);
      goto LABEL_10;
    }
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v16);
    if ( !ProcessInfo )
    {
      v8 = 0;
      UserSetLastError(87);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16);
      goto LABEL_8;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16);
  }
  else
  {
    if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
      goto LABEL_15;
    ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(Object);
    ProcessInfo = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
    {
      v8 = 0;
      UserSetLastError(87);
      goto LABEL_8;
    }
  }
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v10) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
    xxxSetActivePpiForMonitor(ProcessInfo, v4);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  }
  else
  {
    xxxSetActivePpiForMonitor(ProcessInfo, v4);
  }
LABEL_8:
  v12 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_10:
  LeaveCrit(v12);
  return v8;
}
