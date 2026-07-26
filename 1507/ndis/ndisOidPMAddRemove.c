/*
 * XREFs of ndisOidPMAddRemove @ 0x1C0008CC4
 * Callers:
 *     NdisFOidRequest @ 0x1C0004DC0 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0007ED0 (ndisMOidRequest.c)
 *     ndisPMAddRemoveAsync @ 0x1C00CA900 (ndisPMAddRemoveAsync.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 * Callees:
 *     ndisPMAddProtocolOffload @ 0x1C0002C38 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C0002D6C (ndisPMAddWOLPattern.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_qqqL @ 0x1C003F558 (WPP_SF_qqqL.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0044300 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisOidPMRemove @ 0x1C0096000 (ndisOidPMRemove.c)
 */

__int64 __fastcall ndisOidPMAddRemove(char *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(63LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, MiniportAdapterHandle, a2, Request);
  if ( !KeGetCurrentIrql() )
  {
    Oid = Request->DATA.QUERY_INFORMATION.Oid;
    switch ( Oid )
    {
      case 0xFD01010A:
        v7 = ndisPMAddWOLPattern(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C0085315 < 2u )
          goto LABEL_6;
        v11 = 65LL;
        break;
      case 0xFD01010D:
        v7 = ndisPMAddProtocolOffload(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C0085315 < 2u )
          goto LABEL_6;
        v11 = 66LL;
        break;
      case 0xFD01010F:
      case 0xFD01010B:
        v7 = ndisOidPMRemove(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C0085315 < 2u )
          goto LABEL_6;
        v11 = 67LL;
        break;
      default:
        v8 = -1073741823;
        goto LABEL_6;
    }
    WPP_SF_d(v11, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v7);
LABEL_6:
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qqqL(68LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, MiniportAdapterHandle, a2, Request, v8);
    return v8;
  }
  v10 = ndisCreatePMAddRemoveWorkItem(MiniportAdapterHandle, a2, Request);
  v8 = v10;
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C0085315 >= 2u )
      WPP_SF_dd(64LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids, Request->DATA.QUERY_INFORMATION.Oid, v10);
    return v8;
  }
  return 259LL;
}
