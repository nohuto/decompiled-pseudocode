/*
 * XREFs of ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C0075340
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005C0F0 (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C0074E18 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Reset(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a3,
        __int64 a4)
{
  char v4; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-18h] BYREF
  PVOID v21; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR Protect; // [rsp+90h] [rbp+40h] BYREF

  v4 = a4;
  v8 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v8 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 30LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  LODWORD(v13) = VIDMM_PROCESS_HEAP::GetAllocationInfo(
                   this,
                   a3,
                   &RegionSize,
                   &BaseAddress,
                   (unsigned int *)&Protect,
                   &v22);
  if ( (int)v13 >= 0 )
  {
    v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, Protect);
    v13 = v15;
    if ( v15 >= 0 )
    {
      VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
      if ( v4 && !v22 )
      {
        v21 = BaseAddress;
        Protect = RegionSize;
        ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v21, &Protect, 1u);
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v13;
      WdLogEvent5_WdError(v17);
    }
  }
  if ( (_DWORD)v13 == -1071775472 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q(v12, &EventPerformanceWarning, v14, 18);
  if ( v22 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a3);
  return (unsigned int)v13;
}
