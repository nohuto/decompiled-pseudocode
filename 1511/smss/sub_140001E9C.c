/*
 * XREFs of sub_140001E9C @ 0x140001E9C
 * Callers:
 *     sub_140001A30 @ 0x140001A30 (sub_140001A30.c)
 *     sub_140001C10 @ 0x140001C10 (sub_140001C10.c)
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 *     sub_140011F90 @ 0x140011F90 (sub_140011F90.c)
 * Callees:
 *     sub_140001D7C @ 0x140001D7C (sub_140001D7C.c)
 *     sub_140001FB0 @ 0x140001FB0 (sub_140001FB0.c)
 *     sub_140002540 @ 0x140002540 (sub_140002540.c)
 *     sub_140004DD8 @ 0x140004DD8 (sub_140004DD8.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 */

__int64 __fastcall sub_140001E9C(__int64 a1, __int64 a2, __int64 a3, int a4, PRTL_USER_PROCESS_INFORMATION a5)
{
  struct _UNICODE_STRING *v6; // rdi
  __int64 result; // rax
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v12; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v13; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+98h] [rbp+38h] BYREF

  v14 = a4;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v6 = &v13;
  if ( (a4 & 0x400) != 0 )
    v6 = 0LL;
  result = sub_140001FB0(a1, &v14, &UnicodeString, v6);
  if ( (int)result >= 0 )
  {
    if ( (v14 & 4) != 0 )
    {
      v9 = sub_140004DD8(&UnicodeString);
    }
    else if ( (v14 & 8) != 0 )
    {
      if ( byte_1400208E1 )
        v9 = sub_140012044(&UnicodeString, (int)&v12, v14);
      else
        v9 = sub_140001D7C(&UnicodeString, (__int64)v6, a1, v8, v14);
    }
    else
    {
      if ( (v14 & 0x10) != 0 )
      {
        v10 = -1073741772;
        goto LABEL_10;
      }
      v9 = sub_140002540(&UnicodeString, v14, a5);
    }
    v10 = v9;
LABEL_10:
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&v12);
    if ( v6 )
      RtlFreeUnicodeString(&v13);
    return v10;
  }
  return result;
}
