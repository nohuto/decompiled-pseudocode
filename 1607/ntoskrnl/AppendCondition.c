/*
 * XREFs of AppendCondition @ 0x1406CC750
 * Callers:
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 */

__int64 __fastcall AppendCondition(const void **a1, unsigned int *a2, unsigned int *a3, const void *a4, size_t Size)
{
  unsigned int v5; // edi
  unsigned int v9; // esi
  PVOID v10; // rax
  PVOID v11; // r13
  unsigned int v12; // ebx

  v5 = 0;
  if ( a1 && a2 && a3 )
  {
    v9 = *a3 + Size;
    if ( v9 < *a3 )
      return 534;
    if ( v9 > *a2 )
    {
      v10 = SddlpAlloc(v9);
      v11 = v10;
      if ( !v10 )
        return 8;
      memmove(v10, *a1, *a2);
      SddlpFree((void *)*a1);
      *a1 = v11;
      *a2 = v9;
    }
    v12 = *a3;
    memmove((char *)*a1 + *a3, a4, (unsigned int)Size);
    *a3 = v12 + Size;
    return v5;
  }
  return 87LL;
}
