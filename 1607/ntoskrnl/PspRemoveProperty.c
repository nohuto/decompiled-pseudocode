/*
 * XREFs of PspRemoveProperty @ 0x1400B116C
 * Callers:
 *     PsSetThreadProperty @ 0x1400B112C (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x14020F1B0 (PsSetJobProperty.c)
 *     PspEmptyPropertySet @ 0x1404A2008 (PspEmptyPropertySet.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     PspFindPropertySetEntry @ 0x1400EE358 (PspFindPropertySetEntry.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRemoveProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // r8
  PVOID *PropertySetEntry; // rax
  KIRQL v9; // r9
  PVOID *v10; // rbx
  PVOID **v11; // rcx
  PVOID **v12; // rax

  LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = (PVOID *)PspFindPropertySetEntry(a1, a2, v7, v6);
  v10 = PropertySetEntry;
  if ( PropertySetEntry )
  {
    if ( a3 )
      *a3 = PropertySetEntry[3];
    v11 = (PVOID **)*PropertySetEntry;
    v12 = (PVOID **)PropertySetEntry[1];
    if ( v11[1] != v10 || *v12 != v10 )
      __fastfail(3u);
    *v12 = (PVOID *)v11;
    v11[1] = (PVOID *)v12;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v9);
  if ( v10 )
  {
    ObfDereferenceObjectWithTag(v10[3], 0x72507350u);
    ExFreePoolWithTag(v10, 0x50737050u);
  }
  return 0LL;
}
