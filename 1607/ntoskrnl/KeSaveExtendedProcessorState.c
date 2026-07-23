/*
 * XREFs of KeSaveExtendedProcessorState @ 0x140083B00
 * Callers:
 *     SymCryptParallelSha256Process @ 0x140237160 (SymCryptParallelSha256Process.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
