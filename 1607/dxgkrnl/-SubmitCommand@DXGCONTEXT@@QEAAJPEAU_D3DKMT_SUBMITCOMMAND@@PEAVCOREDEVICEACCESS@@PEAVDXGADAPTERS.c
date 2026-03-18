/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00A77A0
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00A6890 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0008744 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     Template_p @ 0x1C00111E4 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001C8F0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C0025EC0 (Template_ppxppttqddddddddq.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0143CD4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct _VIDMM_MULTI_ALLOC **a6,
        unsigned int a7)
{
  __int64 Flags; // rcx
  int v10; // r12d
  __int64 v11; // rax
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  PSLIST_ENTRY v20; // rdi
  __int64 v21; // rcx
  int v22; // edx
  char v23; // al
  unsigned int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edx
  char v29; // al
  int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  SIZE_T v37; // rdx
  struct _SLIST_ENTRY *PoolWithTag; // rax
  size_t PrivateDriverDataSize; // r9
  char *pPrivateDriverData; // rdx
  void *v41; // rcx
  __int64 v42; // rdx
  CRefCountedBuffer *v43; // rcx
  __int64 v44; // r8
  struct VIDMM_ALLOC *v45; // r9
  UINT v46; // eax
  __int64 v47; // r12
  __int64 v48; // rax
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rbx
  struct _SLIST_ENTRY *v61; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v63; // rax
  int v64; // eax
  __int64 i; // rbx
  __int64 v66; // rax
  __int64 v67; // rbx
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  volatile signed __int32 *v73; // rcx
  signed int BroadcastContextCount; // [rsp+A0h] [rbp-4E8h]
  struct _SLIST_ENTRY *v75; // [rsp+A8h] [rbp-4E0h]
  struct _SLIST_ENTRY *v76[2]; // [rsp+B8h] [rbp-4D0h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-4C0h]
  DXGCONTEXT *v78; // [rsp+D0h] [rbp-4B8h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v79; // [rsp+D8h] [rbp-4B0h]
  struct COREDEVICEACCESS *v80; // [rsp+E0h] [rbp-4A8h]
  __int64 v81; // [rsp+E8h] [rbp-4A0h]
  __int64 v82; // [rsp+F0h] [rbp-498h]
  __int64 v83; // [rsp+F8h] [rbp-490h]
  __int64 v84; // [rsp+100h] [rbp-488h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v85; // [rsp+110h] [rbp-478h] BYREF

  v79 = a4;
  v80 = a3;
  v78 = this;
  Flags = (unsigned int)a2->Flags;
  v10 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 15;
  LODWORD(v75) = v10;
  BroadcastContextCount = a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > *((_DWORD *)this + 46) )
  {
    v11 = WdLogNewEntry5_WdWarning(Flags, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 46);
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v10 |= 0xA0u;
    LODWORD(v75) = v10;
    v13 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = WdLogNewEntry5_WdEvent(Flags);
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdEvent(v15);
      return (unsigned int)v14;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v83 = 0LL;
      v84 = 0LL;
      v81 = 0LL;
      v82 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        LODWORD(v16) = 0;
        Template_ppxppttqddddddddq(0LL, 0LL, (__int64)a3, 0LL, 0LL);
        goto LABEL_13;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_p(Flags, &EventRender, (__int64)a3, 0LL);
    }
  }
  LODWORD(v16) = 0;
