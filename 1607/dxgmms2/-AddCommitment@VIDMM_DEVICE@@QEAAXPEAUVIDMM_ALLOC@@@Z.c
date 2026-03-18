/*
 * XREFs of ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0087650
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005CBD4 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 */

void __fastcall VIDMM_DEVICE::AddCommitment(VIDMM_DEVICE *this, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  DXGPROCESS **v7; // r14
  unsigned int *v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rdx
  __int64 *v12; // rcx

  v6 = **a2;
  v7 = (DXGPROCESS **)(*a2)[1];
  v8 = *(unsigned int **)(v6 + 136);
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = this;
  }
  v10 = a2 + 7;
  v11 = *((_QWORD *)this + 5) + 56LL * v8[5];
  ++*(_DWORD *)v11;
  *(_QWORD *)(v11 + 8) += *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v11 + 48) = this;
  v12 = *(__int64 **)(v11 + 40);
  if ( *v12 != v11 + 32 )
    __fastfail(3u);
  a2[8] = v12;
  *v10 = v11 + 32;
  *v12 = (__int64)v10;
  *(_QWORD *)(v11 + 40) = v10;
  VIDMM_PROCESS::AddCommitment(
    v7,
    (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v11,
    (_QWORD *)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL),
    (struct VIDMM_SEGMENT *)v8,
    *(_DWORD *)v11 == 1,
    (struct _VIDMM_GLOBAL_ALLOC *)v6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 2;
  ++*(_DWORD *)(v6 + 160);
  *((_DWORD *)a2 + 7) |= 0x10u;
}
