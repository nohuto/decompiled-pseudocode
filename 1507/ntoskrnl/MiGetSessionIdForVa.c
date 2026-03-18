/*
 * XREFs of MiGetSessionIdForVa @ 0x14008861C
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  if ( a1 + 0x800000000000LL <= 0x78FFFFFFFFFFLL || a1 >= 0xFFFFF98000000000uLL )
    return 0xFFFFFFFFLL;
  else
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process, 0x78FFFFFFFFFFLL);
}
