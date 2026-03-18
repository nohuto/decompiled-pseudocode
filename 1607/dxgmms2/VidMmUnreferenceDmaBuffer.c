/*
 * XREFs of VidMmUnreferenceDmaBuffer @ 0x1C001D6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmUnreferenceDmaBuffer(VIDMM_GLOBAL ***a1, char a2, __int64 a3, __int64 a4)
{
  LOBYTE(a3) = a2;
  VIDMM_GLOBAL::UnreferenceDmaBuffer(*a1[17], (struct _VIDMM_DMA_BUFFER *)a1, a3, a4);
}
