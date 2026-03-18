/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0159EE4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000A4D0 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00AD90C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00AD978 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C0159BB4 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C0159C60 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C0159D08 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C015A770 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015AE68 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _LIST_ENTRY **v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // eax
  bool v24; // cf
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGADAPTER *Adapter; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 hDestination; // rcx
  __int64 v38; // rax
  _DWORD *v39; // r9
  __int64 v40; // rcx
  const struct _DXGKARG_PRESENT *v41; // r10
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 SubRectCnt; // rax
  _QWORD *v45; // rax
  struct _KMUTANT *v46; // rbx
  struct DXGCONTEXT *v47; // rdx
  const struct _DXGKARG_PRESENT *v48; // r9
  struct _LIST_ENTRY *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // r8
  struct COREDEVICEACCESS *AllocationType; // [rsp+68h] [rbp+68h]
  _BYTE v55[128]; // [rsp+C8h] [rbp+C8h] BYREF
  struct DXGCONTEXT *v56; // [rsp+160h] [rbp+160h]
  struct _D3DKMT_PRESENT *v57; // [rsp+168h] [rbp+168h]

  v57 = Value;
  v56 = a2;
  v5 = (ULONG_PTR *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = Value;
  v8 = qword_1C00467F0;
  v9 = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q((__int64)this, &EventProfilerEnter, (__int64)Value, 12000);
    v8 = qword_1C00467F0;
    v9 = Microsoft_Windows_DxgKrnlEnableBits;
    a2 = v56;
  }
  v10 = *((unsigned int *)this + 162);
  if ( (v10 & 1) == 0 )
    goto LABEL_5;
  Value = (struct _D3DKMT_PRESENT *)v6->Flags.Value;
  if ( ((unsigned __int8)Value & 7) == 0
    || (v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL), (*(_DWORD *)(v10 + 284) & 8) == 0) )
  {
    if ( (v8 & 2) != 0 && (v9 & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, (__int64)Value, 12000);
    return 3221225485LL;
  }
  if ( *((int *)this + 163) < 0 )
  {
LABEL_5:
    if ( (v8 & 2) == 0 )
      return 3221226166LL;
    v11 = (v9 & 0x4000) == 0;
LABEL_7:
    if ( !v11 )
      Template_q(v10, &EventProfilerExit, (__int64)Value, 12000);
    return 3221226166LL;
  }
  if ( ((unsigned __int8)Value & 0x20) != 0 )
  {
    *((_BYTE *)this + 263) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = -1073741130LL;
      *(_QWORD *)(v14 + 32) = this;
      WdLogEvent5_WdError(v14);
LABEL_20:
      if ( (qword_1C00467F0 & 2) == 0 )
        return 3221226166LL;
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  v15 = (struct _LIST_ENTRY *)((char *)this + 32);
  while ( 1 )
  {
    v18 = BLTQUEUE::RemoveQueueHead(this, v15);
    *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v18;
    if ( v18 )
    {
LABEL_34:
      if ( !v18 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v17, v16, v19, v20);
        *(_QWORD *)(v31 + 24) = -1073741130LL;
        *(_QWORD *)(v31 + 32) = this;
        WdLogEvent5_WdAssertion(v31);
        goto LABEL_20;
      }
      Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
      v33 = BLTENTRY::SetupPresentParameters((BLTENTRY *)v18, this, v56, v6, a4, a5, *((_BYTE *)Adapter + 284) >> 7);
      v35 = v33;
      if ( v33 < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v36 + 24) = v35;
        *(_QWORD *)(v36 + 32) = this;
        WdLogEvent5_WdError(v36);
        goto LABEL_58;
      }
      hDestination = *((unsigned int *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 71);
      if ( (hDestination & 0x80u) != 0LL )
      {
        v46 = (struct _KMUTANT *)*((_QWORD *)this + 296);
        KeWaitForSingleObject(v46, Executive, 0, 0, 0LL);
        if ( (v57->Flags.Value & 8) != 0 )
          LODWORD(v35) = 0;
        else
          LODWORD(v35) = BLTQUEUE::PreparePresentIndirect(
                           this,
                           v47,
                           v57,
                           v48,
                           AllocationType,
                           *(struct BLTENTRY **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        KeReleaseMutex(v46, 0);
      }
      else
      {
        *v5 = 0LL;
        v38 = *((_QWORD *)v56 + 7);
        *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v38;
        v39 = (_DWORD *)(v38 + 8);
        *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v38 + 8;
        if ( *(_DWORD *)v38 == -791674878
          && (((v57->Flags.Value >> 2) & 1) == 0 ? (hDestination = v57->hDestination) : (hDestination = v57->hSource),
              *v39 == (_DWORD)hDestination) )
        {
          if ( ((v57->Flags.Value >> 2) & 1) != 0 )
          {
            memset(v39, 0, 0x48uLL);
            v40 = *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            *(_DWORD *)(v40 + 16) |= 4u;
          }
          else
          {
            v41 = a4;
            *(struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF *)(v38 + 16) = a4->Flags.0;
            *(_DWORD *)(v38 + 20) = a4->Color;
            *(RECT *)(v38 + 40) = a4->DstRect;
            *(RECT *)(v38 + 24) = a4->SrcRect;
            v42 = *((_QWORD *)v56 + 6);
            *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v42;
            v43 = ((unsigned __int64)(unsigned int)v42 - 80) >> 4;
            SubRectCnt = a4->SubRectCnt;
            if ( (unsigned int)SubRectCnt > (unsigned int)v43 )
            {
              *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 16 * SubRectCnt;
              if ( ZwAllocateVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     (PVOID *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL),
                     0LL,
                     v5 + 5,
                     0x1000u,
                     4u) < 0 )
                goto LABEL_58;
              v41 = a4;
            }
            else
            {
              *v5 = (ULONG_PTR)(v39 + 13);
            }
            memmove((void *)*v5, v41->pDstSubRects, 16LL * v41->SubRectCnt);
            v40 = *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            *(_DWORD *)(v40 + 56) = a4->SubRectCnt;
            *(_QWORD *)(v40 + 8) = *v5;
          }
          *(_DWORD *)v40 = -791674877;
        }
        else
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(hDestination);
          v45[3] = v35;
          v45[4] = v56;
          v45[5] = this;
          WdLogEvent5_WdError(v45);
          LODWORD(v35) = -1073741811;
          *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741811;
        }
      }
      v18 = *(struct _LIST_ENTRY ***)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
LABEL_58:
      if ( (int)v35 >= 0 )
      {
        BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)this + 1, (struct BLTENTRY *)v18);
        *((LARGE_INTEGER *)this + 68) = KeQueryPerformanceCounter(0LL);
        KeSetEvent(*((PRKEVENT *)this + 30), 0, 0);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v52, &EventProfilerExit, v53, 12000);
        return 0LL;
      }
      else
      {
        v49 = v18[5];
        if ( v49 )
        {
          ObfDereferenceObject(v49);
          v18[5] = 0LL;
        }
        if ( v18[6] )
          BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v18, 0);
        BLTQUEUE::InsertQueueHead(this, (struct _LIST_ENTRY *)this + 2, (struct BLTENTRY *)v18);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v50, &EventProfilerExit, v51, 12000);
        return (unsigned int)v35;
      }
    }
    v21 = v6->Flags.Value;
    if ( (v21 & 0x10) != 0 )
    {
      v30 = WdLogNewEntry5_WdEvent(v21, v16, v19, v20);
      LODWORD(v26) = -1071775486;
      *(_QWORD *)(v30 + 24) = -1071775486LL;
      *(_QWORD *)(v30 + 32) = this;
      WdLogEvent5_WdEvent(v30);
      v27 = qword_1C00467F0;
      v29 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_30;
    }
    *((_BYTE *)this + 262) = 1;
    v22 = BLTQUEUE::IssueCommand(this);
    *(_DWORD *)v5 = v22;
    if ( v22 < 0 )
      break;
    v23 = *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 1;
    *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v23;
    v24 = v23 < 3;
    v15 = (struct _LIST_ENTRY *)((char *)this + 32);
    if ( !v24 )
      goto LABEL_34;
  }
  v25 = WdLogNewEntry5_WdError(v17);
  v26 = *(int *)v5;
  *(_QWORD *)(v25 + 24) = v26;
  *(_QWORD *)(v25 + 32) = this;
  WdLogEvent5_WdError(v25);
  v29 = (qword_1C00467F0 & 2) == 0;
LABEL_30:
  if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 12000);
  return (unsigned int)v26;
}
