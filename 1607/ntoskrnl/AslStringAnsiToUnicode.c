/*
 * XREFs of AslStringAnsiToUnicode @ 0x1406C5374
 * Callers:
 *     AslpFileGet16BitDescription @ 0x1406C6F94 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x1406C7074 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x1406C75B4 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x1406C7974 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x1400A7D18 (RtlInitString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14054CEA8 (RtlxAnsiStringToUnicodeSize.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const CHAR *a2)
{
  __int64 v3; // rcx
  ULONG v4; // edi
  wchar_t *Buffer; // rbx
  NTSTATUS v6; // esi
  __int64 v7; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ANSI_STRING AnsiString; // [rsp+40h] [rbp-18h] BYREF

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
      v6 = RtlAnsiStringToUnicodeString(&DestinationString, &AnsiString, 0);
      if ( v6 >= 0 )
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
          (unsigned int)"RtlAnsiStringToUnicodeString failed [%x]");
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
      (unsigned int)"Ansi string is too long to convert at %d");
  }
  AslFree(v7, Buffer);
  return (unsigned int)v6;
}
