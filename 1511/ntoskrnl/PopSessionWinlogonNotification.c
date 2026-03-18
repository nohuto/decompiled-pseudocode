/*
 * XREFs of PopSessionWinlogonNotification @ 0x1403B55B0
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1403B56AC (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 *     PopAcquireAdaptiveLock @ 0x1404C4150 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1404C50D8 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x1404C62E8 (PopDiagTraceSessionStates.c)
 *     PopUpdateTimeouts @ 0x1404F2F04 (PopUpdateTimeouts.c)
 *     PopLazySensorActiveInput @ 0x14063C538 (PopLazySensorActiveInput.c)
 */

ULONG __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v4; // bl
  const EVENT_DESCRIPTOR *v5; // rcx
  int v6; // edi
  const char *v7; // rax
  const char *v8; // r8
  ULONG result; // eax
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v4 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)&POP_ETW_ADPM_SESSION_LOCKED;
  v6 = 0;
  v11 = 0LL;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5);
  v7 = "Locked";
  if ( !v2 )
    v7 = "Unlocked";
  v8 = "Console";
  if ( !v4 )
    v8 = "Remote";
  result = PopPrintEx(3u, "PopAdaptive:>>>>> %s session %u is %s\n", v8, a1, v7);
  if ( v4 )
  {
    PopAcquireAdaptiveLock(0LL);
    if ( v2 )
    {
      byte_1402DCFF4 = 1;
      LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
      LODWORD(v11) = LockConsoleTimeoutUnsafe;
      if ( LockConsoleTimeoutUnsafe )
      {
        byte_1402DCFF5 = 1;
        HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
        BYTE1(qword_1402DCFB0) = 1;
        PopUpdateTimeouts(a1, &v11, 0LL);
      }
    }
    else
    {
      byte_1402DCFF4 = 0;
      if ( byte_1402DCFF5 )
      {
        byte_1402DCFF5 = 0;
        PopLazySensorActiveInput(a1);
      }
    }
    PopReleaseAdaptiveLock();
    LOBYTE(v6) = v2 != 0;
    LODWORD(v11) = v6;
    return PopSetPowerSettingValueAcDc(&GUID_CONSOLE_LOCKED, 4LL, &v11);
  }
  return result;
}
