/*
 * XREFs of AslStringAnsiToUnicode @ 0x140680170
 * Callers:
 *     AslpFileGet16BitDescription @ 0x140681234 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x140681314 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x14068181C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x140681BC0 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x1400E561C (RtlInitString.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14051B04C (RtlxAnsiStringToUnicodeSize.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
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
        AslLogCallPrintf(1LL);
        Buffer = DestinationString.Buffer;
      }
    }
    else
    {
      v6 = -1073741801;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    v6 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  AslFree(v7, Buffer);
  return (unsigned int)v6;
}
