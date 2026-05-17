/*
 * XREFs of RtlpOpenAndMapCustomCultureFile @ 0x1800E0C1C
 * Callers:
 *     RtlpGetCustomCultureData @ 0x1800E0640 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtOpenFile @ 0x180093C30 (NtOpenFile.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     RtlStringCchCatW @ 0x1800D4DF0 (RtlStringCchCatW.c)
 *     RtlStringCchCopyW @ 0x1800D4E70 (RtlStringCchCopyW.c)
 *     RtlpGetFileSize @ 0x1800E07CC (RtlpGetFileSize.c)
 */

__int64 __fastcall RtlpOpenAndMapCustomCultureFile(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int Section; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v9[3]; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF

  if ( (int)RtlStringCchCopyW(SourceString, 256LL, (__int64)L"\\SystemRoot\\Globalization\\") < 0
    || (int)RtlStringCchCatW(SourceString, 256LL, a1) < 0
    || (int)RtlStringCchCatW(SourceString, 256LL, (__int64)L".nlp") < 0 )
  {
    return 3221225473LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( Section >= 0 )
  {
    if ( (int)RtlpGetFileSize((__int64)FileHandle, v9) < 0 || HIDWORD(v9[0]) )
    {
      Section = -1073741823;
    }
    else
    {
      *a3 = LODWORD(v9[0]);
      Section = NtCreateSection();
      if ( Section >= 0 )
      {
        *a2 = 0LL;
        v9[2] = 0LL;
        Section = ZwMapViewOfSection();
        NtClose(v9[1]);
      }
    }
    NtClose(FileHandle);
  }
  return (unsigned int)Section;
}
