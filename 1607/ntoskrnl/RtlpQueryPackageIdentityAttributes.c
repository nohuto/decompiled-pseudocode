/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x14000D638
 * Callers:
 *     RtlQueryPackageClaims @ 0x14000C86C (RtlQueryPackageClaims.c)
 *     EtwpQueryPsmKey @ 0x14069FB3C (EtwpQueryPsmKey.c)
 * Callees:
 *     SeQuerySecurityAttributesToken @ 0x14040DDE0 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlpQueryPackageIdentityAttributes(int a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  char v9; // si
  int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rax
  size_t v13; // [rsp+20h] [rbp-28h]
  size_t v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 1;
  v10 = 1;
  if ( a4 || v5 )
    v10 = 2;
  LODWORD(v13) = 816;
  result = SeQuerySecurityAttributesToken(a1, (int)&dword_140257430, v10, (void *)a3, v13, (__int64)&v15);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741275 )
      return result;
    if ( v10 == 1 )
      return result;
    LODWORD(v14) = 816;
    result = SeQuerySecurityAttributesToken(a1, (int)&dword_140257430, 1, (void *)a3, v14, (__int64)&v15);
    if ( (int)result < 0 )
      return result;
    v9 = 0;
  }
  if ( !*(_DWORD *)(a3 + 4) )
    return 3221226021LL;
  if ( a4 )
  {
    if ( v9 )
      v12 = **(_QWORD **)(*(_QWORD *)(a3 + 8) + 72LL);
    else
      v12 = 0LL;
    *a4 = v12;
  }
  if ( v5 )
  {
    *v5 |= 1uLL;
    *v5 |= v9 != 0 ? 2 : 0;
    LODWORD(v14) = 0;
    if ( (unsigned int)SeQuerySecurityAttributesToken(a1, (int)&dword_14025D1A8, 1, 0LL, v14, (__int64)&v15) == -1073741789 )
      *v5 |= 4uLL;
  }
  return 0LL;
}
