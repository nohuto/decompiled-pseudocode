/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x1404B9600
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x1404B9570 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x1404B95BC (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140461F84 (ExpWnfNotifyNameSubscribers.c)
 */

unsigned __int64 ExpWnfDispatchKernelSubscription()
{
  struct _SINGLE_LIST_ENTRY *Next; // r13
  volatile signed __int64 *v1; // rdi
  _BYTE *v2; // rax
  _BYTE *v3; // rbx
  struct _SINGLE_LIST_ENTRY *v4; // r12
  struct _SINGLE_LIST_ENTRY *v5; // rbp
  struct _SINGLE_LIST_ENTRY *v6; // rdx
  struct _SINGLE_LIST_ENTRY *v7; // rcx
  volatile signed __int64 *v8; // r15
  unsigned int Next_high; // r14d
  __int64 v10; // rsi
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r9
  _BYTE *v15; // rax
  _BYTE *v16; // rsi
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF

  Next = PsInitialSystemProcess[2].SwapListEntry.Next;
  v1 = (volatile signed __int64 *)&Next[13];
  v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[13], 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], v2, (ULONG_PTR)&Next[13]);
  if ( v3 )
    v3[26] |= 1u;
  v4 = Next + 14;
  while ( v4->Next != v4 )
  {
    v5 = v4->Next;
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v4->Next[-12]);
    LODWORD(v5[2].Next) = 2;
    v6 = v5->Next;
    v7 = v5[1].Next;
    if ( v5->Next[1].Next != v5 || v7->Next != v5 )
      __fastfail(3u);
    v7->Next = v6;
    v8 = (volatile signed __int64 *)&Next[10];
    v6[1].Next = v7;
    do
    {
      Next_high = HIDWORD(v5[2].Next);
      HIDWORD(v5[2].Next) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Next[13]);
      KeAbPostRelease((ULONG_PTR)&Next[13]);
      v10 = KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
      if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)&Next[10], v10, (ULONG_PTR)&Next[10]);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      v11 = (__int64)v5[-7].Next;
      if ( !v11 || (v11 &= -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v11 + 8)) != 0)) == 0 )
        Next_high &= ~1u;
      if ( (Next_high & 1) != 0 )
      {
        v12 = *(_DWORD *)(v11 + 96);
        if ( v12 <= LODWORD(v5[-1].Next) )
          Next_high &= ~1u;
        else
          LODWORD(v5[-1].Next) = v12;
      }
      if ( Next_high )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Next[10]);
        KeAbPostRelease((ULONG_PTR)&Next[10]);
        v18 = (__int64)v5[-6].Next ^ 0x41C64E6DA3BC0074LL;
        if ( v11 )
          v13 = *(_QWORD *)(v11 + 64);
        else
          v13 = 0LL;
        if ( v11 && (Next_high & 1) != 0 )
          v14 = *(unsigned int *)(v11 + 96);
        else
          v14 = 0LL;
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *, _QWORD, __int64, __int64, struct _SINGLE_LIST_ENTRY *))v5[-3].Next)(
          &v5[-13],
          &v18,
          Next_high,
          v14,
          v13,
          v5[-2].Next);
        if ( (Next_high & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v11, 8u, 0, 0);
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Next[10]);
        KeAbPostRelease((ULONG_PTR)&Next[10]);
      }
      if ( v11 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v11 + 8));
      v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], v15, (ULONG_PTR)&Next[13]);
      if ( v16 )
        v16[26] |= 1u;
    }
    while ( HIDWORD(v5[2].Next) );
    LODWORD(v5[2].Next) = 0;
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v5[-12]);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Next[13]);
  return KeAbPostRelease((ULONG_PTR)&Next[13]);
}
