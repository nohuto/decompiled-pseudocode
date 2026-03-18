/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C0097EC0
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C00A42A0 (DxgkReclaimAllocations2.c)
 *     DxgkReclaimAllocations @ 0x1C0153D50 (DxgkReclaimAllocations.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0011318 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0011634 (-VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        __int64 this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3)
{
  __int64 v5; // r13
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // r9
  UINT v8; // r8d
  BOOL *v9; // rdx
  __int64 v10; // rax
  unsigned int v12; // r12d
  UINT i; // r14d
  unsigned int *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rsi
  int v21; // edi
  unsigned __int64 *p_PagingFenceValue; // r9
  enum _D3DDDI_RECLAIM_RESULT *v23; // r8
  struct VIDMM_PAGING_QUEUE *v24; // r10
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  _QWORD *v31; // rax
  BOOL *pDiscarded; // rax
  BOOL *v33; // rdx
  UINT j; // esi
  unsigned int *v35; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _EX_RUNDOWN_REF *v40; // rcx
  DXGGLOBAL *v41; // rax
  __int64 v42; // rax
  struct _KTHREAD *v43; // rdi
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rax
  struct _KTHREAD *v49; // rdi
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rbx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  enum _D3DDDI_RECLAIM_RESULT *v57; // r8
  struct VIDMM_PAGING_QUEUE *v58; // r10
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdi
  _QWORD *v65; // rax
  BOOL *v66; // rax
  BOOL *v67; // rdx
  DXGGLOBAL *v68; // rax
  __int64 v69; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v71; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v73; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  struct _KTHREAD *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // ebx
  __int64 v82; // r8
  __int64 v83; // rbx
  __int64 *v84; // rax
  __int64 v85; // rbx
  _QWORD *v86; // rax
  __int64 v87; // [rsp+30h] [rbp-88h] BYREF
  __int64 v88; // [rsp+38h] [rbp-80h] BYREF
  int v89; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v90; // [rsp+44h] [rbp-74h]
  BOOL v91; // [rsp+48h] [rbp-70h] BYREF
  UINT v92; // [rsp+4Ch] [rbp-6Ch]
  _BYTE v93[16]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v94; // [rsp+60h] [rbp-58h]
  unsigned __int64 v95; // [rsp+68h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v96; // [rsp+70h] [rbp-48h] BYREF
  UINT v98; // [rsp+D8h] [rbp+20h]
  unsigned __int64 v99; // [rsp+D8h] [rbp+20h]

  v5 = this;
  v6 = 0LL;
  v87 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(this + 16) + 16LL);
  if ( !*(_BYTE *)(v7 + 2057) )
  {
    if ( a3->pDiscarded )
    {
      v8 = 0;
      v92 = 0;
      while ( v8 < a3->NumAllocations )
      {
        v9 = &a3->pDiscarded[v8];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (BOOL *)MmUserProbeAddress;
        *v9 = 0;
        v92 = ++v8;
      }
    }
    v10 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v10 + 24) = v5;
    *(_QWORD *)(v10 + 32) = 0LL;
    WdLogEvent5_WdEvent(v10);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87);
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
          v98 = i;
          if ( i >= a3->NumAllocations )
            break;
          v95 = 4LL * i;
          v14 = &a3->pResources[v95 / 4];
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (unsigned int *)MmUserProbeAddress;
          v94 = *v14;
          v15 = v94;
          DXGPROCESS::GetResourceSafe(*(_QWORD *)(v5 + 40), (DXGRESOURCEREFERENCE *)&v88, v94);
          if ( !v88 )
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, 0LL, v17, v18);
            v19[3] = v5;
            v19[4] = v15;
            v19[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v19);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v88);
            goto LABEL_117;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v93, (struct DXGFASTMUTEX *const)(v88 + 80));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v93);
          v20 = *(_QWORD *)(v88 + 24);
          v21 = 0;
          if ( v20 )
          {
            p_PagingFenceValue = &a3->PagingFenceValue;
            while ( 1 )
            {
              v89 = 0;
              v23 = (enum _D3DDDI_RECLAIM_RESULT *)&v89;
              if ( !a3->pDiscarded )
                v23 = 0LL;
              if ( a2 )
                v24 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 4);
              else
                v24 = 0LL;
              v25 = VIDMM_EXPORT::VidMmReclaimAllocation(
                      *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 16) + 400LL),
                      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 16) + 408LL),
                      v24,
                      *(struct _VIDMM_MULTI_ALLOC **)(v20 + 24),
                      p_PagingFenceValue,
                      v23);
              v30 = v25;
              if ( v25 < 0 )
              {
                v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
                v31[3] = v5;
                v31[4] = v20;
                v31[5] = v30;
                WdLogEvent5_WdWarning(v31);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v93);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v88);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87);
                return (unsigned int)v30;
              }
              if ( v25 == 259 )
                v12 = 259;
              if ( v89 == 2 )
                break;
              if ( v89 == 1 )
                v21 = 1;
              v20 = *(_QWORD *)(v20 + 64);
              p_PagingFenceValue = &a3->PagingFenceValue;
              if ( !v20 )
                goto LABEL_35;
            }
            v21 = 2;
LABEL_35:
            i = v98;
          }
          pDiscarded = a3->pDiscarded;
          if ( pDiscarded )
          {
            v33 = &pDiscarded[v95 / 4];
            if ( (unsigned __int64)&pDiscarded[v95 / 4] >= MmUserProbeAddress )
              v33 = (BOOL *)MmUserProbeAddress;
            *v33 = v21;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v93);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v88);
        }
