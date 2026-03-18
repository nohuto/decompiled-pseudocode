/*
 * XREFs of ExIsWindowsToGo @ 0x140409C88
 * Callers:
 *     <none>
 * Callees:
 *     sub_1404A8518 @ 0x1404A8518 (sub_1404A8518.c)
 */

__int64 __fastcall ExIsWindowsToGo(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = sub_1404A8518(&v4);
  v3 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = v4 == 1;
    *a1 = v3;
  }
  return result;
}
