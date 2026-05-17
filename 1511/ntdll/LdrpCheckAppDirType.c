/*
 * XREFs of LdrpCheckAppDirType @ 0x1800CA8C4
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenFile @ 0x1800A5720 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A59E0 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall LdrpCheckAppDirType(__m128i *a1)
{
  int v1; // ecx
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v3; // [rsp+4Ch] [rbp-B4h]
  int v4; // [rsp+50h] [rbp-B0h] BYREF
  char *v5; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING *v6; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v10; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0x1000000;
  v5 = &v10;
  v3 = 0;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlDosPathNameToRelativeNtPathName(
              0,
              0,
              a1,
              (unsigned __int16 *)&v4,
              &UnicodeString.Length,
              (unsigned __int16 **)&v6,
              0LL,
              0LL) >= 0 )
  {
    ObjectAttributes.ObjectName = v6;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && (int)ZwQueryVolumeInformationFile() >= 0 )
    {
      v1 = LdrpIllegalCWDDevices;
      if ( (v3 & LdrpIllegalCWDDevices) != 0 )
        v1 = 0;
      LdrpIllegalCWDDevices = v1;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
