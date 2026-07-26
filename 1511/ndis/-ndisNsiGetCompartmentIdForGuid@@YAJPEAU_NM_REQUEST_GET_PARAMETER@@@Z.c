/*
 * XREFs of ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003D7D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003C770 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisNsiGetCompartmentIdForGuid(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // edi
  const struct _GUID *v3; // rsi
  KIRQL v4; // bp
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0x88u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
  v3 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  if ( v3
    && *((_DWORD *)a1 + 6) == 16
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 4
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(v3);
    if ( CompartmentBlockByGuid )
      **((_DWORD **)a1 + 5) = CompartmentBlockByGuid->CompartmentId;
    else
      v2 = -1073741772;
    KeReleaseSpinLock(&ndisIfListLock, v4);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(0x89u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, v2);
  return v2;
}
