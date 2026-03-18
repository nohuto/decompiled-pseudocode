/*
 * XREFs of PopWriteSecurePagesCallback @ 0x14023B104
 * Callers:
 *     HvlIterateSecurePagesForHibernation @ 0x1401ECC54 (HvlIterateSecurePagesForHibernation.c)
 * Callees:
 *     PopWriteHiberPages @ 0x1403F2D9C (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteSecurePagesCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = PopWriteHiberPages(
             a1,
             a2,
             1LL,
             *(_DWORD *)(a1 + 256)
           + (unsigned int)((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
           + *(_DWORD *)(a1 + 260)
           + 2);
  ++*(_DWORD *)(a1 + 260);
  return result;
}
