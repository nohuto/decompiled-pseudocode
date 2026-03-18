/*
 * XREFs of ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C00069D0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C003397C (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003EF20 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B350 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006B5E0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006BDF0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0006A74 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C00341D4 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C003DC60 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 */

void __fastcall VidMmRecordAlloc(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  int v13; // edi
  unsigned int v14; // ebx
  VIDMM_PROCESS_ADAPTER_INFO *v15; // rsi
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  unsigned int v17; // edx
  unsigned int v18; // ecx

  v7 = VIDMM_GLOBAL::AdapterId(a1);
  v11 = v10[5];
  v12 = v7;
  if ( (v10[14] & 0x1000) != 0 )
    v13 = 0;
  else
    v13 = v10[4] + 1;
  v14 = *(_DWORD *)(v8 + 72);
  v15 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 8LL * v7);
  VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock(v15);
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(*(VIDMM_PROCESS **)(a3 + 8), v12, v11);
  if ( !v14 || (v14 & 0x1F) == v13 )
  {
    if ( a6 )
    {
      --*((_DWORD *)CommitmentInformation + 16);
      *((_QWORD *)CommitmentInformation + 9) -= a5;
    }
    else
    {
      ++*((_DWORD *)CommitmentInformation + 16);
      *((_QWORD *)CommitmentInformation + 9) += a5;
    }
  }
  else
  {
    v17 = 1;
    v18 = 6;
    while ( ((v14 >> v18) & 0x1F) != v13 )
    {
      ++v17;
      v18 += 6;
      if ( v18 >= 0x1E )
      {
        if ( a6 )
        {
          --*((_DWORD *)CommitmentInformation + 36);
          *((_QWORD *)CommitmentInformation + 19) -= a5;
        }
        else
        {
          ++*((_DWORD *)CommitmentInformation + 36);
          *((_QWORD *)CommitmentInformation + 19) += a5;
        }
        goto LABEL_6;
      }
    }
    if ( a6 )
    {
      --*((_DWORD *)CommitmentInformation + 4 * v17 + 16);
      *((_QWORD *)CommitmentInformation + 2 * v17 + 9) -= a5;
    }
    else
    {
      ++*((_DWORD *)CommitmentInformation + 4 * v17 + 16);
      *((_QWORD *)CommitmentInformation + 2 * v17 + 9) += a5;
    }
  }
LABEL_6:
  VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock(v15);
}
