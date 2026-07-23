/*
 * XREFs of LdrpCheckAppDirType @ 0x1800D1F34
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenFile @ 0x1800A6A80 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A6D40 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall LdrpCheckAppDirType(_UNICODE_STRING *a1)
{
  int v1; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v4; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING *v5; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v6; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v10; // [rsp+C0h] [rbp-40h] BYREF

  *(_DWORD *)&v6.Length = 0x1000000;
  v6.Buffer = (wchar_t *)&v10;
  v4 = 0;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, 0, a1, &v6, &UnicodeString, &v5, 0LL, 0LL) >= 0 )
  {
    ObjectAttributes.ObjectName = v5;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation) >= 0 )
    {
      v1 = LdrpIllegalCWDDevices;
      if ( (LdrpIllegalCWDDevices & v4) != 0 )
        v1 = 0;
      LdrpIllegalCWDDevices = v1;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
