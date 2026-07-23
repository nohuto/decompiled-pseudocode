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

void __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  char *v1; // rdi
  _RTL_SRWLOCK *v3; // rbp
  int v4; // esi
  void *ProcessHeap; // r15
  _QWORD *v6; // r8
  _QWORD *v7; // rbx

  v1 = (char *)&unk_1801470F0;
  v3 = &stru_1801470F8;
  v4 = 15;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  do
  {
    if ( a1 )
    {
      v6 = *(_QWORD **)v1;
      if ( *(_QWORD *)v1 )
      {
        do
        {
          v7 = (_QWORD *)v6[1];
          RtlFreeHeap(ProcessHeap, 0, v6);
          v6 = v7;
        }
        while ( v7 );
        *(_QWORD *)v1 = 0LL;
      }
      *((_QWORD *)v1 + 1) = 1LL;
    }
    RtlReleaseSRWLockExclusive(v3);
    v3 -= 2;
    v1 -= 16;
    --v4;
  }
  while ( v4 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)17LL;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
}
