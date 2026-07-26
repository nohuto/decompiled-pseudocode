/*
 * XREFs of ndisReferenceMiniportByGuid @ 0x1C0011BA8
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009CF00 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00CC5AC (ndisHandleBindNotification.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 */

__int64 __fastcall ndisReferenceMiniportByGuid(_QWORD *a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_M_DRIVER_BLOCK *v5; // rdi
  KIRQL v6; // bp
  __int64 v7; // rsi
  __int64 i; // rbx
  __int64 v10; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v5 = ndisMiniDriverList;
  v6 = v4;
LABEL_2:
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel(&v5->Ref.SpinLock);
    for ( i = (__int64)v5->MiniportQueue; ; i = *(_QWORD *)(i + 8) )
    {
      if ( !i )
      {
        KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
        v5 = v5->NextDriver;
        goto LABEL_2;
      }
      v10 = *(_QWORD *)(i + 4064) - *a1;
      if ( !v10 )
        v10 = *(_QWORD *)(i + 4072) - a1[1];
      if ( !v10 )
        break;
    }
    v7 = i & -(__int64)(ndisReferenceMiniport(i, a2) != 0);
    KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
  }
  else
  {
    v7 = 0LL;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
  return v7;
}
