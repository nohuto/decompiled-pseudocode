/*
 * XREFs of TppPoolAddWorker @ 0x18007B0D4
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppPoolAddWorker(_RTL_SRWLOCK *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _RTL_SRWLOCK **Value; // rdx

  *(_DWORD *)(a2 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive(a1 + 9);
  v4 = a2 + 16;
  Value = (_RTL_SRWLOCK **)a1[13].Value;
  *(_QWORD *)(a2 + 16) = a1 + 12;
  *(_QWORD *)(a2 + 24) = Value;
  if ( *Value != &a1[12] )
    __fastfail(3u);
  *Value = (_RTL_SRWLOCK *)v4;
  a1[13].Value = v4;
  RtlReleaseSRWLockExclusive(a1 + 9);
}
