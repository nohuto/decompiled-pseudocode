/*
 * XREFs of ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z @ 0x1C0089770
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C0088F88 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::ResetUndo(VIDMM_PROCESS_HEAP *this, struct _VIDMM_PROCESS_HEAP_ALLOC *a2)
{
  __int64 *v2; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  ULONG Protect; // [rsp+60h] [rbp+28h] BYREF
  int v19; // [rsp+68h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+40h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 1);
  BaseAddress = 0LL;
  RegionSize = 0LL;
  Protect = 0;
  v5 = *v2;
  v19 = 0;
  if ( PsGetCurrentProcess() != v5 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8, v9);
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[3] = 270LL;
    v10[4] = 30LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  LODWORD(v12) = VIDMM_PROCESS_HEAP::GetAllocationInfo(this, a2, &RegionSize, &BaseAddress, &Protect, &v19);
  if ( (int)v12 >= 0 )
  {
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, Protect);
    v12 = v14;
    if ( v14 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v11, v15, v13);
      *(_QWORD *)(v16 + 24) = v12;
      WdLogEvent5_WdError(v16);
    }
  }
  if ( (_DWORD)v12 == -1071775472 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q(v11, &EventPerformanceWarning, v13, 18);
  if ( v19 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a2);
  return (unsigned int)v12;
}
