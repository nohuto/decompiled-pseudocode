/*
 * XREFs of AlpcpReceiveSynchronousReply @ 0x14047A190
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140529BA4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogReceiveMessage @ 0x1406A0280 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogUnwait @ 0x1406A0338 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpReceiveSynchronousReply(
        __int64 *a1,
        KPROCESSOR_MODE a2,
        __int64 *a3,
        int a4,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // rbx
  struct _KTHREAD *v12; // r8
  __int16 v13; // ax
  unsigned int v14; // eax
  struct _KTHREAD *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rsi
  signed __int64 v20; // rax
  int v21; // eax
  char v22; // cl
  int v23; // edi
  signed __int64 v24; // rcx
  char v25; // cl
  int v26; // esi
  signed __int64 v27; // rcx
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  unsigned int v30; // eax
  struct _KTHREAD *v31; // rcx
  int v32; // eax
  char v33; // cl
  int v34; // edi
  signed __int64 v35; // rcx
  unsigned int v36; // eax
  volatile signed __int64 *v37; // rsi
  __int64 v38; // rbp
  __int64 v39; // r9
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r14
  int v44; // eax

  CurrentThread = KeGetCurrentThread();
  v7 = *a1;
  v8 = AlpcpSignalAndWait((__int64)a1, &CurrentThread[1].StateSaveArea, 17LL, a2, Timeout);
  v10 = v8;
  v11 = _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, 0LL);
  if ( !v11 )
  {
    if ( v8 )
    {
      v12 = KeGetCurrentThread();
      v13 = v12->KernelApcDisable + 1;
      v12->KernelApcDisable = v13;
      if ( !v13
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
        && !v12->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v14 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrLpcReply, 0, 0, 0LL);
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      if ( AlpcpLogEnabled )
        AlpcpLogUnwait(v14);
    }
    return 3221227265LL;
  }
  v17 = KeAbPreAcquire(v11 - 16, 0LL, 0LL, v9);
  v19 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 - 16), v17, v11 - 16, v18);
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
  *(_BYTE *)(v11 - 32) |= 1u;
  v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), 0x10000uLL) + 0x10000;
  if ( v20 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v11, 0x26uLL, v20);
  v21 = *(_DWORD *)(v11 + 40);
  if ( (v21 & 0x800) != 0 )
    *(_DWORD *)(v11 + 40) = v21 & 0xFFFFF7FF;
  --*(_WORD *)(v11 - 30);
  if ( (*(_BYTE *)(v11 + 40) & 7) != 5 )
  {
    if ( *(struct _KTHREAD **)(v11 + 32) == CurrentThread )
    {
      if ( !v10 )
        v10 = -1073740031;
      goto LABEL_33;
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v11);
    v22 = *(_BYTE *)(v11 - 32);
    v23 = 0;
    if ( (v22 & 1) != 0 )
    {
      v23 = 0x10000 - *(__int16 *)(v11 - 30);
      *(_WORD *)(v11 - 30) = 0;
      *(_BYTE *)(v11 - 32) = v22 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
    KeAbPostRelease(v11 - 16);
    if ( v23 <= 0 )
      return 3221227265LL;
    v24 = -v23 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v23);
    if ( v24 > 0 )
      return 3221227265LL;
    if ( v24 )
      KeBugCheckEx(0x18u, 0LL, v11, 0x28uLL, v24);
LABEL_30:
    AlpcpDestroyBlob(v11);
    return 3221227265LL;
  }
  *(_DWORD *)(v11 + 40) &= 0xFFFFFFF8;
  if ( v10 )
  {
    if ( *(struct _KTHREAD **)(v11 + 32) == CurrentThread )
    {
LABEL_33:
      *(_QWORD *)(v11 + 32) = 0LL;
      --*(_WORD *)(v11 - 30);
      if ( (*(_DWORD *)(v11 + 40) & 0x80u) != 0 )
      {
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v11);
        v25 = *(_BYTE *)(v11 - 32);
        v26 = 0;
        if ( (v25 & 1) != 0 )
        {
          v26 = 0x10000 - *(__int16 *)(v11 - 30);
          *(_WORD *)(v11 - 30) = 0;
          *(_BYTE *)(v11 - 32) = v25 & 0xFE;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
        KeAbPostRelease(v11 - 16);
        if ( v26 > 0 )
        {
          v27 = -v26 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v26);
          if ( v27 <= 0 )
          {
            if ( v27 )
              KeBugCheckEx(0x18u, 0LL, v11, 0x28uLL, v27);
            AlpcpDestroyBlob(v11);
          }
        }
      }
      else
      {
        AlpcpCancelMessage(v7, v11, 0LL);
      }
      return v10;
    }
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v30 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrLpcReply, 0, 0, 0LL);
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    if ( AlpcpLogEnabled )
      AlpcpLogUnwait(v30);
    v10 = 0;
  }
  v32 = *(_DWORD *)(v11 + 40);
  if ( (v32 & 0x80u) != 0 )
  {
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v11);
    v33 = *(_BYTE *)(v11 - 32);
    v34 = 0;
    if ( (v33 & 1) != 0 )
    {
      v34 = 0x10000 - *(__int16 *)(v11 - 30);
      *(_WORD *)(v11 - 30) = 0;
      *(_BYTE *)(v11 - 32) = v33 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
    KeAbPostRelease(v11 - 16);
    if ( v34 <= 0 )
      return 3221227265LL;
    v35 = -v34 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v34);
    if ( v35 > 0 )
      return 3221227265LL;
    if ( v35 )
      KeBugCheckEx(0x18u, 0LL, v11, 0x28uLL, v35);
    goto LABEL_30;
  }
  if ( (v32 & 0x200) != 0 )
  {
    v36 = 0;
    if ( *(_QWORD *)(v11 + 136) )
      v36 = 0x80000000;
    if ( *(_QWORD *)(v11 + 144) )
      v36 |= 0x40000000u;
    if ( *(_QWORD *)(v11 + 152) )
      v36 |= 0x10000000u;
    if ( (v36 & a4) == 0 )
    {
      *(_WORD *)(v11 + 228) &= ~0x2000u;
LABEL_93:
      if ( AlpcpLogEnabled )
        AlpcpLogReceiveMessage(v11);
      *a3 = v11;
      return v10;
    }
  }
  v37 = (volatile signed __int64 *)(v7 + 352);
  *(_WORD *)(v11 + 228) |= 0x2000u;
  v38 = KeAbPreAcquire(v7 + 352, 0LL, 0LL, v18);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v7 + 352), v38, v7 + 352, v39);
  if ( v38 )
    *(_BYTE *)(v38 + 26) |= 1u;
  v40 = *(_DWORD *)(v7 + 416);
  if ( (v40 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(v7 + 256) & 0x1000) == 0 || (v40 & 0x20) == 0 || !*(_QWORD *)(v11 + 32) )
    {
      ++*(_WORD *)(v11 - 30);
      v41 = KeAbPreAcquire(v7 + 176, 0LL, 0LL, v39);
      v43 = v41;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 176), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 176), v41, v7 + 176, v42);
      if ( v43 )
        *(_BYTE *)(v43 + 26) |= 1u;
      v44 = *(_DWORD *)(v11 + 40);
      *(_QWORD *)(v11 + 16) = v7;
      *(_DWORD *)(v11 + 40) = v44 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v7 + 416) & 6)) | 3;
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(v7 + 192);
      *(_QWORD *)v11 = v7 + 184;
      **(_QWORD **)(v7 + 192) = v11;
      *(_QWORD *)(v7 + 192) = v11;
      ++*(_DWORD *)(v7 + 456);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 176));
      KeAbPostRelease(v7 + 176);
    }
    if ( _InterlockedCompareExchange64(v37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
    KeAbPostRelease(v7 + 352);
    goto LABEL_93;
  }
  if ( _InterlockedCompareExchange64(v37, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
  KeAbPostRelease(v7 + 352);
  AlpcpCancelMessage(v7, v11, 0LL);
  return 3221227264LL;
}
