/*
 * XREFs of RtlpOpenAndMapCustomCultureFile @ 0x1800E6370
 * Callers:
 *     RtlpGetCustomCultureData @ 0x1800E5D94 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtOpenFile @ 0x1800A5720 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     RtlStringCchCatW @ 0x1800DCD10 (RtlStringCchCatW.c)
 *     RtlStringCchCopyW @ 0x1800DCD90 (RtlStringCchCopyW.c)
 *     RtlpGetFileSize @ 0x1800E5F20 (RtlpGetFileSize.c)
 */

__int64 __fastcall RtlpOpenAndMapCustomCultureFile(__int64 a1, PVOID *a2, _QWORD *a3)
{
  NTSTATUS v6; // ebx
  HANDLE v7; // rcx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
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
  v6 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v6 >= 0 )
  {
    if ( RtlpGetFileSize(FileHandle, &v10) < 0 || HIDWORD(v10) )
    {
      v6 = -1073741823;
    }
    else
    {
      *a3 = (unsigned int)v10;
      v6 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
      if ( v6 >= 0 )
      {
        v7 = SectionHandle;
        *a2 = 0LL;
        ViewSize = 0LL;
        v6 = ZwMapViewOfSection(v7, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
        NtClose(SectionHandle);
      }
    }
    NtClose(FileHandle);
  }
  return (unsigned int)v6;
}
