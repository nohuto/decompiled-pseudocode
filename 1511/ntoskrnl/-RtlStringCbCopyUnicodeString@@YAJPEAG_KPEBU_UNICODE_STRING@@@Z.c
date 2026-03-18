/*
 * XREFs of ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140207D90
 * Callers:
 *     SmKmKeyGenStart @ 0x14065AB88 (SmKmKeyGenStart.c)
 * Callees:
 *     sub_140207E34 @ 0x140207E34 (sub_140207E34.c)
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        const struct _UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rdi
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2 >> 1;
  v5 = 0;
  if ( (a2 >> 1) - 1 > 0x7FFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v5 = sub_140207E34(a3, &v10, &v9);
    if ( v5 >= 0 )
    {
      v5 = 0;
      if ( !v3 )
        goto LABEL_10;
      v6 = v9 - v3;
      v7 = v10 - (_QWORD)a1;
      do
      {
        if ( !(v6 + v3) )
          break;
        *a1 = *(unsigned __int16 *)((char *)a1 + v7);
        ++a1;
        --v3;
      }
      while ( v3 );
      if ( !v3 )
      {
LABEL_10:
        --a1;
        v5 = -2147483643;
      }
    }
    *a1 = 0;
  }
  return (unsigned int)v5;
}
