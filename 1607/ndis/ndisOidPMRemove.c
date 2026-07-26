/*
 * XREFs of ndisOidPMRemove @ 0x1C00C8644
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C0025300 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000A5C0 (ndisQuerySetMiniportEx.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     WPP_SF_sL @ 0x1C0048C98 (WPP_SF_sL.c)
 */

__int64 __fastcall ndisOidPMRemove(char *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // edi
  struct _KSEMAPHORE *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int SetMiniport; // esi
  const char *v11; // r8
  __int64 v13; // [rsp+20h] [rbp-18h]

  Oid = Request->DATA.QUERY_INFORMATION.Oid;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(0x4Bu, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, (__int64)MiniportAdapterHandle, Oid);
  v7 = (struct _KSEMAPHORE *)(MiniportAdapterHandle + 3976);
  if ( Oid != -50265845 )
    v7 = (struct _KSEMAPHORE *)(MiniportAdapterHandle + 4008);
  KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
  *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
  SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, a2);
  if ( SetMiniport && (unsigned __int8)byte_1C00895D5 >= 2u )
  {
    v11 = "OID_PM_REMOVE_WOL_PATTERN";
    if ( Oid != -50265845 )
      v11 = "OID_PM_REMOVE_PROTOCOL_OFFLOAD";
    WPP_SF_sL(v9, v8, v11, SetMiniport);
  }
  KeReleaseSemaphore(v7, 0, 1, 0);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    LODWORD(v13) = SetMiniport;
    WPP_SF_qdD(0x4Du, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, (__int64)MiniportAdapterHandle, Oid, v13);
  }
  return SetMiniport;
}
