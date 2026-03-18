/*
 * XREFs of NtGdiGetDCPoint @ 0x1C00E4950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetDCPoint(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  result = GreGetDCPoint(a1, a2, &v5);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (_QWORD *)W32UserProbeAddress;
    *a3 = v5;
  }
  return result;
}
