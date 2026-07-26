/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1C00D01B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019A3C (ndisReferenceProtocol.c)
 *     _lambda_28977e66c5b80366e0db14d788188459_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE_____ptr64) @ 0x1C0023CA8 (_lambda_28977e66c5b80366e0db14d788188459_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE_____ptr6.c)
 *     _lambda_8e30f3ed12b678c2e2902b934cc3b0c1_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE_____ptr64) @ 0x1C0023CB0 (_lambda_8e30f3ed12b678c2e2902b934cc3b0c1_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE_____ptr6.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C003D994 (Template_qqq.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055C68 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00A0DB4 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A0DDC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(_LIST_ENTRY *); // rax
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // rdx

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x1Fu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((__int64)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 115) + 17LL) = 1;
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    v3 = (void (__fastcall *)(_LIST_ENTRY *))lambda_8e30f3ed12b678c2e2902b934cc3b0c1_::operator_void____cdecl___NDIS_BIND_LINK_BASE_____ptr64_();
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
    if ( (unsigned __int8)byte_1C0085314 >= 2u )
      WPP_SF_q(0x21u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)NdisProtocolHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800000) != 0 )
      Template_qqq(v2, &ReferenceProtocolFailed, &NDIS_PROVIDER_ID, 0, 96, (char)NdisProtocolHandle);
  }
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x22u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)NdisProtocolHandle);
}
