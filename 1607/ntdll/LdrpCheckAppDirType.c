/*
 * XREFs of LdrpCheckAppDirType @ 0x1800D1E74
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenFile @ 0x1800A6A80 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A6D40 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall LdrpCheckAppDirType(__m128i *a1)
{
  int v1; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v3; // [rsp+4Ch] [rbp-B4h]
  UNICODE_STRING *v4; // [rsp+50h] [rbp-B0h] BYREF
  int v5; // [rsp+58h] [rbp-A8h] BYREF
  char *v6; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v10; // [rsp+C0h] [rbp-40h] BYREF

  v5 = 0x1000000;
  v6 = &v10;
  v3 = 0;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlDosPathNameToRelativeNtPathName(
              0,
              0,
              a1,
              (unsigned __int16 *)&v5,
              &UnicodeString.Length,
              (unsigned __int16 **)&v4,
              0LL,
              0LL) >= 0 )
  {
    ObjectAttributes.ObjectName = v4;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && (int)ZwQueryVolumeInformationFile() >= 0 )
    {
      v1 = LdrpIllegalCWDDevices;
      if ( (LdrpIllegalCWDDevices & v3) != 0 )
        v1 = 0;
      LdrpIllegalCWDDevices = v1;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
