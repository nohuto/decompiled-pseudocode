/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C006F7B0
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C0076720 (DxgkReclaimAllocations2.c)
 *     DxgkReclaimAllocations @ 0x1C0134940 (DxgkReclaimAllocations.c)
 * Callees:
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@Z @ 0x1C00111A0 (-VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        __int64 this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3)
{
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r9
  UINT v8; // r8d
  BOOL *v9; // rdx
  __int64 v10; // rax
  unsigned int v12; // r12d
  UINT i; // r14d
  D3DKMT_HANDLE *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  ULONG_PTR Count; // rdi
  BOOL v22; // esi
  unsigned __int64 *p_PagingFenceValue; // r9
  int *v24; // r8
  struct VIDMM_PAGING_QUEUE *v25; // r10
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  _QWORD *v32; // rax
  BOOL *pDiscarded; // rax
  BOOL *v34; // rdx
  UINT j; // esi
  unsigned int *v36; // rdx
  __int64 v37; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  _QWORD *v42; // rax
  struct _EX_RUNDOWN_REF *v43; // rcx
  struct DXGGLOBAL *v44; // rax
  __int64 v45; // rax
  struct _KTHREAD *v46; // rdi
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rbx
  __int64 *v50; // rax
  struct _KTHREAD *v52; // rdi
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 v57; // rbx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  int *v60; // r8
  struct VIDMM_PAGING_QUEUE *v61; // r10
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdi
  _QWORD *v68; // rax
  BOOL *v69; // rax
  BOOL *v70; // rdx
  struct DXGGLOBAL *v71; // rax
  __int64 v72; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v74; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v76; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  struct _KTHREAD *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // ebx
  __int64 v85; // r8
  __int64 v86; // rbx
  __int64 *v87; // rax
  __int64 v88; // rbx
  _QWORD *v89; // rax
  __int64 v90; // [rsp+30h] [rbp-78h] BYREF
  UINT v91; // [rsp+38h] [rbp-70h]
  int v92; // [rsp+3Ch] [rbp-6Ch] BYREF
  struct _EX_RUNDOWN_REF *v93; // [rsp+40h] [rbp-68h] BYREF
  UINT v94; // [rsp+48h] [rbp-60h]
  unsigned __int64 v95; // [rsp+50h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v96; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v97; // [rsp+60h] [rbp-48h]
  int v99; // [rsp+C8h] [rbp+20h] BYREF

  v5 = this;
  v6 = 0LL;
  v90 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(this + 16) + 16LL);
  if ( !*(_BYTE *)(v7 + 1921) )
  {
    if ( a3->pDiscarded )
    {
      LODWORD(v95) = 0;
      v8 = 0;
      v94 = 0;
      while ( v8 < a3->NumAllocations )
      {
        v9 = &a3->pDiscarded[v8];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (BOOL *)MmUserProbeAddress;
        *v9 = 0;
        v94 = ++v8;
      }
    }
    v10 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v10 + 24) = v5;
    *(_QWORD *)(v10 + 32) = 0LL;
    WdLogEvent5_WdEvent(v10);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v90);
    return 0LL;
  }
  if ( a3->NumAllocations )
  {
    v12 = 0;
    if ( a3->pResources )
    {
      if ( !a3->HandleList )
      {
        for ( i = 0; ; ++i )
        {
          v91 = i;
          if ( i >= a3->NumAllocations )
            break;
          v95 = 4LL * i;
          v14 = &a3->pResources[v95 / 4];
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          v15 = *v14;
          DXGPROCESS::GetResourceSafe(*(_QWORD *)(v5 + 40), (DXGRESOURCEREFERENCE *)&v93, v15);
          if ( !v93 )
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
            v20[3] = v5;
            v20[4] = v15;
            v20[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v20);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v93);
            goto LABEL_122;
          }
          Count = v93[3].Count;
          v22 = 0;
          if ( Count )
          {
            p_PagingFenceValue = &a3->PagingFenceValue;
            while ( 1 )
            {
              v99 = 1;
              v24 = &v99;
              if ( !a3->pDiscarded )
                v24 = 0LL;
              v25 = a2 ? (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 4) : 0LL;
              v26 = VIDMM_EXPORT::VidMmReclaimAllocation(
                      *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 16) + 424LL),
                      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 16) + 432LL),
                      v25,
                      *(struct _VIDMM_MULTI_ALLOC **)(Count + 24),
                      p_PagingFenceValue,
                      v24);
              v31 = v26;
              if ( v26 < 0 )
                break;
              if ( v26 == 259 )
                v12 = 259;
              v22 = v22 || v99;
              Count = *(_QWORD *)(Count + 64);
              p_PagingFenceValue = &a3->PagingFenceValue;
              if ( !Count )
              {
                i = v91;
                goto LABEL_35;
              }
            }
            v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
            v32[3] = v5;
            v32[4] = Count;
            v32[5] = v31;
            WdLogEvent5_WdWarning(v32);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v93);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v90);
            return (unsigned int)v31;
          }
LABEL_35:
          pDiscarded = a3->pDiscarded;
          if ( pDiscarded )
          {
            v34 = &pDiscarded[v95 / 4];
            if ( (unsigned __int64)&pDiscarded[v95 / 4] >= MmUserProbeAddress )
              v34 = (BOOL *)MmUserProbeAddress;
            *v34 = v22;
          }
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v93);
        }
