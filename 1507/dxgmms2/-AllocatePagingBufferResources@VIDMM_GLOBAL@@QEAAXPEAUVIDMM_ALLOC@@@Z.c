/*
 * XREFs of ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0039AA4
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AllocatePagingBufferResources(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rax
  bool v5; // r8
  _QWORD v6[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v6, 0, 0x50uLL);
  v4 = *(_QWORD *)a2;
  LODWORD(v6[0]) = 104;
  v6[2] = a2;
  HIDWORD(v6[0]) = *(_DWORD *)(*(_QWORD *)v4 + 76LL) & 0x3F;
  VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v6, v5);
}
