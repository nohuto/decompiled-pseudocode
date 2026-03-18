/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAH@Z @ 0x1C0051AF8
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@Z @ 0x1C0051A58 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pcc @ 0x1C000F3F0 (Template_pcc.c)
 *     Template_pqqt @ 0x1C000F884 (Template_pqqt.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0035A78 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        struct VIDMM_ALLOC *a3,
        unsigned __int64 *a4,
        int *a5)
{
  char *v5; // rsi
  struct DXGADAPTER **v6; // r13
  _QWORD *v8; // rbx
  unsigned int v9; // r12d
  __int64 *v10; // rax
  unsigned int v11; // r14d
  __int64 *v12; // rdx
  __int64 **v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int32 v18; // esi
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  PRKPROCESS *v25; // rcx
  ULONG_PTR v26; // rax
  NTSTATUS v27; // eax
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // r12
  _QWORD *v35; // rdi
  _QWORD *v36; // rsi
  ULONG AllocationType[2]; // [rsp+20h] [rbp-E0h]
  __int64 Protect; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v43; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v46; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 *v47; // [rsp+78h] [rbp-88h]
  ULONG_PTR RegionSize[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v49[10]; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF

  v5 = (char *)this + 39840;
  v6 = (struct DXGADAPTER **)this;
  v43 = **(_QWORD ***)a3;
  v8 = v43;
  v9 = (gVidMmGlobalFault >> 14) & 1;
  v47 = a4;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39840));
  v10 = v43 + 50;
  v11 = 0;
  if ( v43[50] )
  {
    v12 = (__int64 *)*v10;
    v13 = (__int64 **)v43[51];
    if ( *(__int64 **)(*v10 + 8) != v10 || *v13 != v10 )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = (__int64)v13;
    *v10 = 0LL;
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v18 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a3 + 12) + 4LL), 0);
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = a3;
    WdLogEvent5_WdAssertion(v19);
    if ( a5 )
      *a5 = 1;
    return DxgkVidMmAllowFailOnOfferReclaimErrors(v6[3]) != 0 ? 0xC000000D : 0;
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v8[39]);
  if ( a5 )
  {
    if ( v18 == 1 )
    {
      *a5 = 0;
      goto LABEL_32;
    }
    *a5 = v18 == 3;
    if ( v8[16] || !*((_BYTE *)v8 + 94) || *((_BYTE *)v8 + 95) || (*((_DWORD *)v8 + 21) & 8) == 0 )
    {
LABEL_32:
      if ( !v9 )
        goto LABEL_35;
      goto LABEL_33;
    }
    if ( v9 )
    {
LABEL_33:
      *a5 = 1;
      goto LABEL_35;
    }
    v24 = v8[12];
    if ( !v24 )
      goto LABEL_35;
    v25 = *(PRKPROCESS **)(v24 + 8);
    if ( !v25 )
      goto LABEL_35;
    KeStackAttachProcess(*v25, &ApcState);
    if ( (*(_DWORD *)v8[59] & 0x20000000) != 0 )
    {
      v26 = v8[1];
      BaseAddress = *(PVOID *)(v8[12] + 16LL);
      RegionSize[0] = v26;
      v27 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000000u, 4u);
    }
    else
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v8[12] + 8LL) + 24LL) + 112LL))(
              *(_QWORD *)(*(_QWORD *)(v8[12] + 8LL) + 24LL),
              *(_QWORD *)(v8[12] + 24LL));
    }
    v28 = v27;
    KeUnstackDetachProcess(&ApcState);
    if ( v28 < 0 )
    {
      *((_BYTE *)v8 + 94) = 0;
      v33 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v33 + 24) = v28;
      WdLogEvent5_WdError(v33);
      v11 = 0;
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        goto LABEL_31;
      v39 = 0;
    }
    else
    {
      v11 = 0;
      *a5 = 0;
      v8[53] = 0LL;
      v31 = WdLogNewEntry5_WdEvent(v30, v29);
      *(_QWORD *)(v31 + 24) = v8;
      WdLogEvent5_WdEvent(v31);
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        goto LABEL_31;
      v39 = 1;
    }
    LODWORD(Protect) = v8[1] >> 12;
    AllocationType[0] = 0;
    Template_pqqt(v32, &EventUnreset, v22, v8, *(_QWORD *)AllocationType, Protect, v39);
LABEL_31:
    *((_DWORD *)v8 + 21) &= ~8u;
    goto LABEL_32;
  }
  *((_BYTE *)v8 + 94) = 0;
LABEL_35:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LOBYTE(Protect) = v18;
    LOBYTE(AllocationType[0]) = *(_BYTE *)(**(_QWORD **)a3 + 416LL);
    Template_pcc(**(_QWORD **)a3, &EventReclaimAllocation, v22, a3, *(_QWORD *)AllocationType, Protect);
  }
  if ( v18 == 3 || v18 == 2 && (v8[10] & 0x40) != 0 )
  {
    v34 = v8 + 36;
    v35 = (_QWORD *)v8[36];
    if ( v35 != v8 + 36 )
    {
      do
      {
        v36 = (_QWORD *)*(v35 - 2);
        if ( v36 != v35 - 2 )
        {
          do
          {
            if ( (*(_DWORD *)(v36 - 1) & 1) == 0 && *((_BYTE *)v36 - 15) & 1 | *((_DWORD *)v36 + 28) )
            {
              memset(v49, 0, sizeof(v49));
              LODWORD(v49[0]) = 210;
              v49[2] = v36 - 5;
              v11 = VIDMM_GLOBAL::QueueDeferredCommand(
                      this,
                      (struct VIDMM_PAGING_QUEUE *)a2,
                      (struct _VIDMM_DEFERRED_COMMAND *)v49,
                      0,
                      &v42);
            }
            v36 = (_QWORD *)*v36;
          }
          while ( v36 != v35 - 2 );
          v8 = v43;
          v34 = v43 + 36;
        }
        v35 = (_QWORD *)*v35;
      }
      while ( v35 != v34 );
      v6 = (struct DXGADAPTER **)this;
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)v8[39], v21, v22, v23);
  if ( v11 == 259 )
  {
    if ( v47 )
    {
      *v47 = v42;
    }
    else
    {
      v46 = a2[11];
      v44 = v42;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)v6, &v46, (char *)&v44, 1u, 0LL);
      return 0;
    }
  }
  return v11;
}
