/*
 * XREFs of RtlUnicodeStringCopy @ 0x1C000E460
 * Callers:
 *     GetImageName @ 0x1C000E28C (GetImageName.c)
 * Callees:
 *     RtlWideCharArrayCopyWorker @ 0x1C000E504 (RtlWideCharArrayCopyWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x1C00313C0 (RtlUnicodeStringValidateWorker.c)
 */

int __fastcall RtlUnicodeStringCopy(
        _UNICODE_STRING *DestinationString,
        const _UNICODE_STRING *SourceString,
        unsigned int a3)
{
  unsigned __int16 *v4; // r14
  int result; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned __int64 v10; // r10
  unsigned __int16 *Buffer; // rbp
  unsigned __int64 cchSrcLength; // rsi
  __int16 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 cchNewDestLength; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const unsigned __int64)SourceString, a3);
  if ( result >= 0 )
  {
    if ( v8 )
      v4 = *(unsigned __int16 **)(v8 + 8);
    cchNewDestLength = v10;
    Buffer = (unsigned __int16 *)v10;
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
