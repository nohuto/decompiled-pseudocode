/*
 * XREFs of MmFreeBootRegistry @ 0x140598AF8
 * Callers:
 *     CmpFreeBootRegistry @ 0x1401E1138 (CmpFreeBootRegistry.c)
 *     HvpDropPagedBins @ 0x1405987EC (HvpDropPagedBins.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 * Callees:
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiDeleteBootRange @ 0x140162804 (MiDeleteBootRange.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void MmFreeBootRegistry()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rbx
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rdx
  size_t i; // rsi
  unsigned __int64 *v6; // rcx

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_14034FB90, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, MiRegistryVaSort);
    v4 = 0LL;
    for ( i = 0LL; i < v2; ++i )
    {
      ++v4;
      v6 = (unsigned __int64 *)(((*v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( i == v2 - 1 || *v3 + 4096LL != v3[1] )
      {
        if ( v4 == 1 )
          v4 = 1LL;
        else
          v6 = &v6[-v4 + 1];
        MiDeleteBootRange(v6, v4);
        v4 = 0LL;
      }
      ++v3;
    }
    MiChargeWsles((__int64)dword_14034FF40, -(__int64)v2, 0);
    ExFreePoolWithTag(v1, 0);
    qword_14034FB90 = 0LL;
  }
}
