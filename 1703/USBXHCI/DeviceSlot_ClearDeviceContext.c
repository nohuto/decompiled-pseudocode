/*
 * XREFs of DeviceSlot_ClearDeviceContext @ 0x1C001CE08
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x1C002CFB0 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C002E75C (UsbDevice_SetDeviceDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall DeviceSlot_ClearDeviceContext(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10

  v3 = *(_QWORD *)(a1[3] + 16LL);
  *(_QWORD *)(a1[4] + 8LL * a3) = 0LL;
  *(_QWORD *)(v3 + 8LL * a3) = 0LL;
  return WPP_RECORDER_SF_qd(
           *(_QWORD *)(a1[1] + 64LL),
           4u,
           9u,
           0x15u,
           (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
           a2,
           a3);
}
