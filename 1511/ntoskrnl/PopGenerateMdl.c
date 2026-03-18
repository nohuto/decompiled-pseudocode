/*
 * XREFs of PopGenerateMdl @ 0x140118B28
 * Callers:
 *     PopAllocatePages @ 0x14039FBAC (PopAllocatePages.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1400BC654 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateMdl(__int64 a1)
{
  unsigned __int64 v2; // rdi
  PMDL PagesForMdl; // rax
  PMDL v4; // r8
  unsigned __int64 v5; // rax

  v2 = __rdtsc();
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, a1 << 12, MmCached, 0xDu);
  v4 = PagesForMdl;
  if ( PagesForMdl )
  {
    PagesForMdl->Next = *(struct _MDL **)(qword_1402DE0C0 + 128);
    *(_QWORD *)(qword_1402DE0C0 + 128) = PagesForMdl;
    *(_QWORD *)(qword_1402DE0C0 + 136) += a1;
  }
  v5 = __rdtsc();
  qword_1402DE630 += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v2;
  return v4;
}
