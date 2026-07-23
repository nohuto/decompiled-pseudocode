/*
 * XREFs of TtmpStartCallout @ 0x140677730
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1406771AC (TtmiSessionDeviceListWorker.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1406773A0 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1406773F8 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140677474 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1406777D8 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmiLogCalloutStart @ 0x14067A4A8 (TtmiLogCalloutStart.c)
 */

__int64 __fastcall TtmpStartCallout(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 8) = a3;
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  TtmiLogCalloutStart(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 24), a4, a5);
  result = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008];
  return result;
}
