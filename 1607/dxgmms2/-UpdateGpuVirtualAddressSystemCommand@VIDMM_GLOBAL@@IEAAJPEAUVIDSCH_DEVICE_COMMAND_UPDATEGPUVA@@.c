/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008B8AC
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007120 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000F7E0 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FA58 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     VidSchGetPagingContext @ 0x1C0015124 (VidSchGetPagingContext.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C001D828 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0048340 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005D8CC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C0093090 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00948C4 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DD.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0094AA4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  VIDMM_GLOBAL *v4; // r14
  int v5; // edi
  __int64 v6; // r13
  __int64 v7; // rdx
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r15
  unsigned __int64 *v18; // rsi
  int v19; // eax
  __int64 **v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 **v28; // r14
  BOOL v29; // eax
  __int64 v30; // rcx
  bool v31; // zf
  __int64 v32; // rax
  struct _LIST_ENTRY *v33; // rcx
  __int64 v34; // rsi
  __int64 **v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rcx
  int v38; // eax
  int v39; // edi
  struct _MDL *v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  struct VIDMM_MAPPED_VA_RANGE *v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 *v52; // rcx
  __int64 *v53; // rax
  VIDMM_MAPPED_VA_RANGE *v54; // rcx
  struct VIDMM_ALLOC *v55; // r14
  struct _VIDMM_GLOBAL_ALLOC *v56; // r15
  int v57; // r12d
  __int64 v58; // rcx
  char v59; // al
  int v60; // eax
  BOOL v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  struct _LIST_ENTRY *v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // r15d
  __int64 **v67; // r14
  struct VIDMM_MAPPED_VA_RANGE *v68; // rsi
  __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned __int64 v83; // [rsp+40h] [rbp-49h]
  unsigned __int64 v84; // [rsp+48h] [rbp-41h]
  struct _LIST_ENTRY *v85; // [rsp+50h] [rbp-39h] BYREF
  struct _MDL *FullMDL; // [rsp+58h] [rbp-31h]
  __int64 PagingContext; // [rsp+60h] [rbp-29h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v88; // [rsp+68h] [rbp-21h] BYREF
  struct _LIST_ENTRY *v89; // [rsp+70h] [rbp-19h] BYREF
  __int64 v90; // [rsp+78h] [rbp-11h]
  _BYTE v91[96]; // [rsp+80h] [rbp-9h] BYREF
  char v93; // [rsp+F8h] [rbp+6Fh]
  unsigned __int64 v95; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = this;
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 8011);
  v5 = 0;
  v93 = 0;
  v6 = **((_QWORD **)a2 + 11);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v91, (struct _KTHREAD **)(v6 + 40));
  if ( !*((_QWORD *)a2 + 14) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 23163LL;
    WdLogEvent5_WdAssertion(v9);
    v5 = -1073741823;
    v93 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v12 + 24) = 23173LL;
      WdLogEvent5_WdAssertion(v12);
      v5 = -1073741823;
      v93 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v11, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v91);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v14 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 160), 0, 0) )
    v5 = -1073741823;
  v15 = *((unsigned int *)a2 + 9);
  v16 = -1LL;
  v17 = 0LL;
  v84 = -1LL;
  v83 = 0LL;
  LODWORD(v95) = v15;
  if ( (unsigned int)v15 >= *((_DWORD *)a2 + 5) )
    goto LABEL_27;
  while ( 1 )
  {
    if ( v5 < 0 )
      goto LABEL_24;
    v18 = (unsigned __int64 *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)(unsigned int)v15 << 6));
    v19 = *(_DWORD *)v18;
    if ( *(_DWORD *)v18 )
    {
      if ( v19 != 3 )
        break;
    }
    v55 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a2 + 8) + 8LL * *((unsigned int *)v18 + 6));
    PagingContext = (__int64)v55;
    v56 = **(struct _VIDMM_GLOBAL_ALLOC ***)v55;
    v88 = v56;
    if ( *((_QWORD *)this + 5115) )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        this,
        **(struct _EPROCESS ***)(v6 + 72),
        v55,
        (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v18);
    v57 = 0;
    v58 = *((_QWORD *)v56 + 17);
    v59 = *((_DWORD *)v55 + 7) & 3;
    FullMDL = 0LL;
    v85 = 0LL;
    if ( v59 == 2 )
    {
      v60 = *(_DWORD *)(v58 + 56);
      if ( (v60 & 0x1001) != 0 )
      {
        FullMDL = VidMmGetFullMDL(v56, 0LL);
        v85 = (struct _LIST_ENTRY *)v18[4];
      }
      else
      {
        if ( (v60 & 0x1000) == 0 )
          v57 = *(_DWORD *)(v58 + 16) + 1;
        v85 = (struct _LIST_ENTRY *)(v18[4] + *((_QWORD *)v56 + 18));
        FullMDL = 0LL;
      }
    }
    v61 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
    v62 = *((unsigned int *)a2 + 4);
    v31 = !v61;
    v63 = *((_QWORD *)a2 + 14);
    if ( v31 )
      v64 = *(struct _LIST_ENTRY **)(v63 + 16 * (v62 + 6));
    else
      v64 = *(struct _LIST_ENTRY **)(32 * (v62 + 3) + v63);
    v4 = this;
    v89 = v64;
    if ( (*((_BYTE *)this + 40873) & 2) != 0 )
      v65 = 1LL;
    else
      v65 = v18[2] / v18[5];
    v66 = *((_DWORD *)a2 + 10);
    v90 = v65;
    if ( v66 >= (unsigned int)v65 )
    {
      v16 = v84;
      v17 = v83;
      goto LABEL_38;
    }
    v67 = (__int64 **)((char *)a2 + 96);
    while ( 1 )
    {
      v68 = (struct VIDMM_MAPPED_VA_RANGE *)(*v67 - 1);
      if ( (*(_DWORD *)(PagingContext + 28) & 3) == 2 )
      {
        v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
               (CVirtualAddressAllocator *)v6,
               v68,
               *((_DWORD *)v88 + 19) & 0x3F,
               v57,
               (unsigned __int64)v85,
               FullMDL,
               0,
               a3);
        if ( v5 < 0 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v71);
          v76[3] = *((_QWORD *)v68 + 12);
          v77 = *((_QWORD *)v68 + 13);
          v76[5] = 23279LL;
          goto LABEL_124;
        }
        v72 = v84;
        v73 = v83;
        if ( v84 >= *((_QWORD *)v68 + 12) )
          v72 = *((_QWORD *)v68 + 12);
        v84 = v72;
        if ( v83 <= *((_QWORD *)v68 + 13) )
          v73 = *((_QWORD *)v68 + 13);
        v83 = v73;
      }
      else
      {
        v5 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v6, v68, a3, 0);
        if ( v5 < 0 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v69);
          v76[3] = *((_QWORD *)v68 + 12);
          v77 = *((_QWORD *)v68 + 13);
