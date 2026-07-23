/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1404ADB5C
 * Callers:
 *     ExUnsubscribeWnfStateChange @ 0x1404AD728 (ExUnsubscribeWnfStateChange.c)
 *     ExpWnfDeleteProcessContext @ 0x1404AD754 (ExpWnfDeleteProcessContext.c)
 *     NtUnsubscribeWnfStateChange @ 0x1404AD9D8 (NtUnsubscribeWnfStateChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140461F84 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, PEPROCESS a2)
{
  struct _SINGLE_LIST_ENTRY *Next; // r15
  int v4; // ebp
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  __int64 Count; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  struct _EX_RUNDOWN_REF **v10; // rdx
  PVOID *v11; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v13; // rdx
  PVOID *v14; // rcx
  _BYTE *v15; // rax
  _BYTE *v16; // r13
  int v17; // ecx
  BOOL v18; // r13d
  int v19; // r12d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  BOOL v23; // [rsp+78h] [rbp+20h]

  Next = a2[2].SwapListEntry.Next;
  v4 = 1;
  if ( Next )
  {
    v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[10], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[10], v5, (ULONG_PTR)&Next[10]);
    if ( v6 )
      v6[26] |= 1u;
  }
  if ( P[5].Count )
  {
    v23 = 0;
    Count = P[6].Count;
    if ( Count )
    {
      v8 = (_BYTE *)KeAbPreAcquire(Count + 112, 0LL, 0);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v8, Count + 112);
      if ( v9 )
        v9[26] |= 1u;
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
    v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[13], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], v15, (ULONG_PTR)&Next[13]);
    if ( v16 )
      v16[26] |= 1u;
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[13], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[13]);
    KeAbPostRelease((ULONG_PTR)&Next[13]);
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
      if ( Next )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[10], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&Next[10]);
        KeAbPostRelease((ULONG_PTR)&Next[10]);
        Next = 0LL;
      }
      if ( v18 )
        ExpWnfNotifyNameSubscribers(Count, 8u, 1, a2 != PsInitialSystemProcess);
      if ( v23 )
        ExpWnfNotifyNameSubscribers(Count, 4u, 1, a2 != PsInitialSystemProcess);
      if ( v19 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(Count + 8));
    }
  }
  else
  {
    v4 = 0;
  }
  if ( Next )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[10], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[10]);
    KeAbPostRelease((ULONG_PTR)&Next[10]);
  }
  ExReleaseRundownProtection(P + 1);
  if ( v4 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
