/*
 * XREFs of PopDisconnectedStandbyEnabled @ 0x1406B31E4
 * Callers:
 *     PopPowerInformationInternal @ 0x14055CB5C (PopPowerInformationInternal.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 *     PopSnapStandbyNetworkingState @ 0x1405C2938 (PopSnapStandbyNetworkingState.c)
 * Callees:
 *     PopConnectedStandbyComplianceChecks @ 0x1406B316C (PopConnectedStandbyComplianceChecks.c)
 *     PopConnectedStandbyCompliantNic @ 0x1406B31B0 (PopConnectedStandbyCompliantNic.c)
 */

char __fastcall PopDisconnectedStandbyEnabled(int *a1)
{
  char v2; // r10
  int v3; // r11d

  if ( PopEnforceDisconnectedStandby )
  {
    v2 = 1;
    v3 = 3;
  }
  else if ( PopConnectedStandbyComplianceChecks() )
  {
    if ( PopConnectedStandbyCompliantNic() )
    {
      if ( dword_140386190 != 1 && dword_140386198 != 1 )
      {
        if ( dword_14032E898 == v3 )
        {
          v2 = 1;
          v3 = 2;
        }
        else
        {
          v2 = 0;
        }
      }
    }
    else
    {
      v2 = 1;
      v3 = 1;
    }
  }
  else
  {
    v2 = 1;
    v3 = 4;
  }
  if ( a1 )
    *a1 = v3;
  return v2;
}
