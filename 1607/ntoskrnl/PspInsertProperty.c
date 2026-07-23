/*
 * XREFs of PspInsertProperty @ 0x1400AF15C
 * Callers:
 *     PsSetThreadProperty @ 0x1400AF06C (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x14020EFDC (PsSetJobProperty.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     PspFindPropertySetEntry @ 0x1400EC1D8 (PspFindPropertySetEntry.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspInsertProperty(KSPIN_LOCK *a1, __int64 a2, void *a3)
{
  int v6; // edi
  _QWORD *PoolWithTag; // rbx
  KIRQL v8; // r12
  __int64 v9; // r8
  __int64 v10; // r9
  KSPIN_LOCK v11; // rax

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x50737050u);
  if ( PoolWithTag )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
    if ( PspFindPropertySetEntry(a1, a2, v9, v10) )
    {
      v6 = -1073741771;
    }
    else
    {
      PoolWithTag[2] = a2;
      PoolWithTag[3] = a3;
      v11 = *a1;
      if ( *(KSPIN_LOCK **)(*a1 + 8) != a1 )
        __fastfail(3u);
      *PoolWithTag = v11;
      PoolWithTag[1] = a1;
      *(_QWORD *)(v11 + 8) = PoolWithTag;
      *a1 = (KSPIN_LOCK)PoolWithTag;
      ObfReferenceObjectWithTag(a3, 0x72507350u);
    }
    KeReleaseSpinLock(a1 + 2, v8);
    if ( v6 < 0 )
      ExFreePoolWithTag(PoolWithTag, 0x50737050u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
