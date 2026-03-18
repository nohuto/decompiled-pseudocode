/*
 * XREFs of ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00633C4
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C00319FC (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_pqxx @ 0x1C0010794 (Template_pqxx.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C005C988 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E6AC (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
        struct _RTL_BALANCED_NODE **this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  char v9; // si
  struct _RTL_AVL_TREE *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _RTL_BALANCED_NODE *v15; // rdi
  struct VIDMM_VAD *v16; // rbx
  struct _RTL_BALANCED_NODE *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-68h]
  _BYTE v23[32]; // [rsp+50h] [rbp-38h] BYREF
  struct VIDMM_VAD *v24; // [rsp+A0h] [rbp+18h] BYREF

  v9 = 0;
  v24 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v23,
    (struct DXGPUSHLOCK *const)(this + 5));
  if ( (int)CVirtualAddressAllocator::AllocateVirtualAddressRange(
              (CVirtualAddressAllocator *)this,
              v11,
              a2,
              0LL,
              a4,
              a5,
              a6,
              &v24,
              1u) < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    WdLogEvent5_WdWarning(v21);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    return 3221225473LL;
  }
  v15 = this[4];
  v16 = v24;
  if ( !v15 )
    goto LABEL_6;
  while ( (int)CompareVadRangeAvl((char *)v16, v15) < 0 )
  {
    v17 = v15->Children[0];
    if ( !v15->Children[0] )
      goto LABEL_6;
LABEL_10:
    v15 = v17;
  }
  v17 = v15->Children[1];
  if ( v17 )
    goto LABEL_10;
  v9 = 1;
LABEL_6:
  LOBYTE(v14) = v9;
  RtlAvlInsertNodeEx(this + 4, v15, v14, v16);
  *((_DWORD *)v16 + 18) = *((_DWORD *)v16 + 18) & 0xFFFFFFF0 | 2;
  *a7 = *((_QWORD *)v16 + 3);
  *((_DWORD *)v16 + 18) |= 0x800u;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v22) = *((_DWORD *)v16 + 18);
    Template_pqxx(v18, &CreateGpuVirtualAddressRange, v19, this, v22, *((_QWORD *)v16 + 3), *((_QWORD *)v16 + 4));
  }
  return 0LL;
}
