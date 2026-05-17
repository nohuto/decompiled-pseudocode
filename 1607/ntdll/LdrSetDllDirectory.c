/*
 * XREFs of LdrSetDllDirectory @ 0x180001540
 * Callers:
 *     LdrpInitializePolicy @ 0x18005DE2C (LdrpInitializePolicy.c)
 * Callees:
 *     RtlpInvalidatePathCache @ 0x180008EF0 (RtlpInvalidatePathCache.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlCreateUnicodeString @ 0x180056600 (RtlCreateUnicodeString.c)
 *     wcschr @ 0x18009C590 (wcschr.c)
 */

__int64 __fastcall LdrSetDllDirectory(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (LdrpPolicyBits & 4) == 0 )
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
