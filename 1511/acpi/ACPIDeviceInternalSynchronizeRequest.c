/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x1C000A388
 * Callers:
 *     ACPIDevicePowerFlushQueue @ 0x1C000A32C (ACPIDevicePowerFlushQueue.c)
 *     ACPITableLoadCallBack @ 0x1C0022C00 (ACPITableLoadCallBack.c)
 *     ACPIFlushQueuesUnload @ 0x1C00366F8 (ACPIFlushQueuesUnload.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0039E34 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AF5C (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = ACPIDeviceInitializePowerRequest(a1, 0, a2, a3, 0, 4, 256);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
