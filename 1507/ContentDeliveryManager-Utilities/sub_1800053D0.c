/*
 * XREFs of sub_1800053D0 @ 0x1800053D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800053D0(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)(a1 + 40) = a3;
  SetEvent(*(HANDLE *)(a1 + 48));
  return 0LL;
}
