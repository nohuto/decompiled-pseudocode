/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1402B58B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x1402AD928 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, ACCESS_MASK a2)
{
  const struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdi
  struct tagTHREADINFO *v10; // r14
  KPROCESSOR_MODE AccessMode; // bp
  __int64 *v12; // rbx
  UIPrivilegeIsolation *v13; // rcx
  const struct tagUIPI_INFO *v14; // r8
  bool v15; // al
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // ecx
  void *v19; // rbx
  HANDLE ThreadProcessId; // rax
  PEPROCESS Process; // [rsp+40h] [rbp-38h] BYREF
  void *Handle; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = (const struct tagTHREADINFO *)EnterSharedCrit(0LL, 1LL);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  if ( v6 )
  {
    if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      Handle = GetWindowProcessHandleUnsafe(v6, v4, a2);
      goto LABEL_16;
    }
    v8 = PtiCurrent(v7);
    v9 = *((_QWORD *)v6 + 2);
    v10 = v8;
    AccessMode = 0;
    if ( *(_QWORD *)(v9 + 488) != *((_QWORD *)v8 + 61) )
      goto LABEL_14;
    v12 = (__int64 *)((char *)v8 + 456);
    if ( a2 != 120 && (!(unsigned int)IsShellProcess(*v12) || a2 != 4096) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 28476);
LABEL_14:
      v18 = 5;
LABEL_15:
      UserSetLastError(v18);
      goto LABEL_16;
    }
    if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    {
      v17 = *(_QWORD *)(v9 + 456);
      v16 = (_DWORD *)*v12;
    }
    else
    {
      v15 = UIPrivilegeIsolation::Enforced(v13);
      v16 = (_DWORD *)*v12;
      v17 = *(_QWORD *)(v9 + 456);
      if ( !v15 )
      {
        if ( *(_DWORD *)(v17 + 764) != v16[191] || *(_DWORD *)(v17 + 768) != v16[192] )
          goto LABEL_13;
        goto LABEL_21;
      }
    }
    if ( !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(v16 + 216),
            (const struct tagUIPI_INFO *)(v17 + 864),
            v14) )
    {
      if ( *(int *)(*v12 + 12) >= 0 )
      {
LABEL_13:
        Handle = 0LL;
        goto LABEL_14;
      }
      AccessMode = 1;
    }
LABEL_21:
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 520), 0, 0) & 0xC) == 0
      && !(unsigned int)IsProcessDwm(**((_QWORD **)v10 + 57)) )
    {
      Process = 0LL;
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
      if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
      {
        ObOpenObjectByPointer(Process, 0, 0LL, a2, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
        ObfDereferenceObject(Process);
        goto LABEL_16;
      }
      Handle = 0LL;
      v18 = 87;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
LABEL_16:
  v19 = Handle;
  UserSessionSwitchLeaveCrit(v5);
  return v19;
}
