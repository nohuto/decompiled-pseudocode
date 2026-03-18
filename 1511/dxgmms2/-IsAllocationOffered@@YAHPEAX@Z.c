/*
 * XREFs of ?IsAllocationOffered@@YAHPEAX@Z @ 0x1C005FE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsAllocationOffered(_DWORD *a1)
{
  return a1[104] != 4 && *(_DWORD *)(*((_QWORD *)a1 + 59) + 4LL) == 2;
}
