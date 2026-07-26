/*
 * XREFs of ndisOidPMAddRemove @ 0x1C0025300
 * Callers:
 *     NdisFOidRequest @ 0x1C000A750 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C000C910 (ndisMOidRequest.c)
 *     ndisPMAddRemoveAsync @ 0x1C00C9640 (ndisPMAddRemoveAsync.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 * Callees:
 *     ndisPMAddWOLPattern @ 0x1C0025394 (ndisPMAddWOLPattern.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0048E0C (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisPMAddProtocolOffload @ 0x1C004A184 (ndisPMAddProtocolOffload.c)
 *     ndisOidPMRemove @ 0x1C00C8644 (ndisOidPMRemove.c)
 */

__int64 __fastcall ndisOidPMAddRemove(NDIS_HANDLE MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqq(63LL, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, MiniportAdapterHandle, a2, Request);
  if ( !KeGetCurrentIrql() )
  {
    Oid = Request->DATA.QUERY_INFORMATION.Oid;
    if ( Oid == -50265846 )
    {
      v7 = ndisPMAddWOLPattern(MiniportAdapterHandle, a2, Request);
      v8 = v7;
      if ( !v7 || (unsigned __int8)byte_1C00895D5 < 2u )
        goto LABEL_6;
      v11 = 65LL;
      goto LABEL_25;
    }
    if ( Oid != -50265845 )
    {
      if ( Oid == -50265843 )
      {
        v7 = ndisPMAddProtocolOffload(MiniportAdapterHandle, a2, (__int64)Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C00895D5 < 2u )
          goto LABEL_6;
        v11 = 66LL;
LABEL_25:
        WPP_SF_d(v11, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v7);
LABEL_6:
        if ( (unsigned __int8)byte_1C00895D2 >= 4u )
          WPP_SF_qqqL(68LL, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, MiniportAdapterHandle, a2, Request, v8);
        return v8;
      }
      if ( Oid != -50265841 )
      {
        v8 = -1073741823;
        goto LABEL_6;
      }
    }
    v7 = ndisOidPMRemove(MiniportAdapterHandle, a2, Request);
    v8 = v7;
    if ( !v7 || (unsigned __int8)byte_1C00895D5 < 2u )
      goto LABEL_6;
    v11 = 67LL;
    goto LABEL_25;
  }
  v10 = ndisCreatePMAddRemoveWorkItem(MiniportAdapterHandle, a2, Request);
  v8 = v10;
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C00895D5 >= 2u )
      WPP_SF_dd(64LL, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, Request->DATA.QUERY_INFORMATION.Oid, v10);
    return v8;
  }
  return 259LL;
}
