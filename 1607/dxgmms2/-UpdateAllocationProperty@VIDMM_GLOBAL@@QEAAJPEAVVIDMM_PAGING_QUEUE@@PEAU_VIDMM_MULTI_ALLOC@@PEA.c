/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C008B568
 * Callers:
 *     ?VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C001D4C0 (-VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_AL.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0052898 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySupportedSegmentSet@VIDMM_GLOBAL@@IEAAEKKU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C0052A10 (-VerifySupportedSegmentSet@VIDMM_GLOBAL@@IEAAEKKU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VI.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0087818 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0087898 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct _VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // r13
  unsigned int v12; // r14d
  struct _D3DDDI_SEGMENTPREFERENCE v13; // ebx
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v17; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // si
  int v22; // edi
  __int64 v23; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  _DWORD *v25; // rax
  __int64 v26; // rax
  _QWORD v27[16]; // [rsp+40h] [rbp-31h] BYREF
  int v29; // [rsp+E0h] [rbp+6Fh] BYREF
  VIDMM_GLOBAL *v30; // [rsp+E8h] [rbp+77h]

  memset(v27, 0, 0x50uLL);
  v9 = HIDWORD(*(_QWORD *)a4);
  v10 = (*((_DWORD *)a3 + 8) >> 2) & 0x3F;
  v11 = **a3;
  *(_OWORD *)((char *)&v27[4] + 4) = *(_OWORD *)a4;
  LODWORD(v27[0]) = 214;
  v12 = *(_DWORD *)(v11 + 68);
  v13.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v11 + 72);
  v27[2] = a3;
  v30 = (VIDMM_GLOBAL *)v9;
  if ( (_mm_srli_si128(*(__m128i *)(v27 + 36), 8).m128i_i8[4] & 2) != 0 )
  {
    v14 = HIDWORD(v27[4]);
    if ( !HIDWORD(v27[4]) )
      goto LABEL_3;
    v17 = *((_QWORD *)this + 5017) + 456LL * v10;
    v9 = (unsigned __int8)(*(_WORD *)(v17 + 12) - *(_BYTE *)(v17 + 4));
    if ( _bittest((const int *)&v14, v9) )
      goto LABEL_3;
    v8 = *((unsigned int *)a3 + 7);
    LOBYTE(v9) = (~v12 & HIDWORD(v27[4])) != 0;
    if ( ((unsigned __int8)v9 & ((v8 & 8) != 0)) != 0 )
      goto LABEL_3;
    v18 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 **)(v11 + 504);
    v29 = 0;
    if ( !VIDMM_GLOBAL::VerifySupportedSegmentSet(
            this,
            v10,
            HIDWORD(v27[4]),
            (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0)v18->0,
            *(_QWORD *)(v11 + 16),
            *(_QWORD *)(v11 + 24),
            (*(_DWORD *)(v11 + 76) & 0x8000000) != 0,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v29) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v19, v8);
      *(_QWORD *)(v15 + 24) = 4472LL;
      goto LABEL_4;
    }
    BYTE4(v27[6]) = v29 & 1;
    BYTE5(v27[6]) = (v29 & 2) != 0;
    if ( v14 == v12 )
    {
      LOBYTE(v19) = v29 & 1;
      v20 = WdLogNewEntry5_WdWarning(v19);
      WdLogEvent5_WdWarning(v20);
    }
    v9 = (unsigned __int64)v30;
    v12 = v14;
  }
  v21 = v27[6];
  v22 = (LODWORD(v27[6]) >> 2) & 1;
  if ( v22 )
  {
    if ( (_DWORD)v9 == v13.0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v9);
      WdLogEvent5_WdWarning(v23);
      v9 = (unsigned __int64)v30;
    }
    v13.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v9;
  }
  if ( (v21 & 2) != 0 || v22 )
  {
    if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset((VIDMM_GLOBAL *)v9, v13, v12) )
      goto LABEL_3;
    MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v10, v13, (bool *)&v29);
    if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
            this,
            v10,
            v12,
            MostPreferredSegment,
            (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v27[4]) )
      goto LABEL_3;
    v21 = v27[6];
  }
  if ( (v21 & 1) != 0 )
  {
    v25 = *(_DWORD **)(v11 + 504);
    v9 = (*v25 >> 15) & 1;
    if ( ((*v25 >> 15) & 1) == 0 || (v27[5] & 0x100000000LL) != 0 )
    {
      if ( (_DWORD)v9 )
      {
        v26 = WdLogNewEntry5_WdWarning(v9);
        WdLogEvent5_WdWarning(v26);
      }
      return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v27, 0, a5);
    }
LABEL_3:
    v15 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v27, 0, a5);
}
