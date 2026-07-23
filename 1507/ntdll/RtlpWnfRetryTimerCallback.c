/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x1800C8F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000B588 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     ZwQuerySystemTime @ 0x180093EA0 (ZwQuerySystemTime.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180094720 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800C8B68 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  int v3; // esi
  _RTL_SRWLOCK *v4; // rcx
  _WNF_STATE_NAME *Value; // rdi
  _RTL_SRWLOCK *v6; // rcx
  __int64 v7; // rax
  _RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  LARGE_INTEGER SystemTime; // [rsp+58h] [rbp+20h] BYREF

  if ( qword_180146F28 )
  {
    v3 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180146F28 + 8));
    v4 = (_RTL_SRWLOCK *)qword_180146F28;
    *(_QWORD *)(qword_180146F28 + 88) = 0LL;
    RtlReleaseSRWLockShared(v4 + 1);
    while ( 1 )
    {
      Value = 0LL;
      ZwQuerySystemTime(&SystemTime);
      SystemTime.QuadPart += 500000LL;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180146F28 + 8));
      v6 = (_RTL_SRWLOCK *)qword_180146F28;
      v7 = qword_180146F28 + 16;
      v8 = *(_RTL_SRWLOCK **)(qword_180146F28 + 16);
      while ( v8 != (_RTL_SRWLOCK *)v7 )
      {
        RtlAcquireSRWLockExclusive(v8 + 3);
        if ( v8[12].0 == 2 && SystemTime.QuadPart >= (signed __int64)v8[13].Value )
        {
          Value = (_WNF_STATE_NAME *)v8[11].Value;
          v8[11].Value = 0LL;
          *(_DWORD *)&v8[12].0 = 0;
          RtlReleaseSRWLockExclusive(v8 + 3);
          v6 = (_RTL_SRWLOCK *)qword_180146F28;
          break;
        }
        RtlReleaseSRWLockExclusive(v8 + 3);
        v6 = (_RTL_SRWLOCK *)qword_180146F28;
        v8 = (_RTL_SRWLOCK *)v8->Value;
        v7 = qword_180146F28 + 16;
      }
      RtlReleaseSRWLockShared(v6 + 1);
      if ( !Value )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v3 = 0;
      v9 = RtlpWnfProcessCurrentDescriptor(Value, 1);
      if ( v9 == -1073741267 )
      {
        v3 = 1;
      }
      else
      {
        if ( !v9 )
          NtGetCompleteWnfStateSubscription(Value + 1, (ULONG64 *)Value, Value[3].Data[0], 0, 0LL, 0);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Value);
      }
    }
    if ( v3 )
      RtlpWnfCalculateAndSetNextTimer();
  }
}
