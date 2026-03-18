/*
 * XREFs of KeFlushProcessTb @ 0x140005994
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x1400328BC (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x1400E2F88 (KeSwapDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x1401DE720 (MiDeleteProcessShadow.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KiFlushAddressSpaceTb @ 0x1401C7210 (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(int a1)
{
  __int64 result; // rax

  result = KiFlushViaHypervisor();
  if ( (_DWORD)result )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFF000, 0, 0, 0, 0);
  return result;
}
