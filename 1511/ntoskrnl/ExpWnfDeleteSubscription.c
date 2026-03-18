/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1403E2034
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x1403E1D84 (ExpWnfDeleteProcessContext.c)
 *     NtUnsubscribeWnfStateChange @ 0x1403E24A8 (NtUnsubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x1404C5F7C (ExUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, PEPROCESS a2)
{
  struct _LIST_ENTRY *Flink; // r15
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 Count; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF **v10; // rdx
  PVOID *v11; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v13; // rdx
  PVOID *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // ecx
  BOOL v18; // r13d
  int v19; // r12d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  BOOL v23; // [rsp+78h] [rbp+20h]

  Flink = a2[2].ReadyListHead.Flink;
  v4 = 1;
  if ( Flink )
  {
    v5 = KeAbPreAcquire((ULONG_PTR)&Flink[5], 0LL, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[5], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[5], v5, (ULONG_PTR)&Flink[5]);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
  }
  if ( P[5].Count )
  {
    v23 = 0;
    Count = P[6].Count;
    if ( Count )
    {
      v8 = KeAbPreAcquire(Count + 112, 0LL, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v8, Count + 112);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      v10 = (struct _EX_RUNDOWN_REF **)P[8].Count;
      v11 = (PVOID *)P[9].Count;
      if ( v10[1] != &P[8] || *v11 != &P[8] )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = (struct _EX_RUNDOWN_REF *)v11;
      Ptr_high = HIDWORD(P[12].Ptr);
      P[6].Count = 0LL;
      if ( (Ptr_high & 1) != 0 )
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
    }
    v13 = (struct _EX_RUNDOWN_REF **)P[3].Count;
    v14 = (PVOID *)P[4].Count;
    if ( v13[1] != &P[3] || *v14 != &P[3] )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = (struct _EX_RUNDOWN_REF *)v14;
    v15 = KeAbPreAcquire((ULONG_PTR)&Flink[6].Blink, 0LL, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[6].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[6].Blink, v15, (ULONG_PTR)&Flink[6].Blink);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    v17 = P[15].Count;
    if ( v17 != 1 && ((PEPROCESS)P[5].Count == PsInitialSystemProcess || !v17) )
      goto LABEL_25;
    v20 = (struct _EX_RUNDOWN_REF **)P[13].Count;
    v21 = (PVOID *)P[14].Count;
    if ( v20[1] != &P[13] || *v21 != &P[13] )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = (struct _EX_RUNDOWN_REF *)v21;
    if ( Count && (BYTE4(P[15].Ptr) & 1) != 0 )
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 164), 0xFFFFFFFF) == 1;
    else
LABEL_25:
      v18 = 0;
    P[5].Count = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Flink[6].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Flink[6].Blink);
    KeAbPostRelease((ULONG_PTR)&Flink[6].Blink);
    if ( Count )
    {
      v19 = 0;
      if ( v23 || v18 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(Count + 8)) )
        {
          v19 = 1;
        }
        else
        {
          v23 = 0;
          v18 = 0;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Count + 112));
      KeAbPostRelease(Count + 112);
      if ( Flink )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Flink[5], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&Flink[5]);
        KeAbPostRelease((ULONG_PTR)&Flink[5]);
        Flink = 0LL;
      }
      if ( v18 )
        ExpWnfNotifyNameSubscribers(Count, 8LL, 1LL, a2 != PsInitialSystemProcess);
      if ( v23 )
        ExpWnfNotifyNameSubscribers(Count, 4LL, 1LL, a2 != PsInitialSystemProcess);
      if ( v19 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8));
    }
  }
  else
  {
    v4 = 0;
  }
  if ( Flink )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Flink[5], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Flink[5]);
    KeAbPostRelease((ULONG_PTR)&Flink[5]);
  }
  ExReleaseRundownProtection_0(P + 1);
  if ( v4 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
