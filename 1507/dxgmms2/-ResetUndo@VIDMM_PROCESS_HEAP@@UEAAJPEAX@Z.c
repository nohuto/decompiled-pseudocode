/*
 * XREFs of ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z @ 0x1C00754B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C0074E18 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::ResetUndo(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  NTSTATUS v14; // eax
  __int64 v15; // rax
  ULONG Protect; // [rsp+60h] [rbp+28h] BYREF
  int v18; // [rsp+68h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+40h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 1);
  BaseAddress = 0LL;
  RegionSize = 0LL;
  Protect = 0;
  v7 = *v4;
  v18 = 0;
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v7 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[3] = 270LL;
    v10[4] = 30LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  LODWORD(v12) = VIDMM_PROCESS_HEAP::GetAllocationInfo(this, a2, &RegionSize, &BaseAddress, &Protect, &v18);
  if ( (int)v12 >= 0 )
  {
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, Protect);
    v12 = v14;
    if ( v14 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v15 + 24) = v12;
      WdLogEvent5_WdError(v15);
    }
  }
  if ( (_DWORD)v12 == -1071775472 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q(v11, &EventPerformanceWarning, v13, 18);
  if ( v18 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a2);
  return (unsigned int)v12;
}
