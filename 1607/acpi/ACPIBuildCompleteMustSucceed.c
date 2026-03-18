/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C001DE30
 * Callers:
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000EAE0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000EF40 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000F270 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F370 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0013AE0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C001F0A0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C001FB80 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0020C20 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0026720 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C00269B0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028000 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028100 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044AB0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0044F50 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0045230 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  unsigned int v5; // eax
  KIRQL v6; // bl
  int v7; // edx

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), 2);
  }
  else
  {
    v5 = 0;
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v5 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 40LL);
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v5);
    }
    *(_DWORD *)(a4 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 24), v4, 1);
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v7 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v7;
    if ( (v7 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v7 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v6);
  }
}
