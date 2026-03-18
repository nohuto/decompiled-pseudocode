/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0054A50
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0059028 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pcc @ 0x1C001E188 (Template_pcc.c)
 *     Template_pqqt @ 0x1C001E61C (Template_pqqt.c)
 *     VidSchMarkDeviceAsError @ 0x1C0026AC0 (VidSchMarkDeviceAsError.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004B86C (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0059120 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005AADC (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C005AB90 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AE3C (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00891C0 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A98C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  __int64 *v5; // rbx
  struct VIDMM_ALLOC *v6; // r13
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r14d
  int v11; // r15d
  char v12; // r12
  char *v13; // rdi
  VIDMM_GLOBAL *v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  signed __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  bool v24; // si
  enum _D3DDDI_RECLAIM_RESULT *v25; // r12
  _QWORD *v26; // rax
  __int64 v27; // rbx
  _QWORD *v30; // r15
  _QWORD *v31; // rdi
  _QWORD *v32; // rsi
  struct VIDMM_PAGING_QUEUE *v33; // rbx
  _QWORD *v34; // r13
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  VIDMM_GLOBAL *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  enum _D3DDDI_RECLAIM_RESULT *v51; // r12
  _QWORD *v52; // r13
  _QWORD *v53; // r12
  __int64 v54; // rax
  VIDMM_GLOBAL *v55; // rcx
  _QWORD *i; // rsi
  __int64 v57; // r8
  VIDMM_GLOBAL *v58; // rcx
  __int64 v59; // r9
  ULONG_PTR v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-E0h]
  __int64 Protect; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v66; // [rsp+48h] [rbp-B8h] BYREF
  struct VIDMM_ALLOC *v67; // [rsp+50h] [rbp-B0h]
  enum _D3DDDI_RECLAIM_RESULT *v68; // [rsp+58h] [rbp-A8h]
  struct VIDMM_PAGING_QUEUE *v69; // [rsp+60h] [rbp-A0h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v73; // [rsp+80h] [rbp-80h]
  unsigned __int64 v74; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v75; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v76[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE v77; // [rsp+F0h] [rbp-10h] BYREF
  struct _KAPC_STATE v78; // [rsp+120h] [rbp+20h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF

  v5 = *a3;
  v6 = (struct VIDMM_ALLOC *)a3;
  v73 = a4;
  v67 = (struct VIDMM_ALLOC *)a3;
  v8 = *v5;
  v69 = a2;
  v68 = a5;
  v9 = *(_DWORD *)(v8 + 92);
  v72 = v8;
  if ( (v9 & 2) != 0 && !a5 )
  {
    VidSchMarkDeviceAsError(a3[1][4], 20);
    return 3221225485LL;
  }
  v10 = 0;
  if ( (*((_DWORD *)this + 1616) & 8) != 0 )
  {
    v11 = 1;
    VIDMM_GLOBAL::ForceDiscardOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  else
  {
    v11 = 0;
  }
  v12 = 0;
  v13 = (char *)this + 39912;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v43 = *((_DWORD *)v13 + 4);
      if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((__int64)v14, &EventBlockThread, v15, v43);
    }
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  *((_QWORD *)v13 + 1) = KeGetCurrentThread();
  v16 = (__int64 *)(v8 + 416);
  if ( *(_QWORD *)(v8 + 416) )
  {
    v17 = *v16;
    v14 = *(VIDMM_GLOBAL **)(v8 + 424);
    if ( *(__int64 **)(*v16 + 8) != v16 || *(__int64 **)v14 != v16 )
      __fastfail(3u);
    *(_QWORD *)v14 = v17;
    *(_QWORD *)(v17 + 8) = v14;
    *v16 = 0LL;
  }
  if ( *(_QWORD *)(v8 + 432) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v14, (struct _VIDMM_GLOBAL_ALLOC *)v8);
    v12 = 1;
  }
  *((_QWORD *)v13 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 320));
  v21 = *((_QWORD *)v6 + 12);
  v22 = *(unsigned __int16 *)(v21 + 4);
  *(_WORD *)(v21 + 4) = 0;
  v23 = (__int16)v22;
  if ( (_WORD)v22 )
  {
    v24 = (*(_DWORD *)(v8 + 92) & 1) != 0;
    if ( v12 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL);
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v22 + 32) + 312LL), -*(_QWORD *)(v8 + 8));
    }
    if ( v24 )
    {
LABEL_15:
      *(_DWORD *)(v8 + 92) &= ~2u;
      v25 = v68;
      if ( !v68 )
      {
        *(_BYTE *)(v8 + 97) = 0;
LABEL_22:
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LOBYTE(Protect) = v23;
          LOBYTE(AllocationType[0]) = *(_BYTE *)(**(_QWORD **)v6 + 448LL);
          Template_pcc(**(_QWORD **)v6, &EventReclaimAllocation, v19, v6, *(_QWORD *)AllocationType, Protect);
        }
        if ( v11 || (_DWORD)v23 == 3 || (_DWORD)v23 == 2 && (*(_DWORD *)(v8 + 80) & 0x40) != 0 || !*(_DWORD *)(v8 + 128) )
        {
          v30 = (_QWORD *)(v8 + 296);
          v31 = *(_QWORD **)(v8 + 296);
          if ( v31 != (_QWORD *)(v8 + 296) )
          {
            do
            {
              v32 = (_QWORD *)*(v31 - 2);
              if ( v32 != v31 - 2 )
              {
                v33 = v69;
                do
                {
                  v34 = v32 - 5;
                  if ( (*(_DWORD *)(v32 - 1) & 1) == 0 )
                  {
                    v22 = (*((_BYTE *)v34 + 25) & 1) != 0;
                    if ( (unsigned int)v22 | *((_DWORD *)v34 + 42) )
                    {
                      memset(v76, 0, sizeof(v76));
                      LODWORD(v76[0]) = 210;
                      v76[2] = v32 - 5;
                      v10 = VIDMM_GLOBAL::QueueDeferredCommand(
                              this,
                              v33,
                              (struct _VIDMM_DEFERRED_COMMAND *)v76,
                              0,
                              &v66);
                      if ( (*((_DWORD *)v34 + 7) & 0x20) != 0 )
                      {
                        v34[36] = v66;
                        v34[33] = v33;
                      }
                    }
                  }
                  v32 = (_QWORD *)*v32;
                }
                while ( v32 != v31 - 2 );
                v8 = v72;
                v30 = (_QWORD *)(v72 + 296);
              }
              v31 = (_QWORD *)*v31;
            }
            while ( v31 != v30 );
          }
        }
        else if ( g_IsInternalReleaseOrDbg )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v18, v19, v20);
          v26[3] = v6;
          v26[4] = 0LL;
          v26[5] = v23;
          v22 = (*(_DWORD *)(v8 + 80) >> 6) & 1;
          v26[6] = v22;
        }
        goto LABEL_30;
      }
      if ( (_DWORD)v23 == 1 )
      {
        *v68 = D3DDDI_RECLAIM_RESULT_OK;
      }
      else
      {
        if ( (_DWORD)v23 == 3 )
          *v68 = D3DDDI_RECLAIM_RESULT_DISCARDED;
        if ( v24
          && !*(_QWORD *)(v8 + 136)
          && *(_BYTE *)(v8 + 97)
          && !*(_BYTE *)(v8 + 98)
          && (*(_DWORD *)(v8 + 84) & 8) != 0 )
        {
          if ( !v11 )
          {
            v35 = *(_QWORD *)(v8 + 104);
            if ( v35 )
            {
              v22 = *(_QWORD *)(v35 + 8);
              if ( v22 )
              {
                KeStackAttachProcess(*(PRKPROCESS *)v22, &ApcState);
                if ( (**(_DWORD **)(v8 + 504) & 0x20000000) != 0 )
                {
                  v60 = *(_QWORD *)(v8 + 8);
                  BaseAddress = *(PVOID *)(*(_QWORD *)(v8 + 104) + 16LL);
                  RegionSize = v60;
                  v36 = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddress,
                          0LL,
                          &RegionSize,
                          0x1000000u,
                          4u);
                }
                else
                {
                  v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL)
                                                                                + 24LL)
                                                                  + 128LL))(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 24LL),
                          *(_QWORD *)(*(_QWORD *)(v8 + 104) + 24LL));
                }
                v10 = v36;
                KeUnstackDetachProcess(&ApcState);
                if ( v10 < 0 )
                {
                  *(_BYTE *)(v8 + 97) = 0;
                  v42 = WdLogNewEntry5_WdEvent(v38, v37, v39, v40);
                  *(_QWORD *)(v42 + 24) = v10;
                  WdLogEvent5_WdEvent(v42);
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
                    AllocationType[0] = 0;
                    Template_pqqt(v22, &EventUnreset, v19, v8, *(_QWORD *)AllocationType, Protect, 0);
                  }
                  v10 = 0;
                }
                else
                {
                  *v25 = D3DDDI_RECLAIM_RESULT_OK;
                  *(_QWORD *)(v8 + 456) = 0LL;
                  v41 = WdLogNewEntry5_WdEvent(v38, v37, v39, v40);
                  *(_QWORD *)(v41 + 24) = v8;
                  WdLogEvent5_WdEvent(v41);
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
                    AllocationType[0] = 0;
                    Template_pqqt(v22, &EventUnreset, v19, v8, *(_QWORD *)AllocationType, Protect, 1);
                  }
                }
                *(_DWORD *)(v8 + 84) &= ~8u;
              }
            }
            goto LABEL_22;
          }
