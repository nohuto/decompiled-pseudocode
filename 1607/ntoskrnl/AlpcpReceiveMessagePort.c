/*
 * XREFs of AlpcpReceiveMessagePort @ 0x14044BC40
 * Callers:
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     AlpcpWaitForSingleObject @ 0x14009F8C8 (AlpcpWaitForSingleObject.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcpQueryHeadLargeQueue @ 0x14044C500 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpGetAvailableAttributesSet @ 0x1404B0A70 (AlpcpGetAvailableAttributesSet.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1404B14D0 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpLogReceiveMessage @ 0x140656990 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x140656AA0 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, unsigned __int8 a2, __int64 a3, ULONG_PTR *a4, int a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rsi
  volatile signed __int64 *v8; // rbp
  __int64 v9; // rdi
  int i; // r12d
  int v11; // eax
  volatile signed __int64 *v12; // r15
  _BYTE *v13; // rax
  _BYTE *v14; // rdi
  ULONG_PTR HeadLargeQueue; // rdi
  unsigned __int64 v16; // rax
  signed __int64 BugCheckParameter4; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // r14
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // rax
  unsigned int v23; // edi
  _BYTE *v24; // rax
  _BYTE *v25; // rdi
  struct _LIST_ENTRY *v26; // rdx
  _KTIMER *p_Timer; // rcx
  __int64 v28; // r8
  unsigned int v29; // r14d
  _BYTE *v30; // rax
  _BYTE *v31; // rdi
  ULONG_PTR v32; // rdi
  volatile signed __int32 *v33; // r14
  __int64 v34; // r15
  _BYTE *v35; // rax
  _BYTE *v36; // r15
  __int64 v37; // rcx
  unsigned __int64 *v38; // rsi
  _BYTE *v39; // rax
  _BYTE *v40; // rdi
  _KTIMER *v41; // rax
  struct _LIST_ENTRY *v42; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  _BYTE *v44; // rax
  _BYTE *v45; // rdi
  __int64 v46; // r8
  struct _KTHREAD *v47; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  v47 = CurrentThread;
  v8 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    v9 = KeAbPreAcquire(v6 + 352, 0LL, 0);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v6 + 352), v9, v6 + 352);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    for ( i = 0; ; i = 1 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v6 + 416);
        if ( (v11 & 0x40) != 0 )
        {
          v23 = -1073740032;
          goto LABEL_54;
        }
        if ( (v11 & 0x10) != 0 )
        {
          v23 = -1073741759;
          goto LABEL_54;
        }
        v12 = (volatile signed __int64 *)(v6 + 136);
        v13 = (_BYTE *)KeAbPreAcquire(v6 + 136, 0LL, 0);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 136), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v13, v6 + 136);
        if ( v14 )
          v14[26] |= 1u;
        HeadLargeQueue = AlpcpQueryHeadLargeQueue(v6);
        if ( !HeadLargeQueue )
        {
          HeadLargeQueue = *(_QWORD *)(v6 + 144);
          if ( HeadLargeQueue == v6 + 144 || !HeadLargeQueue )
            break;
        }
        v16 = KeAbPreAcquire(HeadLargeQueue - 16, 0LL, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(HeadLargeQueue - 16), 0LL) )
        {
          if ( v16 )
            *(_BYTE *)(v16 + 26) |= 1u;
          *(_BYTE *)(HeadLargeQueue - 32) |= 1u;
          BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HeadLargeQueue - 24), 0x10000uLL)
                             + 0x10000;
          if ( BugCheckParameter4 <= 0 )
            KeBugCheckEx(0x18u, 0LL, HeadLargeQueue, 0x27uLL, BugCheckParameter4);
LABEL_20:
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 7) == 1 )
            --*(_DWORD *)(v6 + 448);
          else
            --*(_DWORD *)(v6 + 452);
          *(_DWORD *)(HeadLargeQueue + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(HeadLargeQueue + 16) = 0LL;
          **(_QWORD **)(HeadLargeQueue + 8) = *(_QWORD *)HeadLargeQueue;
          *(_QWORD *)(*(_QWORD *)HeadLargeQueue + 8LL) = *(_QWORD *)(HeadLargeQueue + 8);
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 0x200) == 0
            || ((unsigned int)AlpcpGetAvailableAttributesSet(HeadLargeQueue + 104) & a5) != 0 )
          {
            *(_WORD *)(HeadLargeQueue + 236) |= 0x2000u;
            v18 = (_BYTE *)KeAbPreAcquire(v6 + 176, 0LL, 0);
            v19 = v18;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 176), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 176), v18, v6 + 176);
            if ( v19 )
              v19[26] |= 1u;
            v20 = *(_DWORD *)(HeadLargeQueue + 40);
            *(_QWORD *)(HeadLargeQueue + 16) = v6;
            *(_DWORD *)(HeadLargeQueue + 40) = v20 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v6 + 416) & 6)) | 3;
            *(_QWORD *)(HeadLargeQueue + 8) = *(_QWORD *)(v6 + 192);
            *(_QWORD *)HeadLargeQueue = v6 + 184;
            **(_QWORD **)(v6 + 192) = HeadLargeQueue;
            *(_QWORD *)(v6 + 192) = HeadLargeQueue;
            ++*(_DWORD *)(v6 + 456);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 176));
            KeAbPostRelease(v6 + 176);
          }
          else
          {
            *(_WORD *)(HeadLargeQueue + 236) &= ~0x2000u;
            --*(_WORD *)(HeadLargeQueue - 30);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          goto LABEL_36;
        }
        if ( v16 )
          KeAbPostReleaseEx(HeadLargeQueue - 16, v16);
        if ( !*(_QWORD *)(HeadLargeQueue + 96) )
        {
          AlpcpReferenceBlob(HeadLargeQueue);
          v33 = (volatile signed __int32 *)(v6 + 136);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          v34 = KeAbPreAcquire(v6 + 352, 0LL, 0);
          if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)(v6 + 352), v34, v6 + 352);
          if ( v34 )
            *(_BYTE *)(v34 + 26) |= 1u;
          i = 0;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              goto LABEL_113;
          }
          else
          {
            v35 = (_BYTE *)KeAbPreAcquire(v6 + 136, 0LL, 0);
            v36 = v35;
            if ( _interlockedbittestandset64(v33, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v35, v6 + 136);
            if ( v36 )
              v36[26] |= 1u;
            if ( !AlpcpQueryHeadLargeQueue(v6) )
            {
              v37 = *(_QWORD *)(v6 + 144);
              if ( v37 == v6 + 144 || !v37 )
                v37 = 0LL;
              if ( HeadLargeQueue == v37 )
                goto LABEL_20;
            }
            if ( HeadLargeQueue == AlpcpQueryHeadLargeQueue(v6) )
              goto LABEL_20;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
LABEL_113:
              ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpUnlockMessage(HeadLargeQueue);
          CurrentThread = v47;
          goto LABEL_2;
        }
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        v44 = (_BYTE *)KeAbPreAcquire(v6 + 352, 0LL, 0);
        v45 = v44;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v44, v6 + 352);
        if ( v45 )
          v45[26] |= 1u;
        CurrentThread = v47;
        i = 1;
      }
      if ( *(_QWORD *)(v6 + 384) != v6 + 384 )
      {
        v32 = *(_QWORD *)(v6 + 384) - 80LL;
        **(_QWORD **)(v32 + 88) = *(_QWORD *)(v32 + 80);
        *(_QWORD *)(*(_QWORD *)(v32 + 80) + 8LL) = *(_QWORD *)(v32 + 88);
        --*(_DWORD *)(v6 + 464);
        AlpcpReferenceBlob(v32);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        AlpcpLockForCachedReferenceBlob(v32);
        *(_WORD *)(v32 - 30) -= 2;
        *a4 = v32;
        return 0LL;
      }
      v22 = *(_QWORD *)(v6 + 360);
      if ( v22 && (*(_QWORD *)(*(_QWORD *)(v22 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v23 = 1073741872;
        goto LABEL_54;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_53;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v23 = 258;
LABEL_54:
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        return v23;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_53;
      if ( i )
      {
        LODWORD(CurrentThread[1].RelativeTimerBias) = a5;
        v24 = (_BYTE *)KeAbPreAcquire(v6 + 224, 0LL, 0);
        v25 = v24;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 224), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v24, v6 + 224);
        if ( v25 )
          v25[26] |= 1u;
        v26 = *(struct _LIST_ENTRY **)(v6 + 240);
        p_Timer = &v47[1].Timer;
        if ( v26->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
          __fastfail(3u);
        *(_QWORD *)&p_Timer->Header.Lock = v6 + 232;
        v47[1].Timer.Header.WaitListHead.Flink = v26;
        v26->Flink = (struct _LIST_ENTRY *)p_Timer;
        *(_QWORD *)(v6 + 240) = p_Timer;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v6);
        v29 = AlpcpCompleteDeferSignalRequestAndWait(a1, &v47[1].StateSaveArea, v28, a2, a3);
        if ( !v29 )
        {
          HeadLargeQueue = v47[1].RelativeTimerBias;
          CurrentThread = v47;
          v47[1].RelativeTimerBias = 0LL;
          if ( !HeadLargeQueue )
            goto LABEL_2;
          goto LABEL_71;
        }
        v38 = (unsigned __int64 *)(v6 + 224);
        v39 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v38, 0LL, 0);
        v40 = v39;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
          ExfAcquirePushLockExclusiveEx(v38, v39, (ULONG_PTR)v38);
        if ( v40 )
          v40[26] |= 1u;
        v41 = &v47[1].Timer;
        if ( *(_QWORD *)&v47[1].Timer.Header.Lock )
        {
          v47[1].RelativeTimerBias = 0LL;
          v42 = *(struct _LIST_ENTRY **)&v41->Header.Lock;
          Flink = v47[1].Timer.Header.WaitListHead.Flink;
          if ( *(_KTIMER **)(*(_QWORD *)&v41->Header.Lock + 8LL) != v41 || (_KTIMER *)Flink->Flink != v41 )
            __fastfail(3u);
          Flink->Flink = v42;
          v42->Blink = Flink;
          *(_QWORD *)&v41->Header.Lock = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v38);
          KeAbPostRelease((ULONG_PTR)v38);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v38);
          KeAbPostRelease((ULONG_PTR)v38);
          AlpcpWaitForSingleObject(&v47[1].StateSaveArea, WrLpcReceive, 0, 0, 0LL);
          HeadLargeQueue = v47[1].RelativeTimerBias;
          v47[1].RelativeTimerBias = 0LL;
          if ( HeadLargeQueue )
          {
LABEL_71:
            AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
            --*(_WORD *)(HeadLargeQueue - 30);
            *(_DWORD *)(HeadLargeQueue + 40) &= ~0x4000u;
LABEL_36:
            if ( AlpcpLogEnabled )
              AlpcpLogReceiveMessage(HeadLargeQueue);
            *a4 = HeadLargeQueue;
            return 0LL;
          }
        }
        return v29;
      }
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) != 17 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        v30 = (_BYTE *)KeAbPreAcquire(v6 + 352, 0LL, 0);
        v31 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v30, v6 + 352);
        if ( v31 )
          v31[26] |= 1u;
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_53:
      v23 = -1073741823;
      goto LABEL_54;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
    }
    else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    }
    KeAbPostRelease(v6 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogWaitForNewMessage(v6);
    result = AlpcpCompleteDeferSignalRequestAndWait(a1, *(_QWORD *)(v6 + 248), v46, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
