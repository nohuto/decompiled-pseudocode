/*
 * XREFs of _ResGetFileAttributesW @ 0x1800FA0C8
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x1800FA4F0 (ResCGetHighestCacheIndex.c)
 *     ResCGetHighestConsecutiveCacheIndex @ 0x1800FA688 (ResCGetHighestConsecutiveCacheIndex.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180078220 (RtlDosPathNameToNtPathName_U.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A5860 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall ResGetFileAttributesW(const WCHAR *a1)
{
  __int64 result; // rax
  unsigned __int16 *Buffer; // rdi
  NTSTATUS v3; // ebx
  _UNICODE_STRING NtFileName; // [rsp+20h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-68h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+60h] [rbp-38h] BYREF

  if ( RtlDosPathNameToNtPathName_U(a1, &NtFileName, 0LL, 0LL) )
  {
    Buffer = NtFileName.Buffer;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    v3 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    result = 0xFFFFFFFFLL;
    if ( v3 >= 0 )
      return FileInformation.FileAttributes;
  }
  else
  {
    RtlSetLastWin32Error(3);
    return 0xFFFFFFFFLL;
  }
  return result;
}
