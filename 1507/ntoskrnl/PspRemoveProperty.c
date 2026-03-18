/*
 * XREFs of PspRemoveProperty @ 0x14010D630
 * Callers:
 *     PsSetThreadProperty @ 0x14010D270 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1402437AC (PsSetJobProperty.c)
 *     PspEmptyPropertySet @ 0x140420D18 (PspEmptyPropertySet.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PspFindPropertySetEntry @ 0x14010D710 (PspFindPropertySetEntry.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRemoveProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v4; // rdi
  unsigned __int8 CurrentIrql; // r14
  PVOID *PropertySetEntry; // rax
  PVOID *v9; // rbx
  PVOID **v10; // rcx
  PVOID **v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a1 + 16);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 16);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 16));
  }
  PropertySetEntry = (PVOID *)PspFindPropertySetEntry(a1, a2);
  v9 = PropertySetEntry;
  if ( PropertySetEntry )
  {
    if ( a3 )
      *a3 = PropertySetEntry[3];
    v10 = (PVOID **)*PropertySetEntry;
    v11 = (PVOID **)PropertySetEntry[1];
    if ( v10[1] != v9 || *v11 != v9 )
      __fastfail(3u);
    *v11 = (PVOID *)v10;
    v10[1] = (PVOID *)v11;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  __writecr8(CurrentIrql);
  if ( v9 )
  {
    ObfDereferenceObjectWithTag(v9[3], 0x72507350u);
    ExFreePoolWithTag(v9, 0x50737050u);
  }
  return 0LL;
}
