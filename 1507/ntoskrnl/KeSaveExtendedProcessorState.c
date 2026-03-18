/*
 * XREFs of KeSaveExtendedProcessorState @ 0x140124FA8
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14026C770 (SymCryptParallelSha256Process.c)
 *     PnprQuiesceProcessorDpc @ 0x140400A08 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall KeSaveExtendedProcessorState(ULONG64 Mask, PXSTATE_SAVE XStateSave)
{
  if ( (KeFeatureBits & 0x800000) == 0 )
  {
    if ( (Mask & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      return KeSaveExtendedAndSupervisorState(Mask);
LABEL_5:
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)Mask, HIDWORD(Mask));
  }
  if ( (~MEMORY[0xFFFFF780000003D8] & Mask) != 0 )
    goto LABEL_5;
  return KeSaveExtendedAndSupervisorState(Mask);
}
