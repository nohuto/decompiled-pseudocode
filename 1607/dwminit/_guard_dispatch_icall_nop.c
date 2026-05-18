/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1800081B0
 * Callers:
 *     _TlgEnableCallback @ 0x180001010 (_TlgEnableCallback.c)
 *     ??1?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAA@XZ @ 0x180003724 (--1-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A.c)
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180003D04 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180004218 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180004240 (--3@YAXPEAX@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180004C24 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004CB8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x180004E1C (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x1800055D8 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180005670 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x180005690 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@IIIII@Z @ 0x1800065A8 (-ProcessEvent@-$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimo_ea_1800065A8.c)
 *     _onexit_0 @ 0x180006E54 (_onexit_0.c)
 *     _CRT_INIT @ 0x180007A2C (_CRT_INIT.c)
 *     __DllMainCRTStartup @ 0x180007CB0 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
