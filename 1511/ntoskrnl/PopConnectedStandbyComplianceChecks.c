/*
 * XREFs of PopConnectedStandbyComplianceChecks @ 0x140633B50
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C5AFC (PopPowerInformationInternal.c)
 *     PopDisconnectedStandbyEnabled @ 0x140633BC8 (PopDisconnectedStandbyEnabled.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407662E0 (PopPdcCsCheckSystemVolumeDevice.c)
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
