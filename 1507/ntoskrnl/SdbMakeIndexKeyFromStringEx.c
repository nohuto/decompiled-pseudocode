/*
 * XREFs of SdbMakeIndexKeyFromStringEx @ 0x140578004
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x140577774 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeString @ 0x140443520 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromStringEx(const WCHAR *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rbx
  unsigned __int16 *v4; // rsi
  const WCHAR *v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int16 v9; // ax
  __int16 v10; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-30h] BYREF
  char v14; // [rsp+60h] [rbp-20h] BYREF

  v2 = -1LL;
  v3 = (char *)&SourceString.MaximumLength + 5;
  do
    ++v2;
  while ( a1[v2] );
  v4 = (unsigned __int16 *)v13;
  if ( v2 > 8 && ((a2 >> 1) & 1) != 0 )
    v5 = &a1[v2 - 8];
  else
    v5 = a1;
  RtlInitUnicodeString(&DestinationString, v5);
  SourceString.Buffer = (wchar_t *)&v14;
  SourceString.MaximumLength = 16;
  RtlCopyUnicodeString(&SourceString, &DestinationString);
  DestinationString.MaximumLength = 16;
  DestinationString.Buffer = (wchar_t *)v13;
  if ( RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbMakeIndexKeyFromStringEx",
      1178,
      (unsigned int)"Failed to upcase unicode string \"%ws\"");
    return 0LL;
  }
  else
  {
    result = 0LL;
    v7 = (unsigned __int64)DestinationString.Length >> 1;
    if ( v7 <= 8 )
    {
      *(_QWORD *)&SourceString.Length = 0LL;
      v8 = 0LL;
      if ( v7 )
      {
        do
        {
          v9 = *v4++;
          *v3-- = v9;
          v10 = HIBYTE(v9);
          if ( (_BYTE)v10 )
          {
            if ( v8 < 7 )
            {
              *v3-- = v10;
              ++v8;
            }
          }
          ++v8;
        }
        while ( v8 < v7 );
        return *(_QWORD *)&SourceString.Length;
      }
    }
  }
  return result;
}
