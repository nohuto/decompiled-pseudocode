/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x180064A9C
 * Callers:
 *     RtlQueryPackageClaims @ 0x180064930 (RtlQueryPackageClaims.c)
 * Callees:
 *     ZwQuerySecurityAttributesToken @ 0x180094D10 (ZwQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlpQueryPackageIdentityAttributes(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  char v4; // bl
  unsigned int v7; // ebp
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v4 = 1;
  v7 = 1;
  if ( a4 )
    v7 = 2;
  result = ZwQuerySecurityAttributesToken(a1, &unk_180102600, v7, a3, 672, &v11);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741275 )
      return result;
    if ( v7 == 1 )
      return result;
    result = ZwQuerySecurityAttributesToken(a1, &unk_180102600, 1LL, a3, 672, &v11);
    if ( (int)result < 0 )
      return result;
    v4 = 0;
  }
  if ( !*(_DWORD *)(a3 + 4) )
    return 3221226021LL;
  if ( a4 )
  {
    if ( v4 )
      v10 = **(_QWORD **)(*(_QWORD *)(a3 + 8) + 72LL);
    else
      v10 = 0LL;
    *a4 = v10;
  }
  return 0LL;
}
