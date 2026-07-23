/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x14040D8A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeRundownQueueEx @ 0x1400F49A8 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpRundownNotifications @ 0x14040C788 (EtwpRundownNotifications.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14040C914 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseQueueEntry @ 0x14048EDEC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 *     EtwpQueueReply @ 0x140495948 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  ULONG_PTR v1; // r15
  ULONG_PTR v3; // r14
  struct _KTHREAD *v4; // rax
  signed __int64 *v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v7; // rbx
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 v10; // rdx
  __int64 **v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  signed __int64 v14; // rtt
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int16 v18; // ax
  volatile __int64 *v19; // rbx
  __int64 v20; // rbp
  _QWORD *v21; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v24; // rax
  _BYTE *v25; // rbx
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  __int64 v28; // rtt
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _BYTE *v32; // rax
  _BYTE *v33; // rbx
  __int64 *v34; // rdx
  __int64 **v35; // rax
  void *v36; // rbp
  __int64 v37; // rax
  _QWORD *v38; // rsi
  _QWORD *v39; // rdi
  __int64 v40; // rcx
  _QWORD *v41; // rbx

  v1 = BugCheckParameter2[4];
  v3 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) != 0 )
  {
    v32 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EtwpReplyListLock, 0LL, 0);
    v33 = v32;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&EtwpReplyListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&EtwpReplyListLock, v32, (ULONG_PTR)&EtwpReplyListLock);
    if ( v33 )
      v33[26] |= 1u;
    v34 = (__int64 *)*BugCheckParameter2;
    v35 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v35 != BugCheckParameter2 )
      __fastfail(3u);
    *v35 = v34;
    v34[1] = (__int64)v35;
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
      v24 = (_BYTE *)KeAbPreAcquire(v3 + 384, 0LL, 0);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 384), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v3 + 384), v24, v3 + 384);
      if ( v25 )
        v25[26] |= 1u;
      *(_QWORD *)(v3 + 392) = KeGetCurrentThread();
    }
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    v5 = (signed __int64 *)(v1 + 384);
    v6 = (_BYTE *)KeAbPreAcquire(v1 + 384, 0LL, 0);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 384), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 384), v6, v1 + 384);
    if ( v7 )
      v7[26] |= 1u;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 392) = 0LL;
      _m_prefetchw((const void *)(v3 + 384));
      v26 = *(_QWORD *)(v3 + 384);
      if ( (v26 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v27 = v26 - 16;
      else
        v27 = 0LL;
      if ( (v26 & 2) != 0
        || (v28 = *(_QWORD *)(v3 + 384),
            v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 384), v27, v26)) )
      {
        ExfReleasePushLock((_QWORD *)(v3 + 384));
      }
      KeAbPostRelease(v3 + 384);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v29, v30, v31);
    }
  }
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v18 = *((_WORD *)BugCheckParameter2 + 49);
  if ( (v18 & 2) != 0 )
  {
    v19 = BugCheckParameter2 + 6;
    v20 = 4LL;
    do
    {
      v21 = (_QWORD *)_InterlockedExchange64(v19, 0LL);
      if ( v21 )
      {
        v40 = v21[4];
        if ( (*(_BYTE *)(v40 + 98) & 0x40) == 0 )
          EtwpQueueReply(*(PRKQUEUE *)(v40 + 48));
        EtwpReleaseQueueEntry(v21);
      }
      ++v19;
      --v20;
    }
    while ( v20 );
    EtwpRundownNotifications(BugCheckParameter2[10], (__int64)BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference((__int64)BugCheckParameter2);
  }
  else
  {
    if ( (v18 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v18, 0LL);
    v36 = (void *)BugCheckParameter2[6];
    v37 = KeRundownQueueEx((__int64)v36, 1);
    v38 = (_QWORD *)v37;
    if ( v37 )
    {
      v39 = (_QWORD *)v37;
      do
      {
        v41 = v39;
        v39 = (_QWORD *)*v39;
        EtwpUnreferenceDataBlock(v41[2]);
        ExFreePoolWithTag(v41, 0);
      }
      while ( v38 != v39 );
    }
    ExFreePoolWithTag(v36, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v3 )
    return EtwpUnreferenceGuidEntry(v3);
  return result;
}
