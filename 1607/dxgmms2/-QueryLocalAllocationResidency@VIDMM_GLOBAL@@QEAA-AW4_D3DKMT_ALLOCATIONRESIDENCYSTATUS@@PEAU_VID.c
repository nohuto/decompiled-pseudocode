/*
 * XREFs of ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055348
 * Callers:
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C005769C (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MU.c)
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089658 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryLocalAllocationResidency(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  char *v6; // r15
  char *v7; // rbp
  __int64 v8; // rdi
  unsigned int v9; // esi
  void *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // edx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  ULONG_PTR ReturnLength; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 128LL) )
  {
    return 1;
  }
  else if ( (**(_DWORD **)(v2 + 504) & 0x40000028) != 0 )
  {
    return 3;
  }
  else
  {
    v6 = (char *)this + 39872;
    v7 = (char *)*((_QWORD *)a2 + 2);
    v8 = *(_QWORD *)(v2 + 8) >> 12;
    v4 = 2;
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39872));
    while ( (_DWORD)v8 )
    {
      ReturnLength = 0LL;
      v9 = 2000;
      v10 = v7;
      if ( (unsigned int)v8 < 0x7D0 )
        v9 = v8;
      LODWORD(v8) = v8 - v9;
      v11 = (_QWORD *)((char *)this + 7880);
      v12 = v9;
      do
      {
        *v11 = 0LL;
        *(v11 - 1) = v7;
        v11 += 2;
        v7 += 4096;
        --v12;
      }
      while ( v12 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v10,
             MemoryWorkingSetExList,
             (char *)this + 7872,
             16LL * v9,
             &ReturnLength) >= 0
        && ReturnLength == 16LL * v9 )
      {
        v15 = 0;
        v16 = (_QWORD *)((char *)this + 7880);
        while ( (*v16 & 1) != 0 || (*v16 & 0xC00000LL) == 0x400000 )
        {
          ++v15;
          v16 += 2;
          v7 += 4096;
          if ( v15 >= v9 )
            goto LABEL_21;
        }
        v4 = 3;
        break;
      }
      v17 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v17 + 24) = 4689LL;
      WdLogEvent5_WdAssertion(v17);
      v4 = 3;
LABEL_21:
      if ( v4 == 3 )
        break;
    }
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
