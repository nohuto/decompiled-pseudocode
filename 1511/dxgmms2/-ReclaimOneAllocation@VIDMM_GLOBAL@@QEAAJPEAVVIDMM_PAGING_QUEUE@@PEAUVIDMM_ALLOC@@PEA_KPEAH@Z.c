/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAH@Z @ 0x1C004CBB0
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@Z @ 0x1C0051A68 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pcc @ 0x1C001CE14 (Template_pcc.c)
 *     Template_pqqt @ 0x1C001D2A8 (Template_pqqt.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0051B80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        int *a5)
{
  __int64 *v5; // rax
  unsigned __int64 *v7; // r15
  __int64 v8; // rdi
  BOOL v9; // ebp
  struct VIDMM_PAGING_QUEUE *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rdx
  __int64 **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int32 v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // esi
  __int64 v27; // rax
  PRKPROCESS *v28; // rcx
  NTSTATUS v29; // eax
  int v30; // ebp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // r12
  _QWORD *v36; // r14
  _QWORD *v37; // rbx
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rax
  ULONG_PTR v41; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-138h]
  __int64 Protect; // [rsp+28h] [rbp-130h]
  int v44; // [rsp+30h] [rbp-128h]
  unsigned __int64 v46; // [rsp+48h] [rbp-110h] BYREF
  unsigned __int64 *v47; // [rsp+50h] [rbp-108h]
  unsigned __int64 v48; // [rsp+58h] [rbp-100h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v49; // [rsp+60h] [rbp-F8h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-F0h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD v52[10]; // [rsp+80h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-88h] BYREF

  v5 = *a3;
  v7 = a4;
  v47 = a4;
  v8 = *v5;
  v9 = (gVidMmGlobalFault & 0x4000) != 0;
  v11 = a2;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39840, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v39 = *((_DWORD *)this + 9964);
      if ( v39 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v12, &EventBlockThread, v13, v39);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 39840, 0LL);
  }
  *((_QWORD *)this + 4981) = KeGetCurrentThread();
  v14 = (__int64 *)(v8 + 400);
  if ( *(_QWORD *)(v8 + 400) )
  {
    v15 = (__int64 *)*v14;
    v16 = *(__int64 ***)(v8 + 408);
    if ( *(__int64 **)(*v14 + 8) != v14 || *v16 != v14 )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = (__int64)v16;
    *v14 = 0LL;
  }
  *((_QWORD *)this + 4981) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39840, 0LL);
  KeLeaveCriticalRegion();
  v21 = _InterlockedExchange((volatile __int32 *)a3[12] + 1, 0);
  if ( v21 )
  {
    DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v8 + 312));
    if ( !a5 )
    {
      *(_BYTE *)(v8 + 94) = 0;
LABEL_11:
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        LOBYTE(Protect) = v21;
        LOBYTE(AllocationType[0]) = *(_BYTE *)(**a3 + 416);
        Template_pcc(**a3, &EventReclaimAllocation, v23, a3, *(_QWORD *)AllocationType, Protect);
      }
      v25 = 0;
      if ( v21 == 3 || v21 == 2 && (*(_DWORD *)(v8 + 80) & 0x40) != 0 )
      {
        v35 = (_QWORD *)(v8 + 288);
        v36 = *(_QWORD **)(v8 + 288);
        if ( v36 != (_QWORD *)(v8 + 288) )
        {
          do
          {
            v37 = (_QWORD *)*(v36 - 2);
            if ( v37 != v36 - 2 )
            {
              do
              {
                if ( (*(_DWORD *)(v37 - 1) & 1) == 0 && ((*((_BYTE *)v37 - 15) & 1) != 0) | *((_DWORD *)v37 + 28) )
                {
                  memset(v52, 0, sizeof(v52));
                  LODWORD(v52[0]) = 210;
                  v52[2] = v37 - 5;
                  v25 = VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v52, 0, &v46);
                }
                v37 = (_QWORD *)*v37;
              }
              while ( v37 != v36 - 2 );
              v35 = (_QWORD *)(v8 + 288);
            }
            v36 = (_QWORD *)*v36;
          }
          while ( v36 != v35 );
          v7 = v47;
        }
        v11 = a2;
      }
      DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v8 + 312), v22, v23, v24);
      if ( v25 == 259 )
      {
        if ( v7 )
        {
          *v7 = v46;
        }
        else
        {
          v49 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v11 + 11);
          v48 = v46;
          VIDMM_GLOBAL::WaitForFences(this, &v49, &v48, 1u, 0LL);
          return 0;
        }
      }
      return v25;
    }
    if ( v21 == 1 )
    {
      *a5 = 0;
    }
    else
    {
      *a5 = v21 == 3;
      if ( !*(_QWORD *)(v8 + 128) && *(_BYTE *)(v8 + 94) && !*(_BYTE *)(v8 + 95) && (*(_DWORD *)(v8 + 84) & 8) != 0 )
      {
        if ( !v9 )
        {
          v27 = *(_QWORD *)(v8 + 96);
          if ( !v27 )
            goto LABEL_11;
          v28 = *(PRKPROCESS **)(v27 + 8);
          if ( !v28 )
            goto LABEL_11;
          KeStackAttachProcess(*v28, &ApcState);
          if ( (**(_DWORD **)(v8 + 472) & 0x20000000) != 0 )
          {
            v41 = *(_QWORD *)(v8 + 8);
            BaseAddress = *(PVOID *)(*(_QWORD *)(v8 + 96) + 16LL);
            RegionSize = v41;
            v29 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, 4u);
          }
          else
          {
            v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v8 + 96) + 8LL)
                                                                          + 24LL)
                                                            + 128LL))(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 96) + 8LL) + 24LL),
                    *(_QWORD *)(*(_QWORD *)(v8 + 96) + 24LL));
          }
          v30 = v29;
          KeUnstackDetachProcess(&ApcState);
          if ( v30 < 0 )
          {
            *(_BYTE *)(v8 + 94) = 0;
            v38 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v38 + 24) = v30;
            WdLogEvent5_WdError(v38);
            if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
              goto LABEL_27;
            v34 = 0LL;
            v44 = 0;
            LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
            AllocationType[0] = 0;
          }
          else
          {
            *a5 = 0;
            *(_QWORD *)(v8 + 424) = 0LL;
            v33 = WdLogNewEntry5_WdEvent(v32, v31);
            *(_QWORD *)(v33 + 24) = v8;
            WdLogEvent5_WdEvent(v33);
            if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
              goto LABEL_27;
            v44 = 1;
            LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
            AllocationType[0] = 0;
          }
          Template_pqqt(v34, &EventUnreset, v23, v8, *(_QWORD *)AllocationType, Protect, v44);
LABEL_27:
          *(_DWORD *)(v8 + 84) &= ~8u;
          goto LABEL_11;
        }
        goto LABEL_58;
      }
    }
    if ( !v9 )
      goto LABEL_11;
LABEL_58:
    *a5 = 1;
    goto LABEL_11;
  }
  v40 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
  *(_QWORD *)(v40 + 24) = a3;
  WdLogEvent5_WdAssertion(v40);
  if ( a5 )
    *a5 = 1;
  return DxgkVidMmAllowFailOnOfferReclaimErrors(*((struct DXGADAPTER **)this + 3)) != 0 ? 0xC000000D : 0;
}
