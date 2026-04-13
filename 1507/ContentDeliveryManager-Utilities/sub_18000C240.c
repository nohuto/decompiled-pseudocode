/*
 * XREFs of sub_18000C240 @ 0x18000C240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall sub_18000C240(__int64 a1, int a2)
{
  bool v2; // zf

  v2 = dword_18003A0E4 == a2;
  dword_18003A0E4 = a2;
  return v2;
}
