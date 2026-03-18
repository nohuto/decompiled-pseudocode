/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005CA0C
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005BC70 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     Template_xxpqhc @ 0x1C001F584 (Template_xxpqhc.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00671B4 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        __int64 a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  _BYTE *v7; // r9
  struct _VIDMM_DEVICE_COMMITMENT_INFO *v8; // r15
  __int64 v9; // rbx
  __int64 v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 v17; // di
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 PriorityClass; // r8

  v7 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v8 = a2;
  v9 = (unsigned int)a3;
  v11 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, *(_QWORD *)&g_IsInternalReleaseOrDbg);
    v7 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    v12[3] = this;
    v12[4] = v9;
    v12[5] = a4;
    v12[6] = a5;
    v12[7] = v11;
  }
  v13 = v9;
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v9);
  if ( v14 )
    v15 = *(_QWORD *)(v14 + 16) + 184LL * *((unsigned int *)a4 + 5);
  else
    v15 = 0LL;
  *(_QWORD *)(v15 + 16) -= v11;
  v16 = 0xFFFFFFFFLL;
  --*(_DWORD *)(v15 + 56);
  if ( !a5 )
    goto LABEL_6;
  --*(_DWORD *)(v15 + 8);
  v16 = (__int64)v8 + 16;
  a3 = *((_QWORD *)v8 + 2);
  a2 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)*((_QWORD *)v8 + 3);
  if ( *(struct _VIDMM_DEVICE_COMMITMENT_INFO **)(a3 + 8) != (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)v8 + 16)
    || *(_QWORD *)a2 != v16 )
  {
    __fastfail(3u);
  }
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a3 + 8) = a2;
  *(_QWORD *)v16 = 0LL;
  *((_QWORD *)v8 + 3) = 0LL;
  if ( *(_DWORD *)(v15 + 8) )
LABEL_6:
    v17 = 0;
  else
    v17 = 1;
  v18 = (_QWORD *)(v15 + 24);
  if ( *v7 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, a2, a3, v7);
    v19[3] = v18;
    v19[4] = a4;
    v19[5] = v17;
    v19[6] = v11;
  }
  if ( v17 )
  {
    v23 = *v18;
    v24 = (_QWORD *)v18[1];
    if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v24 != v18 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    *v18 = 0LL;
    v18[1] = 0LL;
  }
  v20 = *(__int64 **)(*((_QWORD *)this + 2) + 8 * v13);
  v21 = v20[6] + 264 * (*((_DWORD *)a6 + 19) & 0x3FLL);
  v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8LL * *((int *)a4 + 117) + 200), -v11) - v11;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    Template_xxpqhc(v20[5], &EventVidMmProcessCommitmentChange, *v20);
  if ( (*((_DWORD *)a4 + 14) & 0x1001) != 0 && (*((_DWORD *)a6 + 19) & 0x400) == 0 )
  {
    PriorityClass = (int)VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 98), a2, a3, v22);
    *(_QWORD *)(v21 + 8 * PriorityClass + 224) -= v11;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_xxpqhc(*((_WORD *)a6 + 38) & 0x3F, &EventVidMmProcessDemotedCommitmentChange, PriorityClass);
  }
}
