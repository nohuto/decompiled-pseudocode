/*
 * XREFs of VfAvlInitializeTree @ 0x1407324E4
 * Callers:
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 *     VfInitBootDriversLoaded @ 0x1407CBEA0 (VfInitBootDriversLoaded.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400194B8 (RtlInitializeGenericTableAvl.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VfAvlInitializeTree(
        _QWORD *TableContext,
        __int64 a2,
        int a3,
        void (__cdecl *a4)(_RTL_AVL_TABLE *, PVOID))
{
  int v6; // eax
  PVOID PoolWithTag; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int MaximumProcessorCount; // eax

  TableContext[1] = 0LL;
  *TableContext = a2;
  if ( a3 )
  {
    v6 = 0;
  }
  else
  {
    v6 = ViAvlInitialized;
    a3 = 16;
  }
  if ( v6 )
    *((_DWORD *)TableContext + 7) = 1;
  else
    *((_DWORD *)TableContext + 7) = a3 + 32;
  if ( a2 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount < 0x40 )
    {
      if ( MaximumProcessorCount < 0x20 )
        *((_DWORD *)TableContext + 6) = 16;
      else
        *((_DWORD *)TableContext + 6) = 32;
    }
    else
    {
      *((_DWORD *)TableContext + 6) = 64;
    }
  }
  else
  {
    *((_DWORD *)TableContext + 6) = 1;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 192LL * *((unsigned int *)TableContext + 6), 0x54416656u);
  TableContext[2] = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = 0LL;
  if ( *((_DWORD *)TableContext + 6) )
  {
    v9 = 0LL;
    do
    {
      *(_QWORD *)(v9 + TableContext[2] + 104) = 0LL;
      *(_DWORD *)(v9 + TableContext[2] + 128) = 0;
      *(_QWORD *)(v9 + TableContext[2] + 112) = 0LL;
      RtlInitializeGenericTableAvl(
        (PRTL_AVL_TABLE)(v9 + TableContext[2]),
        (PRTL_AVL_COMPARE_ROUTINE)ViAvlCompareNode,
        (PRTL_AVL_ALLOCATE_ROUTINE)ViAvlAllocateNode,
        a4,
        TableContext);
      ++v8;
      v9 += 192LL;
    }
    while ( v8 < *((unsigned int *)TableContext + 6) );
  }
  return 0LL;
}
