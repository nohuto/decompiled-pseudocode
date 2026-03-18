/*
 * XREFs of MiGetSessionIdForVa @ 0x140039DB4
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  if ( a1 + 0x800000000000LL <= 0x78FFFFFFFFFFLL || a1 >= 0xFFFFF98000000000uLL )
    return 0xFFFFFFFFLL;
  else
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
}
