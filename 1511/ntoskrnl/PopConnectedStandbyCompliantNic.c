/*
 * XREFs of PopConnectedStandbyCompliantNic @ 0x140633B94
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 *     PopSnapStandbyNetworkingState @ 0x14054B474 (PopSnapStandbyNetworkingState.c)
 *     PopDisconnectedStandbyEnabled @ 0x140633BC8 (PopDisconnectedStandbyEnabled.c)
 * Callees:
 *     <none>
 */

char PopConnectedStandbyCompliantNic()
{
  char v0; // dl
  int *v1; // r8
  unsigned int v2; // ecx

  v0 = 0;
  v1 = &PopCsDeviceCompliance;
  v2 = 0;
  while ( ((v2 - 1) & 0xFFFFFFFC) != 0 || v2 == 3 || *v1 != 1 )
  {
    ++v2;
    ++v1;
    if ( v2 >= 5 )
      return v0;
  }
  return 1;
}
