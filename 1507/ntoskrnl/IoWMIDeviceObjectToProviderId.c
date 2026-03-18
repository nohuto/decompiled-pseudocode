/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x140127A2C
 * Callers:
 *     PpmAllocWmiEvent @ 0x140240598 (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x1405BAA3C (WmipSetTraceNotify.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     WmipDoFindRegEntryByDevice @ 0x140127B48 (WmipDoFindRegEntryByDevice.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

ULONG __stdcall IoWMIDeviceObjectToProviderId(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // di
  __int64 RegEntryByDevice; // rax
  ULONG v4; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&WmipRegistrationSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&WmipRegistrationSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&WmipRegistrationSpinLock);
  }
  RegEntryByDevice = WmipDoFindRegEntryByDevice(DeviceObject);
  if ( RegEntryByDevice )
    v4 = *(_DWORD *)(RegEntryByDevice + 56);
  else
    v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
  else
    _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
  __writecr8(CurrentIrql);
  return v4;
}
