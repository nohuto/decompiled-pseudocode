/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800C0D1C
 * Callers:
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800C2620 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    qword_180146130 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_180146128 = -2;
    dword_18014612C = 1;
    qword_180146138 = 0LL;
    qword_1801430C0 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_1801430B8 = -2;
    dword_1801430BC = 1;
    qword_1801430C8 = 0LL;
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v1, 13, 0);
  return LdrpDropLastInProgressCount();
}
