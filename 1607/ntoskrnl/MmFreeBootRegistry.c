/*
 * XREFs of MmFreeBootRegistry @ 0x14054E4B0
 * Callers:
 *     CmpFreeBootRegistry @ 0x1401B73C4 (CmpFreeBootRegistry.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void MmFreeBootRegistry()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rbx
  unsigned __int64 *v3; // rdi
  size_t i; // rsi
  __int64 PteAddress; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v9; // rcx

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_1403277D0, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, MiRegistryVaSort);
    for ( i = 0LL; i < v2; ++i )
    {
      PteAddress = MiGetPteAddress(*v3);
      if ( i == v2 - 1 || v7 + 4096 != v3[1] )
      {
        if ( v6 == 1 )
        {
          v6 = 1LL;
          v9 = PteAddress;
        }
        else
        {
          v9 = PteAddress - 8 * v6 + 8;
        }
        MiDeleteBootRange(v9, v6);
      }
      ++v3;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiChargeWsles((ULONG_PTR)AnyMultiplexedVm, -(__int64)v2, 0);
    ExFreePoolWithTag(v1, 0);
    qword_1403277D0 = 0LL;
  }
}
