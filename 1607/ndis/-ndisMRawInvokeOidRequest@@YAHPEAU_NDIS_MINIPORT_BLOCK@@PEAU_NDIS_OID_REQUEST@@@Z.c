/*
 * XREFs of ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0858
 * Callers:
 *     ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0073C20 (-ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisMRawInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  NDIS_OID Oid; // ebp
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(0xEBu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)a1, Oid);
  if ( ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0 )
    v6 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
           a1->MiniportAdapterContext,
           a2,
           a1,
           a1->VerifierContext,
           DriverHandle->UnhookedCharacteristics._p->OidRequestHandler);
  else
    v6 = DriverHandle->UnhookedCharacteristics._p->OidRequestHandler(a1->MiniportAdapterContext, a2);
  v7 = v6;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    LODWORD(v9) = v6;
    WPP_SF_qdD(0xECu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)a1, Oid, v9);
  }
  return v7;
}
