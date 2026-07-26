/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1C00CEFE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceProtocol @ 0x1C0015C20 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C0042698 (Template_qqq.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005A2F4 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00A41D4 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A41FC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x1Fu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((__int64)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 115) + 17LL) = 1;
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      (NDIS_BIND_DRIVER_BASE *)(*((_QWORD *)NdisProtocolHandle + 115) + 16LL),
      (void (__fastcall *)(_LIST_ENTRY *))lambda_d7e18b6ef415ee16504487d4de9f46a0_::_lambda_invoker_cdecl_);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
      NDIS_BIND_DRIVER_BASE::ForEachLink(
        (NDIS_BIND_DRIVER_BASE *)(*((_QWORD *)NdisProtocolHandle + 115) + 16LL),
        (void (__fastcall *)(_LIST_ENTRY *))lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_);
    Ndis::BindEngine::EndBindOperation();
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, v3, 0xAu);
  }
  else
  {
    if ( (unsigned __int8)byte_1C00895D4 >= 2u )
      WPP_SF_q(0x21u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)NdisProtocolHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800000) != 0 )
      Template_qqq(v2, &ReferenceProtocolFailed, &NDIS_PROVIDER_ID, 0, 101, (char)NdisProtocolHandle);
  }
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x22u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)NdisProtocolHandle);
}
