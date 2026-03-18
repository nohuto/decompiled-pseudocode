/*
 * XREFs of PspInsertProperty @ 0x1400DCE10
 * Callers:
 *     PsSetThreadProperty @ 0x1400DCC18 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1401F5444 (PsSetJobProperty.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspFindPropertySetEntry @ 0x1400DCF90 (PspFindPropertySetEntry.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInsertProperty(_QWORD *a1, __int64 a2, void *a3)
{
  int v6; // edi
  _QWORD *PoolWithTag; // rbx
  KIRQL v8; // r12
  __int64 v9; // rax

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x50737050u);
  if ( PoolWithTag )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
    if ( PspFindPropertySetEntry(a1, a2) )
    {
      v6 = -1073741771;
    }
    else
    {
      PoolWithTag[2] = a2;
      PoolWithTag[3] = a3;
      v9 = *a1;
      *PoolWithTag = *a1;
      PoolWithTag[1] = a1;
      if ( *(_QWORD **)(v9 + 8) != a1 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = PoolWithTag;
      *a1 = PoolWithTag;
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
