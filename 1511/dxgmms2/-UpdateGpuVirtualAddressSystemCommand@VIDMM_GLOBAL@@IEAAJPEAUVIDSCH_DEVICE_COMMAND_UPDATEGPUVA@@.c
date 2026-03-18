/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C784
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0011448 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011520 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0015194 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchGetPagingContext @ 0x1C00174CC (VidSchGetPagingContext.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C001C898 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0040240 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0040A80 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F678 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C008136C (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00818CC (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DD.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4)
{
  VIDMM_GLOBAL *v5; // r14
  int v6; // edi
  CVirtualAddressAllocator *v7; // r15
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  VIDMM_GLOBAL *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r13
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v22; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  __int64 **v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 **v32; // r14
  __int64 v33; // rsi
  __int64 **v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rcx
  int v37; // eax
  int v38; // edi
  struct _MDL *v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
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
  __int64 v53; // rax
  VIDMM_MAPPED_VA_RANGE *v54; // rcx
  struct _LIST_ENTRY ***v55; // r8
  struct _LIST_ENTRY *v56; // r10
  struct _MDL *v57; // r9
  struct _LIST_ENTRY *Flink; // rcx
  char v59; // al
  unsigned __int64 AllocationOffsetInBytes; // r15
  int v61; // r14d
  int Blink; // eax
  struct _MDL *FullMDL; // rax
  D3DGPU_SIZE_T v64; // rax
  unsigned int v65; // ecx
  __int64 **v66; // r13
  struct VIDMM_MAPPED_VA_RANGE *v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  unsigned __int64 v82; // [rsp+50h] [rbp-49h]
  CVirtualAddressAllocator *v83; // [rsp+58h] [rbp-41h]
  __int64 PagingContext; // [rsp+60h] [rbp-39h] BYREF
  struct _LIST_ENTRY *v85; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v86; // [rsp+70h] [rbp-29h]
  struct _LIST_ENTRY ***v87; // [rsp+78h] [rbp-21h]
  D3DGPU_SIZE_T v88; // [rsp+80h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v89; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v90[96]; // [rsp+90h] [rbp-9h] BYREF
  char v92; // [rsp+108h] [rbp+6Fh]
  unsigned __int64 v94; // [rsp+118h] [rbp+7Fh] BYREF

  v5 = this;
  v92 = 0;
  v6 = 0;
  v7 = (CVirtualAddressAllocator *)**((_QWORD **)a2 + 11);
  v83 = v7;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v90,
    (struct _KTHREAD **)v7 + 5,
    (__int64)a3,
    a4);
  if ( !*((_QWORD *)a2 + 14) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 22066LL;
    WdLogEvent5_WdAssertion(v12);
    v6 = -1073741823;
    v92 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v17 + 24) = 22076LL;
      WdLogEvent5_WdAssertion(v17);
      v6 = -1073741823;
      v92 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v14, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v90);
  v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v18 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 168), 0, 0) )
    v6 = -1073741823;
  v19 = *((_DWORD *)a2 + 9);
  v20 = -1LL;
  v21 = 0LL;
  v82 = 0LL;
  LODWORD(v94) = v19;
  if ( v19 >= *((_DWORD *)a2 + 5) )
    goto LABEL_24;
  while ( 1 )
  {
    if ( v6 < 0 )
      goto LABEL_21;
    v22 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v19 << 6));
    OperationType = v22->OperationType;
    if ( v22->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      v55 = *(struct _LIST_ENTRY ****)(*((_QWORD *)a2 + 8) + 8LL * v22->Map.hAllocation);
      v87 = v55;
      v56 = **v55;
      v85 = v56;
      if ( *((_QWORD *)v5 + 5082) )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v5,
          **((struct _EPROCESS ***)v7 + 9),
          (struct VIDMM_ALLOC *)v55,
          v22);
        v55 = v87;
        v56 = v85;
      }
      v57 = 0LL;
      Flink = v56[8].Flink;
      v59 = *((_DWORD *)v55 + 7) & 3;
      PagingContext = 0LL;
      AllocationOffsetInBytes = 0LL;
      v61 = 0;
      if ( v59 == 2 )
      {
        Blink = (int)Flink[3].Blink;
        if ( (Blink & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v56, 0LL);
          v55 = v87;
          v57 = FullMDL;
          v56 = v85;
          AllocationOffsetInBytes = v22->Map.AllocationOffsetInBytes;
        }
        else
        {
          if ( (Blink & 0x1000) == 0 )
            v61 = LODWORD(Flink[1].Flink) + 1;
          AllocationOffsetInBytes = (unsigned __int64)v56[8].Blink + v22->Map.AllocationOffsetInBytes;
        }
        PagingContext = (__int64)v57;
      }
      v64 = v22->Map.SizeInBytes / v22->Map.AllocationSizeInBytes;
      v89 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 16 * (*((unsigned int *)a2 + 4) + 6LL));
      v65 = *((_DWORD *)a2 + 10);
      v88 = v64;
      v86 = v65;
      if ( v65 < (unsigned int)v64 )
      {
        v66 = (__int64 **)((char *)a2 + 96);
        while ( 1 )
        {
          v67 = (struct VIDMM_MAPPED_VA_RANGE *)(*v66 - 1);
          if ( (*((_DWORD *)v55 + 7) & 3) == 2 )
          {
            v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   v83,
                   v67,
                   HIDWORD(v56[4].Blink) & 0x3F,
                   v61,
                   AllocationOffsetInBytes,
                   v57,
                   0,
                   a3,
                   1u);
            if ( v6 < 0 )
            {
              v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v69);
              v73[3] = *((_QWORD *)v67 + 12);
              v74 = *((_QWORD *)v67 + 13);
              v73[5] = 22175LL;
              goto LABEL_109;
            }
            v70 = v82;
            if ( v20 >= *((_QWORD *)v67 + 12) )
              v20 = *((_QWORD *)v67 + 12);
            if ( v82 <= *((_QWORD *)v67 + 13) )
              v70 = *((_QWORD *)v67 + 13);
            v82 = v70;
          }
          else
          {
            v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v83, v67, a3, 0);
            if ( v6 < 0 )
            {
              v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v68);
              v73[3] = *((_QWORD *)v67 + 12);
              v74 = *((_QWORD *)v67 + 13);
