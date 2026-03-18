/*
 * XREFs of HvpGetCellContextMove @ 0x140195B7C
 * Callers:
 *     CmpRemoveSubKey @ 0x14044A21C (CmpRemoveSubKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextMove(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a1 = *a2;
  result = 0LL;
  *a2 = 0;
  *a2 = -1;
  return result;
}
