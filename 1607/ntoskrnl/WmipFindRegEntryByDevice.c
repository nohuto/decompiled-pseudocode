/*
 * XREFs of WmipFindRegEntryByDevice @ 0x14012DDFC
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1404BE40C (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x140532D54 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14053A410 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14053A454 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14053A528 (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x14012DE6C (WmipDoFindRegEntryByDevice.c)
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
