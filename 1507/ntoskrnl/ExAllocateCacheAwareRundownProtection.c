/*
 * XREFs of ExAllocateCacheAwareRundownProtection @ 0x14040E2E8
 * Callers:
 *     RawInitializeVcb @ 0x14040E1C4 (RawInitializeVcb.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x140751AD0 (VerifierExAllocateCacheAwareRundownProtection.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x140007840 (KeGetRecommendedSharedDataAlignment.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PEX_RUNDOWN_REF_CACHE_AWARE __stdcall ExAllocateCacheAwareRundownProtection(POOL_TYPE PoolType, ULONG PoolTag)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v5; // rbx
  unsigned int v6; // edi
  ULONG RecommendedSharedDataAlignment; // esi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdi
  PVOID v11; // rax
  unsigned int v12; // r8d
  int v13; // edx

  PoolWithTag = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)ExAllocatePoolWithTag(PoolType, 0x18uLL, PoolTag);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  v6 = KeNumberProcessors_0;
  *((_DWORD *)PoolWithTag + 5) = KeNumberProcessors_0;
  if ( v6 <= 1 )
    RecommendedSharedDataAlignment = 8;
  else
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  *((_DWORD *)v5 + 4) = RecommendedSharedDataAlignment;
  v8 = (unsigned __int64)ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * v6, PoolTag);
  v9 = v8;
  if ( v8 )
  {
    if ( *((_DWORD *)v5 + 5) <= 1u || (v10 = RecommendedSharedDataAlignment - 1, (v10 & v8) == 0) )
    {
LABEL_9:
      v12 = 0;
      *((_QWORD *)v5 + 1) = v9;
      for ( *(_QWORD *)v5 = v8;
            v12 < *((_DWORD *)v5 + 5);
            *(_QWORD *)((unsigned int)(*((_DWORD *)v5 + 4) * v13) + *(_QWORD *)v5) = 0LL )
      {
        v13 = v12 % *((_DWORD *)v5 + 5);
        ++v12;
      }
      return v5;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
    v11 = ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * (*((_DWORD *)v5 + 5) + 1), PoolTag);
    v9 = (unsigned __int64)v11;
    if ( v11 )
    {
      v8 = ~v10 & ((unsigned __int64)v11 + v10);
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
