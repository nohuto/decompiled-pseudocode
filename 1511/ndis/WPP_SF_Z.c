/*
 * XREFs of WPP_SF_Z @ 0x1C003EFB4
 * Callers:
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C001409C (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     NdisFRegisterFilterDriver @ 0x1C001EE40 (NdisFRegisterFilterDriver.c)
 *     ndisCreateAdapterInstanceName @ 0x1C009B3B0 (ndisCreateAdapterInstanceName.c)
 *     NdisReadConfiguration @ 0x1C009DFB0 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00A1290 (NdisOpenProtocolConfiguration.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A70D0 (NdisRegisterProtocolDriver.c)
 *     ndisValidate60Protocol @ 0x1C00A75F8 (ndisValidate60Protocol.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A7A68 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ndisHandleBindNotification @ 0x1C00C6B0C (ndisHandleBindNotification.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00C6C20 (ndisHandleProtocolUnloadNotification.c)
 *     NdisWdfReadConfiguration @ 0x1C00C6DC0 (NdisWdfReadConfiguration.c)
 *     NdisOpenFile @ 0x1C00C7C70 (NdisOpenFile.c)
 *     NdisRegisterProtocol @ 0x1C00C96E0 (NdisRegisterProtocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00C9D84 (ndisValidateLegacyProtocols.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C00DDA74 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00DDB68 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 *     ndisFindRootDevice @ 0x1C00EBAE4 (ndisFindRootDevice.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EBF10 (ndisHandleProtocolReconfigNotification.c)
 *     ndisReferenceProtocolByName @ 0x1C00ED714 (ndisReferenceProtocolByName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Z(unsigned __int16 a1, const struct _GUID *a2, __int64 *a3)
{
  __int64 v3; // r9
  const wchar_t *v4; // rax

  if ( a3 && a3[1] )
    v3 = *(unsigned __int16 *)a3;
  else
    v3 = 10LL;
  if ( !a3 || (v4 = (const wchar_t *)a3[1]) == 0LL )
    v4 = L"NULL";
  if ( !a3 || !*(_WORD *)a3 )
    a3 = qword_1C00276B0;
  ndisWppFastTraceMessage(a2, a1, a3, 2LL, v4, v3, 0LL);
}
