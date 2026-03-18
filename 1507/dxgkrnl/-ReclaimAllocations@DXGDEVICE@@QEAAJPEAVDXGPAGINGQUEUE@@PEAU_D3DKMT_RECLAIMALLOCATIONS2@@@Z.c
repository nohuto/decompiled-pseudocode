/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C007C5C0
 * Callers:
 *     DxgkReclaimAllocations @ 0x1C0077F00 (DxgkReclaimAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x1C012F8C0 (DxgkReclaimAllocations2.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@Z @ 0x1C0005268 (-VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C000F698 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(unsigned __int64 this, BOOL *a2, unsigned __int64 a3)
{
  struct _D3DKMT_RECLAIMALLOCATIONS2 *v3; // r15
  struct DXGPAGINGQUEUE *v4; // r14
  unsigned __int64 v5; // r13
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v13; // r12d
  unsigned int i; // r14d
  D3DKMT_HANDLE *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG_PTR Count; // rdi
  BOOL v25; // esi
  unsigned __int64 *p_PagingFenceValue; // r9
  int *v27; // r8
  struct VIDMM_PAGING_QUEUE *v28; // r10
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  BOOL *pDiscarded; // rax
  BOOL *v40; // rdx
  UINT j; // esi
  unsigned int *v42; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  struct _EX_RUNDOWN_REF *v47; // rcx
  struct DXGGLOBAL *v48; // rax
  __int64 v49; // rax
  struct _KTHREAD *v50; // rdi
  __int64 v51; // rax
  int v52; // ebx
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rax
  struct _KTHREAD *v56; // rdi
  __int64 v57; // rax
  int v58; // ebx
  __int64 v59; // rbx
  __int64 *v60; // rax
  __int64 v61; // rbx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  int *v64; // r8
  struct VIDMM_PAGING_QUEUE *v65; // r10
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rdi
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  BOOL *v73; // rax
  struct DXGGLOBAL *v74; // rax
  __int64 v75; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v77; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v79; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  struct _KTHREAD *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // ebx
  __int64 v91; // r8
  __int64 v92; // rbx
  __int64 *v93; // rax
  __int64 v94; // rbx
  _QWORD *v95; // rax
  struct _EX_RUNDOWN_REF *v96; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v97; // [rsp+38h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v98; // [rsp+40h] [rbp-78h] BYREF
  int v99; // [rsp+48h] [rbp-70h] BYREF
  int v100; // [rsp+4Ch] [rbp-6Ch]
  __int64 v101; // [rsp+50h] [rbp-68h]
  _BYTE v102[16]; // [rsp+58h] [rbp-60h] BYREF
  struct _EX_RUNDOWN_REF *v103; // [rsp+68h] [rbp-50h] BYREF
  __int64 v104; // [rsp+70h] [rbp-48h]
  struct DXGPAGINGQUEUE *v105; // [rsp+C8h] [rbp+10h]
  int v106; // [rsp+D8h] [rbp+20h] BYREF

  v105 = (struct DXGPAGINGQUEUE *)a2;
  v3 = (struct _D3DKMT_RECLAIMALLOCATIONS2 *)a3;
  v4 = (struct DXGPAGINGQUEUE *)a2;
  v5 = this;
  v6 = 0LL;
  v96 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(this + 16) + 16LL);
  if ( !*(_BYTE *)(v7 + 1913) )
  {
    if ( *(_QWORD *)(a3 + 24) )
    {
      LODWORD(v101) = 0;
      a3 = 0LL;
      v100 = 0;
      while ( (unsigned int)a3 < v3->NumAllocations )
      {
        this = (unsigned int)a3;
        a2 = &v3->pDiscarded[(unsigned int)a3];
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (BOOL *)MmUserProbeAddress;
        *a2 = 0;
        a3 = (unsigned int)(a3 + 1);
        v100 = a3;
      }
    }
    v8 = WdLogNewEntry5_WdEvent(this, a2, a3, v7);
    *(_QWORD *)(v8 + 24) = v5;
    *(_QWORD *)(v8 + 32) = 0LL;
    WdLogEvent5_WdEvent(v8);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96, v9, v10, v11);
    return 0LL;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v13 = 0;
    if ( *(_QWORD *)(a3 + 8) )
    {
      if ( !*(_QWORD *)(a3 + 16) )
      {
        for ( i = 0; ; ++i )
        {
          v97 = i;
          if ( i >= v3->NumAllocations )
            break;
          v101 = 4LL * i;
          v15 = &v3->pResources[(unsigned __int64)v101 / 4];
          if ( (unsigned __int64)v15 >= MmUserProbeAddress )
            v15 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          v16 = *v15;
          DXGPROCESS::GetResourceSafe(*(_QWORD *)(v5 + 40), (DXGRESOURCEREFERENCE *)&v98, v16);
          if ( !v98 )
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, 0LL, v18, v19);
            v20[3] = v5;
            v20[4] = v16;
            v20[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v20);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v98);
            goto LABEL_116;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v102, (struct DXGFASTMUTEX *const)&v98[10]);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v102);
          Count = v98[3].Count;
          v25 = 0;
          if ( Count )
          {
            p_PagingFenceValue = &v3->PagingFenceValue;
            while ( 1 )
            {
              v106 = 1;
              v27 = &v106;
              if ( !v3->pDiscarded )
                v27 = 0LL;
              v28 = v105 ? (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)v105 + 4) : 0LL;
              v29 = VIDMM_EXPORT::VidMmReclaimAllocation(
                      *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 16) + 400LL),
                      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 16) + 408LL),
                      v28,
                      *(struct _VIDMM_MULTI_ALLOC **)(Count + 24),
                      p_PagingFenceValue,
                      v27);
              v34 = v29;
              if ( v29 < 0 )
                break;
              if ( v29 == 259 )
                v13 = 259;
              v25 = v25 || v106;
              Count = *(_QWORD *)(Count + 64);
              p_PagingFenceValue = &v3->PagingFenceValue;
              if ( !Count )
              {
                i = v97;
                goto LABEL_35;
              }
            }
            v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
            v35[3] = v5;
            v35[4] = Count;
            v35[5] = v34;
            WdLogEvent5_WdWarning(v35);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v102);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v98);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96, v36, v37, v38);
            return (unsigned int)v34;
          }
