/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C00CD9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C0076200;
  while ( !RtlEqualUnicodeString(Keyword, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C00762F0 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, Keyword, ParameterType);
      return;
    }
  }
  if ( (unsigned __int8)byte_1C008530F >= 2u )
    WPP_SF_Z(0x11u, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64 *)Keyword);
  *Status = -1073741823;
}
