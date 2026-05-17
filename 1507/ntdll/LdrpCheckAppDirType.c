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

void __fastcall LdrpCheckAppDirType(__int128 *a1)
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
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, 0, a1, (unsigned __int16 *)&v4, &UnicodeString.Length, &v6, 0LL, 0LL) >= 0 )
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
