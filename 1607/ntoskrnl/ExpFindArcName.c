/*
 * XREFs of ExpFindArcName @ 0x1406B0998
 * Callers:
 *     ExpCreateOutputARC @ 0x1406B044C (ExpCreateOutputARC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     wcsncat_s @ 0x1401536D8 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1401537E4 (wcsncpy_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14015ACF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14015C810 (ZwQueryDirectoryObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     ExpTranslateSymbolicLink @ 0x1406B31E0 (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpFindArcName(const UNICODE_STRING *a1, wchar_t **a2)
{
  BOOLEAN v2; // r12
  wchar_t *PoolWithTag; // rax
  WCHAR *v4; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING *v7; // rsi
  SIZE_T v8; // rbx
  BOOLEAN RestartScan; // r15
  SIZE_T v10; // rdx
  wchar_t *v11; // rax
  wchar_t *v12; // r14
  unsigned int v13; // r13d
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  ULONG BufferLength; // [rsp+100h] [rbp+77h] BYREF
  ULONG Context; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x12uLL, 0x72766E45u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  wcscpy_s(PoolWithTag, 9uLL, L"\\ArcName");
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  ExFreePoolWithTag(v4, 0);
  if ( v6 >= 0 )
  {
    v7 = 0LL;
    LODWORD(v8) = 0;
    RestartScan = 1;
    RtlInitUnicodeString(&String2, L"SymbolicLink");
    while ( 1 )
    {
      v6 = ZwQueryDirectoryObject(DirectoryHandle, v7, v8, 1u, RestartScan, &Context, &BufferLength);
      if ( v6 == -1073741789 )
      {
        v8 = BufferLength;
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        v7 = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72766E45u);
        if ( !v7 )
        {
          v6 = -1073741670;
          goto LABEL_27;
        }
        v6 = ZwQueryDirectoryObject(DirectoryHandle, v7, v8, 1u, RestartScan, &Context, &BufferLength);
      }
      RestartScan = 0;
      if ( v6 < 0 )
        break;
      if ( RtlEqualUnicodeString(v7 + 1, &String2, 0) )
      {
        v10 = (unsigned int)v7->Length + 18 + 2LL;
        BufferLength = v7->Length + 18;
        v11 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
        v12 = v11;
        if ( !v11 )
        {
          v6 = -1073741670;
          goto LABEL_25;
        }
        v13 = v7->Length >> 1;
        wcscpy_s(v11, ((unsigned __int64)BufferLength >> 1) + 1, L"\\ArcName\\");
        wcsncat_s(v12, ((unsigned __int64)BufferLength >> 1) + 1, v7->Buffer, v13);
        v12[(unsigned __int64)BufferLength >> 1] = 0;
        v6 = ExpTranslateSymbolicLink(v12);
        if ( v6 < 0 )
        {
          ExFreePoolWithTag(v12, 0);
          goto LABEL_22;
        }
        v2 = RtlEqualUnicodeString(&DestinationString, a1, 1u);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        if ( v2 == 1 )
        {
          wcsncpy_s(v12, ((unsigned __int64)BufferLength >> 1) + 1, v7->Buffer, v13);
          v12[v13] = 0;
          *a2 = v12;
          goto LABEL_22;
        }
        ExFreePoolWithTag(v12, 0);
      }
    }
    if ( v6 == -2147483622 )
      v6 = 0;
LABEL_22:
    if ( v6 >= 0 && !v2 )
      v6 = -1073741766;
LABEL_25:
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
LABEL_27:
    ZwClose(DirectoryHandle);
  }
  return (unsigned int)v6;
}
