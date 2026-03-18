/*
 * XREFs of ObpDeregisterObject @ 0x1406AD5D0
 * Callers:
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     ObpProcessRemoveObjectQueue @ 0x140474070 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwTraceObject @ 0x1406E4034 (EtwTraceObject.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rdi
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int16 v18; // ax

  if ( (xmmword_1403D1290 & 0x80u) != 0LL )
    EtwTraceObject(4401LL, a1);
  if ( (*(_BYTE *)(a1 + 25) & 3) == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v7, (ULONG_PTR)&ObpStackTraceLock, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( (ObpTraceFlags & 0x73) != 0 )
    {
      v13 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      v14 = (_QWORD *)*((_QWORD *)ObpObjectTable + v13);
      if ( !v14 )
        goto LABEL_26;
      do
      {
        if ( *v14 == a1 )
          break;
        v6 = v14;
        v14 = (_QWORD *)v14[1];
      }
      while ( v14 );
      if ( v14 )
      {
        v15 = v14[1];
        if ( v6 )
          v6[1] = v15;
        else
          *((_QWORD *)ObpObjectTable + v13) = v15;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
        KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
        v16 = KeGetCurrentThread();
        v17 = v16->SpecialApcDisable + 1;
        v16->SpecialApcDisable = v17;
        if ( !v17 && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
          KiCheckForKernelApcDelivery();
        ExFreePoolWithTag(v14, 0x7452624Fu);
      }
      else
      {
LABEL_26:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
        KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
        v11 = KeGetCurrentThread();
        v18 = v11->SpecialApcDisable + 1;
        v11->SpecialApcDisable = v18;
        if ( !v18 )
          goto LABEL_29;
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      v11 = KeGetCurrentThread();
      v12 = v11->SpecialApcDisable + 1;
      v11->SpecialApcDisable = v12;
      if ( !v12 )
      {
LABEL_29:
        if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
          KiCheckForKernelApcDelivery();
      }
    }
  }
}