LABEL_13:
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v77 = v17;
  v76[1] = (struct _SLIST_ENTRY *)v17;
  v18 = v17 + 944;
  ++*(_DWORD *)(v17 + 964);
  v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v17 + 944));
  if ( !v20 )
  {
    ++*(_DWORD *)(v18 + 24);
    v20 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v18 + 48))(
                          *(unsigned int *)(v18 + 36),
                          *(unsigned int *)(v18 + 44),
                          *(unsigned int *)(v18 + 40),
                          v18);
  }
  v76[0] = v20;
  if ( !v20 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v31 + 24) = 1706LL;
    WdLogEvent5_WdLowResource(v31);
    goto LABEL_35;
  }
  v21 = *(_QWORD *)(v77 + 16);
  if ( *(int *)(v21 + 1792) < 0x2000 )
    v22 = 1;
  else
    v22 = *(_DWORD *)(v21 + 248);
  if ( *(int *)(v21 + 1792) >= 0x2000 || (v23 = *(_BYTE *)(v21 + 2076)) != 0 )
    v23 = 1;
  if ( v23 )
    v24 = *(_DWORD *)(v21 + 2000) * (48 * v22 + ((8 * v22 + 167) & 0xFFFFFFF8)) + 8 * (v22 + 55);
  else
    v24 = 936;
  memset(v20, 0, v24);
  v26 = *(_QWORD *)(v77 + 16);
  v27 = *(_DWORD *)(v26 + 1792);
  if ( v27 < 0x2000 )
    v28 = 1;
  else
    v28 = *(_DWORD *)(v26 + 248);
  if ( v27 >= 0x2000 || (v29 = *(_BYTE *)(v26 + 2076)) != 0 )
    v29 = 1;
  v30 = *(_DWORD *)(v26 + 2000);
  *((_BYTE *)&v20[21].Next + 12) = v29;
  if ( v29 )
  {
    *((_DWORD *)&v20[26].Next + 3) = v30;
    LODWORD(v20[27].Next) = v28;
    HIDWORD(v20[27].Next) = v30 * (48 * v28 + ((8 * v28 + 167) & 0xFFFFFFF8)) + 16;
    LODWORD(v20[26].Next) = v30 * (48 * v28 + ((8 * v28 + 167) & 0xFFFFFFF8)) + 440;
    HIDWORD(v20[26].Next) = v30 * (48 * v28 + ((8 * v28 + 167) & 0xFFFFFFF8)) + 440 + 8 * v28;
  }
  v20->Next = v75;
  if ( (v10 & 0x20) != 0 )
  {
    LODWORD(v20->Next) = (unsigned int)v75 & 0xFFFFFBFF | (((BroadcastContextCount > 1) | 2) << 10);
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
      HIDWORD(v20[7].Next) = 0;
  }
  v32 = *((unsigned int *)this + 46);
  if ( (_DWORD)v32 )
  {
    v33 = *((_QWORD *)this + 2);
    if ( !a2->PrivateDriverDataSize && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 1352LL) < 0x8000u )
    {
      v34 = *(_QWORD *)(v33 + 16);
      v35 = *(_QWORD *)(v34 + 16);
      if ( *(_DWORD *)(v35 + 276) == 4318 || DXGADAPTER::IsWarpAdapter(*(DXGADAPTER **)(v34 + 16)) )
      {
        v36 = WdLogNewEntry5_WdWarning(v35, v33, v32, v25);
        *(_QWORD *)(v36 + 24) = 1740LL;
        WdLogEvent5_WdWarning(v36);
        CVidSchSubmitData::~CVidSchSubmitData(v76);
        return 3221225485LL;
      }
    }
    v37 = (unsigned int)(v32 + 8);
    if ( (_DWORD)v32 == -8 )
    {
      v37 = 1LL;
    }
    else if ( (unsigned int)(v32 + 8) > 0x7FFFFFFFuLL )
    {
      goto LABEL_35;
    }
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)512, v37, 0x4B677844u);
    if ( PoolWithTag )
    {
      v20[1].Next = PoolWithTag;
      LODWORD(PoolWithTag->Next) = *((_DWORD *)this + 46);
      HIDWORD(PoolWithTag->Next) = 1;
      PrivateDriverDataSize = a2->PrivateDriverDataSize;
      pPrivateDriverData = (char *)a2->pPrivateDriverData;
      v41 = &v20[1].Next->Next + 1;
      if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v41, pPrivateDriverData, PrivateDriverDataSize);
      goto LABEL_53;
    }
LABEL_35:
    CVidSchSubmitData::~CVidSchSubmitData(v76);
    return 3221225495LL;
  }
