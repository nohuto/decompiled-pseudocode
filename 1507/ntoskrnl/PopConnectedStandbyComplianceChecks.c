/*
 * XREFs of PopConnectedStandbyComplianceChecks @ 0x1406B316C
 * Callers:
 *     PopPowerInformationInternal @ 0x14055CB5C (PopPowerInformationInternal.c)
 *     PopDisconnectedStandbyEnabled @ 0x1406B31E4 (PopDisconnectedStandbyEnabled.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407E9120 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     <none>
 */

char PopConnectedStandbyComplianceChecks()
{
  int v0; // r9d
  int *v1; // r8
  char v2; // dl
  unsigned int v3; // ecx

  v0 = PopIgnoreCsComplianceCheck;
  v1 = &PopCsDeviceCompliance;
  v2 = 1;
  v3 = 0;
  while ( ((v3 - 1) & 0xFFFFFFFC) == 0 && v3 != 3 || _bittest(&v0, v3) || *v1 != -1 )
  {
    ++v3;
    ++v1;
    if ( v3 >= 5 )
      return v2;
  }
  return 0;
}
