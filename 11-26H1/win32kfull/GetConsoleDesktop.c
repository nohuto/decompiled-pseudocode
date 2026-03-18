/*
 * XREFs of GetConsoleDesktop @ 0x1401C6DA0
 * Callers:
 *     _OpenThreadDesktop @ 0x1401C69B4 (_OpenThreadDesktop.c)
 *     _GetThreadDesktop @ 0x1401C6C14 (_GetThreadDesktop.c)
 *     NtUserCheckWindowThreadDesktop @ 0x1402B01C0 (NtUserCheckWindowThreadDesktop.c)
 * Callees:
 *     LockProcessByClientId @ 0x1400FC590 (LockProcessByClientId.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1401C6EF0 (-GetConsoleHostProcess@@YAJKPEAPEAX@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall GetConsoleDesktop(unsigned int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  PVOID v7; // rbx
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  PVOID v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  PVOID Object[2]; // [rsp+38h] [rbp-9h] BYREF
  char v16[8]; // [rsp+48h] [rbp+7h] BYREF
  int v17; // [rsp+50h] [rbp+Fh]

  Object[0] = 0LL;
  if ( (int)GetConsoleHostProcess(a1, Object) < 0 )
    return 3221225485LL;
  v7 = Object[0];
  if ( !Object[0] )
    return 3221225485LL;
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v16, (__int64)v7, 4096, v8, 1);
    v9 = v17;
    if ( v17 < 0 )
    {
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16);
      return v9;
    }
    *a4 = (__int64)CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v16);
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16);
  }
  else
  {
    Object[0] = 0LL;
    result = LockProcessByClientId(v7, (PEPROCESS *)Object);
    if ( (int)result < 0 )
      return result;
    ProcessWin32Process = PsGetProcessWin32Process(Object[0]);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v12 = Object[0];
    *a4 = ProcessWin32Process;
    ObfDereferenceObject(v12);
  }
  v13 = *a4;
  if ( !*a4 )
    return 3221225480LL;
  v14 = *(_QWORD *)(v13 + 336);
  if ( !v14 )
    return 3221225480LL;
  *a2 = *(_QWORD *)(v14 + 624);
  if ( a3 )
    *a3 = *(_QWORD *)(*(_QWORD *)(v13 + 336) + 488LL);
  return 0LL;
}
