/*
 * XREFs of ndisIfQueryBindingMiniportIfIndex @ 0x1C00A5BD4
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001956C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisIfQueryBindingIfIndex @ 0x1C00B1690 (NdisIfQueryBindingIfIndex.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0018C80 (ndisReferenceMiniportByHandle.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisIfQueryBindingMiniportIfIndex(__int64 a1, _DWORD *a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _NDIS_MINIPORT_BLOCK *v13; // rcx

  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(0x30u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  *a2 = 0;
  *a3 = 0LL;
  *a4 = 0;
  *a5 = 0LL;
  v9 = *(_QWORD *)(a1 + 2056);
  if ( v9 && (v10 = *(_QWORD *)(v9 + 832)) != 0 )
  {
    *a2 = *(_DWORD *)(v10 + 4);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2056) + 832LL) + 1312LL);
  }
  else
  {
    *a2 = *(_DWORD *)(a1 + 4112);
    v11 = *(_QWORD *)(a1 + 4080);
  }
  *a3 = v11;
  if ( (*(_DWORD *)(a1 + 124) & 0x8000000) != 0
    && (v13 = *(_NDIS_MINIPORT_BLOCK **)(a1 + 16)) != 0LL
    && ndisReferenceMiniportByHandle(v13, 0, 60) )
  {
    *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4112LL);
    *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 4080LL);
    ndisDereferenceMiniport(*(_QWORD *)(a1 + 16), 0x3Cu);
  }
  else
  {
    *a4 = *(_DWORD *)(a1 + 4112);
    *a5 = *(_QWORD *)(a1 + 4080);
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(0x31u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  return 0LL;
}
