/*
 * XREFs of PspInsertProperty @ 0x14010D534
 * Callers:
 *     PsSetThreadProperty @ 0x14010D270 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1402437AC (PsSetJobProperty.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PspFindPropertySetEntry @ 0x14010D710 (PspFindPropertySetEntry.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspInsertProperty(volatile signed __int32 *a1, __int64 a2, void *a3)
{
  int v6; // esi
  _QWORD *PoolWithTag; // rdi
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v10; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x50737050u);
  if ( PoolWithTag )
  {
    v8 = a1 + 4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 4);
    }
    else if ( _interlockedbittestandset64(v8, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(a1 + 4);
    }
    if ( PspFindPropertySetEntry(a1, a2) )
    {
      v6 = -1073741771;
    }
    else
    {
      PoolWithTag[2] = a2;
      PoolWithTag[3] = a3;
      v10 = *(_QWORD *)a1;
      *PoolWithTag = *(_QWORD *)a1;
      PoolWithTag[1] = a1;
      if ( *(volatile signed __int32 **)(v10 + 8) != a1 )
        __fastfail(3u);
      *(_QWORD *)(v10 + 8) = PoolWithTag;
      *(_QWORD *)a1 = PoolWithTag;
      ObfReferenceObjectWithTag(a3, 0x72507350u);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(a1 + 4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    __writecr8(CurrentIrql);
    if ( v6 < 0 )
      ExFreePoolWithTag(PoolWithTag, 0x50737050u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
