/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0031084
 * Callers:
 *     ?VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0003860 (-VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXG.c)
 * Callees:
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0003B98 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0003BB4 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     ?Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ @ 0x1C000402C (-Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_ppqq @ 0x1C000F77C (Template_ppqq.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002F4B0 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C0053634 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BeginCPUAccess(
        struct DXGADAPTER **this,
        struct _VIDMM_MULTI_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        struct DXGPROCESSVIDMMLOCK *a7,
        void **a8)
{
  __int64 v8; // rsi
  int v9; // r15d
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  VIDMM_GLOBAL *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  VIDMM_GLOBAL *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rcx
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  bool v43; // zf
  __int64 v44; // rax
  unsigned __int8 v45; // [rsp+20h] [rbp-58h]

  v8 = 0LL;
  v9 = a4;
  v11 = 0;
  if ( *(_DWORD *)(*((_QWORD *)a2 + 12) + 4LL) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors(this[3]) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v16 + 24) = a2;
      *(_QWORD *)(v16 + 32) = 2LL;
LABEL_4:
      WdLogEvent5_WdAssertion(v16);
      return (unsigned int)-1073741811;
    }
    v17 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v17 + 24) = a2;
    *(_QWORD *)(v17 + 32) = 2LL;
    WdLogEvent5_WdError(v17);
  }
  v18 = *(__int64 **)a2;
  v19 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v19 + 84) & 0x20) != 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 6505LL;
    WdLogEvent5_WdAssertion(v20);
    return (unsigned int)v11;
  }
  v21 = v9 & 0xFFFFFFA7;
  *a8 = 0LL;
  if ( (v21 & 0xFFFFFC58) != 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = v21;
    goto LABEL_4;
  }
  v22 = **(unsigned int **)(v19 + 472);
  if ( (v22 & 1) == 0 )
  {
    v23 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v23 + 24) = 6545LL;
    WdLogEvent5_WdError(v23);
    return (unsigned int)-1073741811;
  }
  if ( (v22 & 8) == 0 && !VIDMM_PROCESS::IsCurrentProcess((VIDMM_PROCESS *)v18[1]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v22, v24, v25, a4);
    *(_QWORD *)(v16 + 24) = 6559LL;
    goto LABEL_4;
  }
  v26 = (VIDMM_GLOBAL *)this;
  v27 = **(unsigned int **)(v19 + 472);
  if ( (v27 & 0x20000000) != 0 && (v27 & 0x40000000) == 0 && v18 != *(__int64 **)(v19 + 96) )
  {
    v22 = *((unsigned int *)this[3] + 71);
    if ( (v22 & 8) == 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v22, v27, this, a4);
      *(_QWORD *)(v16 + 24) = 6574LL;
      goto LABEL_4;
    }
  }
  if ( (v21 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v19 + 76) & 0x40) == 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v22, v27, this, a4);
      *(_QWORD *)(v16 + 24) = 6600LL;
      goto LABEL_4;
    }
    if ( !*((_DWORD *)this + 1617) )
    {
      v27 &= 4u;
      if ( (_BYTE)v27 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v22, v27, this, a4);
        *(_QWORD *)(v16 + 24) = 6611LL;
        goto LABEL_4;
      }
    }
  }
  if ( (v21 & 0x10) != 0 )
    return (unsigned int)-1071775484;
  if ( (v21 & 0x81) != 0 )
  {
    if ( (v21 & 0x100) != 0 )
    {
      v28 = WdLogNewEntry5_WdEvent(v22, v27);
      v11 = -1071775484;
      *(_QWORD *)(v28 + 24) = a2;
      *(_QWORD *)(v28 + 32) = -1071775484LL;
      WdLogEvent5_WdEvent(v28);
      return (unsigned int)v11;
    }
    DXGPROCESSVIDMMLOCK::Release(a7);
    VIDMM_GLOBAL::WaitOnAllocForceSync(v30, a2, v31, v32);
    if ( *(_QWORD *)a7 )
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)a7 + 120LL));
    v33 = 4;
  }
  else
  {
    if ( (v21 & 2) == 0 )
    {
      if ( bTracingEnabled )
      {
        v34 = *((_QWORD *)a2 + 1);
        if ( v34 )
          v8 = *(_QWORD *)(v34 + 24);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqq(v22, v27, (__int64)this, v8, a2, v21, 2);
      }
      VidMmRecordLock((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), v21, 2, 0);
      return (unsigned int)-1071775486;
    }
    v33 = 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 336));
  v35 = **(unsigned int **)(v19 + 472);
  if ( (v35 & 0x40000000) != 0 )
    goto LABEL_61;
  if ( (*(_DWORD *)(v19 + 76) & 0x80u) != 0 )
    goto LABEL_46;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v19 + 312));
  if ( (*(_DWORD *)(v19 + 76) & 0x80000) != 0 )
  {
    v40 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v40 + 24) = v19;
  }
  else
  {
    if ( (VIDMM_GLOBAL::_Config & 0x40) != 0 || *((_DWORD *)this + 1616) )
    {
      v11 = -1073741823;
      goto LABEL_58;
    }
    v41 = *(_QWORD *)(v19 + 128);
    if ( !v41 )
      goto LABEL_58;
    if ( (*(_DWORD *)(v41 + 56) & 0x1001) != 0 )
      goto LABEL_58;
    v11 = VIDMM_GLOBAL::SetupAllocationForCPUAccess((VIDMM_GLOBAL *)this, a2, v38, v39, v45);
    if ( v11 >= 0 )
      goto LABEL_58;
    v40 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v40 + 24) = a2;
  }
  WdLogEvent5_WdWarning(v40);
LABEL_58:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 312), v37, v38, v39);
  if ( v11 < 0 )
  {
    v42 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v42 + 24) = a2;
    WdLogEvent5_WdWarning(v42);
    _InterlockedDecrement((volatile signed __int32 *)(v19 + 336));
    return (unsigned int)v11;
  }
  v35 = **(unsigned int **)(v19 + 472);
LABEL_46:
  if ( (v35 & 8) == 0 )
  {
LABEL_61:
    v36 = (void *)v18[2];
    goto LABEL_62;
  }
  v36 = *(void **)(v19 + 360);
LABEL_62:
  v43 = bTracingEnabled == 0;
  *a8 = v36;
  *(_BYTE *)(v19 + 94) = 1;
  if ( !v43 )
  {
    v44 = *((_QWORD *)a2 + 1);
    if ( v44 )
      v8 = *(_QWORD *)(v44 + 24);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_ppqq(v35, v27, (__int64)v26, v8, a2, v21, v33);
  }
  VidMmRecordLock((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), v21, v33, 0);
  return 0LL;
}
