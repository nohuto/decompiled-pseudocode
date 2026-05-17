/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x1800E3F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1, char *a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **i; // rbx
  _QWORD *v8; // rdx
  void **v9; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpSecMemLock, a2, a3, a4);
  for ( i = (_UNKNOWN **)RtlpSecMemListHead; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpSecMemListHead )
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    if ( i[3] == a1 )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v8 = *i;
    v9 = (void **)i[1];
    if ( *((_UNKNOWN ***)*i + 1) != i || *v9 != i )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  }
  return 1;
}
