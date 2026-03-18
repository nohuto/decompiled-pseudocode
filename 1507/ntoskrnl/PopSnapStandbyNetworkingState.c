/*
 * XREFs of PopSnapStandbyNetworkingState @ 0x1405C2938
 * Callers:
 *     PopWiFiInStandbyCallback @ 0x1405C28F0 (PopWiFiInStandbyCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1406B787C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopConnectedStandbyCompliantNic @ 0x1406B31B0 (PopConnectedStandbyCompliantNic.c)
 *     PopDisconnectedStandbyEnabled @ 0x1406B31E4 (PopDisconnectedStandbyEnabled.c)
 */

void PopSnapStandbyNetworkingState()
{
  char v0; // r9
  char v1; // al
  char v2; // r9

  if ( qword_140353788 )
  {
    v0 = byte_140353811;
    if ( (byte_140353811 & 1) == 0 )
    {
      v1 = PopConnectedStandbyCompliantNic();
      v0 = (v2 ^ v1) & 1 ^ v2;
      byte_140353811 = v0;
    }
    if ( (v0 & 2) != 0 )
      byte_140353811 ^= (byte_140353811 ^ (2 * PopDisconnectedStandbyEnabled(0LL))) & 2;
  }
}
