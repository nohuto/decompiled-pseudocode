/*
 * XREFs of PfpSourceBuildVaArray @ 0x140533CE8
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x14053392C (PfpPrefetchPrivatePages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpSourceBuildVaArray(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  void *v6; // rcx
  PVOID PoolWithTag; // rax
  unsigned int v8; // r8d
  _QWORD *i; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = 0;
  if ( !(_DWORD)v2 )
    return (unsigned int)-1073741275;
  if ( *(_DWORD *)(a2 + 4) < (unsigned int)v2 )
  {
    v6 = *(void **)(a2 + 8);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_DWORD *)(a2 + 4) = 0;
    }
    if ( (unsigned __int64)(16 * v2) > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 * v2), 0x41566650u);
    *(_QWORD *)(a2 + 8) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *(_DWORD *)(a2 + 4) = v2;
  }
  v8 = 0;
  for ( i = *(_QWORD **)(a2 + 8); v8 < *(_DWORD *)(a1 + 24); *(i - 1) = *(unsigned int *)(v11 + 8) )
  {
    v10 = v8++;
    v11 = *(_QWORD *)(a1 + 32) + 16 * v10;
    *i = *(_QWORD *)v11;
    i += 2;
  }
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 24);
  return v3;
}
