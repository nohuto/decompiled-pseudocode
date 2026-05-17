/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x18008D350
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     ResCCloseRuntimeView @ 0x1800FEF5C (ResCCloseRuntimeView.c)
 */

char __fastcall LdrFlushAlternateResourceModules(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned int i; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  bool v11; // [rsp+50h] [rbp+8h]

  v4 = 1;
  v11 = 1;
  RtlAcquireSRWLockExclusive((unsigned __int64)&MuiCacheSWRLock, a2, a3, a4);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v6 = AlternateResourceModules + 72LL * i;
      v7 = *(_QWORD *)(v6 + 32);
      if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && *(_DWORD *)(v6 + 56) == -1 )
      {
        v8 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v6 + 64) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
        else
          NtUnmapViewOfSection(-1LL, v8);
        *(_QWORD *)(v6 + 32) = 0LL;
        v9 = *(void **)(v6 + 40);
        if ( v9 )
        {
          NtClose(v9);
          *(_QWORD *)(v6 + 40) = 0LL;
        }
      }
    }
    if ( (unsigned __int64)(ResRuntimeView - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v11 = (unsigned int)ResCCloseRuntimeView() != 0;
      ResRuntimeView = 0LL;
      CMFQueueRear = 0;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
    v4 = v11;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