LABEL_109:
              v73[4] = v74;
              WdLogEvent5_WdWarning(v73);
LABEL_110:
              v21 = v82;
              break;
            }
            if ( v20 >= *((_QWORD *)v67 + 12) )
              v20 = *((_QWORD *)v67 + 12);
            if ( v82 <= *((_QWORD *)v67 + 13) )
              v82 = *((_QWORD *)v67 + 13);
          }
          v71 = **v66;
          if ( (__int64 **)(*v66)[1] != v66 || *(__int64 **)(v71 + 8) != *v66 )
            __fastfail(3u);
          *v66 = (__int64 *)v71;
          *(_QWORD *)(v71 + 8) = v66;
          *((_QWORD *)v67 + 1) = 0LL;
          *((_QWORD *)v67 + 2) = 0LL;
          v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 (struct _KTHREAD **)v83,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((unsigned int *)a2 + 4),
                 &v89,
                 v67);
          if ( v6 < 0 )
          {
            v75 = WdLogNewEntry5_WdWarning(v72);
            WdLogEvent5_WdWarning(v75);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v67);
            goto LABEL_110;
          }
          if ( ++v86 >= (unsigned int)v88 )
          {
            v21 = v82;
            break;
          }
          v55 = v87;
          v57 = (struct _MDL *)PagingContext;
          v56 = v85;
        }
      }
      v7 = v83;
      goto LABEL_112;
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      break;
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
      goto LABEL_113;
    if ( *((_QWORD *)v5 + 5082) )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        v5,
        **((struct _EPROCESS ***)v7 + 9),
        0LL,
        (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v19 << 6)));
    v32 = (__int64 **)((char *)a2 + 48);
    if ( *v32 == (__int64 *)v32 )
      v6 = CVirtualAddressAllocator::BuildVaRangeList(
             v7,
             *((struct VIDMM_VAD **)a2 + 15),
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             (struct _LIST_ENTRY *)a2 + 3,
             v22->Map.BaseAddress,
             v22->Map.BaseAddress + v22->Map.SizeInBytes,
             v22->Unmap.Protection.Value);
    if ( v6 >= 0 )
    {
      v85 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 16 * (*((unsigned int *)a2 + 4) + 6LL));
      while ( *v32 != (__int64 *)v32 && v6 >= 0 )
      {
        v33 = (__int64)(*v32 - 1);
        v34 = *(__int64 ***)(v33 + 56);
        if ( v34 )
        {
          v35 = **v34;
          if ( (*((_DWORD *)v34 + 7) & 3) == 2 )
          {
            v36 = *(_QWORD *)(v35 + 128);
            v37 = *(_DWORD *)(v36 + 56);
            if ( (v37 & 0x1001) != 0 )
            {
              v38 = 0;
              v39 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v35, 0LL);
              v40 = *(_QWORD *)(v33 + 72);
            }
            else
            {
              if ( (v37 & 0x1000) != 0 )
                v38 = 0;
              else
                v38 = *(_DWORD *)(v36 + 16) + 1;
              v39 = 0LL;
              v40 = *(_QWORD *)(v33 + 72) + *(_QWORD *)(v35 + 136);
            }
            v41 = *(_DWORD *)(v35 + 76) & 0x3F;
            v7 = v83;
            v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   v83,
                   (struct VIDMM_MAPPED_VA_RANGE *)v33,
                   v41,
                   v38,
                   v40,
                   v39,
                   0,
                   a3,
                   1u);
            if ( v6 < 0 )
            {
              v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v42);
              v43[3] = *(_QWORD *)(v33 + 96);
              v43[4] = *(_QWORD *)(v33 + 104);
              v43[5] = 22318LL;
              WdLogEvent5_WdWarning(v43);
            }
            if ( v20 >= *(_QWORD *)(v33 + 96) )
              v20 = *(_QWORD *)(v33 + 96);
            if ( v21 <= *(_QWORD *)(v33 + 104) )
            {
              v21 = *(_QWORD *)(v33 + 104);
              v82 = v21;
            }
          }
          else
          {
            v7 = v83;
          }
          goto LABEL_70;
        }
        v44 = (struct VIDMM_MAPPED_VA_RANGE *)(*v32 - 1);
        if ( (*(_BYTE *)(v33 + 88) & 8) != 0 )
        {
          v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v7, v44, a3, 0);
          if ( v6 < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v45);
            v46[3] = *(_QWORD *)(v33 + 96);
            v47 = *(_QWORD *)(v33 + 104);
            v46[5] = 22331LL;
