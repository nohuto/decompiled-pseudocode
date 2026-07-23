/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2C8C
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D4090 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

void __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  char *v1; // rdi
  _RTL_SRWLOCK *v3; // rbp
  int v4; // esi
  void *ProcessHeap; // r15
  _QWORD *v6; // r8
  _QWORD *v7; // rbx

  v1 = (char *)&unk_1801532E0;
  v3 = &stru_1801532E8;
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
