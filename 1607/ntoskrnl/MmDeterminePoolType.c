/*
 * XREFs of MmDeterminePoolType @ 0x1400E908C
 * Callers:
 *     ExProtectPoolEx @ 0x1400E80E0 (ExProtectPoolEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x14071BC54 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x140721350 (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  if ( a1 >= qword_140327F70 && a1 < qword_140327F70 + 0xF8000000000LL
    || qword_140326C70
    && a1 >= qword_140326C70
    && a1 < qword_140326C70 + (qword_140326C50 << 21)
    && (*(_BYTE *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
  {
    return 1LL;
  }
  if ( a1 < qword_140326950 || a1 >= qword_140326950 + 0x8000000000LL )
    return 0LL;
  return 33LL;
}
