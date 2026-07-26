/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C00C6DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C009DFB0 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C0075270;
  while ( !RtlEqualUnicodeString(Keyword, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C0075360 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, Keyword, ParameterType);
      return;
    }
  }
  if ( (unsigned __int8)byte_1C008370F >= 2u )
    WPP_SF_Z(0x11u, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64 *)Keyword);
  *Status = -1073741823;
}
