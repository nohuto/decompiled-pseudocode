/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1C00C95C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceProtocol @ 0x1C001BE60 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C001C678 (ndisDereferenceProtocol.c)
 *     _lambda_28977e66c5b80366e0db14d788188459_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE_____ptr64) @ 0x1C00271A8 (_lambda_28977e66c5b80366e0db14d788188459_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE_____ptr6.c)
 *     _lambda_5a0c0adad4973b4f26bfe6550d362256_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE_____ptr64) @ 0x1C00271B0 (_lambda_5a0c0adad4973b4f26bfe6550d362256_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE_____ptr6.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055B08 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A5ABC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00A5BBC (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(_LIST_ENTRY *); // rax
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // rdx

  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x1Fu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((__int64)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 115) + 17LL) = 1;
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    v3 = (void (__fastcall *)(_LIST_ENTRY *))lambda_5a0c0adad4973b4f26bfe6550d362256_::operator_void____cdecl___NDIS_BIND_LINK_BASE_____ptr64_();
    NDIS_BIND_DRIVER_BASE::ForEachLink((NDIS_BIND_DRIVER_BASE *)(*((_QWORD *)NdisProtocolHandle + 115) + 16LL), v3);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
    {
      v4 = lambda_28977e66c5b80366e0db14d788188459_::operator_void____cdecl___NDIS_BIND_LINK_BASE_____ptr64_();
      NDIS_BIND_DRIVER_BASE::ForEachLink(
        (NDIS_BIND_DRIVER_BASE *)(*((_QWORD *)NdisProtocolHandle + 115) + 16LL),
        (void (__fastcall *)(_LIST_ENTRY *))v4);
    }
    Ndis::BindEngine::EndBindOperation();
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, v5, 0xAu);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0083714 >= 2u )
      WPP_SF_q(0x21u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)NdisProtocolHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800000) != 0 )
      Template_qqq(v2, &ReferenceProtocolFailed, &NDIS_PROVIDER_ID, 0, 106, (char)NdisProtocolHandle);
  }
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x22u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)NdisProtocolHandle);
}
