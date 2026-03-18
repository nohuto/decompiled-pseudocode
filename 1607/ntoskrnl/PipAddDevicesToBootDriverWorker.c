/*
 * XREFs of PipAddDevicesToBootDriverWorker @ 0x1407B40F0
 * Callers:
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F4A34 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiProcessAddBootDevices @ 0x1405748F0 (PiProcessAddBootDevices.c)
 */

__int64 __fastcall PipAddDevicesToBootDriverWorker(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx

  v2 = PnpDeviceObjectFromDeviceInstance(a2);
  v3 = v2;
  if ( v2 )
  {
    PiProcessAddBootDevices((__int64)v2);
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
  return 1LL;
}
