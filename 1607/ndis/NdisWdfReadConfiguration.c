/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C00CC860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C0076C40;
  while ( !RtlEqualUnicodeString(Keyword, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C0076D30 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, Keyword, ParameterType);
      return;
    }
  }
  if ( (unsigned __int8)byte_1C00895CF >= 2u )
    WPP_SF_Z(0x11u, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids, &Keyword->Length);
  *Status = -1073741823;
}
