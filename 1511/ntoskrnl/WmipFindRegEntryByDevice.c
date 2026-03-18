/*
 * XREFs of WmipFindRegEntryByDevice @ 0x1400EA788
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1404848DC (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x1404B3074 (IoWMIRegistrationControl.c)
 *     WmipDeregisterDevice @ 0x1404B3148 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x140507BF8 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     WmipDoFindRegEntryByDevice @ 0x1400EA7F8 (WmipDoFindRegEntryByDevice.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 RegEntryByDevice; // rax
  KIRQL v6; // r9
  __int64 v7; // rbx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1, v3, v4, v2);
  v7 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v6);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v7;
}
