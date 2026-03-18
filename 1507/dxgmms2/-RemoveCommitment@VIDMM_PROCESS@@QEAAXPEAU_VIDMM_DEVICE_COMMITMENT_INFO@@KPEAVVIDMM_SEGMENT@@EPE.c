/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058540
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0059238 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C003DC60 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006FEB4 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  char v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  int PriorityClass; // eax
  __int64 v21; // r8

  v6 = a3;
  v8 = *((_QWORD *)a6 + 2);
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(this, a3, *((_DWORD *)a4 + 5));
  *((_QWORD *)CommitmentInformation + 2) -= v8;
  --*((_DWORD *)CommitmentInformation + 14);
  if ( !a5 )
    goto LABEL_7;
  --*((_DWORD *)CommitmentInformation + 2);
  v13 = (_QWORD *)(v12 + 16);
  v14 = *(_QWORD *)(v12 + 16);
  v15 = *(_QWORD **)(v12 + 24);
  if ( *(_QWORD *)(v14 + 8) != v12 + 16 || (_QWORD *)*v15 != v13 )
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *v13 = 0LL;
  *(_QWORD *)(v12 + 24) = 0LL;
  if ( *((_DWORD *)CommitmentInformation + 2) )
LABEL_7:
    v16 = 0;
  else
    v16 = 1;
  v17 = (_QWORD *)((char *)CommitmentInformation + 24);
  if ( v16 )
  {
    v18 = *v17;
    v19 = (_QWORD *)v17[1];
    if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v19 != v17 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    *v17 = 0LL;
    v17[1] = 0LL;
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v6) + 48LL)
                              + 240LL * (*(_DWORD *)(v11 + 76) & 0x3F)
                              + 8LL * *(int *)(v10 + 432)
                              + 176),
    -v8);
  if ( (*(_DWORD *)(v10 + 56) & 0x1001) != 0 && (*(_DWORD *)(v11 + 76) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*(unsigned int *)(v11 + 376));
    *(_QWORD *)(v21 + 8LL * PriorityClass + 200) -= v8;
  }
}
