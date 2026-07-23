/*
 * XREFs of LdrpCheckAppDirType @ 0x1800BDC24
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenFile @ 0x180093C30 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x180093D90 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall LdrpCheckAppDirType(_UNICODE_STRING *a1)
{
  int v1; // ecx
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v4; // [rsp+4Ch] [rbp-B4h]
  int v5; // [rsp+50h] [rbp-B0h] BYREF
  char *v6; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING *v7; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v11; // [rsp+C0h] [rbp-40h] BYREF

  v5 = 0x1000000;
  v6 = &v11;
  v4 = 0;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, 0, a1, (unsigned __int16 *)&v5, &UnicodeString.Length, &v7, 0LL, 0LL) >= 0 )
  {
    ObjectAttributes.ObjectName = v7;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation) >= 0 )
    {
      v1 = LdrpIllegalCWDDevices;
      if ( (v4 & LdrpIllegalCWDDevices) != 0 )
        v1 = 0;
      LdrpIllegalCWDDevices = v1;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
