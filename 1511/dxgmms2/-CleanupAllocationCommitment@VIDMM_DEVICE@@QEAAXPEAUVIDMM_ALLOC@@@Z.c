/*
 * XREFs of ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0053194
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0052E98 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::CleanupAllocationCommitment(
        VIDMM_DEVICE *this,
        VIDMM_DEVICE ***a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  VIDMM_DEVICE *v11; // rax
  struct VIDMM_ALLOC **v12; // rdx
  VIDMM_DEVICE **v13; // rcx
  VIDMM_DEVICE **v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  char v17[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+30h] [rbp-18h]

  if ( a2 == *((VIDMM_DEVICE ****)this + 27) )
    *((_QWORD *)this + 27) = 0LL;
  v6 = *((_QWORD *)this + 2);
  v7 = v6 == -304;
  v8 = v6 + 304;
  v18 = v8;
  if ( !v7 && *(struct _KTHREAD **)(v8 + 8) == KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v15);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *(_DWORD *)(v8 + 16);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v9, &EventBlockThread, v10, v16);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v7 = (*((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38)) == 0;
  v19 = 2;
  if ( !v7 )
  {
    v11 = (VIDMM_DEVICE *)(a2 + 14);
    v12 = a2[14];
    v13 = a2[15];
    if ( v12[1] != (struct VIDMM_ALLOC *)(a2 + 14) || *v13 != v11 )
      __fastfail(3u);
    *v13 = (VIDMM_DEVICE *)v12;
    v12[1] = (struct VIDMM_ALLOC *)v13;
    v14 = (VIDMM_DEVICE **)*((_QWORD *)this + 20);
    *(_QWORD *)v11 = (char *)this + 152;
    a2[15] = v14;
    if ( *v14 != (VIDMM_DEVICE *)((char *)this + 152) )
      __fastfail(3u);
    *v14 = v11;
    *((_QWORD *)this + 20) = v11;
    VIDMM_DEVICE::DecrementCurrentUsage(this, (__int64 **)a2);
  }
  *((_DWORD *)a2 + 38) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
}
