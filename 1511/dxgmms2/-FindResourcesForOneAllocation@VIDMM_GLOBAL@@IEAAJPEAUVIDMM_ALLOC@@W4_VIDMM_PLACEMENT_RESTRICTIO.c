/*
 * XREFs of ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0049D18
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0049610 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C0049794 (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FindResourcesForOneAllocation(__int64 a1, __int64 **a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // esi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]

  v6 = **a2;
  v7 = *(_DWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_7;
  if ( (_BYTE)a4 && ((v7 & 0x1F) != 0 || (v7 & 0x7C0) != 0) )
  {
    v8 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2, a3, a4, 1u);
LABEL_8:
    v11 = v8;
    goto LABEL_9;
  }
  v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2, a3, a4, 4u);
  if ( v11 < 0 )
  {
LABEL_7:
    v8 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(a1, v6, a3, 0);
    goto LABEL_8;
  }
LABEL_9:
  if ( (*(_DWORD *)(v6 + 76) & 0x2000000) != 0 && v11 >= 0 )
  {
    v12 = *(_QWORD *)(v6 + 216);
    if ( (*(_DWORD *)(v12 + 56) & 0x1000) != 0
      || *(_DWORD *)(v12 + 16) == -1
      || ((*(_DWORD *)(v12 + 56) & 0x1000) == 0 ? (v10 = (unsigned int)(*(_DWORD *)(v12 + 16) + 1)) : (v10 = 0LL),
          (v9 = *(unsigned int *)(v6 + 72), (_DWORD)v10 != (*(_DWORD *)(v6 + 72) & 0x1F))
       && ((*(_DWORD *)(v12 + 56) & 0x1000) == 0 ? (v13 = *(_DWORD *)(v12 + 16) + 1) : (v13 = 0),
           v9 = ((unsigned int)v9 >> 6) & 0x1F,
           v13 != (_DWORD)v9)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        LODWORD(v16) = -1073741823;
        Template_pq(v9, &EventCompleteAllocationMigration, v10, v6, v16);
      }
      v14 = *(_QWORD *)(v6 + 16);
      ++*(_DWORD *)(a1 + 7672);
      *(_QWORD *)(a1 + 7680) += v14;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        LODWORD(v16) = 0;
        Template_pq(v9, &EventCompleteAllocationMigration, v10, v6, v16);
      }
      *(_QWORD *)(a1 + 7664) += *(_QWORD *)(v6 + 16);
      ++*(_DWORD *)(a1 + 7656);
      ++*(_DWORD *)(a1 + 41316);
    }
    *(_DWORD *)(v6 + 76) &= 0xFCFFFFFF;
  }
  return (unsigned int)v11;
}
