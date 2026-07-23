/*
 * XREFs of AdtpInitializeDriveLetters @ 0x1405705F8
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1405700F8 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtOpenSymbolicLinkObject @ 0x140462F14 (NtOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1404AC0F4 (NtQuerySymbolicLinkObject.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

__int64 AdtpInitializeDriveLetters()
{
  unsigned int v0; // edi
  WCHAR *v1; // rcx
  __int64 v2; // rdx
  WCHAR v3; // ax
  wchar_t *Buffer; // r13
  int v5; // esi
  NTSTATUS SymbolicLinkObject; // ebx
  unsigned int v7; // ebx
  char v8; // r14
  UNICODE_STRING *v9; // rsi
  UNICODE_STRING *v11; // r14
  PVOID PoolWithTag; // rax
  void *v13; // r15
  HANDLE v14; // rcx
  HANDLE SymbolicLinkHandle; // [rsp+28h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  WCHAR SourceString[32]; // [rsp+70h] [rbp-11h] BYREF

  SymbolicLinkHandle = 0LL;
  v0 = 0;
  v1 = SourceString;
  v2 = 31LL;
  do
  {
    if ( v2 == -2147483615 )
      break;
    v3 = *(WCHAR *)((char *)v1 + (char *)L"\\DosDevices\\A:" - (char *)SourceString);
    if ( !v3 )
      break;
    *v1++ = v3;
    --v2;
  }
  while ( v2 );
  if ( !v2 )
    --v1;
  *v1 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  Buffer = DestinationString.Buffer;
  v5 = 0;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    Buffer[12] = v5 + 65;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 1u, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
      break;
LABEL_9:
    if ( (unsigned int)++v5 >= 0x1A )
      goto LABEL_10;
  }
  *((_WORD *)&DriveMappingArray + 12 * v0) = Buffer[12];
  v11 = (UNICODE_STRING *)((char *)&DriveMappingArray + 24 * v0 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6B416553u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    v14 = SymbolicLinkHandle;
    *(_DWORD *)&v11->Length = 0x1000000;
    *((_QWORD *)&DriveMappingArray + 3 * v0 + 2) = PoolWithTag;
    SymbolicLinkObject = NtQuerySymbolicLinkObject(v14, v11, 0LL);
    NtClose(SymbolicLinkHandle);
    if ( SymbolicLinkObject < 0 )
    {
      ExFreePoolWithTag(v13, 0);
      RtlInitUnicodeString(v11, 0LL);
    }
    else
    {
      ++v0;
    }
    goto LABEL_9;
  }
  SymbolicLinkObject = -1073741801;
LABEL_10:
  if ( SymbolicLinkObject == -1073741801 )
    return 3221225495LL;
  v7 = 0;
  while ( v7 < v0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    v8 = 0;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = (UNICODE_STRING *)((char *)&DriveMappingArray + 16 * v7 + 8 * v7 + 8);
    ObjectAttributes.ObjectName = v9;
    if ( NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      if ( NtQuerySymbolicLinkObject(SymbolicLinkHandle, v9, 0LL) < 0 )
      {
        ExFreePoolWithTag(v9->Buffer, 0);
        RtlInitUnicodeString(v9, 0LL);
      }
      else
      {
        v8 = 1;
      }
      NtClose(SymbolicLinkHandle);
      if ( v8 )
        continue;
    }
    ++v7;
  }
  return 0LL;
}
