/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C000C030
 * Callers:
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0007410 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000A1B0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000B490 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B510 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000B670 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000B730 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000B8E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000BD60 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000BE90 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000BF10 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000D540 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0021360 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022E90 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0023860 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0023AF0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0035D40 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0036130 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0036280 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  KIRQL v5; // bl
  int v6; // edx
  unsigned int v7; // r8d

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), 2);
  }
  else
  {
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v7 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 32LL);
      else
        v7 = 0;
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v7);
    }
    *(_DWORD *)(a4 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 24), v4, 1);
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v6 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v6;
    if ( (v6 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v6 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
  }
}
