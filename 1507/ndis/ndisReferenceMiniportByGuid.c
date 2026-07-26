/*
 * XREFs of ndisReferenceMiniportByGuid @ 0x1C000FE64
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009BFC4 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00B3678 (ndisHandleBindNotification.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 */

__int64 __fastcall ndisReferenceMiniportByGuid(_QWORD *a1, char a2)
{
  KIRQL v4; // al
  struct _NDIS_M_DRIVER_BLOCK *v5; // rdi
  KIRQL v6; // bp
  __int64 v7; // rsi
  __int64 v9; // rdx
  _NDIS_MINIPORT_BLOCK *i; // rbx
  __int64 v11; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v5 = ndisMiniDriverList;
  v6 = v4;
LABEL_2:
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel(&v5->Ref.SpinLock);
    for ( i = v5->MiniportQueue; ; i = i->NextMiniport )
    {
      if ( !i )
      {
        KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
        v5 = v5->NextDriver;
        goto LABEL_2;
      }
      v11 = *(_QWORD *)&i->InterfaceGuid.Data1 - *a1;
      if ( !v11 )
        v11 = *(_QWORD *)i->InterfaceGuid.Data4 - a1[1];
      if ( !v11 )
        break;
    }
    LOBYTE(v9) = a2;
    v7 = (unsigned __int64)i & -(__int64)((unsigned __int8)ndisReferenceMiniport(i, v9) != 0);
    KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
  }
  else
  {
    v7 = 0LL;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
  return v7;
}
