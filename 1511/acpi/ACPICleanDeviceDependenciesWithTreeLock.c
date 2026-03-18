/*
 * XREFs of ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0036678
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C46C (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C003C73C (ACPIInitRemoveDeviceExtension.c)
 * Callees:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0007828 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 */

__int64 __fastcall ACPICleanDeviceDependenciesWithTreeLock(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 592);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4F706341u);
    *(_QWORD *)(a1 + 592) = 0LL;
  }
  ACPIBuildProcessDelayedDependencyExternalTrigger(a1);
  return 0LL;
}
