/*
 * XREFs of RtlUnicodeStringCopy @ 0x1C0013864
 * Callers:
 *     GetImageName @ 0x1C00136B4 (GetImageName.c)
 * Callees:
 *     RtlWideCharArrayCopyWorker @ 0x1C001390C (RtlWideCharArrayCopyWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x1C0015CAC (RtlUnicodeStringValidateWorker.c)
 */

int __fastcall RtlUnicodeStringCopy(
        _UNICODE_STRING *DestinationString,
        const _UNICODE_STRING *SourceString,
        unsigned int a3)
{
  wchar_t *v4; // r14
  int result; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned __int64 v10; // r10
  wchar_t *Buffer; // rbp
  unsigned __int64 cchSrcLength; // rsi
  __int16 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 cchNewDestLength; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const unsigned __int64)SourceString, a3);
  if ( result >= 0 )
  {
    if ( v8 )
      v4 = *(wchar_t **)(v8 + 8);
    cchNewDestLength = v10;
    Buffer = (wchar_t *)v10;
    cchSrcLength = v10;
    result = RtlUnicodeStringValidateWorker(SourceString, v7, v9);
    if ( result >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        cchSrcLength = (unsigned __int64)SourceString->Length >> 1;
      }
      result = RtlWideCharArrayCopyWorker(v4, v14, &cchNewDestLength, Buffer, cchSrcLength);
      v13 = cchNewDestLength;
    }
    DestinationString->Length = 2 * v13;
  }
  return result;
}
