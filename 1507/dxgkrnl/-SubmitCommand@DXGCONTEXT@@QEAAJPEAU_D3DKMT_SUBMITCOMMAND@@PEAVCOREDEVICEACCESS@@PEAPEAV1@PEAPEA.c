/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C006B16C
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0068F10 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0001600 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00026C4 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000E5C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0017194 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F118 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C001F4AC (Template_ppxppttqddddddddq.c)
 *     Template_p @ 0x1C001F9FC (Template_p.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005AEBC (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        unsigned int a6)
{
  int *v6; // rbp
  struct _D3DKMT_SUBMITCOMMAND *v7; // r15
  __int64 Flags; // rcx
  int v10; // ebx
  __int64 BroadcastContextCount; // r13
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  SIZE_T v28; // rdx
  _DWORD *PoolWithTag; // rax
  size_t v30; // r9
  char *pPrivateDriverData; // rdx
  void *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  UINT PrivateDriverDataSize; // eax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct VIDMM_ALLOC *v48; // r9
  __int64 v49; // r12
  __int64 *v50; // rax
  __int64 v51; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v53; // rax
  CRefCountedBuffer *v54; // rcx
  __int64 v55; // r12
  __int64 v56; // r13
  __int64 v57; // rax
  __int64 v58; // rbx
  UINT v59; // r13d
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  volatile signed __int32 *v65; // rcx
  int v66; // [rsp+E0h] [rbp+0h] BYREF

  v6 = (int *)((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL);
  *((_QWORD *)v6 + 3) = a4;
  *((_QWORD *)v6 + 8) = a3;
  v7 = a2;
  *((_QWORD *)v6 + 6) = a2;
  *((_QWORD *)v6 + 1) = this;
  Flags = (unsigned int)a2->Flags;
  v10 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 16;
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > *((_DWORD *)this + 46) )
  {
    v12 = WdLogNewEntry5_WdWarning(Flags, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = v7->PrivateDriverDataSize;
    *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 46);
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v10 |= 0x140u;
    v14 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1, a3);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v16 + 24) = this;
      *(_QWORD *)(v16 + 32) = v15;
      WdLogEvent5_WdEvent(v16);
      return (unsigned int)v15;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&v7->Flags & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppxppttqddddddddq(Flags, (__int64)a2, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_p(Flags, &EventRender, (__int64)a3, 0LL);
    }
  }
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v17;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)(v6 + 8));
  v20 = *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v20 )
  {
    v21 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v21 + 24) = 1703LL;
    WdLogEvent5_WdLowResource(v21);