LABEL_35:
          pDiscarded = v3->pDiscarded;
          if ( pDiscarded )
          {
            v40 = &pDiscarded[(unsigned __int64)v101 / 4];
            if ( (unsigned __int64)&pDiscarded[(unsigned __int64)v101 / 4] >= MmUserProbeAddress )
              v40 = (BOOL *)MmUserProbeAddress;
            *v40 = v25;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v102);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v98);
        }
LABEL_87:
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v74 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v75 = WdLogNewEntry5_WdAssertion(this, a2, a3, v7);
          *(_QWORD *)(v75 + 24) = 1038LL;
          WdLogEvent5_WdAssertion(v75);
          v74 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v74 + 195) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v77 = WdLogNewEntry5_WdAssertion(this, a2, a3, v7);
            *(_QWORD *)(v77 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v77);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, v7);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v79 = 0LL;
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v79 = *ThreadWin32Thread;
            if ( v79 )
              v85 = *(_QWORD *)(v79 + 80);
            else
              v85 = 0LL;
            if ( v85 )
            {
              v86 = KeGetCurrentThread();
              if ( !v86 )
              {
                v87 = WdLogNewEntry5_WdAssertion(v82, v81, v83, v84);
                *(_QWORD *)(v87 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v87);
              }
              v90 = PsGetCurrentProcessSessionId(v82, v81, v83, v84);
              if ( !v90 || (unsigned int)PsGetThreadSessionId(v86) != v90 )
                goto LABEL_110;
              v92 = 0LL;
              v93 = (__int64 *)PsGetThreadWin32Thread(v86);
              if ( v93 )
                v92 = *v93;
              if ( v92 )
                v94 = *(_QWORD *)(v92 + 80);
              else
LABEL_110:
                v94 = 0LL;
              if ( *(_DWORD *)(v94 + 136) )
              {
                v95 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v89, v88, v91);
                v95[3] = 275LL;
                v95[4] = 25LL;
                v95[5] = *(int *)(v94 + 136);
                v95[6] = 0LL;
                v95[7] = 0LL;
                WdLogEvent5_WdCriticalError(v95);
              }
            }
          }
        }
        return v13;
      }
    }
    else if ( *(_QWORD *)(a3 + 16) )
    {
      for ( j = 0; j < v3->NumAllocations; ++j )
      {
        v104 = 4LL * j;
        v42 = (unsigned int *)&v3->HandleList[(unsigned __int64)v104 / 4];
        if ( (unsigned __int64)v42 >= MmUserProbeAddress )
          v42 = (unsigned int *)MmUserProbeAddress;
        v97 = *v42;
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*(_QWORD *)(v5 + 40), (DXGALLOCATIONREFERENCE *)&v103, v97);
        DXGALLOCATIONREFERENCE::MoveAssign(&v96, AllocationSafe);
        v47 = v103;
        if ( v103 )
          ExReleaseRundownProtection(v103 + 11);
        v48 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v49 = WdLogNewEntry5_WdAssertion(v47, v44, v45, v46);
          *(_QWORD *)(v49 + 24) = 1038LL;
          WdLogEvent5_WdAssertion(v49);
          v48 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v48 + 195) )
        {
          v50 = KeGetCurrentThread();
          if ( !v50 )
          {
            v51 = WdLogNewEntry5_WdAssertion(v47, v44, v45, v46);
            *(_QWORD *)(v51 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v51);
          }
          v52 = PsGetCurrentProcessSessionId(v47, v44, v45, v46);
          if ( v52 && (unsigned int)PsGetThreadSessionId(v50) == v52 )
          {
            v53 = 0LL;
            v54 = (__int64 *)PsGetThreadWin32Thread(v50);
            if ( v54 )
              v53 = *v54;
            if ( v53 )
              v55 = *(_QWORD *)(v53 + 80);
            else
              v55 = 0LL;
            if ( v55 )
            {
              v56 = KeGetCurrentThread();
              if ( !v56 )
              {
                v57 = WdLogNewEntry5_WdAssertion(v47, v44, v45, v46);
                *(_QWORD *)(v57 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v57);
              }
              v58 = PsGetCurrentProcessSessionId(v47, v44, v45, v46);
              if ( !v58 || (unsigned int)PsGetThreadSessionId(v56) != v58 )
                goto LABEL_68;
              v59 = 0LL;
              v60 = (__int64 *)PsGetThreadWin32Thread(v56);
              if ( v60 )
                v59 = *v60;
              if ( v59 )
                v61 = *(_QWORD *)(v59 + 80);
              else
LABEL_68:
                v61 = 0LL;
              if ( *(_DWORD *)(v61 + 136) )
              {
                v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v44, v45);
                v62[3] = 275LL;
                v62[4] = 25LL;
                v62[5] = *(int *)(v61 + 136);
                v62[6] = 0LL;
                v62[7] = 0LL;
                WdLogEvent5_WdCriticalError(v62);
              }
            }
          }
        }
        v6 = v96;
        if ( !v96 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v44, v45, v46);
          v63[3] = v5;
          v63[4] = v97;
          v63[5] = -1073741811LL;
          goto LABEL_115;
        }
        v99 = 1;
        v64 = &v99;
        if ( !v3->pDiscarded )
          v64 = 0LL;
        if ( v4 )
          v65 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)v4 + 4);
        else
          v65 = 0LL;
        v66 = VIDMM_EXPORT::VidMmReclaimAllocation(
                *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 16) + 400LL),
                *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 16) + 408LL),
                v65,
                (struct _VIDMM_MULTI_ALLOC *)v96[3].Count,
                &v3->PagingFenceValue,
                v64);
        v68 = v66;
        if ( v66 < 0 )
        {
          v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, a2, a3, v7);
          v69[3] = v5;
          v69[4] = v6;
          v69[5] = v68;
          WdLogEvent5_WdWarning(v69);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96, v70, v71, v72);
          return (unsigned int)v68;
        }
        this = 259LL;
        if ( v66 == 259 )
          v13 = 259;
        v73 = v3->pDiscarded;
        if ( v73 )
        {
          a2 = &v73[(unsigned __int64)v104 / 4];
          if ( (unsigned __int64)&v73[(unsigned __int64)v104 / 4] >= MmUserProbeAddress )
            a2 = (BOOL *)MmUserProbeAddress;
          *a2 = v99;
        }
      }
      goto LABEL_87;
    }
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, v7);
  v63[3] = v5;
  v63[4] = -1073741811LL;
LABEL_115:
  WdLogEvent5_WdWarning(v63);
LABEL_116:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96, v21, v22, v23);
  return 3221225485LL;
}
