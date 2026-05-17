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

__int64 __fastcall LdrRemoveDllDirectory(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // rax
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdi

  if ( LdrpAppPackagesPath.Buffer )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock, a2, a3, a4);
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v7 != a1 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  word_180143068 += -2 - *(_WORD *)(a1 + 16);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, v8, v9, v10);
  v11 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
