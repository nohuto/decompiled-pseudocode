/*
 * XREFs of sub_140495840 @ 0x140495840
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     sub_140496110 @ 0x140496110 (sub_140496110.c)
 *     sub_1404964E4 @ 0x1404964E4 (sub_1404964E4.c)
 */

__int64 __fastcall sub_140495840(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int *v3; // rbx
  unsigned int v4; // r14d
  int i; // ebp
  unsigned int *PoolWithTag; // rax
  int v7; // eax
  unsigned int v8; // esi
  UNICODE_STRING v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  int v12; // [rsp+58h] [rbp-30h]
  wchar_t v13; // [rsp+5Ch] [rbp-2Ch]

  v12 = *(_DWORD *)L"x:";
  v2 = 0;
  v3 = 0LL;
  v13 = asc_140558C80[6];
  v11 = *(_QWORD *)L"\\??\\x:";
  LOWORD(v12) = *NtSystemRoot.Buffer;
  RtlInitUnicodeString(&v10, (PCWSTR)&v11);
  v4 = 32;
  for ( i = 0; ; i = 1 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v4, 0x20534C53u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, v4);
    v7 = sub_1404964E4(&v10, 5636096LL, 0LL, 0LL, v3, v4, 0LL, 0LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( *v3 )
      {
        do
          sub_140496110(a1, v3[6 * v2++ + 2]);
        while ( v2 < *v3 );
      }
LABEL_8:
      ExFreePoolWithTag(v3, 0);
      return v8;
    }
    if ( v7 != -2147483643 || i )
      goto LABEL_8;
    v4 += 24 * (*v3 - 1);
  }
  return (unsigned int)-1073741670;
}
