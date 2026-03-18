/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x14001AEF0
 * Callers:
 *     RtlQueryPackageClaims @ 0x14001ADB0 (RtlQueryPackageClaims.c)
 *     EtwpQueryPsmKey @ 0x1406E25C8 (EtwpQueryPsmKey.c)
 * Callees:
 *     SeQuerySecurityAttributesToken @ 0x1404829C4 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlpQueryPackageIdentityAttributes(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // bl
  int v7; // ebp
  __int64 result; // rax
  __int64 v10; // rax
  size_t v11; // [rsp+20h] [rbp-28h]
  size_t v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = 1;
  v7 = 1;
  if ( a4 )
    v7 = 2;
  LODWORD(v11) = 672;
  result = SeQuerySecurityAttributesToken(a1, (int)&dword_1402905A8, v7, (void *)a3, v11, (__int64)&v13);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741275 )
      return result;
    if ( v7 == 1 )
      return result;
    LODWORD(v12) = 672;
    result = SeQuerySecurityAttributesToken(a1, (int)&dword_1402905A8, 1, (void *)a3, v12, (__int64)&v13);
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
