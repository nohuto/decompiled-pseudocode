/*
 * XREFs of MmFreeBootRegistry @ 0x140521B08
 * Callers:
 *     CmpFreeBootRegistry @ 0x1401AB670 (CmpFreeBootRegistry.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 *     MmFreeLoaderBlock @ 0x14074E52C (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiDeleteBootRange @ 0x1401332F0 (MiDeleteBootRange.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void MmFreeBootRegistry()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rbx
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rdi
  size_t i; // rbp
  unsigned __int64 v6; // r15
  __int64 PteAddress; // rax
  unsigned __int64 v8; // rdx
  ULONG_PTR v9; // rcx

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_1402FF6D0, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, MiRegistryVaSort);
    v4 = 0LL;
    for ( i = 0LL; i < v2; ++i )
    {
      v6 = *v3;
      ++v4;
      PteAddress = MiGetPteAddress(*v3);
      if ( i == v2 - 1 || v6 + 4096 != v3[1] )
      {
        if ( v4 == 1 )
        {
          v8 = 1LL;
          v9 = PteAddress;
        }
        else
        {
          v8 = v4;
          v9 = PteAddress - 8 * v4 + 8;
        }
        MiDeleteBootRange(v9, v8);
        v4 = 0LL;
      }
      ++v3;
    }
    MiChargeWsles((ULONG_PTR)&dword_1402FFA80, -(__int64)v2, 0LL);
    ExFreePoolWithTag(v1, 0);
    qword_1402FF6D0 = 0LL;
  }
}
