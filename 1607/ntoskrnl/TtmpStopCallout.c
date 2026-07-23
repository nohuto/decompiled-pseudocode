/*
 * XREFs of TtmpStopCallout @ 0x1406777A0
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1406771AC (TtmiSessionDeviceListWorker.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1406773A0 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1406773F8 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140677474 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1406777D8 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     TtmiLogCalloutStop @ 0x14067A5DC (TtmiLogCalloutStop.c)
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
