/*
 * XREFs of ndisReferenceMiniportByGuid @ 0x1C0013D88
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00992D4 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00C6B0C (ndisHandleBindNotification.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 */

__int64 __fastcall ndisReferenceMiniportByGuid(_QWORD *a1)
{
  KIRQL v2; // al
  struct _NDIS_M_DRIVER_BLOCK *v3; // rdi
  KIRQL v4; // bp
  __int64 v5; // rsi
  __int64 i; // rbx
  __int64 v8; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v3 = ndisMiniDriverList;
  v4 = v2;
LABEL_2:
  if ( v3 )
  {
    KeAcquireSpinLockAtDpcLevel(&v3->Ref.SpinLock);
    for ( i = (__int64)v3->MiniportQueue; ; i = *(_QWORD *)(i + 8) )
    {
      if ( !i )
      {
        KeReleaseSpinLockFromDpcLevel(&v3->Ref.SpinLock);
        v3 = v3->NextDriver;
        goto LABEL_2;
      }
      v8 = *(_QWORD *)(i + 4064) - *a1;
      if ( !v8 )
        v8 = *(_QWORD *)(i + 4072) - a1[1];
      if ( !v8 )
        break;
    }
    v5 = i & -(__int64)(ndisReferenceMiniport(i) != 0);
    KeReleaseSpinLockFromDpcLevel(&v3->Ref.SpinLock);
  }
  else
  {
    v5 = 0LL;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v4);
  return v5;
}
