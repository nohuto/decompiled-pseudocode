/*
 * XREFs of AslStringAnsiToUnicode @ 0x140704FA4
 * Callers:
 *     AslpFileGet16BitDescription @ 0x140705F7C (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x14070605C (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x140706564 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x140706908 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x14011A9A4 (RtlInitString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406C7C48 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const CHAR *a2)
{
  __int64 v3; // rcx
  ULONG v4; // edi
  wchar_t *Buffer; // rbx
  NTSTATUS v6; // esi
  __int64 v7; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  OEM_STRING OemString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitString(&OemString, a2);
  if ( (_BYTE)NlsMbCodePageTag )
    v4 = RtlxOemStringToUnicodeSize(&OemString);
  else
    v4 = 2 * OemString.Length + 2;
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
      v6 = RtlAnsiStringToUnicodeString(&DestinationString, &OemString, 0);
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
