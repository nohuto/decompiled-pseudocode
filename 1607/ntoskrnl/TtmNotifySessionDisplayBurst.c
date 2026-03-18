/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x1406789B4
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopNotifyConsoleDisplayBurst @ 0x140674DF0 (PopNotifyConsoleDisplayBurst.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140546B74 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x140677AE8 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(int a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = TtmpAcquireSessionById(&v9, a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    TtmiResetTerminalTimeouts(v9, *(_QWORD *)(v9 + 32), a2, 1111778643, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst", 2244, v3, v3);
  }
  return v4;
}