LABEL_63:
            v46[4] = v47;
            WdLogEvent5_WdWarning(v46);
          }
        }
        else
        {
          v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(v7, v44, 0LL, -2, 0LL, 0LL, 0, a3, 1u);
          if ( v6 < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v48);
            v46[3] = *(_QWORD *)(v33 + 96);
            v47 = *(_QWORD *)(v33 + 104);
            v46[5] = 22345LL;
            goto LABEL_63;
          }
        }
        if ( v20 >= *(_QWORD *)(v33 + 96) )
          v20 = *(_QWORD *)(v33 + 96);
        if ( v21 <= *(_QWORD *)(v33 + 104) )
          v21 = *(_QWORD *)(v33 + 104);
        v82 = v21;
LABEL_70:
        if ( v6 >= 0 )
        {
          v49 = **v32;
          if ( (__int64 **)(*v32)[1] != v32 || *(__int64 **)(v49 + 8) != *v32 )
            __fastfail(3u);
          *v32 = (__int64 *)v49;
          *(_QWORD *)(v49 + 8) = v32;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = 0LL;
          v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 (struct _KTHREAD **)v7,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((unsigned int *)a2 + 4),
                 &v85,
                 (struct VIDMM_MAPPED_VA_RANGE *)v33);
          if ( v6 < 0 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v50);
            v51[3] = *(_QWORD *)(v33 + 96);
            v51[4] = *(_QWORD *)(v33 + 104);
            v51[5] = 22359LL;
            WdLogEvent5_WdWarning(v51);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v33);
          }
        }
      }
    }
    if ( v6 != -1073741267 )
    {
      while ( *v32 != (__int64 *)v32 )
      {
        v52 = *v32;
        v53 = **v32;
        if ( (__int64 **)(*v32)[1] != v32 || *(__int64 **)(v53 + 8) != v52 )
          __fastfail(3u);
        *v32 = (__int64 *)v53;
        v54 = (VIDMM_MAPPED_VA_RANGE *)(v52 - 1);
        *(_QWORD *)(v53 + 8) = v32;
        *((_QWORD *)v54 + 1) = 0LL;
        *((_QWORD *)v54 + 2) = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v54);
      }
    }
