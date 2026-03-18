/*
 * XREFs of CmpMarkKcbDeleted @ 0x140656EA0
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpMarkKcbDeleted(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) |= 0x20000u;
  result = CmpRemoveKeyHash(*(_QWORD *)(a1 + 32), (_DWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = -1LL;
  return result;
}
