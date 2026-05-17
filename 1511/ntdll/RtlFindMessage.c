/*
 * XREFs of RtlFindMessage @ 0x18006FF90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     RtlFindMessageInTable @ 0x180070044 (RtlFindMessageInTable.c)
 *     LdrpAccessResourceData @ 0x18007031C (LdrpAccessResourceData.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindMessage(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = a2;
  v10[2] = a3;
  v10[1] = 1LL;
  v10[3] = a4;
  result = LdrpSearchResourceSection_U(a1, (__int64)v10, 4LL, 0x40u, &v9);
  if ( (int)result >= 0 )
  {
    result = LdrpAccessResourceData(a1, v9, &v8, 0LL);
    if ( (int)result >= 0 )
      return RtlFindMessageInTable(v8, a4, a5);
  }
  return result;
}
