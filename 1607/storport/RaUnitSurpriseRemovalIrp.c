/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x1C005F7C0
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaUnitWaitForRemoveLock @ 0x1C00100A0 (RaUnitWaitForRemoveLock.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0030230 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitCancelPendingRequests @ 0x1C0037110 (RaidUnitCancelPendingRequests.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C00373E0 (RaidUnitConvertToZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C0038D3C (RaidUnitUnRegisterInterfaces.c)
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
  RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
  RaUnitWaitForRemoveLock(a1);
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
