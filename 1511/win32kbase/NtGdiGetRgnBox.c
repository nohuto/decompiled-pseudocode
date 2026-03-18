/*
 * XREFs of NtGdiGetRgnBox @ 0x1C00725C0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C00251A0 (GreGetRgnBox.c)
 */

__int64 __fastcall NtGdiGetRgnBox(HRGN a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  result = GreGetRgnBox(a1, (__int64)&v4);
  if ( (_DWORD)result )
  {
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    *a2 = v4;
  }
  return result;
}
