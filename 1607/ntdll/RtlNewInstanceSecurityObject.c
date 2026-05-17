/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x1800D4970
 * Callers:
 *     <none>
 * Callees:
 *     RtlNewSecurityObject @ 0x1800870D0 (RtlNewSecurityObject.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlNewInstanceSecurityObject(
        char a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        char a8,
        void *a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v15; // [rsp+70h] [rbp-38h]

  result = NtQueryInformationToken();
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a4 = v15;
    if ( *(_DWORD *)a4 != *a3 || *(_DWORD *)(a4 + 4) != a3[1] || a1 || a2 )
    {
      return RtlNewSecurityObject(a5, a6, a7, a8, a9, a10);
    }
    else
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  return result;
}
