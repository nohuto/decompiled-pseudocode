/*
 * XREFs of PiCollapseEnumRequests @ 0x140125B34
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140495BE0 (PiMarkDeviceTreeForReenumeration.c)
 */

bool __fastcall PiCollapseEnumRequests(PVOID *a1)
{
  KIRQL v2; // al
  PVOID *v3; // rdx
  PVOID **v4; // r14
  KIRQL v5; // r8
  __int64 v6; // rdx
  PVOID *i; // rbx
  PVOID *v9; // rcx
  int v10; // eax
  PVOID *v11; // rax
  PVOID **v12; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = (PVOID *)PnpEnumerationRequestList;
  v4 = (PVOID **)a1[1];
  v5 = v2;
  if ( PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v9 = (PVOID *)*v3;
      if ( *((_BYTE *)v3 + 28) )
        break;
      v10 = *((_DWORD *)v3 + 6);
      if ( v10 >= 9 && (v10 <= 10 || v10 == 14) )
      {
        v11 = (PVOID *)v3[1];
        if ( v9[1] != v3 || *v11 != v3 )
          __fastfail(3u);
        *v11 = v9;
        v9[1] = v11;
        v12 = (PVOID **)a1[1];
        *v3 = a1;
        v3[1] = v12;
        if ( *v12 != a1 )
          __fastfail(3u);
        *v12 = v3;
        a1[1] = v3;
      }
      v3 = v9;
    }
    while ( v9 != &PnpEnumerationRequestList );
  }
  KeReleaseSpinLock(&PnpSpinLock, v5);
  for ( i = *v4; i != a1; i = (PVOID *)*i )
  {
    LOBYTE(v6) = 1;
    PiMarkDeviceTreeForReenumeration(*(_QWORD *)(*((_QWORD *)i[2] + 39) + 40LL), v6);
    ObfDereferenceObjectWithTag(i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v4 != a1[1];
}
