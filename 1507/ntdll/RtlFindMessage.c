/*
 * XREFs of RtlFindMessage @ 0x1800659D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x180018AC0 (LdrpAccessResourceData.c)
 *     RtlFindMessageInTable @ 0x180065A84 (RtlFindMessageInTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindMessage(unsigned __int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = a2;
  v10[2] = a3;
  v10[1] = 1LL;
  v10[3] = a4;
  result = LdrpSearchResourceSection_U(a1, (__int64)v10, 4u, 0x40u, (unsigned __int64 *)&v9);
  if ( (int)result >= 0 )
  {
    result = LdrpAccessResourceData(a1, v9, &v8, 0LL);
    if ( (int)result >= 0 )
      return RtlFindMessageInTable(v8, a4, a5);
  }
  return result;
}
