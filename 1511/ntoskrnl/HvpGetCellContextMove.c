/*
 * XREFs of HvpGetCellContextMove @ 0x140166DBC
 * Callers:
 *     CmpRemoveSubKey @ 0x1403D7AB8 (CmpRemoveSubKey.c)
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