LABEL_93:
          *v25 = D3DDDI_RECLAIM_RESULT_DISCARDED;
          goto LABEL_22;
        }
      }
      if ( !v11 )
        goto LABEL_22;
      goto LABEL_93;
    }
    v48 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v8 + 104) + 8LL);
    if ( (*((_DWORD *)v48 + 16) & 4) == 0 )
    {
      v10 = VIDMM_GLOBAL::CommitGlobalBackingStore(v48, (struct _VIDMM_GLOBAL_ALLOC *)v8);
      if ( v10 >= 0 )
      {
        v52 = (_QWORD *)(v8 + 296);
        v53 = *(_QWORD **)(v8 + 296);
        if ( v53 == (_QWORD *)(v8 + 296) )
        {
LABEL_84:
          v6 = v67;
          *(_BYTE *)(v8 + 97) = 0;
          goto LABEL_15;
        }
        while ( 1 )
        {
          KeStackAttachProcess(*(PRKPROCESS *)*(v53 - 6), &v77);
          v10 = VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(v53 - 7), 0LL);
          KeUnstackDetachProcess(&v77);
          if ( v10 < 0 )
            break;
          v53 = (_QWORD *)*v53;
          if ( v53 == v52 )
            goto LABEL_84;
        }
        v54 = WdLogNewEntry5_WdAssertion(v22, v18);
        *(_QWORD *)(v54 + 24) = v53 - 7;
        WdLogEvent5_WdAssertion(v54);
        for ( i = (_QWORD *)v53[1]; i != v52; i = (_QWORD *)i[1] )
        {
          KeStackAttachProcess(*(PRKPROCESS *)*(i - 6), &v78);
          LOBYTE(v57) = 1;
          VIDMM_GLOBAL::UncommitLocalBackingStore(v58, (struct _VIDMM_LOCAL_ALLOC *)(i - 7), v57, v59);
          KeUnstackDetachProcess(&v78);
        }
        VIDMM_GLOBAL::UncommitGlobalBackingStore(v55, (struct _VIDMM_GLOBAL_ALLOC *)v8, 0);
        v6 = v67;
      }
      else
      {
        v49 = WdLogNewEntry5_WdAssertion(v22, v18);
        *(_QWORD *)(v49 + 24) = v8;
        WdLogEvent5_WdAssertion(v49);
      }
    }
    v50 = *((_QWORD *)v6 + 12);
    v22 = 3LL;
    v51 = v68;
    v10 = 0;
    LOWORD(v22) = *(_WORD *)(v50 + 4);
    *(_WORD *)(v50 + 4) = 3;
    *v51 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
