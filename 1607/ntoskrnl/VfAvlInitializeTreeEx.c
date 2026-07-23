/*
 * XREFs of VfAvlInitializeTreeEx @ 0x1406FE23C
 * Callers:
 *     VfAvlInitializeTree @ 0x140223A94 (VfAvlInitializeTree.c)
 *     VfInitBootDriversLoaded @ 0x1407A52D8 (VfInitBootDriversLoaded.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400C1E1C (RtlInitializeGenericTableAvl.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VfAvlInitializeTreeEx(
        _QWORD *TableContext,
        __int64 a2,
        int a3,
        char a4,
        PRTL_AVL_FREE_ROUTINE FreeRoutine)
{
  int v7; // eax
  PVOID PoolWithTag; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  RTL_GENERIC_COMPARE_RESULTS (__cdecl *v11)(_RTL_AVL_TABLE *, PVOID, PVOID); // rdx
  unsigned int MaximumProcessorCount; // eax

  TableContext[1] = 0LL;
  *TableContext = a2;
  *((_BYTE *)TableContext + 28) = a4;
  if ( a3 )
    goto LABEL_2;
  if ( a4 )
  {
    a3 = 24;
LABEL_2:
    v7 = 0;
    goto LABEL_3;
  }
  v7 = ViAvlInitialized;
  a3 = 16;
LABEL_3:
  if ( v7 )
    *((_DWORD *)TableContext + 8) = 1;
  else
    *((_DWORD *)TableContext + 8) = a3 + 32;
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
  v9 = 0LL;
  if ( *((_DWORD *)TableContext + 6) )
  {
    v10 = 0LL;
    do
    {
      v11 = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))ViAvlCompareNode;
      *(_QWORD *)(TableContext[2] + v10 + 104) = 0LL;
      *(_DWORD *)(TableContext[2] + v10 + 128) = 0;
      *(_QWORD *)(TableContext[2] + v10 + 112) = 0LL;
      if ( a4 )
        v11 = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))ViAvlCompareNodeUseSessionId;
      RtlInitializeGenericTableAvl(
        (PRTL_AVL_TABLE)(v10 + TableContext[2]),
        v11,
        (PRTL_AVL_ALLOCATE_ROUTINE)ViAvlAllocateNode,
        FreeRoutine,
        TableContext);
      ++v9;
      v10 += 192LL;
    }
    while ( v9 < *((unsigned int *)TableContext + 6) );
  }
  return 0LL;
}
