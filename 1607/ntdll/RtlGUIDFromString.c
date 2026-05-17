/*
 * XREFs of RtlGUIDFromString @ 0x18005E530
 * Callers:
 *     RtlQueryPackageClaims @ 0x18005E0D0 (RtlQueryPackageClaims.c)
 * Callees:
 *     ScanHexFormat @ 0x18005E73C (ScanHexFormat.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGUIDFromString(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  _BYTE *v8; // rcx
  __int16 *v9; // rdx
  __int16 v11; // [rsp+78h] [rbp+37h] BYREF
  __int64 v12; // [rsp+7Ah] [rbp+39h] BYREF
  int v13; // [rsp+82h] [rbp+41h] BYREF
  __int16 v14; // [rsp+86h] [rbp+45h] BYREF

  v2 = a2 + 4;
  v12 = 0LL;
  v13 = 0;
  v4 = 0;
  v14 = 0;
  v5 = a2 + 6;
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 1);
  v11 = 0;
  if ( (unsigned int)ScanHexFormat(
                       v7,
                       v6 >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       a2,
                       v2,
                       v5,
                       &v11,
                       &v12,
                       (char *)&v12 + 2,
                       (char *)&v12 + 4,
                       (char *)&v12 + 6,
                       &v13,
                       (char *)&v13 + 2,
                       &v14) == -1 )
    return 3221225485LL;
  v8 = (_BYTE *)(a2 + 8);
  v9 = &v11;
  do
  {
    ++v4;
    *v8++ = *(_BYTE *)v9++;
  }
  while ( (unsigned __int64)v4 < 8 );
  return 0LL;
}
