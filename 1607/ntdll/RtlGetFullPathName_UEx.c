/*
 * XREFs of RtlGetFullPathName_UEx @ 0x180011760
 * Callers:
 *     RtlGetFullPathName_U @ 0x18006A920 (RtlGetFullPathName_U.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D820 (RtlGetFullPathName_Ustr.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UEx(
        PCWSTR FileName,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart,
        ULONG *BytesRequired)
{
  ULONG *v5; // rbx
  NTSTATUS result; // eax
  ULONG FullPathName_Ustr; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, FileName);
  if ( result >= 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(&DestinationString, BufferLength, Buffer, FilePart, 0LL, &BytesRequired);
    if ( FullPathName_Ustr )
    {
      if ( v5 )
        *v5 = FullPathName_Ustr;
      return 0;
    }
    else
    {
      return -1073741773;
    }
  }
  return result;
}
