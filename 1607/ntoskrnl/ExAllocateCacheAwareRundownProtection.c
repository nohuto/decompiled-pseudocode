/*
 * XREFs of ExAllocateCacheAwareRundownProtection @ 0x1404AD4D0
 * Callers:
 *     RawInitializeVcb @ 0x1404AD3AC (RawInitializeVcb.c)
 *     EtwInitializeSiloState @ 0x140563728 (EtwInitializeSiloState.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x14009CF00 (KeGetRecommendedSharedDataAlignment.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PEX_RUNDOWN_REF_CACHE_AWARE __stdcall ExAllocateCacheAwareRundownProtection(POOL_TYPE PoolType, ULONG PoolTag)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v5; // rbx
  unsigned int v6; // edi
  ULONG RecommendedSharedDataAlignment; // esi
  unsigned __int64 v8; // rax
  PVOID v9; // rcx
  __int64 v10; // rdi
  PVOID v11; // rax
  unsigned int v12; // r8d
  int v13; // edx

  PoolWithTag = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)ExAllocatePoolWithTag(PoolType, 0x18uLL, PoolTag);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  v6 = KeNumberProcessors_0;
  PoolWithTag->Number = KeNumberProcessors_0;
  if ( v6 <= 1 )
    RecommendedSharedDataAlignment = 8;
  else
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v5->RunRefSize = RecommendedSharedDataAlignment;
  v8 = (unsigned __int64)ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * v6, PoolTag);
  v9 = (PVOID)v8;
  if ( v8 )
  {
    if ( v5->Number <= 1 || (v10 = RecommendedSharedDataAlignment - 1, (v10 & v8) == 0) )
    {
LABEL_9:
      v12 = 0;
      v5->PoolToFree = v9;
      for ( v5->RunRefs = (_EX_RUNDOWN_REF *)v8;
            v12 < v5->Number;
            *(unsigned __int64 *)((char *)&v5->RunRefs->Count + v5->RunRefSize * v13) = 0LL )
      {
        v13 = v12 % v5->Number;
        ++v12;
      }
      return v5;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
    v11 = ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * (v5->Number + 1), PoolTag);
    v9 = v11;
    if ( v11 )
    {
      v8 = ~v10 & ((unsigned __int64)v11 + v10);
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
