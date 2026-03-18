/*
 * XREFs of ?QueryOneAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00516A4
 * Callers:
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C005169C (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QueryOneAllocationResidency(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  char *v5; // rbp
  __int64 v6; // rdi
  unsigned int v7; // esi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  ULONG_PTR ReturnLength; // [rsp+68h] [rbp+10h] BYREF

  v3 = **a2;
  if ( *(_DWORD *)(v3 + 120) )
  {
    return 1;
  }
  else if ( (**(_DWORD **)(v3 + 472) & 0x40000028) != 0 )
  {
    return 3;
  }
  else
  {
    v4 = 2;
    v5 = (char *)(*a2)[2];
    v6 = *(_QWORD *)(v3 + 8) >> 12;
    while ( (_DWORD)v6 )
    {
      ReturnLength = 0LL;
      v7 = 2000;
      v8 = v5;
      if ( (unsigned int)v6 < 0x7D0 )
        v7 = v6;
      LODWORD(v6) = v6 - v7;
      v9 = (_QWORD *)((char *)this + 7832);
      v10 = v7;
      do
      {
        *v9 = 0LL;
        *(v9 - 1) = v5;
        v9 += 2;
        v5 += 4096;
        --v10;
      }
      while ( v10 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v8,
             MemoryWorkingSetExList,
             (char *)this + 7824,
             16LL * v7,
             &ReturnLength) >= 0
        && ReturnLength == 16LL * v7 )
      {
        v15 = 0;
        v16 = (_QWORD *)((char *)this + 7832);
        while ( (*v16 & 1) != 0 || (*v16 & 0xC00000LL) == 0x400000 )
        {
          ++v15;
          v16 += 2;
          v5 += 4096;
          if ( v15 >= v7 )
            goto LABEL_17;
        }
        return 3;
      }
      v17 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v17 + 24) = 4661LL;
      WdLogEvent5_WdAssertion(v17);
      v4 = 3;
LABEL_17:
      if ( v4 == 3 )
        return v4;
    }
  }
  return v4;
}
