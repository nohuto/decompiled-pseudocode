/*
 * XREFs of KeFlushProcessTb @ 0x140075EFC
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x1401D2108 (KeSwapDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x1401EF010 (MiDeleteProcessShadow.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400DEEC0 (KiFlushViaHypervisor.c)
 *     HvlFlushAddressSpaceTb @ 0x1401C13C0 (HvlFlushAddressSpaceTb.c)
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
