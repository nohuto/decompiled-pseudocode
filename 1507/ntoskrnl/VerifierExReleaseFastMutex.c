/*
 * XREFs of VerifierExReleaseFastMutex @ 0x140751B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KeReleaseGuardedMutex @ 0x14004F930 (KeReleaseGuardedMutex.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 *     ViExReleaseFastMutexCommon @ 0x140752028 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rdi
  USHORT v3; // ax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViExReleaseFastMutexCommon((ULONG_PTR)Mutex);
  VfDeadlockReleaseResource(Mutex, 3u, (__int64)KeGetCurrentThread(), retaddr);
  pXdvExReleaseFastMutex(Mutex);
  if ( v2 )
  {
    *(_QWORD *)v2 = KeGetCurrentThread();
    *(_DWORD *)(v2 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *(_QWORD *)(v2 + 16) = 0LL;
    }
    else
    {
      v3 = RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(v2 + 16), 0LL);
      if ( v3 < 5u )
        *(_QWORD *)(v2 + 8LL * v3 + 16) = 0LL;
    }
  }
}
