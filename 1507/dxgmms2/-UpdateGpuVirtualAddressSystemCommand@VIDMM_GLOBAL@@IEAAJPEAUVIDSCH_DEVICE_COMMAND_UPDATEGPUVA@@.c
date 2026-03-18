/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00544F8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005320 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchGetPagingContext @ 0x1C0008E08 (VidSchGetPagingContext.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C000EA58 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000ED20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000F264 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005C61C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C005CD40 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C006278C (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DD.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062E54 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0063528 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  VIDMM_GLOBAL *v4; // r14
  int v5; // edi
  struct _EPROCESS ***v6; // r15
  __int64 v7; // rdx
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r13
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v21; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  __int64 **v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 **v37; // r14
  __int64 v38; // rsi
  __int64 **v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // edi
  struct _MDL *v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  struct VIDMM_MAPPED_VA_RANGE *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // rax
  __int64 *v64; // rcx
  __int64 v65; // rax
  VIDMM_MAPPED_VA_RANGE *v66; // rcx
  struct _LIST_ENTRY ***v67; // r8
  struct _LIST_ENTRY *v68; // r10
  struct _MDL *v69; // r9
  struct _LIST_ENTRY *Flink; // rcx
  char v71; // al
  unsigned __int64 AllocationOffsetInBytes; // r13
  unsigned int v73; // r14d
  int Blink; // eax
  struct _MDL *FullMDL; // rax
  D3DGPU_SIZE_T v76; // rax
  unsigned int v77; // ecx
  struct VIDMM_MAPPED_VA_RANGE *v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned __int64 v85; // r8
  _QWORD *v86; // rdx
  __int64 *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  _QWORD *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  unsigned __int64 v101; // [rsp+50h] [rbp-39h]
  __int64 PagingContext; // [rsp+58h] [rbp-31h] BYREF
  struct _LIST_ENTRY *v103; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v104; // [rsp+68h] [rbp-21h]
  struct _LIST_ENTRY ***v105; // [rsp+70h] [rbp-19h]
  D3DGPU_SIZE_T v106; // [rsp+78h] [rbp-11h] BYREF
  struct _LIST_ENTRY *v107; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v108[88]; // [rsp+88h] [rbp-1h] BYREF
  char v110; // [rsp+F8h] [rbp+6Fh]
  unsigned __int64 v112; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = this;
  v110 = 0;
  v5 = 0;
  v6 = (struct _EPROCESS ***)**((_QWORD **)a2 + 11);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v108,
    (struct DXGPUSHLOCK *const)(v6 + 5));
  if ( !*((_QWORD *)a2 + 14) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 21518LL;
    WdLogEvent5_WdAssertion(v11);
    v5 = -1073741823;
    v110 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v16 + 24) = 21528LL;
      WdLogEvent5_WdAssertion(v16);
      v5 = -1073741823;
      v110 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v13, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v108);
  v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v17 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 168), 0, 0) )
    v5 = -1073741823;
  v18 = *((_DWORD *)a2 + 9);
  v19 = -1LL;
  v20 = 0LL;
  v101 = 0LL;
  LODWORD(v112) = v18;
  if ( v18 >= *((_DWORD *)a2 + 5) )
    goto LABEL_24;
  while ( 1 )
  {
    if ( v5 < 0 )
      goto LABEL_21;
    v21 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v18 << 6));
    OperationType = v21->OperationType;
    if ( v21->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      v67 = *(struct _LIST_ENTRY ****)(*((_QWORD *)a2 + 8) + 8LL * v21->Map.hAllocation);
      v105 = v67;
      v68 = **v67;
      v103 = v68;
      if ( *((_QWORD *)v4 + 5075) )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v4, *v6[9], (struct VIDMM_ALLOC *)v67, v21);
        v67 = v105;
        v68 = v103;
      }
      v69 = 0LL;
      Flink = v68[8].Flink;
      v71 = *((_DWORD *)v67 + 7) & 3;
      PagingContext = 0LL;
      AllocationOffsetInBytes = 0LL;
      v73 = 0;
      if ( v71 == 2 )
      {
        Blink = (int)Flink[3].Blink;
        if ( (Blink & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v68, 0LL);
          v67 = v105;
          v69 = FullMDL;
          v68 = v103;
          AllocationOffsetInBytes = v21->Map.AllocationOffsetInBytes;
        }
        else
        {
          if ( (Blink & 0x1000) == 0 )
            v73 = LODWORD(Flink[1].Flink) + 1;
          AllocationOffsetInBytes = (unsigned __int64)v68[8].Blink + v21->Map.AllocationOffsetInBytes;
        }
        PagingContext = (__int64)v69;
      }
      v76 = v21->Map.SizeInBytes / v21->Map.AllocationSizeInBytes;
      v107 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 16 * (*((unsigned int *)a2 + 4) + 6LL));
      v77 = *((_DWORD *)a2 + 10);
      v106 = v76;
      v104 = v77;
      if ( v77 < (unsigned int)v76 )
      {
        while ( 1 )
        {
          v78 = (struct VIDMM_MAPPED_VA_RANGE *)(*((_QWORD *)a2 + 12) - 8LL);
          if ( (*((_DWORD *)v67 + 7) & 3) == 2 )
          {
            v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)v6,
                   v78,
                   HIDWORD(v68[4].Blink) & 0x3F,
                   v73,
                   AllocationOffsetInBytes,
                   v69,
                   0,
                   a3,
                   1u,
                   1u);
            if ( v5 < 0 )
            {
              v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, v82, v84);
              v92[3] = *((_QWORD *)v78 + 12);
              v93 = *((_QWORD *)v78 + 13);
              v92[5] = 21627LL;
              goto LABEL_108;
            }
            v85 = v101;
            if ( v19 >= *((_QWORD *)v78 + 12) )
              v19 = *((_QWORD *)v78 + 12);
            if ( v101 <= *((_QWORD *)v78 + 13) )
              v85 = *((_QWORD *)v78 + 13);
            v101 = v85;
          }
          else
          {
            v5 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v6, v78, a3, 0);
            if ( v5 < 0 )
            {
              v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v80, v79, v81);
              v92[3] = *((_QWORD *)v78 + 12);
              v93 = *((_QWORD *)v78 + 13);
