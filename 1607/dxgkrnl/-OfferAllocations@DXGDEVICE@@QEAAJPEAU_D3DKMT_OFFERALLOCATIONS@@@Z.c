/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C00986D0
 * Callers:
 *     DxgkOfferAllocations @ 0x1C00A3F70 (DxgkOfferAllocations.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0011318 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00115C0 (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFF.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
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
  UINT i; // r12d
  D3DKMT_HANDLE *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  _QWORD *v24; // rax
  UINT j; // esi
  const D3DKMT_HANDLE *v26; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _EX_RUNDOWN_REF *v31; // rcx
  DXGGLOBAL *v32; // rax
  __int64 v33; // rax
  struct _KTHREAD *v34; // rdi
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rbx
  __int64 *v38; // rax
  __int64 v39; // rax
  struct _KTHREAD *v40; // rdi
  __int64 v41; // rax
  int v42; // ebx
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rbx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  _QWORD *v53; // rax
  DXGGLOBAL *v54; // rax
  __int64 v55; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v57; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v59; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  struct _KTHREAD *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // ebx
  __int64 v68; // r8
  __int64 v69; // rbx
  __int64 *v70; // rax
  __int64 v71; // rbx
  _QWORD *v72; // rax
  __int64 v73; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v74; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v75[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v76; // [rsp+A0h] [rbp+18h]
  __int64 v77; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  v77 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 2057) )
  {
    v8 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = 0LL;
    WdLogEvent5_WdEvent(v8);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77);
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
          v11 = &a2->pResources[i];
          if ( (unsigned __int64)v11 >= MmUserProbeAddress )
            v11 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          v12 = *v11;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v73, v12);
          if ( !v73 )
          {
            v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, 0LL, v14, v15);
            v16[3] = this;
            v16[4] = v12;
            v16[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v16);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v73);
            goto LABEL_83;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v75, (struct DXGFASTMUTEX *const)(v73 + 80));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v75);
          v17 = *(_QWORD *)(v73 + 24);
          if ( v17 )
          {
            while ( 1 )
            {
              v18 = VIDMM_EXPORT::VidMmOfferAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                      *(struct _VIDMM_MULTI_ALLOC **)(v17 + 24),
                      a2->Priority,
                      a2->Flags);
              v23 = v18;
              if ( v18 < 0 )
                break;
              v17 = *(_QWORD *)(v17 + 64);
              if ( !v17 )
                goto LABEL_17;
            }
            v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
            v24[3] = this;
            v24[4] = v17;
            v24[5] = v23;
            WdLogEvent5_WdWarning(v24);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v75);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v73);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77);
            return (unsigned int)v23;
          }
LABEL_17:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v75);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v73);
        }
LABEL_54:
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v54 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v55 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v55 + 24) = 982LL;
          WdLogEvent5_WdAssertion(v55);
          v54 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v54 + 191) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v57 = WdLogNewEntry5_WdAssertion(this);
            *(_QWORD *)(v57 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v57);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v59 = 0LL;
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v59 = *ThreadWin32Thread;
            if ( v59 )
              v62 = *(_QWORD *)(v59 + 80);
            else
              v62 = 0LL;
            if ( v62 )
            {
              v63 = KeGetCurrentThread();
              if ( !v63 )
              {
                v64 = WdLogNewEntry5_WdAssertion(v61);
                *(_QWORD *)(v64 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v64);
              }
              v67 = PsGetCurrentProcessSessionId();
              if ( !v67 || (unsigned int)PsGetThreadSessionId(v63) != v67 )
                goto LABEL_77;
              v69 = 0LL;
              v70 = (__int64 *)PsGetThreadWin32Thread(v63);
              if ( v70 )
                v69 = *v70;
              if ( v69 )
                v71 = *(_QWORD *)(v69 + 80);
              else
LABEL_77:
                v71 = 0LL;
              if ( *(_DWORD *)(v71 + 136) )
              {
                v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v66, v65, v68);
                v72[3] = 275LL;
                v72[4] = 25LL;
                v72[5] = *(int *)(v71 + 136);
                v72[6] = 0LL;
                v72[7] = 0LL;
                WdLogEvent5_WdCriticalError(v72);
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
        v26 = &a2->HandleList[j];
        if ( (unsigned __int64)v26 >= MmUserProbeAddress )
          v26 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v76 = *v26;
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v74, *v26);
        DXGALLOCATIONREFERENCE::MoveAssign(&v77, AllocationSafe);
        v31 = v74;
        if ( v74 )
          ExReleaseRundownProtection(v74 + 11);
        v32 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v33 = WdLogNewEntry5_WdAssertion(v31);
          *(_QWORD *)(v33 + 24) = 982LL;
          WdLogEvent5_WdAssertion(v33);
          v32 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v32 + 191) )
        {
          v34 = KeGetCurrentThread();
          if ( !v34 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v31);
            *(_QWORD *)(v35 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v35);
          }
          v36 = PsGetCurrentProcessSessionId();
          if ( v36 && (unsigned int)PsGetThreadSessionId(v34) == v36 )
          {
            v37 = 0LL;
            v38 = (__int64 *)PsGetThreadWin32Thread(v34);
            if ( v38 )
              v37 = *v38;
            if ( v37 )
              v39 = *(_QWORD *)(v37 + 80);
            else
              v39 = 0LL;
            if ( v39 )
            {
              v40 = KeGetCurrentThread();
              if ( !v40 )
              {
                v41 = WdLogNewEntry5_WdAssertion(v31);
                *(_QWORD *)(v41 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v41);
              }
              v42 = PsGetCurrentProcessSessionId();
              if ( !v42 || (unsigned int)PsGetThreadSessionId(v40) != v42 )
                goto LABEL_46;
              v43 = 0LL;
              v44 = (__int64 *)PsGetThreadWin32Thread(v40);
              if ( v44 )
                v43 = *v44;
              if ( v43 )
                v45 = *(_QWORD *)(v43 + 80);
              else
LABEL_46:
                v45 = 0LL;
              if ( *(_DWORD *)(v45 + 136) )
              {
                v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v28, v29);
                v46[3] = 275LL;
                v46[4] = 25LL;
                v46[5] = *(int *)(v45 + 136);
                v46[6] = 0LL;
                v46[7] = 0LL;
                WdLogEvent5_WdCriticalError(v46);
              }
            }
          }
        }
        v6 = (struct _EX_RUNDOWN_REF *)v77;
        if ( !v77 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v28, v29, v30);
          v47[3] = this;
          v47[4] = v76;
          v47[5] = -1073741811LL;
          goto LABEL_82;
        }
        v48 = VIDMM_EXPORT::VidMmOfferAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                *(struct _VIDMM_MULTI_ALLOC **)(v77 + 24),
                a2->Priority,
                a2->Flags);
        v52 = v48;
        if ( v48 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdWarning(this, v49, v50, v51);
          v53[3] = this;
          v53[4] = v6;
          v53[5] = v52;
          WdLogEvent5_WdWarning(v53);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77);
          return (unsigned int)v52;
        }
      }
      goto LABEL_54;
    }
  }
  v47 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v7, a4);
  v47[3] = this;
  v47[4] = -1073741811LL;
LABEL_82:
  WdLogEvent5_WdWarning(v47);
LABEL_83:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77);
  return 3221225485LL;
}
