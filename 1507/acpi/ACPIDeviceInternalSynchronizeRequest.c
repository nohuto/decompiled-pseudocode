/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x1C000A3E8
 * Callers:
 *     ACPIDevicePowerFlushQueue @ 0x1C000A38C (ACPIDevicePowerFlushQueue.c)
 *     ACPITableLoadCallBack @ 0x1C0022480 (ACPITableLoadCallBack.c)
 *     ACPIFlushQueuesUnload @ 0x1C0035A38 (ACPIFlushQueuesUnload.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0039234 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AE8C (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = ACPIDeviceInitializePowerRequest(a1, 0, a2, a3, 0, 4, 256);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
