/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1405651F4
 * Callers:
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x140677D3C (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1, unsigned __int64 a2)
{
  return MiReleasePtes(
           (__int64)&qword_14034FC70,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           ((a2 & 0xFFF) != 0) + (unsigned int)(a2 >> 12));
}
