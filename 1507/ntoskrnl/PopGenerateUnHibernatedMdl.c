/*
 * XREFs of PopGenerateUnHibernatedMdl @ 0x1403F25F8
 * Callers:
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 * Callees:
 *     PopGenerateScratchMdl @ 0x14014D830 (PopGenerateScratchMdl.c)
 *     PopDiscardRange @ 0x1403F267C (PopDiscardRange.c)
 */

PMDL __fastcall PopGenerateUnHibernatedMdl(__int64 a1, __int64 a2)
{
  ULONG v2; // edi
  PMDL ScratchMdl; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax

  v2 = 0;
  ScratchMdl = PopGenerateScratchMdl(a1, a2);
  if ( ScratchMdl )
  {
    v4 = __rdtsc();
    if ( (ScratchMdl->ByteCount & 0xFFFFF000) != 0 )
    {
      do
        PopDiscardRange(qword_14032E680, *((_QWORD *)&ScratchMdl[1].Next + v2++), 1LL, 1752457543LL);
      while ( v2 < ScratchMdl->ByteCount >> 12 );
    }
    v5 = __rdtsc();
    qword_14032EBF0 += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v4;
  }
  return ScratchMdl;
}