LABEL_112:
    v5 = this;
    v19 = v94;
LABEL_113:
    if ( v6 >= 0 )
    {
      ++v19;
      *((_DWORD *)a2 + 10) = 0;
      LODWORD(v94) = v19;
      if ( v19 < *((_DWORD *)a2 + 5) )
        continue;
    }
    goto LABEL_21;
  }
  if ( *((_QWORD *)v5 + 5082) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      v5,
      **((struct _EPROCESS ***)v7 + 9),
      0LL,
      (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v19 << 6)));
  v24 = (__int64 **)((char *)a2 + 96);
  v25 = *((_QWORD *)a2 + 12) - 8LL;
  if ( (*(_BYTE *)(v25 + 88) & 8) != 0 )
  {
    v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v7, (struct VIDMM_MAPPED_VA_RANGE *)v25, a3, 0);
    if ( v6 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v26);
      v27[3] = *(_QWORD *)(v25 + 96);
      v27[4] = *(_QWORD *)(v25 + 104);
      v27[5] = 22218LL;
      goto LABEL_20;
    }
LABEL_27:
    v29 = *v24;
    if ( v20 >= *(_QWORD *)(v25 + 96) )
      v20 = *(_QWORD *)(v25 + 96);
    if ( v21 <= *(_QWORD *)(v25 + 104) )
      v21 = *(_QWORD *)(v25 + 104);
    v30 = *v29;
    v82 = v21;
    if ( (__int64 **)v29[1] != v24 || *(__int64 **)(v30 + 8) != v29 )
      __fastfail(3u);
    *v24 = (__int64 *)v30;
    *(_QWORD *)(v30 + 8) = v24;
    *(_QWORD *)(v25 + 8) = 0LL;
    *(_QWORD *)(v25 + 16) = 0LL;
    v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
           (struct _KTHREAD **)v7,
           *((struct VIDMM_VAD **)a2 + 14),
           *((unsigned int *)a2 + 4),
           0LL,
           (struct VIDMM_MAPPED_VA_RANGE *)v25);
    if ( v6 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v31);
      goto LABEL_20;
    }
    goto LABEL_112;
  }
  v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
         v7,
         (struct VIDMM_MAPPED_VA_RANGE *)v25,
         0LL,
         -2,
         0LL,
         0LL,
         0,
         a3,
         1u);
  if ( v6 >= 0 )
    goto LABEL_27;
  v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v28);
  v27[3] = *(_QWORD *)(v25 + 96);
  v27[4] = *(_QWORD *)(v25 + 104);
  v27[5] = 22233LL;
LABEL_20:
  WdLogEvent5_WdWarning(v27);
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v25);
LABEL_21:
  if ( v20 < v21 )
    CVirtualAddressAllocator::FlushGpuVaTlb(v7, *((_DWORD *)a2 + 4), v20, v21);
  v5 = this;
  v19 = v94;
LABEL_24:
  if ( v6 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v19;
  }
  else
  {
    if ( *((_QWORD *)a2 + 9) )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(v5, *((_DWORD *)a2 + 4), 0LL, 0LL, 0LL, 0);
      PagingContext = VidSchGetPagingContext(*(_QWORD *)(*((_QWORD *)v5 + 2) + 408LL), *((_DWORD *)a2 + 4));
      v88 = *((_QWORD *)a2 + 9);
      v94 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(1LL, &PagingContext, 1LL, (char *)&v88, 0x80000000, &v94) < 0 )
      {
        v80 = WdLogNewEntry5_WdAssertion(v77, v76, v78, v79);
        *(_QWORD *)(v80 + 24) = 22444LL;
        WdLogEvent5_WdAssertion(v80);
      }
    }
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
  }
  if ( v92 )
    return 0;
  return (unsigned int)v6;
}
