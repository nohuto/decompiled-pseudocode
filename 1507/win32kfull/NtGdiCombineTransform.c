/*
 * XREFs of NtGdiCombineTransform @ 0x1C00ECAD0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineTransform @ 0x1C00ECB74 (GreCombineTransform.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiCombineTransform(unsigned __int64 a1, struct _XFORML *a2, struct _XFORML *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  struct _XFORML v8; // [rsp+38h] [rbp-40h] BYREF
  struct _XFORML v9; // [rsp+50h] [rbp-28h] BYREF

  if ( !ProbeAndConvertXFORM(a2, &v9) || !ProbeAndConvertXFORM(a3, &v8) )
    return 0LL;
  result = GreCombineTransform(&v6, &v9, &v8);
  if ( (_DWORD)result )
  {
    if ( a1 >= W32UserProbeAddress )
      a1 = W32UserProbeAddress;
    *(_OWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v7;
  }
  return result;
}
