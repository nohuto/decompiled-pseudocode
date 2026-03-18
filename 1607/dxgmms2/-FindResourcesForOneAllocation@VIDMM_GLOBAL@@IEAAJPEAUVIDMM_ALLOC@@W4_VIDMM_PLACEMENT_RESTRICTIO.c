/*
 * XREFs of ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0052220
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0051A64 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C0051C20 (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FindResourcesForOneAllocation(__int64 a1, __int64 **a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-18h]

  v7 = **a2;
  v8 = *(_DWORD *)(v7 + 72);
  if ( !v8 )
    goto LABEL_5;
  if ( (_BYTE)a4 && (((unsigned __int8)v8 | (unsigned __int8)(v8 >> 6)) & 0x1F) != 0 )
  {
    v13 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2, a3, a4, 1u);
    goto LABEL_6;
  }
  v10 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2, a3, a4, 4u);
  if ( v10 < 0 )
  {
LABEL_5:
    v13 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(a1, v7, a3, 0);
LABEL_6:
    v10 = v13;
  }
  v14 = *(unsigned int *)(v7 + 76);
  if ( (v14 & 0x2000000) != 0 && v10 >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 224) + 56LL) & 0x1001) == 0 || (v14 & 0x400) != 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v18) = 0;
        Template_pq(v9, &EventCompleteAllocationMigration, v11, v7, v18);
      }
      *(_QWORD *)(a1 + 7664) += *(_QWORD *)(v7 + 16);
      ++*(_DWORD *)(a1 + 7656);
      ++*(_DWORD *)(a1 + 41660);
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v18) = -1073741823;
        Template_pq(v9, &EventCompleteAllocationMigration, v11, v7, v18);
      }
      v16 = *(_QWORD *)(v7 + 16);
      ++*(_DWORD *)(a1 + 7672);
      *(_QWORD *)(a1 + 7680) += v16;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v14, v11, v12);
      v17[3] = a2;
      v17[4] = *(_QWORD *)(v7 + 136);
      v17[5] = *(_QWORD *)(v7 + 224);
    }
    *(_DWORD *)(v7 + 76) &= 0xFCFFFFFF;
  }
  return (unsigned int)v10;
}
