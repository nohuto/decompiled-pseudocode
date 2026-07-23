/*
 * XREFs of WmipFindRegEntryByDevice @ 0x14012E36C
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1404AA13C (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x140533294 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14053A950 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14053A994 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14053AA68 (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x14012E3DC (WmipDoFindRegEntryByDevice.c)
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
