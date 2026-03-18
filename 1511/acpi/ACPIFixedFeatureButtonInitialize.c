/*
 * XREFs of ACPIFixedFeatureButtonInitialize @ 0x1C0004FF4
 * Callers:
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 * Callees:
 *     ACPIBuildFixedButtonExtension @ 0x1C0005044 (ACPIBuildFixedButtonExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 */

void ACPIFixedFeatureButtonInitialize()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v3 = 0LL;
  v1 = v0;
  if ( (int)ACPIBuildFixedButtonExtension(v2, &v3) >= 0 && v3 )
    ACPIInitReferenceDeviceExtension();
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v1);
}
