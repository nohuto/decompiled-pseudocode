/*
 * XREFs of PopSnapStandbyNetworkingState @ 0x14054B474
 * Callers:
 *     PopWiFiInStandbyCallback @ 0x14054B42C (PopWiFiInStandbyCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140637B24 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopConnectedStandbyCompliantNic @ 0x140633B94 (PopConnectedStandbyCompliantNic.c)
 *     PopDisconnectedStandbyEnabled @ 0x140633BC8 (PopDisconnectedStandbyEnabled.c)
 */

void PopSnapStandbyNetworkingState()
{
  char v0; // r9
  char v1; // al
  char v2; // r9

  if ( qword_140305A08 )
  {
    v0 = byte_140305AA1;
    if ( (byte_140305AA1 & 1) == 0 )
    {
      v1 = PopConnectedStandbyCompliantNic();
      v0 = (v2 ^ v1) & 1 ^ v2;
      byte_140305AA1 = v0;
    }
    if ( (v0 & 2) != 0 )
      byte_140305AA1 ^= (byte_140305AA1 ^ (2 * PopDisconnectedStandbyEnabled(0LL))) & 2;
  }
}
