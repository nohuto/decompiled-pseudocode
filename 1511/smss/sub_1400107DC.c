/*
 * XREFs of sub_1400107DC @ 0x1400107DC
 * Callers:
 *     sub_14000982C @ 0x14000982C (sub_14000982C.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_14001059C @ 0x14001059C (sub_14001059C.c)
 *     sub_14001067C @ 0x14001067C (sub_14001067C.c)
 *     sub_140010A04 @ 0x140010A04 (sub_140010A04.c)
 *     sub_140010A74 @ 0x140010A74 (sub_140010A74.c)
 *     sub_140010C6C @ 0x140010C6C (sub_140010C6C.c)
 *     sub_140010DBC @ 0x140010DBC (sub_140010DBC.c)
 *     sub_140011C1C @ 0x140011C1C (sub_140011C1C.c)
 */

__int64 __fastcall sub_1400107DC(
        __int64 a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        PUNICODE_STRING DestinationString)
{
  __int64 v8; // r15
  unsigned __int8 v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __m128i v14; // xmm0
  char *v15; // xmm0_8
  __int16 v16; // si
  char v17[8]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v18; // [rsp+38h] [rbp-59h] BYREF
  char *v19; // [rsp+40h] [rbp-51h]
  void *FileHandle; // [rsp+48h] [rbp-49h] BYREF
  struct _UNICODE_STRING v21; // [rsp+50h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-1h] BYREF
  WCHAR SourceString[4]; // [rsp+A0h] [rbp+Fh] BYREF

  v17[0] = 0;
  v18 = 0LL;
  wcscpy(SourceString, L"?:\\");
  v8 = 0LL;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 3992) == 4 )
  {
LABEL_11:
    v9 = 1;
    goto LABEL_12;
  }
  result = sub_140010C6C(a3, a2, v17);
  if ( (int)result < 0 )
    return result;
  if ( v17[0] != 1 )
  {
    if ( *(_DWORD *)&a2[1].Length )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x60u) >= 0 )
      {
        sub_140010A74(FileHandle, &v18);
        NtClose(FileHandle);
        v8 = v18;
      }
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)sub_140010A04(a2) )
  {
    if ( !*(_DWORD *)&a2[1].Length )
      return 3221225473LL;
    sub_140011C1C(a2);
  }
LABEL_12:
  v11 = *(_QWORD *)(a1 + 4000);
  result = sub_140010DBC(a2, &v18);
  v13 = result;
  if ( (int)result < 0 )
    return result;
  if ( v11 >= v8 + v18 )
  {
    v14 = *(__m128i *)a2;
    v18 = *(_QWORD *)&a2->Length;
    v15 = (char *)_mm_srli_si128(v14, 8).m128i_u64[0];
    v19 = v15;
    if ( v15 )
    {
      v16 = v18;
      if ( (unsigned __int16)v18 >= 8u && RtlCompareMemory(v15, L"\\??\\", 8uLL) == 8 )
      {
        v19 = v15 + 8;
        LOWORD(v18) = v16 - 8;
      }
    }
    sub_14001067C(v12, (unsigned __int16 *)&v18);
    goto LABEL_23;
  }
  if ( v9 )
  {
    RtlInitUnicodeString(&v21, SourceString);
    SourceString[0] = *(_WORD *)(*(_QWORD *)(a4 + 8) + 8LL);
    v13 = sub_14001059C((__int64)&v21, (__int64)L"DUMP", DestinationString);
  }
  else if ( !RtlCreateUnicodeString(DestinationString, a2->Buffer) )
  {
LABEL_23:
    v13 = -1073741670;
  }
  *(_DWORD *)(&a2[1].MaximumLength + 1) = v9;
  return v13;
}
