/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005AADC
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0054A50 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005655C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0088778 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C00670F8 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(VIDMM_GLOBAL *this, PVOID *a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v6; // rcx
  PVOID v7; // rcx

  v4 = a3;
  v6 = *(unsigned int *)a2[63];
  if ( (v6 & 0x30000008) == 0 )
    goto LABEL_2;
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v6, a2, a3, a4);
  v6 = *(unsigned int *)a2[63];
  if ( (v6 & 0x4000000) != 0 && *((_DWORD *)a2 + 99) )
  {
LABEL_2:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v6, a2, a3, a4);
  }
  else
  {
    if ( (v6 & 8) != 0 )
      MmUnmapViewInSystemSpace(a2[47]);
    if ( ((_BYTE)a2[11] & 1) != 0 )
      ObfDereferenceObject(a2[46]);
    v7 = a2[46];
    if ( v4 )
      VidMmDereferenceObjectAsync(v7);
    else
      ObfDereferenceObject(v7);
    a2[46] = 0LL;
  }
  *((_DWORD *)a2 + 23) &= ~1u;
}
