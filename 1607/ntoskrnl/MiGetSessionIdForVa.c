/*
 * XREFs of MiGetSessionIdForVa @ 0x140024B24
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  if ( a1 >= 0xFFFF800000000000uLL && (a1 < qword_140326950 || a1 >= qword_140326950 + 0x8000000000LL) )
    return 0xFFFFFFFFLL;
  else
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
}
