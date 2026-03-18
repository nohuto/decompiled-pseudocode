/*
 * XREFs of DeviceSlot_D0EntryCleanupState @ 0x1C00053A8
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0007640 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0005400 (DeviceSlot_DisableAllDeviceSlots.c)
 *     DeviceSlot_ScratchpadBuffersInitialize @ 0x1C0005444 (DeviceSlot_ScratchpadBuffersInitialize.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00079B0 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall DeviceSlot_D0EntryCleanupState(__int64 a1, int a2)
{
  char v4; // [rsp+30h] [rbp-18h]

  v4 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    a2,
    9,
    18,
    (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids,
    a1,
    v4);
  DeviceSlot_ScratchpadBuffersInitialize(a1);
  return DeviceSlot_DisableAllDeviceSlots(a1);
}
