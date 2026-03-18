/*
 * XREFs of PopGenerateUnHibernatedMdl @ 0x14039DE20
 * Callers:
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     PopGenerateScratchMdl @ 0x140117AE0 (PopGenerateScratchMdl.c)
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
        RtlSetBits((PRTL_BITMAP)(qword_1402DE0C0 + 32), *((_DWORD *)&ScratchMdl[1].Next + 2 * v2++), 1u);
      while ( v2 < ScratchMdl->ByteCount >> 12 );
    }
    v5 = __rdtsc();
    qword_1402DE630 += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v4;
  }
  return ScratchMdl;
}
