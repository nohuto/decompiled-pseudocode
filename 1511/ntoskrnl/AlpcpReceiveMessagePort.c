/*
 * XREFs of AlpcpReceiveMessagePort @ 0x14042A910
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpWaitForSingleObject @ 0x1400E38BC (AlpcpWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpQueryHeadLargeQueue @ 0x14042B220 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1404A9110 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpGetAvailableAttributesSet @ 0x1404A9168 (AlpcpGetAvailableAttributesSet.c)
 *     AlpcpLogReceiveMessage @ 0x140620C04 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x140620D14 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, unsigned __int8 a2, __int64 a3, ULONG_PTR *a4, LONG a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rsi
  volatile signed __int64 *v8; // r14
  __int64 v9; // rdi
  int i; // r12d
  int v11; // eax
  volatile signed __int64 *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  ULONG_PTR HeadLargeQueue; // rdi
  ULONG_PTR v16; // rax
  signed __int64 BugCheckParameter4; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  struct _LIST_ENTRY ***v27; // rdx
  struct _LIST_ENTRY **p_Blink; // rcx
  __int64 v29; // r8
  unsigned int v30; // ebp
  unsigned int v31; // edi
  volatile signed __int32 *v32; // rbp
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rcx
  ULONG_PTR v37; // rdi
  unsigned __int64 *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  struct _LIST_ENTRY **v41; // rax
  struct _LIST_ENTRY *v42; // rdx
  struct _LIST_ENTRY ***QuadPart; // rcx
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // r8
  struct _KTHREAD *v47; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  v47 = CurrentThread;
  v8 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    v9 = KeAbPreAcquire(v6 + 352, 0LL, 0LL);
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
          v31 = -1073740032;
          goto LABEL_72;
        }
        if ( (v11 & 0x10) != 0 )
        {
          v31 = -1073741759;
          goto LABEL_72;
        }
        v12 = (volatile signed __int64 *)(v6 + 136);
        v13 = KeAbPreAcquire(v6 + 136, 0LL, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 136), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v13, v6 + 136);
        if ( v14 )
          *(_BYTE *)(v14 + 26) |= 1u;
        HeadLargeQueue = AlpcpQueryHeadLargeQueue(v6);
        if ( !HeadLargeQueue )
        {
          HeadLargeQueue = *(_QWORD *)(v6 + 144);
          if ( HeadLargeQueue == v6 + 144 || !HeadLargeQueue )
            break;
        }
        v16 = KeAbPreAcquire(HeadLargeQueue - 16, 0LL, 1LL);
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
            *(_WORD *)(HeadLargeQueue + 228) |= 0x2000u;
            v18 = KeAbPreAcquire(v6 + 176, 0LL, 0LL);
            v19 = v18;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 176), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 176), v18, v6 + 176);
            if ( v19 )
              *(_BYTE *)(v19 + 26) |= 1u;
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
            *(_WORD *)(HeadLargeQueue + 228) &= ~0x2000u;
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
          v32 = (volatile signed __int32 *)(v6 + 136);
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
          v33 = KeAbPreAcquire(v6 + 352, 0LL, 0LL);
          if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)(v6 + 352), v33, v6 + 352);
          if ( v33 )
            *(_BYTE *)(v33 + 26) |= 1u;
          i = 0;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
              goto LABEL_107;
          }
          else
          {
            v34 = KeAbPreAcquire(v6 + 136, 0LL, 0LL);
            v35 = v34;
            if ( _interlockedbittestandset64(v32, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v34, v6 + 136);
            if ( v35 )
              *(_BYTE *)(v35 + 26) |= 1u;
            if ( !AlpcpQueryHeadLargeQueue(v6) )
            {
              v36 = *(_QWORD *)(v6 + 144);
              if ( v36 == v6 + 144 || !v36 )
                v36 = 0LL;
              if ( HeadLargeQueue == v36 )
                goto LABEL_20;
            }
            if ( HeadLargeQueue == AlpcpQueryHeadLargeQueue(v6) )
              goto LABEL_20;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
            {
LABEL_107:
              KeAbPostRelease(v6 + 352);
              AlpcpUnlockMessage(HeadLargeQueue);
              CurrentThread = v47;
              goto LABEL_2;
            }
          }
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          goto LABEL_107;
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
        v44 = KeAbPreAcquire(v6 + 352, 0LL, 0LL);
        v45 = v44;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v44, v6 + 352);
        if ( v45 )
          *(_BYTE *)(v45 + 26) |= 1u;
        CurrentThread = v47;
        i = 1;
      }
      if ( *(_QWORD *)(v6 + 384) != v6 + 384 )
      {
        v37 = *(_QWORD *)(v6 + 384) - 80LL;
        **(_QWORD **)(v37 + 88) = *(_QWORD *)(v37 + 80);
        *(_QWORD *)(*(_QWORD *)(v37 + 80) + 8LL) = *(_QWORD *)(v37 + 88);
        --*(_DWORD *)(v6 + 464);
        AlpcpReferenceBlob(v37);
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
        AlpcpLockForCachedReferenceBlob(v37);
        *(_WORD *)(v37 - 30) -= 2;
        *a4 = v37;
        return 0LL;
      }
      v22 = *(_QWORD *)(v6 + 360);
      if ( v22 && (*(_QWORD *)(*(_QWORD *)(v22 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v31 = 1073741872;
        goto LABEL_72;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_77;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v31 = 258;
LABEL_72:
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
        return v31;
      }
      if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
        goto LABEL_77;
      if ( i )
      {
        CurrentThread[1].Timer.Header.LockNV = a5;
        v25 = KeAbPreAcquire(v6 + 224, 0LL, 0LL);
        v26 = v25;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 224), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v25, v6 + 224);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        v27 = *(struct _LIST_ENTRY ****)(v6 + 240);
        p_Blink = &v47[1].Timer.Header.WaitListHead.Blink;
        v47[1].Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(v6 + 232);
        v47[1].Timer.DueTime.QuadPart = (unsigned __int64)v27;
        if ( *v27 != (struct _LIST_ENTRY **)(v6 + 232) )
          __fastfail(3u);
        *v27 = p_Blink;
        *(_QWORD *)(v6 + 240) = p_Blink;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v6);
        v30 = AlpcpCompleteDeferSignalRequestAndWait(a1, &v47[1].StateSaveArea, v29, a2, a3);
        if ( !v30 )
        {
          HeadLargeQueue = *(_QWORD *)&v47[1].Timer.Header.Lock;
          CurrentThread = v47;
          *(_QWORD *)&v47[1].Timer.Header.Lock = 0LL;
          if ( !HeadLargeQueue )
            goto LABEL_2;
          goto LABEL_70;
        }
        v38 = (unsigned __int64 *)(v6 + 224);
        v39 = KeAbPreAcquire((ULONG_PTR)v38, 0LL, 0LL);
        v40 = v39;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
          ExfAcquirePushLockExclusiveEx(v38, v39, (ULONG_PTR)v38);
        if ( v40 )
          *(_BYTE *)(v40 + 26) |= 1u;
        v41 = &v47[1].Timer.Header.WaitListHead.Blink;
        if ( v47[1].Timer.Header.WaitListHead.Blink )
        {
          *(_QWORD *)&v47[1].Timer.Header.Lock = 0LL;
          v42 = *v41;
          QuadPart = (struct _LIST_ENTRY ***)v47[1].Timer.DueTime.QuadPart;
          if ( (struct _LIST_ENTRY **)(*v41)->Blink != v41 || *QuadPart != v41 )
            __fastfail(3u);
          *QuadPart = &v42->Flink;
          v42->Blink = (struct _LIST_ENTRY *)QuadPart;
          *v41 = 0LL;
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
          HeadLargeQueue = *(_QWORD *)&v47[1].Timer.Header.Lock;
          *(_QWORD *)&v47[1].Timer.Header.Lock = 0LL;
          if ( HeadLargeQueue )
          {
LABEL_70:
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
        return v30;
      }
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) != 17 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        v23 = KeAbPreAcquire(v6 + 352, 0LL, 0LL);
        v24 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 352), v23, v6 + 352);
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_77:
      v31 = -1073741823;
      goto LABEL_72;
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
