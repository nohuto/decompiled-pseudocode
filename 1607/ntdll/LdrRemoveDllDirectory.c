/*
 * XREFs of LdrRemoveDllDirectory @ 0x1800DA040
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInvalidatePathCache @ 0x180008EE0 (RtlpInvalidatePathCache.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl LdrRemoveDllDirectory(DLL_DIRECTORY_COOKIE Cookie)
{
  _QWORD *v3; // rdx
  DLL_DIRECTORY_COOKIE *v4; // rax
  void *v5; // rdi

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v3 = *(_QWORD **)Cookie;
  v4 = (DLL_DIRECTORY_COOKIE *)*((_QWORD *)Cookie + 1);
  if ( *(DLL_DIRECTORY_COOKIE *)(*(_QWORD *)Cookie + 8LL) != Cookie || *v4 != Cookie )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  word_18014C3E8 += -2 - *((_WORD *)Cookie + 8);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v5 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Cookie);
  return 0;
}
