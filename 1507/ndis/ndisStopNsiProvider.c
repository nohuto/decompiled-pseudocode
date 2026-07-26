/*
 * XREFs of ndisStopNsiProvider @ 0x1C003EA18
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 */

void ndisStopNsiProvider()
{
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(0x19u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
  NmrDeregisterProvider(ndisNsiInterfaceProviderHandle);
  NmrWaitForProviderDeregisterComplete(ndisNsiInterfaceProviderHandle);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(0x1Au, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
}
