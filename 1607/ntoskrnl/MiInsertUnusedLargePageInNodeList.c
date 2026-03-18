/*
 * XREFs of MiInsertUnusedLargePageInNodeList @ 0x1401F58D4
 * Callers:
 *     MiFreeLargeZeroPages @ 0x140662930 (MiFreeLargeZeroPages.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiInsertLargePageInNodeList @ 0x1401FBB4C (MiInsertLargePageInNodeList.c)
 */

__int64 __fastcall MiInsertUnusedLargePageInNodeList(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  v4 = 48 * a1 - 0x58000000000LL;
  v5 = (unsigned __int8)MiLockPageInline(v4);
  MiInsertLargePageInNodeList(a1, a2, 0LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v5);
  return result;
}
