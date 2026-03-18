/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x1400D18D8
 * Callers:
 *     PoStoreRequester @ 0x1400D0B50 (PoStoreRequester.c)
 *     PopSafeCopyUnicodeString @ 0x1400D1828 (PopSafeCopyUnicodeString.c)
 * Callees:
 *     sub_1400D197C @ 0x1400D197C (sub_1400D197C.c)
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  size_t v3; // rdi
  NTSTATUS v5; // ecx
  size_t v6; // rdx
  __int64 v7; // r8
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = cbDest >> 1;
  v5 = 0;
  if ( (cbDest >> 1) - 1 > 0x7FFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v5 = sub_1400D197C(SourceString, &v10, &v9);
    if ( v5 >= 0 )
    {
      v5 = 0;
      if ( !v3 )
        goto LABEL_12;
      v6 = v9 - v3;
      v7 = v10 - (_QWORD)pszDest;
      do
      {
        if ( !(v6 + v3) )
          break;
        *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
        ++pszDest;
        --v3;
      }
      while ( v3 );
      if ( !v3 )
      {
LABEL_12:
        --pszDest;
        v5 = -2147483643;
      }
    }
    *pszDest = 0;
  }
  return v5;
}
