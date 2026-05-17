/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x1800807B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     ResCCloseRuntimeView @ 0x1800F6FCC (ResCCloseRuntimeView.c)
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
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock, a2, a3, a4);
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
          NtUnmapViewOfSection(-1LL);
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