LABEL_88:
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v68 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v69 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v69 + 24) = 982LL;
          WdLogEvent5_WdAssertion(v69);
          v68 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v68 + 191) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v71 = WdLogNewEntry5_WdAssertion(this);
            *(_QWORD *)(v71 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v71);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v73 = 0LL;
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v73 = *ThreadWin32Thread;
            if ( v73 )
              v76 = *(_QWORD *)(v73 + 80);
            else
              v76 = 0LL;
            if ( v76 )
            {
              v77 = KeGetCurrentThread();
              if ( !v77 )
              {
                v78 = WdLogNewEntry5_WdAssertion(v75);
                *(_QWORD *)(v78 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v78);
              }
              v81 = PsGetCurrentProcessSessionId();
              if ( !v81 || (unsigned int)PsGetThreadSessionId(v77) != v81 )
                goto LABEL_111;
              v83 = 0LL;
              v84 = (__int64 *)PsGetThreadWin32Thread(v77);
              if ( v84 )
                v83 = *v84;
              if ( v83 )
                v85 = *(_QWORD *)(v83 + 80);
              else
LABEL_111:
                v85 = 0LL;
              if ( *(_DWORD *)(v85 + 136) )
              {
                v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v79, v82);
                v86[3] = 275LL;
                v86[4] = 25LL;
                v86[5] = *(int *)(v85 + 136);
                v86[6] = 0LL;
                v86[7] = 0LL;
                WdLogEvent5_WdCriticalError(v86);
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
        v99 = j;
        v35 = (unsigned int *)&a3->HandleList[v99];
        if ( (unsigned __int64)v35 >= MmUserProbeAddress )
          v35 = (unsigned int *)MmUserProbeAddress;
        v90 = *v35;
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*(_QWORD *)(v5 + 40), (DXGALLOCATIONREFERENCE *)&v96, v90);
        DXGALLOCATIONREFERENCE::MoveAssign(&v87, AllocationSafe);
        v40 = v96;
        if ( v96 )
          ExReleaseRundownProtection(v96 + 11);
        v41 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v42 = WdLogNewEntry5_WdAssertion(v40);
          *(_QWORD *)(v42 + 24) = 982LL;
          WdLogEvent5_WdAssertion(v42);
          v41 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v41 + 191) )
        {
          v43 = KeGetCurrentThread();
          if ( !v43 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v40);
            *(_QWORD *)(v44 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v44);
          }
          v45 = PsGetCurrentProcessSessionId();
          if ( v45 && (unsigned int)PsGetThreadSessionId(v43) == v45 )
          {
            v46 = 0LL;
            v47 = (__int64 *)PsGetThreadWin32Thread(v43);
            if ( v47 )
              v46 = *v47;
            if ( v46 )
              v48 = *(_QWORD *)(v46 + 80);
            else
              v48 = 0LL;
            if ( v48 )
            {
              v49 = KeGetCurrentThread();
              if ( !v49 )
              {
                v50 = WdLogNewEntry5_WdAssertion(v40);
                *(_QWORD *)(v50 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v50);
              }
              v51 = PsGetCurrentProcessSessionId();
              if ( !v51 || (unsigned int)PsGetThreadSessionId(v49) != v51 )
                goto LABEL_69;
              v52 = 0LL;
              v53 = (__int64 *)PsGetThreadWin32Thread(v49);
              if ( v53 )
                v52 = *v53;
              if ( v52 )
                v54 = *(_QWORD *)(v52 + 80);
              else
LABEL_69:
                v54 = 0LL;
              if ( *(_DWORD *)(v54 + 136) )
              {
                v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v37, v38);
                v55[3] = 275LL;
                v55[4] = 25LL;
                v55[5] = *(int *)(v54 + 136);
                v55[6] = 0LL;
                v55[7] = 0LL;
                WdLogEvent5_WdCriticalError(v55);
              }
            }
          }
        }
        v6 = (struct _EX_RUNDOWN_REF *)v87;
        if ( !v87 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v37, v38, v39);
          v56[3] = v5;
          v56[4] = v90;
          v56[5] = -1073741811LL;
          goto LABEL_116;
        }
        v91 = 0;
        v57 = (enum _D3DDDI_RECLAIM_RESULT *)&v91;
        if ( !a3->pDiscarded )
          v57 = 0LL;
        if ( a2 )
          v58 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 4);
        else
          v58 = 0LL;
        v59 = VIDMM_EXPORT::VidMmReclaimAllocation(
                *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 16) + 400LL),
                *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 16) + 408LL),
                v58,
                *(struct _VIDMM_MULTI_ALLOC **)(v87 + 24),
                &a3->PagingFenceValue,
                v57);
        v64 = v59;
        if ( v59 < 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60, v62, v63);
          v65[3] = v5;
          v65[4] = v6;
          v65[5] = v64;
          WdLogEvent5_WdWarning(v65);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87);
          return (unsigned int)v64;
        }
        this = 259LL;
        if ( v59 == 259 )
          v12 = 259;
        v66 = a3->pDiscarded;
        if ( v66 )
        {
          v67 = &v66[v99];
          if ( (unsigned __int64)&v66[v99] >= MmUserProbeAddress )
            v67 = (BOOL *)MmUserProbeAddress;
          *v67 = v91;
        }
      }
      goto LABEL_88;
    }
  }
  v56 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, v7);
  v56[3] = v5;
  v56[4] = -1073741811LL;
LABEL_116:
  WdLogEvent5_WdWarning(v56);
LABEL_117:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87);
  return 3221225485LL;
}
