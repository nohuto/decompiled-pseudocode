/*
 * XREFs of PopDisconnectedStandbyEnabled @ 0x140633BC8
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C5AFC (PopPowerInformationInternal.c)
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 *     PopSnapStandbyNetworkingState @ 0x14054B474 (PopSnapStandbyNetworkingState.c)
 * Callees:
 *     PopConnectedStandbyComplianceChecks @ 0x140633B50 (PopConnectedStandbyComplianceChecks.c)
 *     PopConnectedStandbyCompliantNic @ 0x140633B94 (PopConnectedStandbyCompliantNic.c)
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
      if ( dword_140335198 != 1 && dword_1403351A0 != 1 )
      {
        if ( dword_1402DE2D8 == v3 )
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
