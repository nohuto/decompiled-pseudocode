/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004C0F0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004BFD8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C000F228 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000F264 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  struct _MDL *FullMDL; // rdx
  unsigned __int64 v19; // r10
  unsigned int v20; // r9d
  struct _LIST_ENTRY *v21; // rdx
  struct _MDL *v23; // [rsp+28h] [rbp-50h]
  struct VIDMM_ALLOC **v24; // [rsp+38h] [rbp-40h]
  _BYTE v25[32]; // [rsp+50h] [rbp-28h] BYREF

  *a3 = 0LL;
  v5 = 0;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
    (struct DXGPUSHLOCK *const)(*(_QWORD *)a2 + 40LL));
  v9 = *((_QWORD *)a2 + 3);
  if ( !v9 || **(_QWORD **)(v9 + 16) && **((_QWORD **)a2 + 1) )
  {
    v12 = *((_QWORD *)a2 + 1);
    if ( (int)(*(_DWORD *)(v12 + 64) << 28) >> 28 != 1 )
    {
      v11 = (unsigned int)(((int)(*(_DWORD *)(v12 + 64) << 28) >> 28) - 2);
      if ( (int)(*(_DWORD *)(v12 + 64) << 28) >> 28 == 2 )
      {
        v13 = 0;
        v24 = a3;
        v23 = (struct _MDL *)*((_QWORD *)a2 + 2);
      }
      else
      {
        if ( (int)(*(_DWORD *)(v12 + 64) << 28) >> 28 != 6 )
          goto LABEL_19;
        v13 = -2;
        v24 = a3;
        v23 = 0LL;
      }
      v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(CVirtualAddressAllocator **)a2,
              (struct VIDMM_MAPPED_VA_RANGE *)v12,
              0,
              v13,
              0LL,
              v23,
              1,
              v24,
              0,
              1u);
LABEL_18:
      v5 = v14;
      goto LABEL_19;
    }
    v11 = *(_QWORD *)(v12 + 56);
    if ( (*(_DWORD *)(v11 + 28) & 3) != 2 )
      goto LABEL_19;
    v15 = **(_QWORD **)v11;
    v16 = *(_QWORD *)(v15 + 128);
    v17 = *(_DWORD *)(v16 + 56);
    if ( (v17 & 0x1001) != 0 )
    {
      FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v15, 0LL);
      v19 = 0LL;
    }
    else
    {
      v19 = *(_QWORD *)(v15 + 136);
      FullMDL = 0LL;
      if ( (v17 & 0x1000) == 0 )
      {
        v20 = *(_DWORD *)(v16 + 16) + 1;
        goto LABEL_17;
      }
    }
    v20 = 0;
LABEL_17:
    v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            *(CVirtualAddressAllocator **)a2,
            *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 1),
            *(_DWORD *)(v15 + 76) & 0x3F,
            v20,
            v19,
            FullMDL,
            1,
            a3,
            0,
            1u);
    goto LABEL_18;
  }
  v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
  WdLogEvent5_WdWarning(v10);
LABEL_19:
  if ( !*((_BYTE *)a2 + 32) || v5 != -1073741267 )
  {
    v21 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3);
    if ( v21 )
    {
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry((VIDMM_GLOBAL *)v11, v21);
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1));
      operator delete(*((void **)a2 + 3));
      *((_QWORD *)a2 + 3) = 0LL;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return v5;
}
