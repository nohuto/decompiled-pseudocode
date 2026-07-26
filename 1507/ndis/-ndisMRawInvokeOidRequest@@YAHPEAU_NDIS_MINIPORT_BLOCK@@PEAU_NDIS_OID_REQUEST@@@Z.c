/*
 * XREFs of ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1AC4
 * Callers:
 *     ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C006F8F0 (-ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
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
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0xE8u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)a1, Oid);
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
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    LODWORD(v9) = v6;
    WPP_SF_qdD(0xE9u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)a1, Oid, v9);
  }
  return v7;
}
