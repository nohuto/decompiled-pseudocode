/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x140674FA4
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x140009D24 (PopDeepSleepClearDisengageReason.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1406728D0 (PopTraceSystemIdleS0LowPowerDoze.c)
 */

void PopIdleAoAcDozeToS4()
{
  __int64 v0; // [rsp+30h] [rbp-30h] BYREF
  int v1; // [rsp+38h] [rbp-28h]
  _QWORD v2[4]; // [rsp+40h] [rbp-20h] BYREF

  PopAcquirePolicyLock();
  PopTraceSystemIdleS0LowPowerDoze();
  dword_1403032F0 = 0;
  memset(v2, 0, 24);
  if ( dword_140303308 == 1 )
    goto LABEL_10;
  if ( dword_140303308 != 2 )
  {
    if ( dword_140303308 == 3 )
    {
      LODWORD(v2[0]) = 13;
      goto LABEL_11;
    }
    if ( dword_140303308 == 4 )
    {
      LODWORD(v2[0]) = 14;
      goto LABEL_11;
    }
LABEL_10:
    LODWORD(v2[0]) = 6;
    goto LABEL_11;
  }
  LODWORD(v2[0]) = 11;
  if ( qword_1403033F8
    && MEMORY[0xFFFFF78000000008] - qword_1403033F8 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    LODWORD(v2[0]) = 12;
  }
LABEL_11:
  HIDWORD(v2[0]) = 128;
  v1 = 0;
  v0 = 0x8000000400000003uLL;
  PopExecutePowerAction((__int64)v2, 0, &v0, 5, 1u);
  PopReleasePolicyLock();
  _InterlockedAnd(&dword_14030330C, 0);
  PopDeepSleepClearDisengageReason(4);
}
