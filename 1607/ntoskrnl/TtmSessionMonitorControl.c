/*
 * XREFs of TtmSessionMonitorControl @ 0x140678D3C
 * Callers:
 *     PopControlMonitor @ 0x14066FEF4 (PopControlMonitor.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405470B4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiTerminalMonitorControl @ 0x140677EB8 (TtmiTerminalMonitorControl.c)
 *     TtmiLogSessionMonitorControl @ 0x14067BBF4 (TtmiLogSessionMonitorControl.c)
 */

__int64 __fastcall TtmSessionMonitorControl(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = TtmpAcquireSessionById(&v14, a1);
  v7 = v14;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v6 = TtmiTerminalMonitorControl(v14, *(unsigned int **)(v14 + 32), a2, a3);
    v8 = v6;
    if ( v6 >= 0 )
      goto LABEL_6;
    v9 = 2506;
  }
  else
  {
    v9 = 2494;
  }
  TtmiLogError("TtmSessionMonitorControl", v9, v6, v6);
LABEL_6:
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
  TtmiLogSessionMonitorControl(a1, a2, a3, v8);
  return v8;
}
