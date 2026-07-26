/*
 * XREFs of ndisStartNsiProvider @ 0x1C00A9968
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0020060 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 */

__int64 ndisStartNsiProvider()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx

  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_(0x1Bu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &ndisNsiInterfaceProviderHandle);
  v1 = v0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_d(0x1Cu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, v0);
  return v1;
}
