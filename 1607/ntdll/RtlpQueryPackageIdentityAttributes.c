/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x18005E254
 * Callers:
 *     RtlQueryPackageClaims @ 0x18005E0D0 (RtlQueryPackageClaims.c)
 * Callees:
 *     ZwQuerySecurityAttributesToken @ 0x1800A8CF0 (ZwQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlpQueryPackageIdentityAttributes(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  char v9; // si
  unsigned int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 1;
  v10 = 1;
  if ( a4 || v5 )
    v10 = 2;
  result = ZwQuerySecurityAttributesToken(a1, &unk_180108428, v10, a3, 816, &v13);
  if ( (int)result < 0 )
  {
    if ( v10 == 1 )
      return result;
    if ( (_DWORD)result != -1073741275 )
      return result;
    result = ZwQuerySecurityAttributesToken(a1, &unk_180108428, 1LL, a3, 816, &v13);
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
    if ( (unsigned int)ZwQuerySecurityAttributesToken(a1, &unk_180108448, 1LL, 0LL, 0, &v13) == -1073741789 )
      *v5 |= 4uLL;
  }
  return 0LL;
}
