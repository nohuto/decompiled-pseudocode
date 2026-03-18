/*
 * XREFs of NtUserEnableShellWindowManagementBehavior @ 0x14023F4A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?Registered@ShellWindowManagement@@YA_NXZ @ 0x14023F5B0 (-Registered@ShellWindowManagement@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserEnableShellWindowManagementBehavior(int a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // rsi
  int v8; // r15d
  int v9; // eax
  ShellWindowManagement *v10; // rcx
  int v11; // edi
  int v13; // ecx
  __int64 v14; // rcx

  EnterCrit(0LL, 0LL);
  v5 = 0LL;
  v6 = PtiCurrent(v4);
  v7 = *((_QWORD *)v6 + 61);
  v8 = *(_DWORD *)(v7 + 336);
  if ( (a2 & 0xC) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7911LL);
  LOBYTE(v9) = IAMThreadAccessGranted(v6);
  if ( !v9 )
  {
    v13 = 5;
LABEL_11:
    UserSetLastError(v13);
    UserSessionSwitchLeaveCrit(v14);
    return 0LL;
  }
  if ( (a2 & 0x8FFFF800) != 0 )
  {
    v13 = 87;
    goto LABEL_11;
  }
  v11 = a2 & a1 | v8 & ~a1;
  if ( !v11 || ShellWindowManagement::Registered(v10) )
  {
    *(_DWORD *)(v7 + 336) = v11;
    v5 = 1LL;
  }
  else
  {
    *(_DWORD *)(v7 + 336) = 0;
    UserSetLastError(5023);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
