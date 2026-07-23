/*
 * XREFs of LdrSetDllDirectory @ 0x180001750
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180018FF0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180084570 (RtlpInvalidatePathCache.c)
 *     wcschr @ 0x18009B1F0 (wcschr.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  unsigned __int16 *Buffer; // rcx
  void *v3; // rdi
  void *v4; // rbx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( LdrpAppPackagesPath.Buffer )
    return -1073741811;
  Buffer = DllDirectory->Buffer;
  if ( !Buffer )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_5;
  }
  if ( wcschr(Buffer, 0x3Bu) )
    return -1073741811;
  if ( !RtlCreateUnicodeString(&DestinationString, DllDirectory->Buffer) )
    return -1073741801;
LABEL_5:
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  UnicodeString = LdrpDllDirectory;
  LdrpDllDirectory = DestinationString;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v3 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v4 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeAnsiString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1;
}
