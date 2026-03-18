/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C004C010
 * Callers:
 *     <none>
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C004BEAC (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *a1, int a2)
{
  *(_QWORD *)a1 = 0LL;
  *((_DWORD *)a1 + 2) = a2;
  RGNMEMOBJ::vInitialize(a1, 0xD8u);
  return a1;
}
