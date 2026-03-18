/*
 * XREFs of ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C004FCF0
 * Callers:
 *     VidMmQueryAllocationResidency @ 0x1C0014700 (VidMmQueryAllocationResidency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QueryAllocationResidency(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  char *v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // esi
  void *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edx
  _QWORD *v17; // rcx
  __int64 v18; // rax
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
    v6 = (char *)(*a2)[2];
    v7 = *(_QWORD *)(v3 + 8) >> 12;
    while ( (_DWORD)v7 )
    {
      ReturnLength = 0LL;
      v8 = 2000;
      v9 = v6;
      if ( (unsigned int)v7 < 0x7D0 )
        v8 = v7;
      LODWORD(v7) = v7 - v8;
      v10 = (_QWORD *)((char *)this + 7832);
      v11 = v8;
      do
      {
        *v10 = 0LL;
        *(v10 - 1) = v6;
        v10 += 2;
        v6 += 4096;
        --v11;
      }
      while ( v11 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v9,
             MemoryWorkingSetExList,
             (char *)this + 7824,
             16LL * v8,
             &ReturnLength) >= 0
        && ReturnLength == 16LL * v8 )
      {
        v16 = 0;
        v17 = (_QWORD *)((char *)this + 7832);
        while ( (*v17 & 1) != 0 || (*v17 & 0xC00000LL) == 0x400000 )
        {
          ++v16;
          v17 += 2;
          v6 += 4096;
          if ( v16 >= v8 )
            goto LABEL_18;
        }
        return 3;
      }
      v18 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v18 + 24) = 4768LL;
      WdLogEvent5_WdAssertion(v18);
      v4 = 3;
LABEL_18:
      if ( v4 == 3 )
        return v4;
    }
  }
  return v4;
}
