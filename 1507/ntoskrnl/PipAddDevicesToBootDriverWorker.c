/*
 * XREFs of PipAddDevicesToBootDriverWorker @ 0x1407DF510
 * Callers:
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiProcessAddBootDevices @ 0x1405B7A38 (PiProcessAddBootDevices.c)
 */

__int64 __fastcall PipAddDevicesToBootDriverWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  void *v5; // rbx

  v4 = PnpDeviceObjectFromDeviceInstance(a2, a2, a3, a4);
  v5 = v4;
  if ( v4 )
  {
    PiProcessAddBootDevices((__int64)v4);
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  return 1LL;
}
