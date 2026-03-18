/*
 * XREFs of MiGetSessionIdForVa @ 0x140024FA4
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x140024930 (MiIssueHardFault.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiMakeImagePageOk @ 0x1401F6F38 (MiMakeImagePageOk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  if ( a1 >= 0xFFFF800000000000uLL && (a1 < qword_140326910 || a1 >= qword_140326910 + 0x8000000000LL) )
    return 0xFFFFFFFFLL;
  else
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
}
