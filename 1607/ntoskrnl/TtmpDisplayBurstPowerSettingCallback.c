/*
 * XREFs of TtmpDisplayBurstPowerSettingCallback @ 0x1405816A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140008650 (RtlGetActiveConsoleId.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     TtmpAcquireSessionById @ 0x1405470B4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x140677BCC (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmpDisplayBurstPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // ebx
  ULONG ActiveConsoleId; // eax
  int v7; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (int)Context;
  ActiveConsoleId = RtlGetActiveConsoleId();
  v7 = TtmpAcquireSessionById(v13, ActiveConsoleId);
  if ( v7 >= 0 )
  {
    v9 = memcmp(SettingGuid, &GUID_ACDC_POWER_SOURCE, 0x10uLL);
    TtmiResetTerminalTimeouts(v13[0], *(_QWORD *)(v13[0] + 32LL), v4, (v9 != 0) + 1111769921, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
  else
  {
    TtmiLogError("TtmpDisplayBurstPowerSettingCallback", 2567, v7, -1);
  }
  return 0LL;
}
