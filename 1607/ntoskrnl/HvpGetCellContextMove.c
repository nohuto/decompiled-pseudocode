/*
 * XREFs of HvpGetCellContextMove @ 0x140171BBC
 * Callers:
 *     CmpRemoveSubKeyFromList @ 0x1404B82D8 (CmpRemoveSubKeyFromList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextMove(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_WORD *)(a1 + 4) = *(_WORD *)(a2 + 4);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)a2 = -1;
  *(_WORD *)(a2 + 4) = 0;
  return result;
}
