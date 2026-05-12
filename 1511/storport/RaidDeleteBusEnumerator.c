/*
 * XREFs of RaidDeleteBusEnumerator @ 0x1C000C390
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C000BC4C (RaidAdapterRescanBus.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0034560 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaUnitWaitForRemoveLock @ 0x1C000BD6C (RaUnitWaitForRemoveLock.c)
 *     RaidBusEnumeratorFreeUnitResources @ 0x1C000BD9C (RaidBusEnumeratorFreeUnitResources.c)
 *     StorDeleteScsiIdentity @ 0x1C000F658 (StorDeleteScsiIdentity.c)
 *     RaidDeleteUnit @ 0x1C0011E4C (RaidDeleteUnit.c)
 */

void __fastcall RaidDeleteBusEnumerator(__int64 a1)
{
  __int64 v1; // rbx
  __int64 **v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    RaUnitWaitForRemoveLock(*(_QWORD *)(a1 + 56));
    RaidDeleteUnit(v1);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  RaidBusEnumeratorFreeUnitResources(a1);
  v3 = (__int64 **)(a1 + 120);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    StorDeleteScsiIdentity(v4 + 2);
    ExFreePoolWithTag(v4 - 2, 0x74456152u);
  }
}
