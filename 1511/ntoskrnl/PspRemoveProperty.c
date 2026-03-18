/*
 * XREFs of PspRemoveProperty @ 0x1400DCEE0
 * Callers:
 *     PsSetThreadProperty @ 0x1400DCC18 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1401F5444 (PsSetJobProperty.c)
 *     PspEmptyPropertySet @ 0x1403F1EBC (PspEmptyPropertySet.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PspFindPropertySetEntry @ 0x1400DCF90 (PspFindPropertySetEntry.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRemoveProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID *PropertySetEntry; // rax
  KIRQL v7; // r9
  PVOID *v8; // rbx
  PVOID **v9; // rcx
  PVOID **v10; // rax

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = (PVOID *)PspFindPropertySetEntry(a1, a2);
  v8 = PropertySetEntry;
  if ( PropertySetEntry )
  {
    if ( a3 )
      *a3 = PropertySetEntry[3];
    v9 = (PVOID **)*PropertySetEntry;
    v10 = (PVOID **)PropertySetEntry[1];
    if ( v9[1] != v8 || *v10 != v8 )
      __fastfail(3u);
    *v10 = (PVOID *)v9;
    v9[1] = (PVOID *)v10;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v7);
  if ( v8 )
  {
    ObfDereferenceObjectWithTag(v8[3], 0x72507350u);
    ExFreePoolWithTag(v8, 0x50737050u);
  }
  return 0LL;
}
