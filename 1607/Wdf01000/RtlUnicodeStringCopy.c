/*
 * XREFs of RtlUnicodeStringCopy @ 0x1C0017900
 * Callers:
 *     GetImageName @ 0x1C0017740 (GetImageName.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C00179C8 (RtlUnicodeStringValidateWorker.c)
 */

int __fastcall RtlUnicodeStringCopy(
        _UNICODE_STRING *DestinationString,
        const _UNICODE_STRING *SourceString,
        unsigned int a3)
{
  __int16 v3; // di
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int result; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  int v12; // ecx
  wchar_t *Buffer; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rsi

  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const unsigned __int64)SourceString, a3);
  if ( result >= 0 )
  {
    if ( v10 )
    {
      v5 = *(_QWORD *)(v10 + 8);
      v6 = (unsigned __int64)*(unsigned __int16 *)(v10 + 2) >> 1;
    }
    v12 = RtlUnicodeStringValidateWorker(SourceString, v9, v11);
    if ( v12 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v14 = (unsigned __int64)SourceString->Length >> 1;
      }
      v12 = 0;
      if ( v6 )
      {
        v15 = v5 - (_QWORD)Buffer;
        while ( v14 )
        {
          --v14;
          *(wchar_t *)((char *)Buffer + v15) = *Buffer;
          ++v3;
          ++Buffer;
          if ( !--v6 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        if ( v14 )
          v12 = -2147483643;
      }
    }
    result = v12;
    DestinationString->Length = 2 * v3;
  }
  return result;
}
