/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C006FFD0
 * Callers:
 *     DxgkOfferAllocations @ 0x1C00763E0 (DxgkOfferAllocations.c)
 * Callees:
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C001112C (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFF.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_OFFERALLOCATIONS *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  UINT i; // r15d
  D3DKMT_HANDLE *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  ULONG_PTR Count; // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  _QWORD *v25; // rax
  UINT j; // esi
  const D3DKMT_HANDLE *v27; // rdx
  __int64 v28; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  _QWORD *v33; // rax
  struct _EX_RUNDOWN_REF *v34; // rcx
  struct DXGGLOBAL *v35; // rax
  __int64 v36; // rax
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rax
  struct _KTHREAD *v43; // rdi
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rbx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdi
  _QWORD *v56; // rax
  struct DXGGLOBAL *v57; // rax
  __int64 v58; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v60; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v62; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _KTHREAD *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // ebx
  __int64 v71; // r8
  __int64 v72; // rbx
  __int64 *v73; // rax
  __int64 v74; // rbx
  _QWORD *v75; // rax
  struct _EX_RUNDOWN_REF *v76; // [rsp+30h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v77; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v78; // [rsp+90h] [rbp+18h]
  __int64 v79; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  v79 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 1921) )
  {
    v8 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = 0LL;
    WdLogEvent5_WdEvent(v8);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
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
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v76, v12);
          if ( !v76 )
          {
            v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
            v17[3] = this;
            v17[4] = v12;
            v17[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v17);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v76);
            goto LABEL_89;
          }
          Count = v76[3].Count;
          if ( Count )
          {
            while ( 1 )
            {
              v19 = VIDMM_EXPORT::VidMmOfferAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
                      *(struct _VIDMM_MULTI_ALLOC **)(Count + 24),
                      a2->Priority,
                      a2->Flags);
              v24 = v19;
              if ( v19 < 0 )
                break;
              Count = *(_QWORD *)(Count + 64);
              if ( !Count )
                goto LABEL_17;
            }
            v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
            v25[3] = this;
            v25[4] = Count;
            v25[5] = v24;
            WdLogEvent5_WdWarning(v25);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v76);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
            return (unsigned int)v24;
          }
LABEL_17:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v76);
        }
LABEL_60:
        if ( v6 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 88));
        v57 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v58 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v58 + 24) = 1016LL;
          WdLogEvent5_WdAssertion(v58);
          v57 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v57 + 231) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v60 = WdLogNewEntry5_WdAssertion(this);
            *(_QWORD *)(v60 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v60);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v62 = 0LL;
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v62 = *ThreadWin32Thread;
            if ( v62 )
              v65 = *(_QWORD *)(v62 + 80);
            else
              v65 = 0LL;
            if ( v65 )
            {
              v66 = KeGetCurrentThread();
              if ( !v66 )
              {
                v67 = WdLogNewEntry5_WdAssertion(v64);
                *(_QWORD *)(v67 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v67);
              }
              v70 = PsGetCurrentProcessSessionId();
              if ( !v70 || (unsigned int)PsGetThreadSessionId(v66) != v70 )
                goto LABEL_83;
              v72 = 0LL;
              v73 = (__int64 *)PsGetThreadWin32Thread(v66);
              if ( v73 )
                v72 = *v73;
              if ( v72 )
                v74 = *(_QWORD *)(v72 + 80);
              else
LABEL_83:
                v74 = 0LL;
              if ( *(_DWORD *)(v74 + 136) )
              {
                v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v68, v71);
                v75[3] = 275LL;
                v75[4] = 25LL;
                v75[5] = *(int *)(v74 + 136);
                v75[6] = 0LL;
                v75[7] = 0LL;
                WdLogEvent5_WdCriticalError(v75);
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
        v27 = &a2->HandleList[j];
        if ( (unsigned __int64)v27 >= MmUserProbeAddress )
          v27 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v78 = *v27;
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v77, *v27);
        if ( v6 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 88));
        v6 = *(_QWORD *)AllocationSafe;
        v79 = v6;
        if ( v6 && !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v6 + 88)) )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v28, v30);
          v33[3] = 275LL;
          v33[4] = 25LL;
          v33[5] = v6;
          v33[6] = 0LL;
          v33[7] = 0LL;
          WdLogEvent5_WdCriticalError(v33);
        }
        v34 = v77;
        if ( v77 )
          ExReleaseRundownProtection(v77 + 11);
        v35 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v36 = WdLogNewEntry5_WdAssertion(v34);
          *(_QWORD *)(v36 + 24) = 1016LL;
          WdLogEvent5_WdAssertion(v36);
          v35 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v35 + 231) )
        {
          v37 = KeGetCurrentThread();
          if ( !v37 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v34);
            *(_QWORD *)(v38 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v38);
          }
          v39 = PsGetCurrentProcessSessionId();
          if ( v39 && (unsigned int)PsGetThreadSessionId(v37) == v39 )
          {
            v40 = 0LL;
            v41 = (__int64 *)PsGetThreadWin32Thread(v37);
            if ( v41 )
              v40 = *v41;
            if ( v40 )
              v42 = *(_QWORD *)(v40 + 80);
            else
              v42 = 0LL;
            if ( v42 )
            {
              v43 = KeGetCurrentThread();
              if ( !v43 )
              {
                v44 = WdLogNewEntry5_WdAssertion(v34);
                *(_QWORD *)(v44 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v44);
              }
              v45 = PsGetCurrentProcessSessionId();
              if ( !v45 || (unsigned int)PsGetThreadSessionId(v43) != v45 )
                goto LABEL_51;
              v46 = 0LL;
              v47 = (__int64 *)PsGetThreadWin32Thread(v43);
              if ( v47 )
                v46 = *v47;
              if ( v46 )
                v48 = *(_QWORD *)(v46 + 80);
              else
LABEL_51:
                v48 = 0LL;
              if ( *(_DWORD *)(v48 + 136) )
              {
                v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v28, v30);
                v49[3] = 275LL;
                v49[4] = 25LL;
                v49[5] = *(int *)(v48 + 136);
                v49[6] = 0LL;
                v49[7] = 0LL;
                WdLogEvent5_WdCriticalError(v49);
              }
            }
          }
          v6 = v79;
        }
        if ( !v6 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v28, v30, v31);
          v50[3] = this;
          v50[4] = v78;
          v50[5] = -1073741811LL;
          goto LABEL_88;
        }
        v51 = VIDMM_EXPORT::VidMmOfferAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
                *(struct _VIDMM_MULTI_ALLOC **)(v6 + 24),
                a2->Priority,
                a2->Flags);
        v55 = v51;
        if ( v51 < 0 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(this, v52, v53, v54);
          v56[3] = this;
          v56[4] = v6;
          v56[5] = v55;
          WdLogEvent5_WdWarning(v56);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
          return (unsigned int)v55;
        }
      }
      goto LABEL_60;
    }
  }
  v50 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v7, a4);
  v50[3] = this;
  v50[4] = -1073741811LL;
LABEL_88:
  WdLogEvent5_WdWarning(v50);
LABEL_89:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
  return 3221225485LL;
}
