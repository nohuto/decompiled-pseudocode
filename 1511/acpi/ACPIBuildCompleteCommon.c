/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C000B874
 * Callers:
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C00072C0 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildCompleteGeneric @ 0x1C0008660 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000A660 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000B250 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000B3A0 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000B7A0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000B800 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000CBA0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D990 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001D0C0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D300 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001F1D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001F420 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C001F500 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIBuildCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl
  int v3; // edx

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v3 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v3;
  if ( (v3 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v3 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v2);
}
