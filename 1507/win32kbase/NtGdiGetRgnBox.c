/*
 * XREFs of NtGdiGetRgnBox @ 0x1C000BE90
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C000BED0 (GreGetRgnBox.c)
 */

__int64 __fastcall NtGdiGetRgnBox(HRGN a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h]

  result = GreGetRgnBox(a1);
  if ( (_DWORD)result )
  {
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    *a2 = v4;
  }
  return result;
}
