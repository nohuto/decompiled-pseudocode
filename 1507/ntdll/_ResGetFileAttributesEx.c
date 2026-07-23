/*
 * XREFs of _ResGetFileAttributesEx @ 0x1800FA684
 * Callers:
 *     ResCCreateCultureMap @ 0x1800FB7C4 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1800FBBFC (ResCLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x1800FBCA0 (ResCReloadCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryFullAttributesFile @ 0x180094BE0 (NtQueryFullAttributesFile.c)
 */

__int64 __fastcall ResGetFileAttributesEx(const WCHAR *a1, __int64 a2, __int64 a3)
{
  LONG v4; // ecx
  unsigned __int16 *Buffer; // rsi
  HANDLE ContainingDirectory; // rax
  int v7; // edi
  _UNICODE_STRING NtFileName; // [rsp+20h] [rbp-59h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+30h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _FILE_NETWORK_OPEN_INFORMATION FileInformation; // [rsp+80h] [rbp+7h] BYREF

  if ( RtlDosPathNameToRelativeNtPathName_U(a1, &NtFileName, 0LL, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = NtQueryFullAttributesFile(&ObjectAttributes, &FileInformation);
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    if ( v7 >= 0 )
    {
      *(_DWORD *)a3 = FileInformation.FileAttributes;
      *(_QWORD *)(a3 + 4) = FileInformation.CreationTime.QuadPart;
      *(_QWORD *)(a3 + 12) = FileInformation.LastAccessTime.QuadPart;
      *(_QWORD *)(a3 + 20) = FileInformation.LastWriteTime.QuadPart;
      *(_DWORD *)(a3 + 28) = FileInformation.EndOfFile.HighPart;
      *(_DWORD *)(a3 + 32) = FileInformation.EndOfFile.LowPart;
      return 1LL;
    }
    v4 = RtlNtStatusToDosError(v7);
  }
  else
  {
    v4 = 3;
  }
  RtlSetLastWin32Error(v4);
  return 0LL;
}
