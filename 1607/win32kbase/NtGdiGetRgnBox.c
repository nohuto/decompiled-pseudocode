/*
 * XREFs of NtGdiGetRgnBox @ 0x1C00749A0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C00749E0 (GreGetRgnBox.c)
 */

__int64 __fastcall NtGdiGetRgnBox(HRGN a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h]

  result = GreGetRgnBox(a1);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_OWORD *)W32UserProbeAddress;
    *a2 = v4;
  }
  return result;
}