LABEL_124:
          v76[4] = v77;
          WdLogEvent5_WdWarning(v76);
          goto LABEL_125;
        }
        v70 = v84;
        if ( v84 >= *((_QWORD *)v68 + 12) )
          v70 = *((_QWORD *)v68 + 12);
        v84 = v70;
        if ( v83 <= *((_QWORD *)v68 + 13) )
          v83 = *((_QWORD *)v68 + 13);
      }
      v74 = **v67;
      if ( (__int64 **)(*v67)[1] != v67 || *(__int64 **)(v74 + 8) != *v67 )
        __fastfail(3u);
      *v67 = (__int64 *)v74;
      *(_QWORD *)(v74 + 8) = v67;
      *((_QWORD *)v68 + 1) = 0LL;
      *((_QWORD *)v68 + 2) = 0LL;
      v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
             (CVirtualAddressAllocator *)v6,
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             &v89,
             v68);
      if ( v5 < 0 )
        break;
      if ( ++v66 >= (unsigned int)v90 )
      {
        v16 = v84;
        v17 = v83;
        goto LABEL_37;
      }
    }
    v78 = WdLogNewEntry5_WdWarning(v75);
    WdLogEvent5_WdWarning(v78);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v68, (struct CVirtualAddressAllocator *)v6);
LABEL_125:
    v16 = v84;
    v17 = v83;
LABEL_37:
    v4 = this;
LABEL_38:
    LODWORD(v15) = v95;
