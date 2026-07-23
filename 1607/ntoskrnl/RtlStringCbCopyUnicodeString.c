/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x1400FA390
 * Callers:
 *     PoStoreRequester @ 0x1400F914C (PoStoreRequester.c)
 *     PopSafeCopyUnicodeString @ 0x1400FA2DC (PopSafeCopyUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  unsigned __int16 Length; // ax
  wchar_t *v7; // r11
  unsigned __int64 v8; // r8
  unsigned __int16 MaximumLength; // r10
  wchar_t *Buffer; // rbx
  unsigned __int64 v11; // r8
  signed __int64 v12; // r11

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    Length = SourceString->Length;
    v7 = 0LL;
    v8 = 0LL;
    v4 = 0;
    if ( (Length & 1) != 0
      || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
      || Length > MaximumLength
      || MaximumLength == 0xFFFF )
    {
      v4 = -1073741811;
    }
    else
    {
      Buffer = SourceString->Buffer;
      if ( !Buffer && (Length || MaximumLength) )
      {
        v4 = -1073741811;
      }
      else
      {
        v7 = Buffer;
        v8 = (unsigned __int64)Length >> 1;
      }
      if ( v4 >= 0 )
      {
        v4 = 0;
        if ( !v3 )
          goto LABEL_18;
        v11 = v8 - v3;
        v12 = (char *)v7 - (char *)pszDest;
        do
        {
          if ( !(v11 + v3) )
            break;
          *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v12);
          ++pszDest;
          --v3;
        }
        while ( v3 );
        if ( !v3 )
        {
LABEL_18:
          --pszDest;
          v4 = -2147483643;
        }
      }
    }
    *pszDest = 0;
  }
  return v4;
}
