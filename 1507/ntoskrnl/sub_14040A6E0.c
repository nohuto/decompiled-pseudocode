/*
 * XREFs of sub_14040A6E0 @ 0x14040A6E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_14040ABD4 @ 0x14040ABD4 (sub_14040ABD4.c)
 *     sub_14040C7E8 @ 0x14040C7E8 (sub_14040C7E8.c)
 */

__int64 __fastcall sub_14040A6E0(__int64 a1)
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
  v13 = asc_1405D1DC0[6];
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
    v7 = sub_14040C7E8(&v10, 5636096LL, 0LL, 0LL, v3, v4, 0LL, 0LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( *v3 )
      {
        do
          sub_14040ABD4(a1, v3[6 * v2++ + 2]);
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
