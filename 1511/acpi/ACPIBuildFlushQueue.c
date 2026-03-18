/*
 * XREFs of ACPIBuildFlushQueue @ 0x1C006725C
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0007880 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDetectPdoDevices @ 0x1C0017A20 (ACPIDetectPdoDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C001ADD0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C0021674 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C0040720 (ACPITableUnload.c)
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000A528 (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPIBuildFlushQueue(__int64 a1)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v3 = ACPIBuildSpecialSynchronizationRequest(a1, (__int64)ACPIInitPowerRequestCompletion, (__int64)&Event, v2, 1);
  if ( v3 == 259 )
  {
    v3 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v3;
}
