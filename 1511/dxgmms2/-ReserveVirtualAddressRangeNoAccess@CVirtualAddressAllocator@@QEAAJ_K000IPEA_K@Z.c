/*
 * XREFs of ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0041838
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C003BE68 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_pqxx @ 0x1C001DFE4 (Template_pqxx.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00411F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005EFB0 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  char v9; // si
  struct _RTL_AVL_TREE *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _RTL_BALANCED_NODE *v14; // rdi
  struct VIDMM_VAD *v15; // rbx
  struct _RTL_BALANCED_NODE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+20h] [rbp-68h]
  _BYTE v22[32]; // [rsp+50h] [rbp-38h] BYREF
  struct VIDMM_VAD *v23; // [rsp+A0h] [rbp+18h] BYREF

  v9 = 0;
  v23 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, this + 5, a3, a4);
  if ( (int)CVirtualAddressAllocator::AllocateVirtualAddressRange(
              (CVirtualAddressAllocator *)this,
              v11,
              a2,
              0LL,
              a4,
              a5,
              a6,
              &v23,
              1u) < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v12);
    WdLogEvent5_WdWarning(v20);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    return 3221225473LL;
  }
  v14 = (struct _RTL_BALANCED_NODE *)this[4];
  v15 = v23;
  if ( !v14 )
    goto LABEL_7;
  while ( (int)CompareVadRangeAvl(v15, v14) < 0 )
  {
    v16 = v14->Children[0];
    if ( !v14->Children[0] )
      goto LABEL_7;
LABEL_5:
    v14 = v16;
  }
  v16 = v14->Children[1];
  if ( v16 )
    goto LABEL_5;
  v9 = 1;
LABEL_7:
  LOBYTE(v13) = v9;
  RtlAvlInsertNodeEx(this + 4, v14, v13, v15);
  *((_DWORD *)v15 + 18) = *((_DWORD *)v15 + 18) & 0xFFFFFFF0 | 2;
  *a7 = *((_QWORD *)v15 + 3);
  *((_DWORD *)v15 + 18) |= 0x800u;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v21) = *((_DWORD *)v15 + 18);
    Template_pqxx(v17, &CreateGpuVirtualAddressRange, v18, this, v21, *((_QWORD *)v15 + 3), *((_QWORD *)v15 + 4));
  }
  return 0LL;
}
