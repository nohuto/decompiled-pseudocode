/*
 * XREFs of _ResGetFileAttributesEx @ 0x180104888
 * Callers:
 *     ResCCreateCultureMap @ 0x180105584 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1801059BC (ResCLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x180105A60 (ResCReloadCultureMap.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x18000E920 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180011730 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryFullAttributesFile @ 0x1800A8A90 (NtQueryFullAttributesFile.c)
 */

__int64 __fastcall ResGetFileAttributesEx(const WCHAR *a1, __int64 a2, __int64 a3)
{
  LONG v4; // ecx
  wchar_t *Buffer; // rsi
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