LABEL_108:
              v92[4] = v93;
              WdLogEvent5_WdWarning(v92);
              break;
            }
            if ( v19 >= *((_QWORD *)v78 + 12) )
              v19 = *((_QWORD *)v78 + 12);
            if ( v101 <= *((_QWORD *)v78 + 13) )
              v101 = *((_QWORD *)v78 + 13);
          }
          v86 = (_QWORD *)((char *)a2 + 96);
          v87 = (__int64 *)*((_QWORD *)a2 + 12);
          v88 = *v87;
          if ( (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *)v87[1] != (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *)((char *)a2 + 96)
            || *(__int64 **)(v88 + 8) != v87 )
          {
            __fastfail(3u);
          }
          *v86 = v88;
          *(_QWORD *)(v88 + 8) = v86;
          *((_QWORD *)v78 + 1) = 0LL;
          *((_QWORD *)v78 + 2) = 0LL;
          v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 (CVirtualAddressAllocator *)v6,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 &v107,
                 v78);
          if ( v5 < 0 )
          {
            v94 = WdLogNewEntry5_WdWarning(v90, v89, v91);
            WdLogEvent5_WdWarning(v94);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v78, (struct CVirtualAddressAllocator *)v6);
            break;
          }
          if ( ++v104 >= (unsigned int)v106 )
            break;
          v67 = v105;
          v69 = (struct _MDL *)PagingContext;
          v68 = v103;
        }
      }
      v20 = v101;
      goto LABEL_110;
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      break;
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
      goto LABEL_111;
    if ( *((_QWORD *)v4 + 5075) )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        v4,
        *v6[9],
        0LL,
        (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v18 << 6)));
    v37 = (__int64 **)((char *)a2 + 48);
    if ( *v37 == (__int64 *)v37 )
      v5 = CVirtualAddressAllocator::BuildVaRangeList(
             (CVirtualAddressAllocator *)v6,
             *((struct VIDMM_VAD **)a2 + 15),
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             (struct _LIST_ENTRY *)a2 + 3,
             v21->Map.BaseAddress,
             v21->Map.BaseAddress + v21->Map.SizeInBytes,
             v21->Unmap.Protection.Value);
    if ( v5 >= 0 )
    {
      v103 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 16 * (*((unsigned int *)a2 + 4) + 6LL));
      while ( *v37 != (__int64 *)v37 && v5 >= 0 )
      {
        v38 = (__int64)(*v37 - 1);
        v39 = *(__int64 ***)(v38 + 56);
        if ( v39 )
        {
          v40 = **v39;
          if ( (*((_DWORD *)v39 + 7) & 3) == 2 )
          {
            v41 = *(_QWORD *)(v40 + 128);
            v42 = *(_DWORD *)(v41 + 56);
            if ( (v42 & 0x1001) != 0 )
            {
              v43 = 0;
              v44 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v40, 0LL);
              v45 = *(_QWORD *)(v38 + 72);
            }
            else
            {
              if ( (v42 & 0x1000) != 0 )
                v43 = 0;
              else
                v43 = *(_DWORD *)(v41 + 16) + 1;
              v44 = 0LL;
              v45 = *(_QWORD *)(v38 + 72) + *(_QWORD *)(v40 + 136);
            }
            v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)v6,
                   (struct VIDMM_MAPPED_VA_RANGE *)v38,
                   *(_DWORD *)(v40 + 76) & 0x3F,
                   v43,
                   v45,
                   v44,
                   0,
                   a3,
                   1u,
                   1u);
            if ( v5 < 0 )
            {
              v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48);
              v49[3] = *(_QWORD *)(v38 + 96);
              v49[4] = *(_QWORD *)(v38 + 104);
              v49[5] = 21770LL;
              WdLogEvent5_WdWarning(v49);
            }
            v20 = v101;
            if ( v19 >= *(_QWORD *)(v38 + 96) )
              v19 = *(_QWORD *)(v38 + 96);
            if ( v101 <= *(_QWORD *)(v38 + 104) )
            {
              v20 = *(_QWORD *)(v38 + 104);
              v101 = v20;
            }
          }
          else
          {
            v20 = v101;
          }
          goto LABEL_70;
        }
        v50 = (struct VIDMM_MAPPED_VA_RANGE *)(*v37 - 1);
        if ( (*(_BYTE *)(v38 + 88) & 8) != 0 )
        {
          v5 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v6, v50, a3, 0);
          if ( v5 < 0 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
            v54[3] = *(_QWORD *)(v38 + 96);
            v55 = *(_QWORD *)(v38 + 104);
            v54[5] = 21783LL;
LABEL_63:
            v54[4] = v55;
            WdLogEvent5_WdWarning(v54);
          }
        }
        else
        {
          v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (CVirtualAddressAllocator *)v6,
                 v50,
                 0,
                 0xFFFFFFFE,
                 0LL,
                 0LL,
                 0,
                 a3,
                 1u,
                 1u);
          if ( v5 < 0 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58);
            v54[3] = *(_QWORD *)(v38 + 96);
            v55 = *(_QWORD *)(v38 + 104);
            v54[5] = 21797LL;
            goto LABEL_63;
          }
        }
        if ( v19 >= *(_QWORD *)(v38 + 96) )
          v19 = *(_QWORD *)(v38 + 96);
        if ( v20 <= *(_QWORD *)(v38 + 104) )
          v20 = *(_QWORD *)(v38 + 104);
        v101 = v20;