LABEL_93:
        if ( v6 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 88));
        v71 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v72 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v72 + 24) = 1016LL;
          WdLogEvent5_WdAssertion(v72);
          v71 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v71 + 231) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v74 = WdLogNewEntry5_WdAssertion(this);
            *(_QWORD *)(v74 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v74);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v76 = 0LL;
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v76 = *ThreadWin32Thread;
            if ( v76 )
              v79 = *(_QWORD *)(v76 + 80);
            else
              v79 = 0LL;
            if ( v79 )
            {
              v80 = KeGetCurrentThread();
              if ( !v80 )
              {
                v81 = WdLogNewEntry5_WdAssertion(v78);
                *(_QWORD *)(v81 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v81);
              }
              v84 = PsGetCurrentProcessSessionId();
              if ( !v84 || (unsigned int)PsGetThreadSessionId(v80) != v84 )
                goto LABEL_116;
              v86 = 0LL;
              v87 = (__int64 *)PsGetThreadWin32Thread(v80);
              if ( v87 )
                v86 = *v87;
              if ( v86 )
                v88 = *(_QWORD *)(v86 + 80);
              else
LABEL_116:
                v88 = 0LL;
              if ( *(_DWORD *)(v88 + 136) )
              {
                v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v83, v82, v85);
                v89[3] = 275LL;
                v89[4] = 25LL;
                v89[5] = *(int *)(v88 + 136);
                v89[6] = 0LL;
                v89[7] = 0LL;
                WdLogEvent5_WdCriticalError(v89);
              }
            }
          }
        }
        return v12;
      }
    }
    else if ( a3->HandleList )
    {
      for ( j = 0; j < a3->NumAllocations; ++j )
      {
        v97 = 4LL * j;
        v36 = (unsigned int *)&a3->HandleList[v97 / 4];
        if ( (unsigned __int64)v36 >= MmUserProbeAddress )
          v36 = (unsigned int *)MmUserProbeAddress;
        v91 = *v36;
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*(_QWORD *)(v5 + 40), (DXGALLOCATIONREFERENCE *)&v96, v91);
        if ( v6 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 88));
        v6 = *(_QWORD *)AllocationSafe;
        v90 = v6;
        if ( v6 && !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v6 + 88)) )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v37, v39);
          v42[3] = 275LL;
          v42[4] = 25LL;
          v42[5] = v6;
          v42[6] = 0LL;
          v42[7] = 0LL;
          WdLogEvent5_WdCriticalError(v42);
        }
        v43 = v96;
        if ( v96 )
          ExReleaseRundownProtection(v96 + 11);
        v44 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v45 = WdLogNewEntry5_WdAssertion(v43);
          *(_QWORD *)(v45 + 24) = 1016LL;
          WdLogEvent5_WdAssertion(v45);
          v44 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v44 + 231) )
        {
          v46 = KeGetCurrentThread();
          if ( !v46 )
          {
            v47 = WdLogNewEntry5_WdAssertion(v43);
            *(_QWORD *)(v47 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v47);
          }
          v48 = PsGetCurrentProcessSessionId();
          if ( !v48 || (unsigned int)PsGetThreadSessionId(v46) != v48 )
            goto LABEL_76;
          v49 = 0LL;
          v50 = (__int64 *)PsGetThreadWin32Thread(v46);
          if ( v50 )
            v49 = *v50;
          if ( !(v49 ? *(_QWORD *)(v49 + 80) : 0LL) )
            goto LABEL_76;
          v52 = KeGetCurrentThread();
          if ( !v52 )
          {
            v53 = WdLogNewEntry5_WdAssertion(v43);
            *(_QWORD *)(v53 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v53);
          }
          v54 = PsGetCurrentProcessSessionId();
          if ( !v54 || (unsigned int)PsGetThreadSessionId(v52) != v54 )
            goto LABEL_73;
          v55 = 0LL;
          v56 = (__int64 *)PsGetThreadWin32Thread(v52);
          if ( v56 )
            v55 = *v56;
          if ( v55 )
            v57 = *(_QWORD *)(v55 + 80);
          else
LABEL_73:
            v57 = 0LL;
          if ( *(_DWORD *)(v57 + 136) )
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v37, v39);
            v58[3] = 275LL;
            v58[4] = 25LL;
            v58[5] = *(int *)(v57 + 136);
            v58[6] = 0LL;
            v58[7] = 0LL;
            WdLogEvent5_WdCriticalError(v58);
            v6 = v90;
          }
          else
          {
LABEL_76:
            v6 = v90;
          }
        }
        if ( !v6 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v37, v39, v40);
          v59[3] = v5;
          v59[4] = v91;
          v59[5] = -1073741811LL;
          goto LABEL_121;
        }
        v92 = 1;
        v60 = &v92;
        if ( !a3->pDiscarded )
          v60 = 0LL;
        if ( a2 )
          v61 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 4);
        else
          v61 = 0LL;
        v62 = VIDMM_EXPORT::VidMmReclaimAllocation(
                *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 16) + 424LL),
                *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 16) + 432LL),
                v61,
                *(struct _VIDMM_MULTI_ALLOC **)(v6 + 24),
                &a3->PagingFenceValue,
                v60);
        v67 = v62;
        if ( v62 < 0 )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, v63, v65, v66);
          v68[3] = v5;
          v68[4] = v6;
          v68[5] = v67;
          WdLogEvent5_WdWarning(v68);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v90);
          return (unsigned int)v67;
        }
        this = 259LL;
        if ( v62 == 259 )
          v12 = 259;
        v69 = a3->pDiscarded;
        if ( v69 )
        {
          v70 = &v69[v97 / 4];
          if ( (unsigned __int64)&v69[v97 / 4] >= MmUserProbeAddress )
            v70 = (BOOL *)MmUserProbeAddress;
          *v70 = v92;
        }
      }
      goto LABEL_93;
    }
  }
  v59 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, v7);
  v59[3] = v5;
  v59[4] = -1073741811LL;
LABEL_121:
  WdLogEvent5_WdWarning(v59);
LABEL_122:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v90);
  return 3221225485LL;
}
