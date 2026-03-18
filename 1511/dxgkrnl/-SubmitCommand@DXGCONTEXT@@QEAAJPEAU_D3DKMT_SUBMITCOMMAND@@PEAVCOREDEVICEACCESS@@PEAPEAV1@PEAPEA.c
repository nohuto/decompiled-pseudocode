/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C007D300
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C007C660 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002440 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0003424 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     Template_p @ 0x1C0010C14 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00187E0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F004 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C001F398 (Template_ppxppttqddddddddq.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005BE80 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        struct _SLIST_ENTRY *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        unsigned int a6)
{
  __int64 Flags; // rcx
  int v10; // ebx
  __int64 v11; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PSLIST_ENTRY v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  struct _SLIST_ENTRY *v21; // rcx
  int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // r9
  struct _SLIST_ENTRY *v25; // rcx
  int v26; // eax
  int v27; // r8d
  bool v28; // dl
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r8
  struct _SLIST_ENTRY *v33; // rdx
  struct _SLIST_ENTRY *v34; // rax
  struct _SLIST_ENTRY *v35; // rcx
  __int64 v36; // rax
  SIZE_T v37; // rdx
  struct _SLIST_ENTRY *PoolWithTag; // rax
  size_t PrivateDriverDataSize; // r9
  char *pPrivateDriverData; // rdx
  void *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rbx
  struct _SLIST_ENTRY *v50; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  struct VIDMM_ALLOC *v55; // r9
  CRefCountedBuffer *v56; // rcx
  __int64 i; // rbx
  __int64 v58; // rax
  UINT v59; // ebx
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  volatile signed __int32 *v65; // rcx
  struct _SLIST_ENTRY *Next; // [rsp+A0h] [rbp-4B8h]
  int v67; // [rsp+A0h] [rbp-4B8h]
  signed int v68; // [rsp+A0h] [rbp-4B8h]
  signed int BroadcastContextCount; // [rsp+A8h] [rbp-4B0h]
  struct _SLIST_ENTRY *v70[3]; // [rsp+B8h] [rbp-4A0h] BYREF
  struct COREDEVICEACCESS *v71; // [rsp+D0h] [rbp-488h]
  _D3DKMT_PRESENTHISTORYTOKEN v72; // [rsp+E0h] [rbp-478h] BYREF

  v71 = a3;
  v70[2] = this;
  Flags = (unsigned int)a2->Flags;
  v10 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 15;
  BroadcastContextCount = a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > *((_DWORD *)&this[11].Next + 2) )
  {
    v11 = WdLogNewEntry5_WdWarning(Flags, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)&this[11].Next + 2);
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v10 |= 0xA0u;
    v13 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1, a3);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = WdLogNewEntry5_WdEvent();
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
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppxppttqddddddddq(Flags, (__int64)a2, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_p(Flags, &EventRender, (__int64)a3, 0LL);
    }
  }
  Next = this[1].Next[1].Next;
  v70[1] = Next;
  ++HIDWORD(Next[65].Next);
  v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&Next[64]);
  if ( !v18 )
  {
    ++*((_DWORD *)&Next[65].Next + 2);
    v18 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))Next[67].Next)(
                          HIDWORD(Next[66].Next),
                          *((unsigned int *)&Next[66].Next + 3),
                          *((unsigned int *)&Next[66].Next + 2),
                          &Next[64]);
  }
  v70[0] = v18;
  if ( !v18 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v17, v16, v19, v20);
    *(_QWORD *)(v31 + 24) = 1650LL;
    WdLogEvent5_WdLowResource(v31);
    goto LABEL_33;
  }
  v21 = Next[1].Next;
  if ( *((int *)&v21[103].Next + 2) < 0x2000 )
    v22 = 1;
  else
    v22 = *((_DWORD *)&v21[14].Next + 2);
  if ( *((int *)&v21[103].Next + 2) >= 0x2000 || BYTE4(v21[121].Next) )
    v23 = v22 * ((*((_DWORD *)&v21[116].Next + 2) << 6) + 8) + 376;
  else
    v23 = 872;
  memset(v18, 0, v23);
  v25 = Next[1].Next;
  v26 = *((_DWORD *)&v25[103].Next + 2);
  if ( v26 < 0x2000 )
    v27 = 1;
  else
    v27 = *((_DWORD *)&v25[14].Next + 2);
  v28 = v26 >= 0x2000 || BYTE4(v25[121].Next);
  v29 = *((_DWORD *)&v25[116].Next + 2);
  *((_BYTE *)&v18[21].Next + 12) = v28;
  if ( v28 )
  {
    *((_DWORD *)&v18[22].Next + 3) = v29;
    LODWORD(v18[23].Next) = v27;
    v30 = ((v27 * v29) << 6) + 16;
    HIDWORD(v18[23].Next) = v30;
    v30 += 360;
    LODWORD(v18[22].Next) = v30;
    HIDWORD(v18[22].Next) = v30 + 8 * v27;
  }
  LODWORD(v18->Next) = v10;
  if ( (v10 & 0x20) != 0 )
  {
    LODWORD(v18->Next) = v10 & 0xFFFFFBFF | (((BroadcastContextCount > 1) | 2) << 10);
    if ( this[1].Next[177].Next != this[1].Next[1].Next[1].Next )
      HIDWORD(v18[7].Next) = 0;
  }
  v32 = *((unsigned int *)&this[11].Next + 2);
  if ( !(_DWORD)v32 )
    goto LABEL_50;
  v33 = this[1].Next;
  if ( !a2->PrivateDriverDataSize && LODWORD(v33[1].Next[1].Next[79].Next) < 0x8000 )
  {
    v34 = v33[1].Next;
    v35 = v34[1].Next;
    if ( HIDWORD(v35[16].Next) == 4318 || DXGADAPTER::IsWarpAdapter((DXGADAPTER *)v34[1].Next) )
    {
      v36 = WdLogNewEntry5_WdWarning(v35, v33, v32, v24);
      *(_QWORD *)(v36 + 24) = 1684LL;
      WdLogEvent5_WdWarning(v36);
      CVidSchSubmitData::~CVidSchSubmitData(v70);
      return 3221225485LL;
    }
  }
  v37 = (unsigned int)(v32 + 8);
  if ( (_DWORD)v32 == -8 )
    v37 = 1LL;
  PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)512, v37, 0x4B677844u);
  if ( !PoolWithTag )
  {
LABEL_33:
    CVidSchSubmitData::~CVidSchSubmitData(v70);
    return 3221225495LL;
  }
  v18[1].Next = PoolWithTag;
  LODWORD(PoolWithTag->Next) = *((_DWORD *)&this[11].Next + 2);
  HIDWORD(PoolWithTag->Next) = 1;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  pPrivateDriverData = (char *)a2->pPrivateDriverData;
  v41 = &v18[1].Next->Next + 1;
  if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
    || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v41, pPrivateDriverData, PrivateDriverDataSize);
