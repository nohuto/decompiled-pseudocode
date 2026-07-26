/*
 * XREFs of ndisStartNsiProvider @ 0x1C009F23C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 */

__int64 ndisStartNsiProvider()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx

  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(0x1Bu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &ndisNsiInterfaceProviderHandle);
  v1 = v0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_d(0x1Cu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v0);
  return v1;
}
