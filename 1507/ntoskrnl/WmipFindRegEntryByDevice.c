/*
 * XREFs of WmipFindRegEntryByDevice @ 0x140127AA4
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x14052DCE0 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140545FA0 (IoWMIRegistrationControl.c)
 *     WmipDeregisterDevice @ 0x140546074 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14057E494 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     WmipDoFindRegEntryByDevice @ 0x140127B48 (WmipDoFindRegEntryByDevice.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 RegEntryByDevice; // rax
  __int64 v4; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
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
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1);
  v4 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
  else
    _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
  __writecr8(CurrentIrql);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
