/*
 * XREFs of SdbMakeIndexKeyFromStringEx @ 0x140484E1C
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x140484C74 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002DD60 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeString @ 0x140514D50 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromStringEx(PCWSTR SourceString, unsigned __int8 a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rbx
  unsigned __int16 *v5; // rsi
  const WCHAR *v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING SourceStringa; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-30h] BYREF
  char v15; // [rsp+60h] [rbp-20h] BYREF

  v2 = -1LL;
  v3 = (char *)&SourceStringa.MaximumLength + 5;
  do
    ++v2;
  while ( SourceString[v2] );
  v5 = (unsigned __int16 *)v14;
  if ( v2 > 8 && ((a2 >> 1) & 1) != 0 )
    v6 = &SourceString[v2 - 8];
  else
    v6 = SourceString;
  RtlInitUnicodeString(&DestinationString, v6);
  SourceStringa.Buffer = (wchar_t *)&v15;
  SourceStringa.MaximumLength = 16;
  RtlCopyUnicodeString(&SourceStringa, &DestinationString);
  DestinationString.MaximumLength = 16;
  DestinationString.Buffer = (wchar_t *)v14;
  if ( RtlUpcaseUnicodeString(&DestinationString, &SourceStringa, 0) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbMakeIndexKeyFromStringEx",
      1178,
      (unsigned int)"Failed to upcase unicode string \"%ws\"",
      SourceString);
    return 0LL;
  }
  else
  {
    result = 0LL;
    v8 = (unsigned __int64)DestinationString.Length >> 1;
    if ( v8 <= 8 )
    {
      *(_QWORD *)&SourceStringa.Length = 0LL;
      v9 = 0LL;
      if ( v8 )
      {
        do
        {
          v10 = *v5++;
          *v3-- = v10;
          v11 = HIBYTE(v10);
          if ( (_BYTE)v11 )
          {
            if ( v9 < 7 )
            {
              *v3-- = v11;
              ++v9;
            }
          }
          ++v9;
        }
        while ( v9 < v8 );
        return *(_QWORD *)&SourceStringa.Length;
      }
    }
  }
  return result;
}
