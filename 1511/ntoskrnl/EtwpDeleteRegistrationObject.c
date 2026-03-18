/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x140435A20
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeRundownQueueEx @ 0x1400DF520 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140438D8C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x140438E14 (EtwpRundownNotifications.c)
 *     EtwpReleaseQueueEntry @ 0x1404CE5F0 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404CE650 (EtwpUnreferenceDataBlock.c)
 *     EtwpQueueReply @ 0x1404CFE80 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  ULONG_PTR v1; // r15
  ULONG_PTR v3; // r14
  struct _KTHREAD *v4; // rax
  signed __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 v10; // rdx
  __int64 **v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  signed __int64 v14; // rtt
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int8 v17; // al
  volatile __int64 *v18; // rdi
  __int64 v19; // rbp
  _QWORD *v20; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  signed __int64 v25; // rax
  signed __int64 v26; // rcx
  __int64 v27; // rtt
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 *v30; // rdx
  __int64 **v31; // rax
  void *v32; // rbp
  __int64 v33; // rax
  _QWORD *v34; // rsi
  _QWORD *v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rbx

  v1 = BugCheckParameter2[4];
  v3 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) != 0 )
  {
    v28 = KeAbPreAcquire((ULONG_PTR)&EtwpReplyListLock, 0LL, 0LL);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&EtwpReplyListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&EtwpReplyListLock, v28, (ULONG_PTR)&EtwpReplyListLock);
    if ( v29 )
      *(_BYTE *)(v29 + 26) |= 1u;
    v30 = (__int64 *)*BugCheckParameter2;
    v31 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v31 != BugCheckParameter2 )
      __fastfail(3u);
    *v31 = v30;
    v30[1] = (__int64)v31;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
    KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
  }
  else
  {
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v23 = KeAbPreAcquire(v3 + 384, 0LL, 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 384), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v3 + 384), v23, v3 + 384);
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      *(_QWORD *)(v3 + 392) = KeGetCurrentThread();
    }
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    v5 = (signed __int64 *)(v1 + 384);
    v6 = KeAbPreAcquire(v1 + 384, 0LL, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 384), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 384), v6, v1 + 384);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    *(_QWORD *)(v1 + 392) = KeGetCurrentThread();
    v8 = (__int64 *)*BugCheckParameter2;
    v9 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v9 != BugCheckParameter2 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = (__int64)v9;
    v10 = BugCheckParameter2[2];
    v11 = (__int64 **)BugCheckParameter2[3];
    if ( *(__int64 **)(v10 + 8) != BugCheckParameter2 + 2 || *v11 != BugCheckParameter2 + 2 )
      __fastfail(3u);
    *v11 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)(v1 + 392) = 0LL;
    _m_prefetchw(v5);
    v12 = *v5;
    if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v13 = v12 - 16;
    else
      v13 = 0LL;
    if ( (v12 & 2) != 0 || (v14 = *v5, v14 != _InterlockedCompareExchange64(v5, v13, v12)) )
      ExfReleasePushLock((_QWORD *)(v1 + 384));
    KeAbPostRelease(v1 + 384);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v3 )
    {
      *(_QWORD *)(v3 + 392) = 0LL;
      _m_prefetchw((const void *)(v3 + 384));
      v25 = *(_QWORD *)(v3 + 384);
      if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v26 = v25 - 16;
      else
        v26 = 0LL;
      if ( (v25 & 2) != 0
        || (v27 = *(_QWORD *)(v3 + 384),
            v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 384), v26, v25)) )
      {
        ExfReleasePushLock((_QWORD *)(v3 + 384));
      }
      KeAbPostRelease(v3 + 384);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  *((_BYTE *)BugCheckParameter2 + 98) &= ~0x80u;
  v17 = *((_BYTE *)BugCheckParameter2 + 98);
  if ( (v17 & 2) != 0 )
  {
    v18 = BugCheckParameter2 + 6;
    v19 = 4LL;
    do
    {
      v20 = (_QWORD *)_InterlockedExchange64(v18, 0LL);
      if ( v20 )
      {
        v36 = v20[4];
        if ( (*(_BYTE *)(v36 + 98) & 0x40) == 0 )
          EtwpQueueReply(*(PRKQUEUE *)(v36 + 48));
        EtwpReleaseQueueEntry(v20);
      }
      ++v18;
      --v19;
    }
    while ( v19 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v17 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v17, 0LL);
    v32 = (void *)BugCheckParameter2[6];
    LOBYTE(v15) = 1;
    v33 = KeRundownQueueEx((__int64)v32, v15, v16);
    v34 = (_QWORD *)v33;
    if ( v33 )
    {
      v35 = (_QWORD *)v33;
      do
      {
        v37 = v35;
        v35 = (_QWORD *)*v35;
        EtwpUnreferenceDataBlock(v37[2]);
        ExFreePoolWithTag(v37, 0);
      }
      while ( v34 != v35 );
    }
    ExFreePoolWithTag(v32, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v3 )
    return EtwpUnreferenceGuidEntry(v3);
  return result;
}
