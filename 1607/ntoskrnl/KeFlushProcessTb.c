/*
 * XREFs of KeFlushProcessTb @ 0x140075E7C
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x14009126C (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x1401D22DC (KeSwapDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x1401EF1E4 (MiDeleteProcessShadow.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400E1020 (KiFlushViaHypervisor.c)
 *     HvlFlushAddressSpaceTb @ 0x1401C14DC (HvlFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = KiFlushViaHypervisor();
  if ( (_DWORD)result )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, v3, 0LL);
  return result;
}
