/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x1400EA744
 * Callers:
 *     PpmAllocWmiEvent @ 0x1401F36D4 (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x140542638 (WmipSetTraceNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x1400EA7F8 (WmipDoFindRegEntryByDevice.c)
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
