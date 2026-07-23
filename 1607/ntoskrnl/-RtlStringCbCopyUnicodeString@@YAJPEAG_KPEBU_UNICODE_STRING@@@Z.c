/*
 * XREFs of ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140220158
 * Callers:
 *     SmKmKeyGenStart @ 0x140698898 (SmKmKeyGenStart.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x1402201FC (RtlUnicodeStringValidateSrcWorker.c)
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(char *a1, unsigned __int64 a2, const struct _UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rdi
  NTSTATUS v5; // ecx
  size_t v6; // rdx
  signed __int64 v7; // r8
  ULONG v9; // [rsp+20h] [rbp-18h]
  size_t v10; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2 >> 1;
  v5 = 0;
  if ( (a2 >> 1) - 1 > 0x7FFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v5 = RtlUnicodeStringValidateSrcWorker(a3, &v11, &v10, (const size_t)a3, v9);
    if ( v5 >= 0 )
    {
      v5 = 0;
      if ( !v3 )
        goto LABEL_10;
      v6 = v10 - v3;
      v7 = (char *)v11 - a1;
      do
      {
        if ( !(v6 + v3) )
          break;
        *(_WORD *)a1 = *(_WORD *)&a1[v7];
        a1 += 2;
        --v3;
      }
      while ( v3 );
      if ( !v3 )
      {
LABEL_10:
        a1 -= 2;
        v5 = -2147483643;
      }
    }
    *(_WORD *)a1 = 0;
  }
  return (unsigned int)v5;
}