LABEL_53:
  *((_QWORD *)&v20[2].Next + 1) = a2->Commands;
  HIDWORD(v20[3].Next) = a2->CommandLength;
  *((_DWORD *)&v20[4].Next + 3) = *((_DWORD *)this + 46);
  LODWORD(v20[5].Next) = a2->PrivateDriverDataSize;
  if ( DXGADAPTER::IsWarpAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v46 = a2->PrivateDriverDataSize;
    if ( v46 != 304 && v46 != 280 )
    {
      v47 = -1073741578LL;
      goto LABEL_57;
    }
    Next = v20[1].Next;
    if ( RtlCompareMemoryUlong(&Next->Next + 1, 0x100uLL, 0) != 256 )
    {
      v54 = WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
      *(_QWORD *)(v54 + 24) = this;
      *(_QWORD *)(v54 + 32) = -1073741580LL;
      WdLogEvent5_WdWarning(v54);
      memset(&Next->Next + 1, 0, 0x100uLL);
    }
  }
  LODWORD(v47) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_HANDLE *, _QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                                  + 856LL))(
                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                   a2->NumPrimaries,
                   a2->WrittenPrimaries,
                   (unsigned int)BroadcastContextCount,
                   v20 + 12);
  if ( (int)v47 < 0 )
  {
    v59 = WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
    *(_QWORD *)(v59 + 24) = 1803LL;
    WdLogEvent5_WdWarning(v59);
    goto LABEL_86;
  }
  v20[21].Next = (struct _SLIST_ENTRY *)a6;
  *((_DWORD *)&v20[21].Next + 2) = a7;
  v60 = 0LL;
  if ( BroadcastContextCount <= 0LL )
  {
LABEL_82:
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v85.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
      v85.Token.Flip.FenceValue = a2->PresentHistoryToken;
      v68 = DXGCONTEXT::SubmitPresentHistoryToken(this, &v85, v80, v79, 0LL, 0, 0LL, 0LL, 0LL);
      v47 = v68;
      if ( (int)(v68 + 0x80000000) >= 0 && v68 != -1073741130 )
      {
        v72 = WdLogNewEntry5_WdWarning(0x80000000LL, v69, v70, v71);
        *(_QWORD *)(v72 + 24) = this;
        *(_QWORD *)(v72 + 32) = v47;
        WdLogEvent5_WdWarning(v72);
        LODWORD(v47) = 0;
      }
    }
    goto LABEL_86;
  }
  while ( 1 )
  {
    v61 = v20[1].Next;
    if ( v61 )
      _InterlockedIncrement((volatile signed __int32 *)&v61->Next + 1);
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)a5[v60] + 46) != CurrentThread )
    {
      v63 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v63 + 24) = 1827LL;
      WdLogEvent5_WdAssertion(v63);
    }
    v64 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                  + 376LL)
                                                                      + 8LL)
                                                          + 344LL))(
            *((_QWORD *)a5[v60] + 27),
            v20);
    v47 = v64;
    if ( v64 < 0 )
      break;
    LODWORD(v20->Next) &= ~0x800u;
    LODWORD(v16) = v16 + 1;
    if ( ++v60 >= BroadcastContextCount )
      goto LABEL_82;
  }
  v43 = (CRefCountedBuffer *)v20[1].Next;
  if ( v43 )
    CRefCountedBuffer::RefCountedBufferRelease(v43);
  v16 = (int)v16;
  for ( i = v16;
        i >= 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 376LL)
                                                           + 8LL)
                                               + 352LL))(
          *((_QWORD *)a5[i--] + 27),
          0LL) )
  {
    ;
  }
  v66 = BroadcastContextCount;
  if ( (int)v16 < (__int64)BroadcastContextCount )
  {
    do
    {
      v67 = 0LL;
      if ( a2->NumPrimaries )
      {
        do
        {
          v45 = (struct VIDMM_ALLOC *)*((_QWORD *)&v20[12].Next + v67 + 1);
          if ( v45 )
            VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
              *(struct VIDMM_DEVICE **)(*((_QWORD *)a5[v16] + 2) + 560LL),
              0,
              v45);
          v67 = (unsigned int)(v67 + 1);
        }
        while ( (unsigned int)v67 < a2->NumPrimaries );
        v66 = BroadcastContextCount;
      }
      ++v16;
    }
    while ( v16 < v66 );
  }
LABEL_57:
  v48 = WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
  *(_QWORD *)(v48 + 24) = this;
  *(_QWORD *)(v48 + 32) = v47;
  WdLogEvent5_WdWarning(v48);
LABEL_86:
  v73 = (volatile signed __int32 *)v20[1].Next;
  if ( v73 )
  {
    if ( _InterlockedExchangeAdd(v73 + 1, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v73, 0);
  }
  CVidSchSubmitData::~CVidSchSubmitData(v76);
  return (unsigned int)v47;
}
