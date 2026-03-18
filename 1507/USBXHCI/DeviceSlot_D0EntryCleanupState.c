/*
 * XREFs of DeviceSlot_D0EntryCleanupState @ 0x1C0001460
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0001410 (DeviceSlot_DisableAllDeviceSlots.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0004990 (WPP_RECORDER_SF_qd.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall DeviceSlot_D0EntryCleanupState(__int64 a1, int a2)
{
  __int64 *i; // rbx
  char v5; // [rsp+30h] [rbp-18h]

  v5 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    a2,
    9,
    18,
    (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids,
    a1,
    v5);
  for ( i = *(__int64 **)(a1 + 48); i != (__int64 *)(a1 + 48); i = (__int64 *)*i )
    memset((void *)i[2], 0, *((unsigned int *)i + 10));
  return DeviceSlot_DisableAllDeviceSlots(a1);
}
