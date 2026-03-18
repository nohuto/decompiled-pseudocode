/*
 * XREFs of MmFreeIsrStack @ 0x1406A5A44
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14055E3E4 (MmFreeIndependentPages.c)
 */

__int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  return MiReleasePtes(
           (__int64)&qword_14034FC70,
           (_QWORD *)((((unsigned __int64)(v1 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           1u);
}
