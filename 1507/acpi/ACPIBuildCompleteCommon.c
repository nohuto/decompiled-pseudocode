/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C000B7A4
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0007BB0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000A590 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000B180 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000B2D0 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000B6D0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000B730 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BB30 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C690 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D2B0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000D4F0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001CEA0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001E340 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001E590 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C001E670 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C001ECC0 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildCompleteGeneric @ 0x1C001F8A0 (ACPIBuildCompleteGeneric.c)
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
