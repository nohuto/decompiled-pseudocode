/*
 * XREFs of PopSessionWinlogonNotification @ 0x1403E2A1C
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1403E2B18 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
 *     PopAcquireAdaptiveLock @ 0x1404D1254 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1404D2038 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x1404D27C4 (PopDiagTraceSessionStates.c)
 *     PopUpdateTimeouts @ 0x14052E8F0 (PopUpdateTimeouts.c)
 *     PopLazySensorActiveInput @ 0x140674C3C (PopLazySensorActiveInput.c)
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
      byte_1403023F4 = 1;
      LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
      LODWORD(v11) = LockConsoleTimeoutUnsafe;
      if ( LockConsoleTimeoutUnsafe && !byte_1403023F5 )
      {
        byte_1403023F6 = 1;
        HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
        BYTE1(qword_140302430) = 1;
        PopUpdateTimeouts(a1, &v11, 0LL);
      }
    }
    else
    {
      byte_1403023F4 = 0;
      if ( byte_1403023F6 )
      {
        byte_1403023F6 = 0;
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
