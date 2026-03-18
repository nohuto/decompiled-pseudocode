/*
 * XREFs of ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005C124
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005B0D4 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D69C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D6B0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::CleanupAllocationCommitment(VIDMM_DEVICE *this, VIDMM_DEVICE ***a2)
{
  __int64 v4; // rbx
  bool v5; // zf
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  VIDMM_DEVICE *v9; // r9
  struct VIDMM_ALLOC **v10; // rcx
  VIDMM_DEVICE **v11; // rax
  VIDMM_DEVICE **v12; // rcx
  __int64 v13; // rax
  int v14; // r9d
  char v15[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]

  if ( a2 == *((VIDMM_DEVICE ****)this + 30) )
    *((_QWORD *)this + 30) = 0LL;
  v4 = *((_QWORD *)this + 2);
  v5 = v4 == -328;
  v6 = v4 + 328;
  v16 = v6;
  if ( !v5 && *(struct _KTHREAD **)(v6 + 8) == KeGetCurrentThread() )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v13);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *(_DWORD *)(v6 + 16);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v7, &EventBlockThread, v8, v14);
    }
    ExAcquirePushLockExclusiveEx(v6, 0LL);
  }
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  v5 = (*((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 42)) == 0;
  v17 = 2;
  if ( !v5 )
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    v9 = (VIDMM_DEVICE *)(a2 + 14);
    v10 = a2[14];
    v11 = a2[15];
    if ( v10[1] != (struct VIDMM_ALLOC *)(a2 + 14) || *v11 != v9 )
      __fastfail(3u);
    *v11 = (VIDMM_DEVICE *)v10;
    v10[1] = (struct VIDMM_ALLOC *)v11;
    v12 = (VIDMM_DEVICE **)*((_QWORD *)this + 21);
    if ( *v12 != (VIDMM_DEVICE *)((char *)this + 160) )
      __fastfail(3u);
    a2[15] = v12;
    *(_QWORD *)v9 = (char *)this + 160;
    *v12 = v9;
    *((_QWORD *)this + 21) = v9;
    VIDMM_DEVICE::DecrementCurrentUsage(this, (__int64 **)a2);
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
  }
  *((_DWORD *)a2 + 42) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
}
