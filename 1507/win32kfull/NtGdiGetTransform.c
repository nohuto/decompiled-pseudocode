/*
 * XREFs of NtGdiGetTransform @ 0x1C0032B20
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTransform @ 0x1C0032B80 (GreGetTransform.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetTransform(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  result = GreGetTransform(a1, a2);
  if ( (_DWORD)result )
  {
    if ( a3 >= W32UserProbeAddress )
      a3 = W32UserProbeAddress;
    *(_OWORD *)a3 = v5;
    *(_QWORD *)(a3 + 16) = v6;
  }
  return result;
}
