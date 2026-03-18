/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x1404B7968
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x1404B78D8 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x1404B7924 (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 */

void ExpWnfDispatchKernelSubscription()
{
  struct _LIST_ENTRY *Flink; // r13
  volatile signed __int64 *p_Blink; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _LIST_ENTRY *v4; // r12
  struct _LIST_ENTRY *v5; // rbp
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  volatile signed __int64 *v8; // r15
  unsigned int Flink_high; // r14d
  __int64 v10; // rsi
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF

  Flink = PsInitialSystemProcess[2].ReadyListHead.Flink;
  p_Blink = (volatile signed __int64 *)&Flink[6].Blink;
  v2 = KeAbPreAcquire((ULONG_PTR)&Flink[6].Blink, 0LL, 0LL);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[6].Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[6].Blink, v2, (ULONG_PTR)&Flink[6].Blink);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = Flink + 7;
  while ( v4->Flink != v4 )
  {
    v5 = v4->Flink;
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v4->Flink[-6]);
    LODWORD(v5[1].Flink) = 2;
    v6 = v5->Flink;
    Blink = v5->Blink;
    if ( v5->Flink->Blink != v5 || Blink->Flink != v5 )
      __fastfail(3u);
    Blink->Flink = v6;
    v8 = (volatile signed __int64 *)&Flink[5];
    v6->Blink = Blink;
    do
    {
      Flink_high = HIDWORD(v5[1].Flink);
      HIDWORD(v5[1].Flink) = 0;
      if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Flink[6].Blink);
      KeAbPostRelease((ULONG_PTR)&Flink[6].Blink);
      v10 = KeAbPreAcquire((ULONG_PTR)&Flink[5], 0LL, 0LL);
      if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)&Flink[5], v10, (ULONG_PTR)&Flink[5]);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      v11 = (__int64)v5[-4].Blink;
      if ( !v11 || (v11 &= -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v11 + 8)) != 0)) == 0 )
        Flink_high &= ~1u;
      if ( (Flink_high & 1) != 0 )
      {
        v12 = *(_DWORD *)(v11 + 96);
        if ( v12 <= LODWORD(v5[-1].Blink) )
          Flink_high &= ~1u;
        else
          LODWORD(v5[-1].Blink) = v12;
      }
      if ( Flink_high )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Flink[5]);
        KeAbPostRelease((ULONG_PTR)&Flink[5]);
        v17 = (__int64)v5[-3].Flink ^ 0x41C64E6DA3BC0074LL;
        if ( v11 )
          v13 = *(_QWORD *)(v11 + 64);
        else
          v13 = 0LL;
        if ( v11 && (Flink_high & 1) != 0 )
          v14 = *(unsigned int *)(v11 + 96);
        else
          v14 = 0LL;
        ((void (__fastcall *)(struct _LIST_ENTRY **, __int64 *, _QWORD, __int64, __int64, struct _LIST_ENTRY *))v5[-2].Blink)(
          &v5[-7].Blink,
          &v17,
          Flink_high,
          v14,
          v13,
          v5[-1].Flink);
        if ( (Flink_high & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v11, 8u, 0, 0);
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Flink[5]);
        KeAbPostRelease((ULONG_PTR)&Flink[5]);
      }
      if ( v11 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
      v15 = KeAbPreAcquire((ULONG_PTR)&Flink[6].Blink, 0LL, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[6].Blink, v15, (ULONG_PTR)&Flink[6].Blink);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
    }
    while ( HIDWORD(v5[1].Flink) );
    LODWORD(v5[1].Flink) = 0;
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v5[-6]);
  }
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Flink[6].Blink);
  KeAbPostRelease((ULONG_PTR)&Flink[6].Blink);
}
