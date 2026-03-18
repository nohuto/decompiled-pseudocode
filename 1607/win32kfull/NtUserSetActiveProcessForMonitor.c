/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C0098A20
 * Callers:
 *     <none>
 * Callees:
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     LockProcessByClientId @ 0x1C009AC70 (LockProcessByClientId.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01C98AC (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rbp
  struct tagMONITOR *v4; // rdi
  __int64 v6; // r8
  __int64 ProcessWin32Process; // rsi
  __int64 v9; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 408) + 8LL) + 160LL) )
  {
    v9 = 5LL;
LABEL_13:
    UserSetLastError(v9);
    goto LABEL_9;
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2)) == 0LL || (int)LockProcessByClientId(v3, &Object) < 0 )
  {
    v9 = 87LL;
    goto LABEL_13;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 248LL) = ProcessWin32Process;
      xxxApplyOrientationPreference();
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  ObfDereferenceObject(Object);
LABEL_9:
  LeaveCrit();
  return v2;
}
