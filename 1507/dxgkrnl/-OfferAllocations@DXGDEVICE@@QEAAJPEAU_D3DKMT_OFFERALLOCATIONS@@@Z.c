/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C007CDD0
 * Callers:
 *     DxgkOfferAllocations @ 0x1C00777F0 (DxgkOfferAllocations.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00051F4 (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFF.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C000F698 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_OFFERALLOCATIONS *a2,
        __int64 a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  UINT i; // r12d
  D3DKMT_HANDLE *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR Count; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  UINT j; // esi
  const D3DKMT_HANDLE *v35; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _EX_RUNDOWN_REF *v40; // rcx
  struct DXGGLOBAL *v41; // rax
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
  int v57; // eax
  __int64 v58; // rdi
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  struct DXGGLOBAL *v63; // rax
  __int64 v64; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v66; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v68; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  struct _KTHREAD *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // ebx
  __int64 v80; // r8
  __int64 v81; // rbx
  __int64 *v82; // rax
  __int64 v83; // rbx
  _QWORD *v84; // rax
  struct _EX_RUNDOWN_REF *v85; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v86; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v87[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v88; // [rsp+A0h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v89; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  v89 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 1913) )
  {
    v8 = WdLogNewEntry5_WdEvent(this, a2, v7, a4);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = 0LL;
    WdLogEvent5_WdEvent(v8);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v9, v10, v11);
    return 0LL;
  }
  if ( a2->NumAllocations )
  {
    if ( a2->pResources )
    {
      if ( !a2->HandleList )
      {
        for ( i = 0; i < a2->NumAllocations; ++i )
        {
          v14 = &a2->pResources[i];
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          v15 = *v14;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v85, v15);
          if ( !v85 )
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, 0LL, v17, v18);
            v19[3] = this;
            v19[4] = v15;
            v19[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v19);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v85);
            goto LABEL_83;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v87, (struct DXGFASTMUTEX *const)&v85[10]);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v87);
          Count = v85[3].Count;
          if ( Count )
          {
            while ( 1 )
            {
              v24 = VIDMM_EXPORT::VidMmOfferAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                      *(struct _VIDMM_MULTI_ALLOC **)(Count + 24),
                      a2->Priority,
                      a2->Flags);
              v29 = v24;
              if ( v24 < 0 )
                break;
              Count = *(_QWORD *)(Count + 64);
              if ( !Count )
                goto LABEL_17;
            }
            v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
            v30[3] = this;
            v30[4] = Count;
            v30[5] = v29;
            WdLogEvent5_WdWarning(v30);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v87);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v85);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v31, v32, v33);
            return (unsigned int)v29;
          }
LABEL_17:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v87);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v85);
        }
LABEL_54:
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v63 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v64 = WdLogNewEntry5_WdAssertion(this, a2, v7, a4);
          *(_QWORD *)(v64 + 24) = 1038LL;
          WdLogEvent5_WdAssertion(v64);
          v63 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v63 + 195) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v66 = WdLogNewEntry5_WdAssertion(this, a2, v7, a4);
            *(_QWORD *)(v66 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v66);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, v7, a4);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v68 = 0LL;
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v68 = *ThreadWin32Thread;
            if ( v68 )
              v74 = *(_QWORD *)(v68 + 80);
            else
              v74 = 0LL;
            if ( v74 )
            {
              v75 = KeGetCurrentThread();
              if ( !v75 )
              {
                v76 = WdLogNewEntry5_WdAssertion(v71, v70, v72, v73);
                *(_QWORD *)(v76 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v76);
              }
              v79 = PsGetCurrentProcessSessionId(v71, v70, v72, v73);
              if ( !v79 || (unsigned int)PsGetThreadSessionId(v75) != v79 )
                goto LABEL_77;
              v81 = 0LL;
              v82 = (__int64 *)PsGetThreadWin32Thread(v75);
              if ( v82 )
                v81 = *v82;
              if ( v81 )
                v83 = *(_QWORD *)(v81 + 80);
              else
LABEL_77:
                v83 = 0LL;
              if ( *(_DWORD *)(v83 + 136) )
              {
                v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v77, v80);
                v84[3] = 275LL;
                v84[4] = 25LL;
                v84[5] = *(int *)(v83 + 136);
                v84[6] = 0LL;
                v84[7] = 0LL;
                WdLogEvent5_WdCriticalError(v84);
              }
            }
          }
        }
        return 0LL;
      }
    }
    else if ( a2->HandleList )
    {
      for ( j = 0; j < a2->NumAllocations; ++j )
      {
        v35 = &a2->HandleList[j];
        if ( (unsigned __int64)v35 >= MmUserProbeAddress )
          v35 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v88 = *v35;
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v86, *v35);
        DXGALLOCATIONREFERENCE::MoveAssign(&v89, AllocationSafe);
        v40 = v86;
        if ( v86 )
          ExReleaseRundownProtection(v86 + 11);
        v41 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v42 = WdLogNewEntry5_WdAssertion(v40, v37, v38, v39);
          *(_QWORD *)(v42 + 24) = 1038LL;
          WdLogEvent5_WdAssertion(v42);
          v41 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v41 + 195) )
        {
          v43 = KeGetCurrentThread();
          if ( !v43 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v40, v37, v38, v39);
            *(_QWORD *)(v44 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v44);
          }
          v45 = PsGetCurrentProcessSessionId(v40, v37, v38, v39);
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
                v50 = WdLogNewEntry5_WdAssertion(v40, v37, v38, v39);
                *(_QWORD *)(v50 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v50);
              }
              v51 = PsGetCurrentProcessSessionId(v40, v37, v38, v39);
              if ( !v51 || (unsigned int)PsGetThreadSessionId(v49) != v51 )
                goto LABEL_46;
              v52 = 0LL;
              v53 = (__int64 *)PsGetThreadWin32Thread(v49);
              if ( v53 )
                v52 = *v53;
              if ( v52 )
                v54 = *(_QWORD *)(v52 + 80);
              else
LABEL_46:
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
        v6 = v89;
        if ( !v89 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v37, v38, v39);
          v56[3] = this;
          v56[4] = v88;
          v56[5] = -1073741811LL;
          goto LABEL_82;
        }
        v57 = VIDMM_EXPORT::VidMmOfferAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                (struct _VIDMM_MULTI_ALLOC *)v89[3].Count,
                a2->Priority,
                a2->Flags);
        v58 = v57;
        if ( v57 < 0 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v7, a4);
          v59[3] = this;
          v59[4] = v6;
          v59[5] = v58;
          WdLogEvent5_WdWarning(v59);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v60, v61, v62);
          return (unsigned int)v58;
        }
      }
      goto LABEL_54;
    }
  }
  v56 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v7, a4);
  v56[3] = this;
  v56[4] = -1073741811LL;
LABEL_82:
  WdLogEvent5_WdWarning(v56);
LABEL_83:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v20, v21, v22);
  return 3221225485LL;
}
