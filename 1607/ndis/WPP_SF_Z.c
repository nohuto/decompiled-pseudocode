/*
 * XREFs of WPP_SF_Z @ 0x1C0042BCC
 * Callers:
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0011E88 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     NdisFRegisterFilterDriver @ 0x1C00141F0 (NdisFRegisterFilterDriver.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A15A8 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ndisValidate60Protocol @ 0x1C00A1C9C (ndisValidate60Protocol.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A1E20 (NdisRegisterProtocolDriver.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00A81A0 (NdisOpenProtocolConfiguration.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00AEF50 (ndisCreateAdapterInstanceName.c)
 *     ndisHandleBindNotification @ 0x1C00CC5AC (ndisHandleBindNotification.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00CC6C0 (ndisHandleProtocolUnloadNotification.c)
 *     NdisWdfReadConfiguration @ 0x1C00CC860 (NdisWdfReadConfiguration.c)
 *     NdisOpenFile @ 0x1C00CD550 (NdisOpenFile.c)
 *     NdisRegisterProtocol @ 0x1C00CF100 (NdisRegisterProtocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00CF7A4 (ndisValidateLegacyProtocols.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C00E3844 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00E3938 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 *     ndisFindRootDevice @ 0x1C00F277C (ndisFindRootDevice.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00F2BA8 (ndisHandleProtocolReconfigNotification.c)
 *     ndisReferenceProtocolByName @ 0x1C00F43A4 (ndisReferenceProtocolByName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Z(unsigned __int16 a1, const struct _GUID *a2, unsigned __int16 *a3)
{
  int v6; // r9d
  const wchar_t *v7; // rcx
  const wchar_t *v8; // r8

  if ( a3 )
    v6 = *a3;
  else
    v6 = 8;
  if ( a3 )
    v7 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v7 = L"NULL";
  v8 = L"\b";
  if ( a3 )
    v8 = a3;
  ndisWppFastTraceMessage(a2, a1, v8, 2LL, v7, v6, 0LL);
}
