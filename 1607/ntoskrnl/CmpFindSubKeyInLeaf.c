/*
 * XREFs of CmpFindSubKeyInLeaf @ 0x140609F30
 * Callers:
 *     CmpRemoveSubKeyFromList @ 0x1404D4CD4 (CmpRemoveSubKeyFromList.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x140512A60 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyInLeaf(
        __int64 a1,
        __int16 *a2,
        const UNICODE_STRING *a3,
        unsigned __int16 *a4,
        unsigned int *a5)
{
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF

  CmpFindSubKeyInLeafWithStatus(a1, a2, a3, a4, a5, v6);
  return v6[0];
}
