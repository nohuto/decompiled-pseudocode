/*
 * XREFs of RtlpAllocateAtom @ 0x140416BA8
 * Callers:
 *     RtlpAllocateAtomTableEntry @ 0x140008590 (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupOrCreateLowBox @ 0x1400101F0 (RtlpLookupOrCreateLowBox.c)
 *     RtlCreateAtomTableEx @ 0x14010BE40 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1404CF74C (PsChargeSharedPoolQuota.c)
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
