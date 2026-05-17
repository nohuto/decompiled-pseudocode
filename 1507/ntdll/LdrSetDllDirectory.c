/*
 * XREFs of LdrSetDllDirectory @ 0x180001540
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180020DE0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180059D70 (RtlpInvalidatePathCache.c)
 *     wcschr @ 0x180089A40 (wcschr.c)
 */

__int64 __fastcall LdrSetDllDirectory(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( LdrpAppPackagesPath.Buffer )
    return 3221225485LL;
  v2 = *(const wchar_t **)(a1 + 8);
  if ( !v2 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_5;
  }
  if ( wcschr(v2, 0x3Bu) )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlCreateUnicodeString(&DestinationString, *(_QWORD *)(a1 + 8)) )
    return 3221225495LL;
LABEL_5:
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  UnicodeString = (UNICODE_STRING)LdrpDllDirectory;
  LdrpDllDirectory = (__int128)DestinationString;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v3 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v4 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeAnsiString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  return 1LL;
}
