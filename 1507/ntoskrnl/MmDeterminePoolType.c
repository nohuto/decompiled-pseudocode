/*
 * XREFs of MmDeterminePoolType @ 0x1400619A0
 * Callers:
 *     ExProtectPool @ 0x14005EE00 (ExProtectPool.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140753668 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x140758D44 (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  unsigned int v2; // r8d

  if ( a1 + 0x400000000000LL <= 0xF7FFFFFFFFFLL )
    return 1LL;
  v2 = 0;
  if ( qword_14034EDB0 )
  {
    if ( a1 >= qword_14034EDB0
      && a1 < qword_14034EDB0 + (qword_14034ED90 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      return 1LL;
    }
  }
  if ( a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    return 33;
  return v2;
}
