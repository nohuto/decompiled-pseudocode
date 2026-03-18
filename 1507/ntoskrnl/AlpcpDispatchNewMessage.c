/*
 * XREFs of AlpcpDispatchNewMessage @ 0x14047E410
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsGetProcessJob @ 0x140124AE4 (PsGetProcessJob.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140195E38 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404A4EA8 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  int v5; // eax
  ULONG_PTR v7; // rbx
  __int64 *v8; // r14
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // r9
  int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // r9
  char v19; // cl
  int v20; // edi
  signed __int64 BugCheckParameter4; // rcx
  __int64 v22; // rcx
  __int64 ProcessJob; // rax
  char v24; // cl
  int v25; // edi
  signed __int64 v26; // rcx
  char v28; // cl
  int v29; // edi
  signed __int64 v30; // rcx
  char v31; // cl
  int v32; // edi
  signed __int64 v33; // rcx
  __int16 v34; // cx
  __int16 v35; // cx
  char v36; // cl
  int v37; // edi
  signed __int64 v38; // rcx
  int v39; // [rsp+70h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+10h]

  v4 = *a1;
  v5 = *((_DWORD *)a1 + 12);
  v7 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v8 = *(__int64 **)(v4 + 16);
  v39 = v5;
  CurrentThread = KeGetCurrentThread();
  v9 = (*(_DWORD *)(v4 + 416) >> 1) & 3;
  v10 = KeAbPreAcquire((ULONG_PTR)(v8 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v8 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v8 - 2, v10, (ULONG_PTR)(v8 - 2), v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v12 = v9 - 1;
  if ( !v12 )
  {
    v13 = *v8;
    goto LABEL_10;
  }
  if ( v12 != 1 )
  {
    v13 = v8[2];
LABEL_10:
    v14 = v13;
    goto LABEL_11;
  }
  v13 = *v8;
  v14 = v8[1];
LABEL_11:
  if ( v13 && !ObReferenceObjectSafe(v13) )
    v13 = 0LL;
  if ( v14 && !ObReferenceObjectSafe(v14) )
    v14 = 0LL;
  if ( !v13 || !v14 )
  {
    if ( _InterlockedCompareExchange64(v8 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 - 2);
    KeAbPostRelease((ULONG_PTR)(v8 - 2));
    if ( v13 )
      ObfDereferenceObject((PVOID)v13);
    if ( v14 )
      ObfDereferenceObject((PVOID)v14);
    goto LABEL_100;
  }
  v15 = KeAbPreAcquire(v13 + 352, 0LL, 0LL, v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v13 + 352), v15, v13 + 352, v16);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  if ( v14 != v13 )
  {
    v17 = KeAbPreAcquire(v14 + 352, 0LL, 0LL, v16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v14 + 352), v17, v14 + 352, v18);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
  }
  if ( (*(_DWORD *)(v13 + 416) & 0x20) != 0 || (*(_DWORD *)(v14 + 416) & 0x20) != 0 )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v8, v13, v14);
LABEL_100:
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v7);
    v36 = *(_BYTE *)(v7 - 32);
    v37 = 0;
    if ( (v36 & 1) != 0 )
    {
      v37 = 0x10000 - *(__int16 *)(v7 - 30);
      *(_WORD *)(v7 - 30) = 0;
      *(_BYTE *)(v7 - 32) = v36 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 - 16));
    KeAbPostRelease(v7 - 16);
    if ( v37 <= 0 )
      return 3221225527LL;
    v38 = -v37 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), -v37);
    if ( v38 > 0 )
      return 3221225527LL;
    if ( v38 )
      KeBugCheckEx(0x18u, 0LL, v7, 0x28uLL, v38);
    goto LABEL_109;
  }
  if ( (*(_DWORD *)(v4 + 416) & 0x20) != 0 && (*(_DWORD *)(v4 + 256) & 0x1000) == 0 )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v8, v13, v14);
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v7);
    v19 = *(_BYTE *)(v7 - 32);
    v20 = 0;
    if ( (v19 & 1) != 0 )
    {
      v20 = 0x10000 - *(__int16 *)(v7 - 30);
      *(_WORD *)(v7 - 30) = 0;
      *(_BYTE *)(v7 - 32) = v19 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 - 16));
    KeAbPostRelease(v7 - 16);
    if ( v20 <= 0 )
      return 3221225527LL;
    BugCheckParameter4 = -v20 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), -v20);
    if ( BugCheckParameter4 > 0 )
      return 3221225527LL;
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, v7, 0x28uLL, BugCheckParameter4);
LABEL_109:
    AlpcpDestroyBlob(v7);
    return 3221225527LL;
  }
  if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
    && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
    && (v22 = *(_QWORD *)(v13 + 24), (v22 & 1) == 0)
    && v22
    && (ProcessJob = PsGetProcessJob(v22)) != 0
    && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v8, v13, v14);
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v7);
    v24 = *(_BYTE *)(v7 - 32);
    v25 = 0;
    if ( (v24 & 1) != 0 )
    {
      v25 = 0x10000 - *(__int16 *)(v7 - 30);
      *(_WORD *)(v7 - 30) = 0;
      *(_BYTE *)(v7 - 32) = v24 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 - 16));
    KeAbPostRelease(v7 - 16);
    if ( v25 > 0 )
    {
      v26 = -v25 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), -v25);
      if ( v26 <= 0 )
      {
        if ( v26 )
          KeBugCheckEx(0x18u, 0LL, v7, 0x28uLL, v26);
        AlpcpDestroyBlob(v7);
      }
    }
    return 3221225526LL;
  }
  else if ( (*(_DWORD *)(v13 + 256) & 0x20000) != 0 )
  {
    if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) <= *(_QWORD *)(v13 + 272) )
    {
      *(_QWORD *)(v7 + 192) = 0LL;
      *(_WORD *)(v7 + 226) = *((_WORD *)a1 + 26);
      *(_WORD *)(v7 + 224) = *((_WORD *)a1 + 26) - 40;
      v34 = *((_WORD *)a1 + 27);
      *(_WORD *)(v7 + 228) = v34;
      *(_WORD *)(v7 + 230) = *((_WORD *)a1 + 28);
      *(_OWORD *)(v7 + 232) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
      if ( (v39 & 0x10000) != 0 )
      {
        *(_DWORD *)(v7 + 40) |= 0x200u;
        v35 = v34 & 0xDFFF;
      }
      else
      {
        *(_DWORD *)(v7 + 40) &= ~0x200u;
        v35 = v34 | 0x2000;
      }
      *(_WORD *)(v7 + 228) = v35;
      ObfReferenceObject((PVOID)v4);
      *(_DWORD *)(v7 + 40) |= 0x1000u;
      *(_QWORD *)(v7 + 24) = v4;
      *(_DWORD *)(v7 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v14 + 400));
      *(_QWORD *)(v7 + 120) = *(_QWORD *)(v14 + 56);
      *(_QWORD *)(v7 + 176) = v8;
      *(_QWORD *)(v7 + 184) = *v8;
      if ( v14 != v13 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v14 + 352));
        KeAbPostRelease(v14 + 352);
      }
      if ( (v39 & 0x20000) != 0 )
      {
        *(_DWORD *)(v7 + 40) &= ~0x100u;
        *(_QWORD *)(v7 + 32) = CurrentThread;
        *(_WORD *)(v7 - 30) += 2;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v7);
      }
      a1[4] = v13;
      a1[2] = (__int64)v8;
      AlpcpCompleteDispatchMessage(a1);
      ObfDereferenceObject((PVOID)v14);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v8, v13, v14);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v7);
      v31 = *(_BYTE *)(v7 - 32);
      v32 = 0;
      if ( (v31 & 1) != 0 )
      {
        v32 = 0x10000 - *(__int16 *)(v7 - 30);
        *(_WORD *)(v7 - 30) = 0;
        *(_BYTE *)(v7 - 32) = v31 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 - 16));
      KeAbPostRelease(v7 - 16);
      if ( v32 > 0 )
      {
        v33 = -v32 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), -v32);
        if ( v33 <= 0 )
        {
          if ( v33 )
            KeBugCheckEx(0x18u, 0LL, v7, 0x28uLL, v33);
          AlpcpDestroyBlob(v7);
        }
      }
      return 3221225507LL;
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v8, v13, v14);
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v7);
    v28 = *(_BYTE *)(v7 - 32);
    v29 = 0;
    if ( (v28 & 1) != 0 )
    {
      v29 = 0x10000 - *(__int16 *)(v7 - 30);
      *(_WORD *)(v7 - 30) = 0;
      *(_BYTE *)(v7 - 32) = v28 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 - 16));
    KeAbPostRelease(v7 - 16);
    if ( v29 > 0 )
    {
      v30 = -v29 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), -v29);
      if ( v30 <= 0 )
      {
        if ( v30 )
          KeBugCheckEx(0x18u, 0LL, v7, 0x28uLL, v30);
        AlpcpDestroyBlob(v7);
      }
    }
    return 3221227271LL;
  }
}
