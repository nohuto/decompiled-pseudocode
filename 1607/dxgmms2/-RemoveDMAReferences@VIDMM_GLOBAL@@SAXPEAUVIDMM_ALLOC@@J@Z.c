/*
 * XREFs of ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001DFC8
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001CF74 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0058050 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RemoveDMAReferences(struct VIDMM_ALLOC *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rbx
  _QWORD *v7; // rax

  v4 = a2;
  if ( *((_DWORD *)a1 + 43) < (int)a2 )
  {
    v6 = *((int *)a1 + 43);
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3, a4);
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 41LL;
    v7[5] = a1;
    v7[6] = v6;
    WdLogEvent5_WdCriticalError(v7);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 43, -v4);
}
