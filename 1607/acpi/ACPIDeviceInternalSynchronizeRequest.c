/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x1C000E51C
 * Callers:
 *     ACPIDevicePowerFlushQueue @ 0x1C000E380 (ACPIDevicePowerFlushQueue.c)
 *     ACPITableLoadCallBack @ 0x1C0029CB0 (ACPITableLoadCallBack.c)
 *     ACPIFlushQueuesUnload @ 0x1C00457D8 (ACPIFlushQueuesUnload.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C004BD64 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C000E3F0 (WPP_RECORDER_SF_qss.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C000E7E0 (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(_QWORD *a1, int a2, int a3)
{
  char v4; // r11
  const char *v5; // rcx
  const char *v7; // r10
  __int64 v9; // rax
  __int64 result; // rax

  v4 = 0;
  v5 = (const char *)qword_1C002C340;
  v7 = (const char *)qword_1C002C340;
  if ( a1 )
  {
    v9 = a1[1];
    v4 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)a1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v7 = (const char *)a1[71];
    }
  }
  WPP_RECORDER_SF_qss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x19u,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    v4,
    v5,
    v7);
  result = ACPIDeviceInitializePowerRequest((_DWORD)a1, 0, a2, a3, 0, 4, 256);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
