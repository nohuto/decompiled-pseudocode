/*
 * XREFs of ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015C58
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000A3BC (ndisDereferenceMiniportForNsi.c)
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 */

_NDIS_MINIPORT_BLOCK *__fastcall ndisNsiGetTopIfBlockFromMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  _NDIS_MINIPORT_BLOCK *result; // rax
  struct _NDIS_IF_BLOCK *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rbx

  result = ndisReferenceTopMiniportByNameForNsi((__int64)a1, 0, a3, 0, 2u, 0x3Cu);
  v4 = (struct _NDIS_IF_BLOCK *)result;
  if ( result )
  {
    KeAcquireSpinLockAtDpcLevel(&result->Lock);
    v5 = *(_QWORD **)&v4[1].InterfaceGuid.Data4[4];
    *(_QWORD *)&v4->ifDescr.String[255] = KeGetCurrentThread();
    *(_DWORD *)&v4[1].ifDescr.String[171] = 2234915;
    if ( !v5 )
      goto LABEL_8;
    do
    {
      if ( (unsigned __int8)ndisReferenceRef(v5 + 39) )
        break;
      v5 = (_QWORD *)v5[14];
    }
    while ( v5 );
    if ( v5 )
      v6 = v5[104];
    else
LABEL_8:
      v6 = *(_QWORD *)&v4[2].ifAlias.String[245];
    *(_QWORD *)&v4->ifDescr.String[255] = 0LL;
    *(_DWORD *)&v4[1].ifDescr.String[171] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v4->ifDescr.String[43]);
    ndisDereferenceMiniportForNsi((__int64)v4, 2u, 0x3Cu);
    return (_NDIS_MINIPORT_BLOCK *)v6;
  }
  return result;
}
