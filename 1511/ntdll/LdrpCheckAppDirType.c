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

void __fastcall LdrpCheckAppDirType(_UNICODE_STRING *a1)
{
  int v1; // ecx
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v4; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING v5; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING *v6; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v10; // [rsp+C0h] [rbp-40h] BYREF

  *(_DWORD *)&v5.Length = 0x1000000;
  v5.Buffer = (unsigned __int16 *)&v10;
  v4 = 0;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, 0, a1, &v5, &UnicodeString, &v6, 0LL, 0LL) >= 0 )
  {
    ObjectAttributes.ObjectName = v6;
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