LABEL_39:
    if ( v5 >= 0 )
    {
      LODWORD(v15) = v15 + 1;
      *((_DWORD *)a2 + 10) = 0;
      LODWORD(v95) = v15;
      if ( (unsigned int)v15 < *((_DWORD *)a2 + 5) )
        continue;
    }
    goto LABEL_24;
  }
  if ( v19 != 1 )
  {
    if ( v19 != 2 )
      goto LABEL_39;
    if ( *((_QWORD *)v4 + 5115) )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        v4,
        **(struct _EPROCESS ***)(v6 + 72),
        0LL,
        (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3)
                                                           + ((unsigned __int64)(unsigned int)v15 << 6)));
    v28 = (__int64 **)((char *)a2 + 48);
    if ( *v28 == (__int64 *)v28 )
      v5 = CVirtualAddressAllocator::BuildVaRangeList(
             (CVirtualAddressAllocator *)v6,
             *((struct VIDMM_VAD **)a2 + 15),
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             (struct _LIST_ENTRY *)a2 + 3,
             v18[1],
             v18[1] + v18[2],
             v18[3]);
    if ( v5 < 0 )
    {
LABEL_85:
      if ( v5 != -1073741267 )
      {
        while ( *v28 != (__int64 *)v28 )
        {
          v52 = *v28;
          v53 = (__int64 *)**v28;
          if ( (__int64 **)(*v28)[1] != v28 || (__int64 *)v53[1] != v52 )
            __fastfail(3u);
          *v28 = v53;
          v54 = (VIDMM_MAPPED_VA_RANGE *)(v52 - 1);
          v53[1] = (__int64)v28;
          *((_QWORD *)v54 + 1) = 0LL;
          *((_QWORD *)v54 + 2) = 0LL;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v54, (struct CVirtualAddressAllocator *)v6);
        }
      }
      goto LABEL_37;
    }
    v29 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
    v30 = *((unsigned int *)a2 + 4);
    v31 = !v29;
    v32 = *((_QWORD *)a2 + 14);
    if ( v31 )
      v33 = *(struct _LIST_ENTRY **)(v32 + 16 * (v30 + 6));
    else
      v33 = *(struct _LIST_ENTRY **)(32 * (v30 + 3) + v32);
    v85 = v33;
    while ( 1 )
    {
      if ( *v28 == (__int64 *)v28 || v5 < 0 )
        goto LABEL_85;
      v34 = (__int64)(*v28 - 1);
      v35 = *(__int64 ***)(v34 + 56);
      if ( v35 )
      {
        v36 = **v35;
        if ( (*((_DWORD *)v35 + 7) & 3) == 2 )
        {
          v37 = *(_QWORD *)(v36 + 136);
          v38 = *(_DWORD *)(v37 + 56);
          if ( (v38 & 0x1001) != 0 )
          {
            v39 = 0;
            v40 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v36, 0LL);
            v41 = *(_QWORD *)(v34 + 72);
          }
          else
          {
            if ( (v38 & 0x1000) != 0 )
              v39 = 0;
            else
              v39 = *(_DWORD *)(v37 + 16) + 1;
            v40 = 0LL;
            v41 = *(_QWORD *)(v34 + 72) + *(_QWORD *)(v36 + 144);
          }
          v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (CVirtualAddressAllocator *)v6,
                 (struct VIDMM_MAPPED_VA_RANGE *)v34,
                 *(_DWORD *)(v36 + 76) & 0x3F,
                 v39,
                 v41,
                 v40,
                 0,
                 a3);
          if ( v5 < 0 )
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v42);
            v43[3] = *(_QWORD *)(v34 + 96);
            v43[4] = *(_QWORD *)(v34 + 104);
            v43[5] = 23428LL;
            WdLogEvent5_WdWarning(v43);
          }
          if ( v16 >= *(_QWORD *)(v34 + 96) )
            v16 = *(_QWORD *)(v34 + 96);
          v17 = v83;
          v84 = v16;
          if ( v83 <= *(_QWORD *)(v34 + 104) )
          {
            v17 = *(_QWORD *)(v34 + 104);
            v83 = v17;
          }
        }
        else
        {
          v17 = v83;
        }
        goto LABEL_80;
      }
      v44 = (struct VIDMM_MAPPED_VA_RANGE *)(*v28 - 1);
      if ( (*(_BYTE *)(v34 + 88) & 8) != 0 )
      {
        v5 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v6, v44, a3, 0);
        if ( v5 < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v45);
          v46[3] = *(_QWORD *)(v34 + 96);
          v47 = *(_QWORD *)(v34 + 104);
          v46[5] = 23441LL;
LABEL_73:
          v46[4] = v47;
          WdLogEvent5_WdWarning(v46);
        }
      }
      else
      {
        v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
               (CVirtualAddressAllocator *)v6,
               v44,
               0,
               -2,
               0LL,
               0LL,
               0,
               a3);
        if ( v5 < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v48);
          v46[3] = *(_QWORD *)(v34 + 96);
          v47 = *(_QWORD *)(v34 + 104);
          v46[5] = 23454LL;
          goto LABEL_73;
        }
      }
      if ( v16 >= *(_QWORD *)(v34 + 96) )
        v16 = *(_QWORD *)(v34 + 96);
      v84 = v16;
      if ( v17 <= *(_QWORD *)(v34 + 104) )
        v17 = *(_QWORD *)(v34 + 104);
      v83 = v17;
