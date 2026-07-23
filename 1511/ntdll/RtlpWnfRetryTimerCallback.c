/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x1800D19B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWnfProcessCurrentDescriptor @ 0x180007370 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A6D10 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D15A8 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  int v3; // ebp
  _RTL_SRWLOCK *v4; // rcx
  _WNF_STATE_NAME *Value; // rdi
  unsigned __int64 v6; // rsi
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rax
  _RTL_SRWLOCK *v9; // rbx
  int v10; // eax

  if ( qword_180145FA8 )
  {
    v3 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180145FA8 + 8));
    v4 = (_RTL_SRWLOCK *)qword_180145FA8;
    *(_QWORD *)(qword_180145FA8 + 88) = 0LL;
    RtlReleaseSRWLockShared(v4 + 1);
    while ( 1 )
    {
      Value = 0LL;
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180145FA8 + 8));
      v7 = (_RTL_SRWLOCK *)qword_180145FA8;
      v8 = qword_180145FA8 + 16;
      v9 = *(_RTL_SRWLOCK **)(qword_180145FA8 + 16);
      while ( v9 != (_RTL_SRWLOCK *)v8 )
      {
        RtlAcquireSRWLockExclusive(v9 + 3);
        if ( v9[12].0 == 2 && v6 >= v9[13].Value )
        {
          Value = (_WNF_STATE_NAME *)v9[11].Value;
          v9[11].Value = 0LL;
          *(_DWORD *)&v9[12].0 = 0;
          RtlReleaseSRWLockExclusive(v9 + 3);
          v7 = (_RTL_SRWLOCK *)qword_180145FA8;
          break;
        }
        RtlReleaseSRWLockExclusive(v9 + 3);
        v7 = (_RTL_SRWLOCK *)qword_180145FA8;
        v9 = (_RTL_SRWLOCK *)v9->Value;
        v8 = qword_180145FA8 + 16;
      }
      RtlReleaseSRWLockShared(v7 + 1);
      if ( !Value )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v3 = 0;
      v10 = RtlpWnfProcessCurrentDescriptor(Value, 1);
      if ( v10 == -1073741267 )
      {
        v3 = 1;
      }
      else
      {
        if ( !v10 )
          NtGetCompleteWnfStateSubscription(Value + 1, (ULONG64 *)Value, Value[3].Data[0], 0, 0LL, 0);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Value);
      }
    }
    if ( v3 )
      RtlpWnfCalculateAndSetNextTimer();
  }
}
