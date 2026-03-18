/*
 * XREFs of AslStringAnsiToUnicode @ 0x1406C523C
 * Callers:
 *     AslpFileGet16BitDescription @ 0x1406C6E5C (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x1406C6F3C (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x1406C747C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x1406C783C (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x1400A9798 (RtlInitString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14054C968 (RtlxAnsiStringToUnicodeSize.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const char *a2)
{
  __int64 v3; // rcx
  ULONG v4; // edi
  wchar_t *Buffer; // rbx
  unsigned int v6; // esi
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  STRING AnsiString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitString(&AnsiString, a2);
  if ( (_BYTE)NlsMbCodePageTag )
    v4 = RtlxAnsiStringToUnicodeSize(&AnsiString);
  else
    v4 = 2 * AnsiString.Length + 2;
  Buffer = 0LL;
  *a1 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( v4 <= 0xFFFF )
  {
    DestinationString.Buffer = (wchar_t *)AslAlloc(v3, v4);
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Buffer )
    {
      DestinationString.MaximumLength = v4;
      DestinationString.Length = 0;
      v8 = RtlAnsiStringToUnicodeString(&DestinationString, &AnsiString, 0);
      v6 = v8;
      if ( v8 >= 0 )
      {
        Buffer = 0LL;
        *a1 = DestinationString.Buffer;
        v6 = 0;
      }
      else
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"AslStringAnsiToUnicode",
          403,
          (unsigned int)"RtlAnsiStringToUnicodeString failed [%x]",
          v8);
        Buffer = DestinationString.Buffer;
      }
    }
    else
    {
      v6 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslStringAnsiToUnicode", 394, (unsigned int)"Out of memory");
    }
  }
  else
  {
    v6 = -1073741811;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslStringAnsiToUnicode",
      387,
      (unsigned int)"Ansi string is too long to convert at %d",
      v4);
  }
  AslFree(v7, Buffer);
  return v6;
}