LABEL_26:
    LODWORD(v27) = -1073741801;
    goto LABEL_73;
  }
  *(_DWORD *)v20 = v10;
  if ( (v10 & 0x40) != 0 )
  {
    *(_DWORD *)v20 = v10 & 0xFFFFF7FF | ((((int)BroadcastContextCount > 1) | 2) << 11);
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
      *(_DWORD *)(v20 + 116) = 0;
  }
  v22 = *((unsigned int *)this + 46);
  if ( !(_DWORD)v22 )
  {
LABEL_31:
    *(_QWORD *)(v20 + 40) = v7->Commands;
    *(_DWORD *)(v20 + 52) = v7->CommandLength;
    *(_DWORD *)(v20 + 76) = *((_DWORD *)this + 46);
    *(_DWORD *)(v20 + 80) = v7->PrivateDriverDataSize;
    if ( DXGADAPTER::IsWarpAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      PrivateDriverDataSize = v7->PrivateDriverDataSize;
      if ( PrivateDriverDataSize != 304 && PrivateDriverDataSize != 280 )
      {
        LODWORD(v27) = -1073741578;
        v38 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
        *(_QWORD *)(v38 + 32) = -1073741578LL;
        goto LABEL_35;
      }
      v39 = *(_QWORD *)(v20 + 16);
      if ( RtlCompareMemoryUlong((PVOID)(v39 + 8), 0x100uLL, 0) != 256 )
      {
        v44 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
        *(_QWORD *)(v44 + 24) = this;
        *(_QWORD *)(v44 + 32) = -1073741580LL;
        WdLogEvent5_WdWarning(v44);
        memset((void *)(v39 + 8), 0, 0x100uLL);
      }
    }
    LODWORD(v27) = _guard_dispatch_icall_fptr();
    if ( (int)v27 < 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
      *(_QWORD *)(v38 + 24) = 1800LL;
      goto LABEL_36;
    }
    *(_QWORD *)(v20 + 336) = a5;
    *(_DWORD *)(v20 + 344) = a6;
    *v6 = 0;
    v49 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = BroadcastContextCount;
    if ( BroadcastContextCount <= 0 )
    {
LABEL_66:
      if ( (*(_DWORD *)&v7->Flags & 2) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 4;
        *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v7->PresentHistoryToken;
        v60 = DXGCONTEXT::SubmitPresentHistoryToken(
                this,
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 20),
                *(struct COREDEVICEACCESS **)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
                0LL,
                0,
                0LL,
                0LL,
                0LL);
        v27 = v60;
        if ( (int)(v60 + 0x80000000) >= 0 && v60 != -1073741130 )
        {
          v64 = WdLogNewEntry5_WdWarning(0x80000000LL, v61, v62, v63);
          *(_QWORD *)(v64 + 24) = this;
          *(_QWORD *)(v64 + 32) = v27;
          WdLogEvent5_WdWarning(v64);
          LODWORD(v27) = 0;
        }
      }
      goto LABEL_70;
    }
    v50 = (__int64 *)(v20 + 16);
    *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v20 + 16;
    while ( 1 )
    {
      v51 = *v50;
      if ( v51 )
        _InterlockedIncrement((volatile signed __int32 *)(v51 + 4));
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)
                                           + 8 * v49)
                               + 368LL) != CurrentThread )
      {
        v53 = WdLogNewEntry5_WdAssertion(CurrentThread, v45, v47, v48);
        *(_QWORD *)(v53 + 24) = 1824LL;
        WdLogEvent5_WdAssertion(v53);
      }
      v20 = *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      LODWORD(v27) = _guard_dispatch_icall_fptr();
      *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = (unsigned int)v27;
      if ( (int)v27 < 0 )
        break;
      *(_DWORD *)v20 &= ~0x1000u;
      ++*v6;
      ++v49;
      v50 = *(__int64 **)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( v49 >= BroadcastContextCount )
        goto LABEL_66;
    }
    v54 = **(CRefCountedBuffer ***)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v54 )
      CRefCountedBuffer::RefCountedBufferRelease(v54);
    v55 = *v6;
    if ( (int)v55 >= 0 )
    {
      v56 = *v6;
      do
      {
        _guard_dispatch_icall_fptr();
        --v56;
      }
      while ( v56 >= 0 );
      v7 = *(struct _D3DKMT_SUBMITCOMMAND **)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      BroadcastContextCount = *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    if ( v55 < BroadcastContextCount )
    {
      v57 = *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v58 = *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      do
      {
        v59 = 0;
        if ( v7->NumPrimaries )
        {
          do
          {
            v48 = *(struct VIDMM_ALLOC **)(v20 + 8LL * v59 + 200);
            if ( v48 )
              VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
                *(struct VIDMM_DEVICE **)(*(_QWORD *)(*(_QWORD *)(v58 + 8 * v55) + 16LL) + 536LL),
                0,
                v48);
            ++v59;
          }
          while ( v59 < v7->NumPrimaries );
          v57 = *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        }
        ++v55;
      }
      while ( v55 < v57 );
      v27 = *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    }
    v38 = WdLogNewEntry5_WdWarning(v54, v45, v47, v48);
    *(_QWORD *)(v38 + 32) = (int)v27;
LABEL_35:
    *(_QWORD *)(v38 + 24) = this;
LABEL_36:
    WdLogEvent5_WdWarning(v38);
LABEL_70:
    v65 = *(volatile signed __int32 **)(v20 + 16);
    if ( v65 )
    {
      if ( _InterlockedExchangeAdd(v65 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v65, 0);
    }
    goto LABEL_73;
  }
  v23 = *((_QWORD *)this + 2);
  if ( v7->PrivateDriverDataSize
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 1256LL) >= 0x8000u
    || (v24 = *(_QWORD *)(v23 + 16), v25 = *(_QWORD *)(v24 + 16), *(_DWORD *)(v25 + 260) != 4318)
    && !DXGADAPTER::IsWarpAdapter(*(DXGADAPTER **)(v24 + 16)) )
  {
    v28 = (unsigned int)(v22 + 8);
    if ( (_DWORD)v22 == -8 )
      v28 = 1LL;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v28, 0x4B677844u);
    if ( !PoolWithTag )
      goto LABEL_26;
    *(_QWORD *)(v20 + 16) = PoolWithTag;
    *PoolWithTag = *((_DWORD *)this + 46);
    PoolWithTag[1] = 1;
    v30 = v7->PrivateDriverDataSize;
    pPrivateDriverData = (char *)v7->pPrivateDriverData;
    v32 = (void *)(*(_QWORD *)(v20 + 16) + 8LL);
    if ( &pPrivateDriverData[v30] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[v30] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v32, pPrivateDriverData, v30);
    goto LABEL_31;
  }
  v26 = WdLogNewEntry5_WdWarning(v25, v23, v22, v19);
  *(_QWORD *)(v26 + 24) = 1737LL;
  WdLogEvent5_WdWarning(v26);
  LODWORD(v27) = -1073741811;
LABEL_73:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v6 + 4);
  return (unsigned int)v27;
}
