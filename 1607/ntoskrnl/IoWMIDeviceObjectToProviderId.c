/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x14012DDB8
 * Callers:
 *     PpmAllocWmiEvent @ 0x14020B290 (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x14057A164 (WmipSetTraceNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x14012DE6C (WmipDoFindRegEntryByDevice.c)
 */

ULONG __stdcall IoWMIDeviceObjectToProviderId(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 RegEntryByDevice; // rax
  KIRQL v6; // r9
  ULONG v7; // ebx

  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(DeviceObject, v3, v4, v2);
  v7 = 0;
  if ( RegEntryByDevice )
    v7 = *(_DWORD *)(RegEntryByDevice + 56);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v6);
  return v7;
}