LABEL_50:
  *((_QWORD *)&v18[2].Next + 1) = a2->Commands;
  HIDWORD(v18[3].Next) = a2->CommandLength;
  *((_DWORD *)&v18[4].Next + 3) = *((_DWORD *)&this[11].Next + 2);
  LODWORD(v18[5].Next) = a2->PrivateDriverDataSize;
  v44 = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, _QWORD, D3DKMT_HANDLE *, _QWORD, PSLIST_ENTRY))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[26].Next + 1) + 8LL) + 840LL))(
          this[1].Next[1].Next[27].Next,
          a2->NumPrimaries,
          a2->WrittenPrimaries,
          (unsigned int)BroadcastContextCount,
          v18 + 12);
  v67 = v44;
  if ( v44 >= 0 )
  {
    v18[21].Next = (struct _SLIST_ENTRY *)a5;
    *((_DWORD *)&v18[21].Next + 2) = a6;
    LODWORD(v48) = 0;
    v49 = 0LL;
    if ( BroadcastContextCount <= 0LL )
    {
LABEL_72:
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v72.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v72.Token.Flip.FenceValue = a2->PresentHistoryToken;
        v61 = DXGCONTEXT::SubmitPresentHistoryToken((DXGCONTEXT *)this, &v72, v71, 0LL, 0, 0LL, 0LL, 0LL);
        v68 = v61;
        if ( (int)(v61 + 0x80000000) < 0 || v61 == -1073741130 )
        {
          v44 = v61;
        }
        else
        {
          v64 = WdLogNewEntry5_WdWarning(0x80000000LL, v61, v62, v63);
          *(_QWORD *)(v64 + 24) = this;
          *(_QWORD *)(v64 + 32) = v68;
          WdLogEvent5_WdWarning(v64);
          v44 = 0;
        }
      }
      else
      {
        v44 = v67;
      }
    }
    else
    {
      while ( 1 )
      {
        v50 = v18[1].Next;
        if ( v50 )
          _InterlockedIncrement((volatile signed __int32 *)&v50->Next + 1);
        CurrentThread = KeGetCurrentThread();
        if ( *((struct _KTHREAD **)a4[v49] + 46) != CurrentThread )
        {
          v52 = WdLogNewEntry5_WdAssertion(CurrentThread);
          *(_QWORD *)(v52 + 24) = 1744LL;
          WdLogEvent5_WdAssertion(v52);
        }
        v67 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*((_QWORD *)&this[1].Next[1].Next[25].Next->Next + 1)
                                                              + 344LL))(
                *((_QWORD *)a4[v49] + 27),
                v18);
        if ( v67 < 0 )
          break;
        LODWORD(v18->Next) &= ~0x800u;
        LODWORD(v48) = v48 + 1;
        if ( ++v49 >= BroadcastContextCount )
          goto LABEL_72;
      }
      v56 = (CRefCountedBuffer *)v18[1].Next;
      if ( v56 )
        CRefCountedBuffer::RefCountedBufferRelease(v56);
      v48 = (int)v48;
      for ( i = v48;
            i >= 0;
            (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)&this[1].Next[1].Next[25].Next->Next + 1) + 352LL))(
              *((_QWORD *)a4[i--] + 27),
              0LL) )
      {
        ;
      }
      v58 = BroadcastContextCount;
      if ( (int)v48 < (__int64)BroadcastContextCount )
      {
        do
        {
          v59 = 0;
          if ( a2->NumPrimaries )
          {
            do
            {
              v55 = (struct VIDMM_ALLOC *)*((_QWORD *)&v18[12].Next + v59 + 1);
              if ( v55 )
                VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                  *((VIDMM_EXPORT **)&this[1].Next[1].Next[26].Next + 1),
                  *(struct VIDMM_DEVICE **)(*((_QWORD *)a4[v48] + 2) + 536LL),
                  0,
                  v55);
              ++v59;
            }
            while ( v59 < a2->NumPrimaries );
            v58 = BroadcastContextCount;
          }
          ++v48;
        }
        while ( v48 < v58 );
      }
      v60 = WdLogNewEntry5_WdWarning(v56, v53, v54, v55);
      *(_QWORD *)(v60 + 24) = this;
      v44 = v67;
      *(_QWORD *)(v60 + 32) = v67;
      WdLogEvent5_WdWarning(v60);
    }
  }
  else
  {
    v47 = WdLogNewEntry5_WdWarning(v43, v42, v45, v46);
    *(_QWORD *)(v47 + 24) = 1720LL;
    WdLogEvent5_WdWarning(v47);
  }
  v65 = (volatile signed __int32 *)v18[1].Next;
  if ( v65 )
  {
    if ( _InterlockedExchangeAdd(v65 + 1, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v65, 0);
  }
  CVidSchSubmitData::~CVidSchSubmitData(v70);
  return (unsigned int)v44;
}
