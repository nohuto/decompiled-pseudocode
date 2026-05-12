/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x1C0054520
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0009B34 (RaUnitWaitForRemoveLock.c)
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C002A55C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitCancelPendingRequests @ 0x1C00326C8 (RaidUnitCancelPendingRequests.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C00329A0 (RaidUnitConvertToZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C00342AC (RaidUnitUnRegisterInterfaces.c)
 */

__int64 __fastcall RaUnitSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 40) - 6;
  *(_DWORD *)(a1 + 40) = 5;
  if ( v2 > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  RaidUnitCancelPendingRequests(a1);
  if ( RaidIsUnitControlSupported(a1, 10) )
    RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  RaUnitReleaseRemoveLock(a1);
  RaUnitWaitForRemoveLock(a1);
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
