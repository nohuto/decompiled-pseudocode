/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1406788B4
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1404F04D8 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140546B74 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x140677AE8 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmNotifyConsoleUserPresent(unsigned int a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = TtmpAcquireSessionById(&v10, a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    TtmiResetTerminalTimeouts(v10, *(_QWORD *)(v10 + 32), a2, 1347765070, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 2293, v4, -1);
  }
  return TtmiLogConsoleUserPresent(a1, a2, v5);
}
