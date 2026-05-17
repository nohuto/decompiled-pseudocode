/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x1800C0DB0
 * Callers:
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800C2620 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

unsigned __int64 __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  unsigned __int64 *v1; // rdi
  volatile signed __int64 *v3; // rbp
  int v4; // esi
  void *ProcessHeap; // r15
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx

  v1 = (unsigned __int64 *)&unk_1801470F0;
  v3 = (volatile signed __int64 *)&unk_1801470F8;
  v4 = 15;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  do
  {
    if ( a1 )
    {
      v6 = *v1;
      if ( *v1 )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 8);
          RtlFreeHeap((__int64)ProcessHeap, 0, v6);
          v6 = v7;
        }
        while ( v7 );
        *v1 = 0LL;
      }
      v1[1] = 1LL;
    }
    RtlReleaseSRWLockExclusive(v3);
    v3 -= 2;
    v1 -= 2;
    --v4;
  }
  while ( v4 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock = 17LL;
  }
  return RtlReleaseSRWLockShared(&LdrpTlsLock);
}
