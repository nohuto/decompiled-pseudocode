/*
 * XREFs of VidSchUnreferenceDmaBuffer @ 0x1C00A1D40
 * Callers:
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001CF74 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C000DEB0 (VidSchiSignalRegisteredEvent.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001CF74 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 */

void __fastcall VidSchUnreferenceDmaBuffer(__int64 a1, struct _VIDMM_DMA_BUFFER *a2, __int64 a3, __int64 a4)
{
  VIDMM_GLOBAL::UnreferenceDmaBuffer(*(VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 408LL), a2, 0LL, a4);
  VidSchiSignalRegisteredEvent(a1, (struct _KEVENT **)(a1 + 1800));
  *(_QWORD *)(a1 + 1648) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(a1 + 1616), 0, 0);
  VidSchiSignalRegisteredEvent(a1, (struct _KEVENT **)(a1 + 1832));
}
