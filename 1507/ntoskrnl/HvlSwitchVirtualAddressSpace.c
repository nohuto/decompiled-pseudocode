/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x140270914
 * Callers:
 *     KiDetachProcess @ 0x14009A430 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x14010C4D0 (KiAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14010EDCC (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x14018A640 (SwapContext.c)
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlSwitchVirtualAddressSpace(__int64 a1)
{
  return HvlpHypercallCodeVa(65537LL, a1, 0LL);
}
