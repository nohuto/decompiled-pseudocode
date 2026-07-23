/*
 * XREFs of PiCollapseRebalanceRequests @ 0x1401CE1E8
 * Callers:
 *     PnpProcessRebalance @ 0x1401CE42C (PnpProcessRebalance.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall PiCollapseRebalanceRequests(PVOID *a1)
{
  KIRQL v2; // al
  PVOID *v3; // rdx
  PVOID **v4; // r14
  KIRQL v5; // r8
  PVOID *v6; // rcx
  PVOID *v7; // rax
  PVOID **v8; // rax
  PVOID *i; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = (PVOID *)PnpEnumerationRequestList;
  v4 = (PVOID **)a1[1];
  v5 = v2;
  if ( PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v6 = (PVOID *)*v3;
      if ( *((_BYTE *)v3 + 28) )
        break;
      if ( *((_DWORD *)v3 + 6) == 6 && *((_BYTE *)v3 + 32) )
      {
        v7 = (PVOID *)v3[1];
        if ( v6[1] != v3 || *v7 != v3 )
          __fastfail(3u);
        *v7 = v6;
        v6[1] = v7;
        v8 = (PVOID **)a1[1];
        if ( *v8 != a1 )
          __fastfail(3u);
        *v3 = a1;
        v3[1] = v8;
        *v8 = v3;
        a1[1] = v3;
      }
      v3 = v6;
    }
    while ( v6 != &PnpEnumerationRequestList );
  }
  KeReleaseSpinLock(&PnpSpinLock, v5);
  for ( i = *v4; i != a1; i = (PVOID *)*i )
  {
    ObfDereferenceObjectWithTag(i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v4 != a1[1];
}
