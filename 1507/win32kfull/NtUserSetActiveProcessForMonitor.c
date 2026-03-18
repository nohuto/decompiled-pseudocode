/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C007D720
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxApplyOrientationPreference @ 0x1C007D7E8 (xxxApplyOrientationPreference.c)
 *     LockProcessByClientId @ 0x1C008077C (LockProcessByClientId.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01D03A8 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rbp
  struct tagMONITOR *v4; // rdi
  __int64 v6; // r8
  __int64 ProcessWin32Process; // rsi
  int v9; // ecx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 8LL) + 160LL) )
  {
    v9 = 5;
LABEL_13:
    UserSetLastError(v9);
    goto LABEL_9;
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2)) == 0LL || (int)LockProcessByClientId(v3, &Object) < 0 )
  {
    v9 = 87;
    goto LABEL_13;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 296LL) = ProcessWin32Process;
      xxxApplyOrientationPreference();
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  ObfDereferenceObject(Object);
LABEL_9:
  LeaveCrit();
  return v2;
}