LABEL_80:
      if ( v5 >= 0 )
      {
        v49 = **v28;
        if ( (__int64 **)(*v28)[1] != v28 || *(__int64 **)(v49 + 8) != *v28 )
          __fastfail(3u);
        *v28 = (__int64 *)v49;
        *(_QWORD *)(v49 + 8) = v28;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = 0LL;
        v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               (CVirtualAddressAllocator *)v6,
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               &v85,
               (struct VIDMM_MAPPED_VA_RANGE *)v34);
        if ( v5 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v50);
          v51[3] = *(_QWORD *)(v34 + 96);
          v51[4] = *(_QWORD *)(v34 + 104);
          v51[5] = 23468LL;
          WdLogEvent5_WdWarning(v51);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
            (VIDMM_MAPPED_VA_RANGE *)v34,
            (struct CVirtualAddressAllocator *)v6);
        }
      }
    }
  }
  if ( *((_QWORD *)v4 + 5115) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      v4,
      **(struct _EPROCESS ***)(v6 + 72),
      0LL,
      (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3)
                                                         + ((unsigned __int64)(unsigned int)v15 << 6)));
  v20 = (__int64 **)((char *)a2 + 96);
  v21 = *((_QWORD *)a2 + 12) - 8LL;
  if ( (*(_BYTE *)(v21 + 88) & 8) != 0 )
  {
    v5 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
           (CVirtualAddressAllocator *)v6,
           (struct VIDMM_MAPPED_VA_RANGE *)v21,
           a3,
           0);
    if ( v5 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v22);
      v23[3] = *(_QWORD *)(v21 + 96);
      v23[4] = *(_QWORD *)(v21 + 104);
      v23[5] = 23322LL;
      goto LABEL_23;
    }
  }
  else
  {
    v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
           (CVirtualAddressAllocator *)v6,
           (struct VIDMM_MAPPED_VA_RANGE *)v21,
           0,
           -2,
           0LL,
           0LL,
           0,
           a3);
    if ( v5 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v24);
      v23[3] = *(_QWORD *)(v21 + 96);
      v23[4] = *(_QWORD *)(v21 + 104);
      v23[5] = 23336LL;
      goto LABEL_23;
    }
  }
  v25 = *v20;
  if ( v16 >= *(_QWORD *)(v21 + 96) )
    v16 = *(_QWORD *)(v21 + 96);
  v84 = v16;
  if ( v17 <= *(_QWORD *)(v21 + 104) )
    v17 = *(_QWORD *)(v21 + 104);
  v26 = *v25;
  v83 = v17;
  if ( (__int64 **)v25[1] != v20 || *(__int64 **)(v26 + 8) != v25 )
    __fastfail(3u);
  *v20 = (__int64 *)v26;
  *(_QWORD *)(v26 + 8) = v20;
  *(_QWORD *)(v21 + 8) = 0LL;
  *(_QWORD *)(v21 + 16) = 0LL;
  v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
         (CVirtualAddressAllocator *)v6,
         *((struct VIDMM_VAD **)a2 + 14),
         *((_DWORD *)a2 + 4),
         0LL,
         (struct VIDMM_MAPPED_VA_RANGE *)v21);
  if ( v5 >= 0 )
    goto LABEL_37;
  v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v27);
LABEL_23:
  WdLogEvent5_WdWarning(v23);
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
    (VIDMM_MAPPED_VA_RANGE *)v21,
    (struct CVirtualAddressAllocator *)v6);
LABEL_24:
  if ( v16 < v17 )
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v6, *((_DWORD *)a2 + 4), v16, v17);
  v15 = (unsigned int)v95;
  v4 = this;
LABEL_27:
  if ( v5 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v15;
  }
  else
  {
    if ( *((_QWORD *)a2 + 9) )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(v4, *((_DWORD *)a2 + 4), 0LL, 0LL, 0LL, 0, 0);
      PagingContext = VidSchGetPagingContext(*(_QWORD *)(*((_QWORD *)v4 + 2) + 384LL), *((_DWORD *)a2 + 4));
      v88 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 9);
      v95 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(1LL, &PagingContext, 1u, (char *)&v88, 0x80000000, &v95) < 0 )
      {
        v81 = WdLogNewEntry5_WdAssertion(v80, v79);
        *(_QWORD *)(v81 + 24) = 23553LL;
        WdLogEvent5_WdAssertion(v81);
      }
    }
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
  }
  if ( v93 )
    v5 = 0;
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v13, 8011);
  return (unsigned int)v5;
}
