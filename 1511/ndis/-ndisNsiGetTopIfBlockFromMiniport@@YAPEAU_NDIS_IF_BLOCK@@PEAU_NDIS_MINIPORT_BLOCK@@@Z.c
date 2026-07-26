/*
 * XREFs of ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0004ADC
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0004A64 (ndisReferenceRef.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C00057E0 (ndisDereferenceMiniportForNsi.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 */

struct _NDIS_IF_BLOCK *__fastcall ndisNsiGetTopIfBlockFromMiniport(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, int a3)
{
  struct _NDIS_IF_BLOCK *result; // rax
  struct _NDIS_IF_BLOCK *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx

  result = (struct _NDIS_IF_BLOCK *)ndisReferenceTopMiniportByNameForNsi((_DWORD)a1, 0, a3, 0, 2, 58);
  v4 = result;
  if ( result )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&result->ifDescr.String[43]);
    v5 = *(_QWORD **)&v4[1].InterfaceGuid.Data4[4];
    *(_QWORD *)&v4->ifDescr.String[255] = KeGetCurrentThread();
    *(_DWORD *)&v4[1].ifDescr.String[171] = 2234889;
    if ( !v5 )
      goto LABEL_8;
    do
    {
      if ( ndisReferenceRef(v5 + 39) )
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
    LOBYTE(v7) = 58;
    LOBYTE(v8) = 2;
    ndisDereferenceMiniportForNsi(v4, v8, v7);
    return (struct _NDIS_IF_BLOCK *)v6;
  }
  return result;
}
