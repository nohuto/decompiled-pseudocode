/*
 * XREFs of ndisStopNsiProvider @ 0x1C0040250
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0020060 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 */

void ndisStopNsiProvider()
{
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_(0x19u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids);
  NmrDeregisterProvider(ndisNsiInterfaceProviderHandle);
  NmrWaitForProviderDeregisterComplete(ndisNsiInterfaceProviderHandle);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_(0x1Au, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids);
}
