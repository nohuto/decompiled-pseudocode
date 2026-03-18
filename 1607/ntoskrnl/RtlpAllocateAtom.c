/*
 * XREFs of RtlpAllocateAtom @ 0x1404A4B10
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x14001403C (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x14008912C (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x14009D5E4 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1404A5550 (PsChargeSharedPoolQuota.c)
 */

_QWORD *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  SIZE_T v2; // rdi
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rax

  v2 = a1 + 16;
  if ( a1 + 16 < a1 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, a2);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2, 0LL);
    *PoolWithTag = v5;
    if ( v5 )
    {
      PoolWithTag[1] = v2;
      PoolWithTag += 2;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, a2);
      return 0LL;
    }
  }
  return PoolWithTag;
}
