/*
 * XREFs of TtmpStopCallout @ 0x1406776BC
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1406770C8 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1406772BC (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x140677314 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140677390 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1406776F4 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     TtmiLogCalloutStop @ 0x14067A4F8 (TtmiLogCalloutStop.c)
 */

__int64 __fastcall TtmpStopCallout(__int64 a1, int a2)
{
  TtmiLogCalloutStop(
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    *(_DWORD *)(a1 + 16),
    a2,
    MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 24));
  return TtmpAcquireSessionLock();
}
