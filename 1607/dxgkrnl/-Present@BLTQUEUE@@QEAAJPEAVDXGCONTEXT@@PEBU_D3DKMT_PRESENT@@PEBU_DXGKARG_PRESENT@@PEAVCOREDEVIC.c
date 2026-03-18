/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0183B4C
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C014819C (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C6CC (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00CF9E0 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00CFA4C (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C018382C (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01838D4 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C0183978 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C01843E8 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0184B38 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_PRESENT *Value,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  ULONG_PTR *v5; // rbp
  const struct _D3DKMT_PRESENT *v6; // rsi
  char v8; // r10
  __int16 v9; // ax
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _LIST_ENTRY *v15; // rax
  __int64 v16; // rcx
  struct _LIST_ENTRY **v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  bool v21; // cf
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGADAPTER *Adapter; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 hDestination; // rcx
  __int64 v35; // rax
  _DWORD *v36; // rbx
  const struct _DXGKARG_PRESENT *v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 SubRectCnt; // rax
  _QWORD *v41; // rax
  struct DXGCONTEXT *v42; // rdx
  const struct _DXGKARG_PRESENT *v43; // r9
  BLTENTRY *v44; // rbx
  void *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r8
  struct COREDEVICEACCESS *AllocationType; // [rsp+68h] [rbp+68h]
  _BYTE v51[128]; // [rsp+C8h] [rbp+C8h] BYREF
  struct DXGCONTEXT *v52; // [rsp+160h] [rbp+160h]
  struct _D3DKMT_PRESENT *v53; // [rsp+168h] [rbp+168h]

  v53 = Value;
  v52 = a2;
  v5 = (ULONG_PTR *)((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = Value;
  v8 = qword_1C0056840;
  v9 = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q((__int64)this, &EventProfilerEnter, (__int64)Value, 12000);
    v8 = qword_1C0056840;
    v9 = Microsoft_Windows_DxgKrnlEnableBits;
    a2 = v52;
  }
  v10 = *((unsigned int *)this + 212);
  if ( (v10 & 1) == 0 )
    goto LABEL_5;
  Value = (struct _D3DKMT_PRESENT *)v6->Flags.Value;
  if ( ((unsigned __int8)Value & 7) == 0
    || (v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL), (*(_DWORD *)(v10 + 300) & 0x10) == 0) )
  {
    if ( (v8 & 2) != 0 && (v9 & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, (__int64)Value, 12000);
    return 3221225485LL;
  }
  if ( *((int *)this + 213) < 0 )
  {
LABEL_5:
    if ( (v8 & 2) == 0 )
      return 3221226166LL;
    v11 = (v9 & 0x2000) == 0;
LABEL_7:
    if ( !v11 )
      Template_q(v10, &EventProfilerExit, (__int64)Value, 12000);
    return 3221226166LL;
  }
  if ( ((unsigned __int8)Value & 0x20) != 0 )
  {
    *((_BYTE *)this + 407) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = -1073741130LL;
      *(_QWORD *)(v14 + 32) = this;
      WdLogEvent5_WdError(v14);
LABEL_20:
      if ( (qword_1C0056840 & 2) == 0 )
        return 3221226166LL;
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  v15 = (struct _LIST_ENTRY *)((char *)this + 80);
  while ( 1 )
  {
    v17 = BLTQUEUE::RemoveQueueHead(this, v15);
    *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v17;
    if ( v17 )
    {
LABEL_34:
      if ( !v17 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v28 + 24) = -1073741130LL;
        *(_QWORD *)(v28 + 32) = this;
        WdLogEvent5_WdAssertion(v28);
        goto LABEL_20;
      }
      Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
      v30 = BLTENTRY::SetupPresentParameters(
              (BLTENTRY *)v17,
              this,
              v52,
              v6,
              a4,
              a5,
              BYTE1(*((_DWORD *)Adapter + 75)) & 1);
      v32 = v30;
      if ( v30 < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v33 + 24) = v32;
        *(_QWORD *)(v33 + 32) = this;
        WdLogEvent5_WdError(v33);
        goto LABEL_57;
      }
      if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 75) & 0x100) != 0 )
      {
        KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
        if ( (v53->Flags.Value & 8) != 0 )
          LODWORD(v32) = 0;
        else
          LODWORD(v32) = BLTQUEUE::PreparePresentIndirect(
                           this,
                           v42,
                           v53,
                           v43,
                           AllocationType,
                           *(struct BLTENTRY **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
        KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
      }
      else
      {
        *v5 = 0LL;
        v35 = *((_QWORD *)v52 + 7);
        *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v35;
        v36 = (_DWORD *)(v35 + 8);
        *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v35 + 8;
        if ( *(_DWORD *)v35 == -791674878
          && (((v53->Flags.Value >> 2) & 1) == 0 ? (hDestination = v53->hDestination) : (hDestination = v53->hSource),
              *v36 == (_DWORD)hDestination) )
        {
          if ( ((v53->Flags.Value >> 2) & 1) != 0 )
          {
            memset(v36, 0, 0x48uLL);
            v36[2] |= 4u;
          }
          else
          {
            v37 = a4;
            *(struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF *)(v35 + 16) = a4->Flags.0;
            *(_DWORD *)(v35 + 20) = a4->Color;
            *(RECT *)(v35 + 40) = a4->DstRect;
            *(RECT *)(v35 + 24) = a4->SrcRect;
            v38 = *((_QWORD *)v52 + 6);
            *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v38;
            v39 = ((unsigned __int64)(unsigned int)v38 - 80) >> 4;
            SubRectCnt = a4->SubRectCnt;
            if ( (unsigned int)SubRectCnt > (unsigned int)v39 )
            {
              *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 16 * SubRectCnt;
              if ( ZwAllocateVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     (PVOID *)((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL),
                     0LL,
                     v5 + 1,
                     0x1000u,
                     4u) < 0 )
                goto LABEL_57;
              v37 = a4;
            }
            else
            {
              *v5 = (ULONG_PTR)(v36 + 13);
            }
            memmove((void *)*v5, v37->pDstSubRects, 16LL * v37->SubRectCnt);
            v36[12] = a4->SubRectCnt;
            *(_QWORD *)v36 = *v5;
          }
          **(_DWORD **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = -791674877;
        }
        else
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdError(hDestination);
          v41[3] = v32;
          v41[4] = v52;
          v41[5] = this;
          WdLogEvent5_WdError(v41);
          LODWORD(v32) = -1073741811;
          *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741811;
        }
      }
LABEL_57:
      if ( (int)v32 >= 0 )
      {
        BLTQUEUE::InsertQueueTail(
          this,
          (struct _LIST_ENTRY *)this + 4,
          *(struct BLTENTRY **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
        *((LARGE_INTEGER *)this + 93) = KeQueryPerformanceCounter(0LL);
        KeSetEvent((PRKEVENT)((char *)this + 352), 0, 0);
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v48, &EventProfilerExit, v49, 12000);
        return 0LL;
      }
      else
      {
        v44 = *(BLTENTRY **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v45 = (void *)*((_QWORD *)v44 + 5);
        if ( v45 )
        {
          ObfDereferenceObject(v45);
          *((_QWORD *)v44 + 5) = 0LL;
        }
        if ( *((_QWORD *)v44 + 6) )
          BLTENTRY::ReleasePresentDoneEvent(v44, 0);
        BLTQUEUE::InsertQueueHead(this, (struct _LIST_ENTRY *)this + 5, v44);
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v46, &EventProfilerExit, v47, 12000);
        return (unsigned int)v32;
      }
    }
    v18 = v6->Flags.Value;
    if ( (v18 & 0x10) != 0 )
    {
      v27 = WdLogNewEntry5_WdEvent(v18);
      LODWORD(v23) = -1071775486;
      *(_QWORD *)(v27 + 24) = -1071775486LL;
      *(_QWORD *)(v27 + 32) = this;
      WdLogEvent5_WdEvent(v27);
      v24 = qword_1C0056840;
      v26 = (qword_1C0056840 & 2) == 0;
      goto LABEL_30;
    }
    *((_BYTE *)this + 406) = 1;
    v19 = BLTQUEUE::IssueCommand(this);
    *(_DWORD *)v5 = v19;
    if ( v19 < 0 )
      break;
    v20 = *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 1;
    *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v20;
    v21 = v20 < 3;
    v15 = (struct _LIST_ENTRY *)((char *)this + 80);
    if ( !v21 )
      goto LABEL_34;
  }
  v22 = WdLogNewEntry5_WdError(v16);
  v23 = *(int *)v5;
  *(_QWORD *)(v22 + 24) = v23;
  *(_QWORD *)(v22 + 32) = this;
  WdLogEvent5_WdError(v22);
  v26 = (qword_1C0056840 & 2) == 0;
LABEL_30:
  if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 12000);
  return (unsigned int)v23;
}
