/*
 * XREFs of PopSessionWinlogonNotification @ 0x14040A0DC
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     PopReleaseAdaptiveLock @ 0x14055DBB8 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x14055DCE8 (PopAcquireAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x14055DDB8 (PopDiagTraceSessionStates.c)
 *     PopUpdateTimeouts @ 0x14055DE64 (PopUpdateTimeouts.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 *     PopLazySensorActiveInput @ 0x1406BCB94 (PopLazySensorActiveInput.c)
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
  int v10; // ecx
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
      v10 = PopAdaptiveLockConsoleTimeout;
      byte_14032D354 = 1;
      if ( PopAdaptiveLockConsoleTimeout > (unsigned int)PopDisplayTimeout )
        v10 = PopDisplayTimeout;
      LODWORD(v11) = v10;
      if ( v10 )
      {
        HIDWORD(PopLazyContext) = v10;
        byte_14032D355 = 1;
        BYTE1(qword_14032D390) = 1;
        PopUpdateTimeouts(a1, &v11, 0LL);
      }
    }
    else
    {
      byte_14032D354 = 0;
      if ( byte_14032D355 )
      {
        byte_14032D355 = 0;
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
