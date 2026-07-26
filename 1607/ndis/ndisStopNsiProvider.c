/*
 * XREFs of ndisStopNsiProvider @ 0x1C0043DA4
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 */

void ndisStopNsiProvider()
{
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(0x19u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids);
  NmrDeregisterProvider(ndisNsiInterfaceProviderHandle);
  NmrWaitForProviderDeregisterComplete(ndisNsiInterfaceProviderHandle);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(0x1Au, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids);
}
