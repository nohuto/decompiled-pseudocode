/*
 * XREFs of _ResCreateFile @ 0x1800F98D4
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1800F92CC (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x1800F965C (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 *     BaseIsThisAConsoleName @ 0x1800F8DC0 (BaseIsThisAConsoleName.c)
 */

__int64 __fastcall ResCreateFile(PCWSTR DosFileName, int a2, ULONG a3)
{
  NTSTATUS inited; // eax
  NTSTATUS v7; // ecx
  LONG v8; // ecx
  int v10; // edi
  unsigned __int16 *Buffer; // r14
  HANDLE ContainingDirectory; // rax
  int v13; // ebx
  LONG v14; // eax
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-81h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-71h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+78h] [rbp-69h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-49h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-19h] BYREF
  _DWORD v20[2]; // [rsp+D8h] [rbp-9h] BYREF
  __int16 v21; // [rsp+E0h] [rbp-1h]

  inited = RtlInitUnicodeStringEx(&DestinationString, DosFileName);
  if ( inited < 0 )
  {
    v7 = inited;
LABEL_3:
    v8 = RtlNtStatusToDosError(v7);
    goto LABEL_4;
  }
  if ( DestinationString.Length <= 1u
    || (v10 = 1, DosFileName[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92) )
  {
    v10 = 0;
  }
  if ( BaseIsThisAConsoleName(&DestinationString.Length, a2) )
  {
    v7 = -1073741790;
    goto LABEL_3;
  }
  if ( !RtlDosPathNameToRelativeNtPathName_U(DosFileName, &DestinationString, 0LL, &RelativeName) )
  {
    v8 = 3;
    goto LABEL_4;
  }
  Buffer = DestinationString.Buffer;
  if ( RelativeName.RelativeName.Length )
  {
    ContainingDirectory = RelativeName.ContainingDirectory;
    DestinationString = RelativeName.RelativeName;
  }
  else
  {
    ContainingDirectory = 0LL;
    RelativeName.ContainingDirectory = 0LL;
  }
  ObjectAttributes.RootDirectory = ContainingDirectory;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityQualityOfService = v20;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v21 = 257;
  v20[1] = 2;
  v20[0] = 12;
  v13 = ZwCreateFile(&FileHandle, a2 | 0x100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, a3, 1u, 0x60u, 0LL, 0);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, 0LL);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  if ( v13 < 0 )
  {
    v14 = RtlNtStatusToDosError(v13);
    RtlSetLastWin32Error(v14);
    if ( v13 == -1073741771 )
    {
      v8 = 80;
    }
    else
    {
      if ( v13 != -1073741638 )
        return -1LL;
      v8 = 3;
      if ( !v10 )
        v8 = 5;
    }
LABEL_4:
    RtlSetLastWin32Error(v8);
    return -1LL;
  }
  RtlSetLastWin32Error(0);
  return (__int64)FileHandle;
}