LABEL_30:
    v27 = *(_QWORD *)(v8 + 320);
    if ( *(struct _KTHREAD **)(v27 + 8) != KeGetCurrentThread() )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v19, v20);
      v61[3] = 275LL;
      v61[4] = 4LL;
      v61[5] = v27;
      v61[6] = 0LL;
      v61[7] = 0LL;
      WdLogEvent5_WdCriticalError(v61);
    }
    if ( *(int *)(v27 + 24) <= 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v22, v18);
      *(_QWORD *)(v62 + 24) = 370LL;
      WdLogEvent5_WdAssertion(v62);
    }
    if ( (*(_DWORD *)(v27 + 24))-- == 1 )
    {
      *(_QWORD *)(v27 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v27 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v10 == 259 )
    {
      if ( v73 )
      {
        *v73 = v66;
      }
      else
      {
        v75 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v69 + 11);
        v74 = v66;
        VIDMM_GLOBAL::WaitForFences(this, &v75, &v74, 1u, 0LL);
        return 0;
      }
    }
    return (unsigned int)v10;
  }
  v44 = WdLogNewEntry5_WdAssertion(v22, v18);
  *(_QWORD *)(v44 + 24) = v6;
  WdLogEvent5_WdAssertion(v44);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320), v45, v46, v47);
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