LABEL_70:
        if ( v5 >= 0 )
        {
          v59 = **v37;
          if ( (__int64 **)(*v37)[1] != v37 || *(__int64 **)(v59 + 8) != *v37 )
            __fastfail(3u);
          *v37 = (__int64 *)v59;
          *(_QWORD *)(v59 + 8) = v37;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = 0LL;
          v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 (CVirtualAddressAllocator *)v6,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 &v103,
                 (struct VIDMM_MAPPED_VA_RANGE *)v38);
          if ( v5 < 0 )
          {
            v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60, v62);
            v63[3] = *(_QWORD *)(v38 + 96);
            v63[4] = *(_QWORD *)(v38 + 104);
            v63[5] = 21811LL;
            WdLogEvent5_WdWarning(v63);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
              (VIDMM_MAPPED_VA_RANGE *)v38,
              (struct CVirtualAddressAllocator *)v6);
          }
        }
      }
    }
    if ( v5 != -1073741267 )
    {
      while ( *v37 != (__int64 *)v37 )
      {
        v64 = *v37;
        v65 = **v37;
        if ( (__int64 **)(*v37)[1] != v37 || *(__int64 **)(v65 + 8) != v64 )
          __fastfail(3u);
        *v37 = (__int64 *)v65;
        v66 = (VIDMM_MAPPED_VA_RANGE *)(v64 - 1);
        *(_QWORD *)(v65 + 8) = v37;
        *((_QWORD *)v66 + 1) = 0LL;
        *((_QWORD *)v66 + 2) = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v66, (struct CVirtualAddressAllocator *)v6);
      }
    }
