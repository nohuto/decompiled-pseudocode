/*
 * XREFs of ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C001EFF8
 * Callers:
 *     ?VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C001D380 (-VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYST.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0052D50 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C005D0C8 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C0067470 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessAdapterStatistics(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v12; // eax
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax

  v6 = VIDMM_GLOBAL::AdapterId(this);
  v8 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 8LL * v6);
  if ( !v10 )
    return 3221225485LL;
  *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(v7 + 40136) + 8LL);
  *((_QWORD *)a3 + 3) = *(_QWORD *)(v10 + 416);
  *((_DWORD *)a3 + 4) = *(_DWORD *)(v10 + 408);
  *((_DWORD *)a3 + 8) = *(_DWORD *)(v10 + 424);
  *((_DWORD *)a3 + 9) = *(_DWORD *)(v10 + 428);
  *((_QWORD *)a3 + 23) = 1LL;
  *((_QWORD *)a3 + 22) = *(int *)(v10 + 444);
  *((_QWORD *)a3 + 21) = (int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v10 + 432));
  memset((char *)a3 + 40, 0, 0x30uLL);
  if ( *(_DWORD *)a3 )
  {
    do
    {
      v12 = VIDMM_GLOBAL::AdapterId(this);
      CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(a2, v12, v8++);
      *((_QWORD *)a3 + 5) += *((_QWORD *)CommitmentInformation + 20);
      *((_QWORD *)a3 + 6) += *((_QWORD *)CommitmentInformation + 9);
      *((_QWORD *)a3 + 7) += *((_QWORD *)CommitmentInformation + 11);
      *((_QWORD *)a3 + 8) += *((_QWORD *)CommitmentInformation + 13);
      *((_QWORD *)a3 + 9) += *((_QWORD *)CommitmentInformation + 15);
      *((_QWORD *)a3 + 10) += *((_QWORD *)CommitmentInformation + 17);
    }
    while ( v8 < *(_DWORD *)a3 );
  }
  return 0LL;
}
