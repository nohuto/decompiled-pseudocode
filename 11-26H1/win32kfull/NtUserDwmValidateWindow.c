/*
 * XREFs of NtUserDwmValidateWindow @ 0x1401A1B80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDesktopView @ 0x14005A3B0 (GetDesktopView.c)
 *     LockProcessByClientId @ 0x1400FC590 (LockProcessByClientId.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A4E94 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  void *v2; // rsi
  PVOID v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *ProcessWin32Process; // rax
  _QWORD *DesktopView; // rax
  unsigned int v9; // edi
  bool v10; // zf
  struct tagTHREADINFO *v12; // rax
  struct tagPROCESSINFO *ProcessInfo; // rax
  _QWORD *v14; // rbx
  _BYTE v15[8]; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h]
  char v17; // [rsp+44h] [rbp-3Ch]
  __int64 v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF

  v2 = (void *)a2;
  Object = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( !v5 )
  {
    v9 = 0;
    goto LABEL_11;
  }
  if ( !(unsigned int)IsCurrentProcessDwm() )
    goto LABEL_19;
  if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v6) )
  {
    if ( (int)LockProcessByClientId(v2, (PEPROCESS *)&Object) >= 0 )
    {
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process && *ProcessWin32Process )
      {
        DesktopView = GetDesktopView((__int64)ProcessWin32Process, *(_QWORD *)(v5 + 24));
        v9 = 0;
        v10 = DesktopView == 0LL;
LABEL_8:
        LOBYTE(v9) = !v10;
        goto LABEL_9;
      }
      v9 = 0;
      UserSetLastError(5);
      goto LABEL_9;
    }
LABEL_19:
    v9 = 0;
    UserSetLastError(5);
    goto LABEL_11;
  }
  CLockProcessByPid::CLockProcessByPid(v15, v2, 0LL);
  if ( v16 >= 0 )
  {
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v15);
    if ( ProcessInfo )
    {
      v14 = GetDesktopView((__int64)ProcessInfo, *(_QWORD *)(v5 + 24));
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v15);
      v9 = 0;
      v10 = v14 == 0LL;
      goto LABEL_8;
    }
    v9 = 0;
    UserSetLastError(5);
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v15);
LABEL_9:
    v4 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_11;
  }
  v9 = 0;
  UserSetLastError(5);
  if ( v18 )
  {
    if ( (v17 & 8) != 0 )
    {
      v12 = PtiCurrent((__int64)v4);
      *((_QWORD *)v12 + 47) = v19;
    }
    CLockProcessByPid::_Cleanup((CLockProcessByPid *)v15);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v4);
  return v9;
}
