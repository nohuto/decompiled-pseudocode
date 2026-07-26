/*
 * XREFs of ndisStartNsiProvider @ 0x1C00AE3BC
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 */

__int64 ndisStartNsiProvider()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx

  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(0x1Bu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &ndisNsiInterfaceProviderHandle);
  v1 = v0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_d(0x1Cu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v0);
  return v1;
}
