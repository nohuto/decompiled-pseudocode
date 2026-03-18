/*
 * XREFs of ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C0052184
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0050FD8 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0051194 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReferenceAllocationForSubmission(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, char a3)
{
  __int64 v3; // rdx

  v3 = **(_QWORD **)a2;
  *(_BYTE *)(v3 + 94) = 1;
  if ( !a3 && (*(_DWORD *)(*(_QWORD *)(v3 + 128) + 56LL) & 0x1001) == 0 )
    *(_BYTE *)(v3 + 95) = 1;
}
