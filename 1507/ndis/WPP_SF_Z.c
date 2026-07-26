/*
 * XREFs of WPP_SF_Z @ 0x1C003DF0C
 * Callers:
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0010164 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C009C714 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00A5040 (NdisOpenProtocolConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 *     NdisRegisterProtocolDriver @ 0x1C00ADE90 (NdisRegisterProtocolDriver.c)
 *     ndisValidate60Protocol @ 0x1C00AE5F0 (ndisValidate60Protocol.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00AFA04 (ndisCreateAdapterInstanceName.c)
 *     ndisHandleBindNotification @ 0x1C00B3678 (ndisHandleBindNotification.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00CD6EC (ndisHandleProtocolUnloadNotification.c)
 *     NdisWdfReadConfiguration @ 0x1C00CD9B0 (NdisWdfReadConfiguration.c)
 *     NdisOpenFile @ 0x1C00CE860 (NdisOpenFile.c)
 *     NdisRegisterProtocol @ 0x1C00D02D0 (NdisRegisterProtocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00D0974 (ndisValidateLegacyProtocols.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C00E34E4 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00E35D8 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisReferenceMiniportByName @ 0x1C00E8720 (ndisReferenceMiniportByName.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 *     ndisReferenceProtocolByName @ 0x1C00EB9E4 (ndisReferenceProtocolByName.c)
 *     ndisFindRootDevice @ 0x1C00F1F44 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
    a3 = qword_1C00241B0;
  ndisWppFastTraceMessage(a2, a1, a3, 2LL, v4, v3, 0LL);
}
