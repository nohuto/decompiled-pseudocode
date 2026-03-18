/*
 * XREFs of ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0088224
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0058050 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddDMAReferences(struct VIDMM_ALLOC *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  _QWORD *v7; // rax

  v4 = a2;
  if ( (_DWORD)a2 + *((_DWORD *)a1 + 43) == 0x7FFFFFFF )
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
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 43, v4);
}
