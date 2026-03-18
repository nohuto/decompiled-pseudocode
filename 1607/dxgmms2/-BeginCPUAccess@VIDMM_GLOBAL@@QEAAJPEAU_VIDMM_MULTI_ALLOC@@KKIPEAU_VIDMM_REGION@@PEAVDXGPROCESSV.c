/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0057750
 * Callers:
 *     ?VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0011950 (-VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXG.c)
 * Callees:
 *     ?Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ @ 0x1C000F658 (-Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C000F93C (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0010098 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_ppqq @ 0x1C001E514 (Template_ppqq.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004FD20 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C008AD18 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BeginCPUAccess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        struct DXGPROCESSVIDMMLOCK *a7,
        void **a8)
{
  __int64 v8; // rsi
  __int64 v9; // r15
  int v11; // edi
  __int64 *v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // rdx
  VIDMM_GLOBAL *v18; // r8
  __int64 v19; // rdx
  VIDMM_GLOBAL *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  bool v24; // zf
  char v25; // bl
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // [rsp+20h] [rbp-58h]
  unsigned int v49; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = (unsigned int)a4;
  v49 = 0;
  v11 = 0;
  if ( *(_WORD *)(*((_QWORD *)a2 + 12) + 4LL) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v32 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v32 + 24) = a2;
      *(_QWORD *)(v32 + 32) = 2LL;
LABEL_38:
      WdLogEvent5_WdAssertion(v32);
      return (unsigned int)-1073741811;
    }
    v34 = WdLogNewEntry5_WdError(v29, v28, v30, v31);
    *(_QWORD *)(v34 + 24) = a2;
    *(_QWORD *)(v34 + 32) = 2LL;
    WdLogEvent5_WdError(v34);
  }
  v12 = *(__int64 **)a2;
  v13 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v13 + 84) & 0x20) != 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v35 + 24) = 6828LL;
    WdLogEvent5_WdAssertion(v35);
    return (unsigned int)v11;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = v9;
  }
  v15 = v9 & 0xFFFFFFA7;
  *a8 = 0LL;
  if ( (v15 & 0xFFFFFC58) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v32 + 24) = v15;
    goto LABEL_38;
  }
  v16 = **(unsigned int **)(v13 + 504);
  if ( (v16 & 1) == 0 )
  {
    v33 = WdLogNewEntry5_WdError(v16, a2, a3, a4);
    *(_QWORD *)(v33 + 24) = 6868LL;
    WdLogEvent5_WdError(v33);
    return (unsigned int)-1073741811;
  }
  if ( (v16 & 8) == 0 && !VIDMM_PROCESS::IsCurrentProcess((VIDMM_PROCESS *)v12[1]) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v16, v17);
    *(_QWORD *)(v32 + 24) = 6882LL;
    goto LABEL_38;
  }
  v18 = this;
  v19 = **(unsigned int **)(v13 + 504);
  if ( (**(_DWORD **)(v13 + 504) & 0x60000000) == 0x20000000 && v12 != *(__int64 **)(v13 + 104) )
  {
    v16 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
    if ( (v16 & 0x10) == 0 && (v16 & 8) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v16, v19);
      *(_QWORD *)(v32 + 24) = 6898LL;
      goto LABEL_38;
    }
  }
  if ( (v15 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 76) & 0x40) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v16, v19);
      *(_QWORD *)(v32 + 24) = 6924LL;
      goto LABEL_38;
    }
    if ( !*((_BYTE *)this + 6497) )
    {
      v19 &= 4u;
      if ( (_BYTE)v19 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v16, v19);
        *(_QWORD *)(v32 + 24) = 6935LL;
        goto LABEL_38;
      }
    }
  }
  if ( (v15 & 0x10) != 0 )
    return (unsigned int)-1071775484;
  if ( (v15 & 0x81) != 0 )
  {
    if ( (v15 & 0x100) != 0 )
    {
      v27 = WdLogNewEntry5_WdEvent(v16, v19, this, a4);
      v11 = -1071775484;
      *(_QWORD *)(v27 + 24) = a2;
      *(_QWORD *)(v27 + 32) = -1071775484LL;
      WdLogEvent5_WdEvent(v27);
      return (unsigned int)v11;
    }
    DXGPROCESSVIDMMLOCK::Release(a7);
    VIDMM_GLOBAL::WaitOnAllocForceSync(v20, a2, v21, v22);
    v16 = *(_QWORD *)a7;
    if ( *(_QWORD *)a7 )
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v16 + 112));
    v49 = 4;
  }
  else if ( (v15 & 2) == 0 )
  {
    if ( bTracingEnabled )
    {
      v36 = *((_QWORD *)a2 + 1);
      if ( v36 )
        v8 = *(_QWORD *)(v36 + 24);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqq(v16, v19, (__int64)this, v8, a2, v15, 2);
    }
    VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), v15, 2, 0);
    return (unsigned int)-1071775486;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 344));
  if ( (**(_DWORD **)(v13 + 504) & 0x40000000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16, v19, v18, a4);
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v13 + 76) & 0x80u) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16, v19, v18, a4);
    goto LABEL_23;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
  if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
  {
    v41 = WdLogNewEntry5_WdWarning(v38);
    *(_QWORD *)(v41 + 24) = v13;
LABEL_61:
    WdLogEvent5_WdWarning(v41);
    goto LABEL_71;
  }
  if ( (*((_DWORD *)this + 1616) & 0x20) != 0 || *((_BYTE *)this + 6496) )
  {
    v11 = -1073741823;
  }
  else
  {
    v42 = *(_QWORD *)(v13 + 136);
    if ( v42 && (*(_DWORD *)(v42 + 56) & 0x1001) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v38, v37, v39, v40);
      v11 = VIDMM_GLOBAL::SetupAllocationForCPUAccess(this, a2, v39, v40, v47);
      if ( v11 < 0 )
      {
        v41 = WdLogNewEntry5_WdWarning(v43);
        *(_QWORD *)(v41 + 24) = a2;
        goto LABEL_61;
      }
    }
  }
LABEL_71:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v37, v39, v40);
  if ( v11 < 0 )
  {
    v45 = WdLogNewEntry5_WdWarning(v44);
    *(_QWORD *)(v45 + 24) = a2;
    WdLogEvent5_WdWarning(v45);
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 344));
    return (unsigned int)v11;
  }
LABEL_23:
  v16 = **(unsigned int **)(v13 + 504);
  if ( (v16 & 8) != 0 )
  {
    v23 = *(void **)(v13 + 376);
    goto LABEL_25;
  }
LABEL_24:
  v23 = (void *)v12[2];
LABEL_25:
  v24 = bTracingEnabled == 0;
  *a8 = v23;
  *(_BYTE *)(v13 + 97) = 1;
  if ( v24 )
  {
    v25 = v49;
  }
  else
  {
    v46 = *((_QWORD *)a2 + 1);
    if ( v46 )
      v8 = *(_QWORD *)(v46 + 24);
    v25 = v49;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_ppqq(v16, v19, (__int64)v18, v8, a2, v15, v49);
  }
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), v15, v25, 0);
  return 0LL;
}
