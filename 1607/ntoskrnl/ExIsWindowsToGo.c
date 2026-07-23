/*
 * XREFs of ExIsWindowsToGo @ 0x1404CF8D4
 * Callers:
 *     <none>
 * Callees:
 *     ExpCheckPortableOperatingSystem @ 0x1404CF8F8 (ExpCheckPortableOperatingSystem.c)
 */

__int64 __fastcall ExIsWindowsToGo(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = ExpCheckPortableOperatingSystem(&v4);
  v3 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = v4 == 1;
    *a1 = v3;
  }
  return result;
}
