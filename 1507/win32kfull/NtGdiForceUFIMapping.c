/*
 * XREFs of NtGdiForceUFIMapping @ 0x1C02A6870
 * Callers:
 *     <none>
 * Callees:
 *     GreForceUFIMapping @ 0x1C026A648 (GreForceUFIMapping.c)
 */

__int64 __fastcall NtGdiForceUFIMapping(HDC a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 result; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  result = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v2 = (__int64 *)W32UserProbeAddress;
    v4 = *v2;
    return GreForceUFIMapping(a1, &v4);
  }
  return result;
}