LABEL_110:
    v4 = this;
    v18 = v112;
LABEL_111:
    if ( v5 >= 0 )
    {
      ++v18;
      *((_DWORD *)a2 + 10) = 0;
      LODWORD(v112) = v18;
      if ( v18 < *((_DWORD *)a2 + 5) )
        continue;
    }
    goto LABEL_21;
  }
  if ( *((_QWORD *)v4 + 5075) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      v4,
      *v6[9],
      0LL,
      (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v18 << 6)));
  v23 = (__int64 **)((char *)a2 + 96);
  v24 = *((_QWORD *)a2 + 12) - 8LL;
  if ( (*(_BYTE *)(v24 + 88) & 8) != 0 )
  {
    v5 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
           (CVirtualAddressAllocator *)v6,
           (struct VIDMM_MAPPED_VA_RANGE *)v24,
           a3,
           0);
    if ( v5 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v28[3] = *(_QWORD *)(v24 + 96);
      v28[4] = *(_QWORD *)(v24 + 104);
      v28[5] = 21670LL;
      goto LABEL_20;
    }
LABEL_27:
    v32 = *v23;
    if ( v19 >= *(_QWORD *)(v24 + 96) )
      v19 = *(_QWORD *)(v24 + 96);
    if ( v20 <= *(_QWORD *)(v24 + 104) )
      v20 = *(_QWORD *)(v24 + 104);
    v33 = *v32;
    v101 = v20;
    if ( (__int64 **)v32[1] != v23 || *(__int64 **)(v33 + 8) != v32 )
      __fastfail(3u);
    *v23 = (__int64 *)v33;
    *(_QWORD *)(v33 + 8) = v23;
    *(_QWORD *)(v24 + 8) = 0LL;
    *(_QWORD *)(v24 + 16) = 0LL;
    v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
           (CVirtualAddressAllocator *)v6,
           *((struct VIDMM_VAD **)a2 + 14),
           *((_DWORD *)a2 + 4),
           0LL,
           (struct VIDMM_MAPPED_VA_RANGE *)v24);
    if ( v5 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
      goto LABEL_20;
    }
    goto LABEL_110;
  }
  v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
         (CVirtualAddressAllocator *)v6,
         (struct VIDMM_MAPPED_VA_RANGE *)v24,
         0,
         0xFFFFFFFE,
         0LL,
         0LL,
         0,
         a3,
         1u,
         1u);
  if ( v5 >= 0 )
    goto LABEL_27;
  v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
  v28[3] = *(_QWORD *)(v24 + 96);
  v28[4] = *(_QWORD *)(v24 + 104);
  v28[5] = 21685LL;
LABEL_20:
  WdLogEvent5_WdWarning(v28);
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
    (VIDMM_MAPPED_VA_RANGE *)v24,
    (struct CVirtualAddressAllocator *)v6);
LABEL_21:
  if ( v19 < v20 )
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v6, *((_DWORD *)a2 + 4), v19, v20);
  v4 = this;
  v18 = v112;
LABEL_24:
  if ( v5 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v18;
  }
  else
  {
    if ( *((_QWORD *)a2 + 9) )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(v4, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0);
      PagingContext = VidSchGetPagingContext(*(_QWORD *)(*((_QWORD *)v4 + 2) + 384LL), *((_DWORD *)a2 + 4));
      v106 = *((_QWORD *)a2 + 9);
      v112 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(1LL, (__int64)&PagingContext, 1LL, (char *)&v106, 0x80000000, &v112) < 0 )
      {
        v99 = WdLogNewEntry5_WdAssertion(v96, v95, v97, v98);
        *(_QWORD *)(v99 + 24) = 21896LL;
        WdLogEvent5_WdAssertion(v99);
      }
    }
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
  }
  if ( v110 )
    return 0;
  return (unsigned int)v5;
}
