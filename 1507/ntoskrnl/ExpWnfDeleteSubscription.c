/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1405059CC
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x140503CBC (NtUnsubscribeWnfStateChange.c)
 *     ExpWnfDeleteProcessContext @ 0x140505720 (ExpWnfDeleteProcessContext.c)
 *     ExUnsubscribeWnfStateChange @ 0x14055D070 (ExUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, PEPROCESS a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 Count; // rsi
  int v9; // r12d
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rbp
  struct _EX_RUNDOWN_REF **v13; // rdx
  PVOID *v14; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v16; // rdx
  PVOID *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r14
  int v21; // ecx
  int v22; // r14d
  int v23; // ebp
  unsigned __int64 v24; // rtt
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rtt
  unsigned __int64 v27; // rtt
  struct _EX_RUNDOWN_REF **v28; // rdx
  PVOID *v29; // rcx

  v4 = a2[2].Affinity.Bitmap[19];
  if ( v4 )
  {
    v6 = KeAbPreAcquire(v4 + 80, 0LL, 0LL, a4);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 80), v6, v4 + 80, a4);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
  }
  if ( P[5].Count )
  {
    Count = P[6].Count;
    v9 = 0;
    v10 = 0;
    if ( Count )
    {
      v11 = KeAbPreAcquire(Count + 112, 0LL, 0LL, a4);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v11, Count + 112, a4);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      v13 = (struct _EX_RUNDOWN_REF **)P[8].Count;
      v14 = (PVOID *)P[9].Count;
      if ( v13[1] != &P[8] || *v14 != &P[8] )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = (struct _EX_RUNDOWN_REF *)v14;
      Ptr_high = HIDWORD(P[12].Ptr);
      P[6].Count = 0LL;
      if ( (Ptr_high & 1) != 0 )
        LOBYTE(v10) = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
    }
    v16 = (struct _EX_RUNDOWN_REF **)P[3].Count;
    v17 = (PVOID *)P[4].Count;
    if ( v16[1] != &P[3] || *v17 != &P[3] )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = (struct _EX_RUNDOWN_REF *)v17;
    v18 = KeAbPreAcquire(v4 + 104, 0LL, 0LL, a4);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 104), v18, v4 + 104, v19);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    v21 = P[15].Count;
    if ( v21 == 1 || (PEPROCESS)P[5].Count != PsInitialSystemProcess && v21 )
    {
      v28 = (struct _EX_RUNDOWN_REF **)P[13].Count;
      v29 = (PVOID *)P[14].Count;
      if ( v28[1] != &P[13] || *v29 != &P[13] )
        __fastfail(3u);
      *v29 = v28;
      v28[1] = (struct _EX_RUNDOWN_REF *)v29;
      if ( Count && (BYTE4(P[15].Ptr) & 1) != 0 )
        LOBYTE(v9) = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 164), 0xFFFFFFFF) == 1;
    }
    P[5].Count = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 104));
    KeAbPostRelease(v4 + 104);
    if ( Count )
    {
      v22 = 0;
      if ( v10 || v9 )
      {
        _m_prefetchw((const void *)(Count + 8));
        v26 = *(_QWORD *)(Count + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v26 == _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 8), v26 + 2, v26)
          || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(Count + 8)) )
        {
          v22 = 1;
        }
        else
        {
          v10 = 0;
          v9 = 0;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Count + 112));
      KeAbPostRelease(Count + 112);
      if ( v4 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 80));
        KeAbPostRelease(v4 + 80);
        v4 = 0LL;
      }
      if ( v9 )
        ExpWnfNotifyNameSubscribers(Count, 8u, 1, a2 != PsInitialSystemProcess);
      if ( v10 )
        ExpWnfNotifyNameSubscribers(Count, 4u, 1, a2 != PsInitialSystemProcess);
      if ( v22 )
      {
        _m_prefetchw((const void *)(Count + 8));
        v27 = *(_QWORD *)(Count + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 8), v27 - 2, v27) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(Count + 8));
      }
      v23 = 1;
    }
    else
    {
      v23 = 1;
    }
  }
  else
  {
    v23 = 0;
  }
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 80));
    KeAbPostRelease(v4 + 80);
  }
  _m_prefetchw(&P[1]);
  v24 = P[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&P[1], v24 - 2, v24) )
    ExfReleaseRundownProtection(P + 1);
  if ( v23 )
  {
    v25 = _InterlockedCompareExchange64((volatile signed __int64 *)&P[1], 1LL, 0LL);
    if ( v25 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&P[1], v25);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
