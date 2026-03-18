/*
 * XREFs of VidSchUnreferenceDmaBuffer @ 0x1C0079B4C
 * Callers:
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C000F294 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0002BD0 (VidSchiSignalRegisteredEvent.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C000F294 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 */

void __fastcall VidSchUnreferenceDmaBuffer(__int64 a1, struct _VIDMM_DMA_BUFFER *a2)
{
  VIDMM_GLOBAL::UnreferenceDmaBuffer(*(VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 408LL), a2, 0);
  VidSchiSignalRegisteredEvent(a1, (struct _KEVENT **)(a1 + 1816));
  *(_QWORD *)(a1 + 1664) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(a1 + 1632), 0, 0);
  VidSchiSignalRegisteredEvent(a1, (struct _KEVENT **)(a1 + 1848));
}
