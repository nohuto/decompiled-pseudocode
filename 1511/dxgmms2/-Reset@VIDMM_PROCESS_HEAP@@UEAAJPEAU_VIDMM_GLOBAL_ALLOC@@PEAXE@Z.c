/*
 * XREFs of ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C0089600
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005E5EC (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C0088F88 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Reset(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a3,
        char a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-18h] BYREF
  PVOID v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR Protect; // [rsp+90h] [rbp+40h] BYREF

  v8 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess() != v8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11, v12);
    v13[5] = 0LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    v13[3] = 270LL;
    v13[4] = 30LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  LODWORD(v15) = VIDMM_PROCESS_HEAP::GetAllocationInfo(
                   this,
                   a3,
                   &RegionSize,
                   &BaseAddress,
                   (unsigned int *)&Protect,
                   &v26);
  if ( (int)v15 >= 0 )
  {
    v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, Protect);
    v15 = v17;
    if ( v17 >= 0 )
    {
      VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
      if ( a4 && !v26 )
      {
        v25 = BaseAddress;
        Protect = RegionSize;
        ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v25, &Protect, 1u);
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = v15;
      WdLogEvent5_WdError(v21);
    }
  }
  if ( (_DWORD)v15 == -1071775472 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q(v14, &EventPerformanceWarning, v16, 18);
  if ( v26 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a3);
  return (unsigned int)v15;
}
