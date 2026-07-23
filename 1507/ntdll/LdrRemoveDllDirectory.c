/*
 * XREFs of LdrRemoveDllDirectory @ 0x1800C90F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180059D70 (RtlpInvalidatePathCache.c)
 */

NTSTATUS __cdecl LdrRemoveDllDirectory(DLL_DIRECTORY_COOKIE Cookie)
{
  _QWORD *v3; // rdx
  DLL_DIRECTORY_COOKIE *v4; // rax
  void *v5; // rdi

  if ( LdrpAppPackagesPath.Buffer )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v3 = *(_QWORD **)Cookie;
  v4 = (DLL_DIRECTORY_COOKIE *)*((_QWORD *)Cookie + 1);
  if ( *(DLL_DIRECTORY_COOKIE *)(*(_QWORD *)Cookie + 8LL) != Cookie || *v4 != Cookie )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  word_180143068 += -2 - *((_WORD *)Cookie + 8);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v5 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Cookie);
  return 0;
}
