/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x140222374
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x14017F710 (ZwFsControlFile.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140222054 (MiQueueSyncModifiedWriterApc.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x140225C2C (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     MiContractWsSwapPageFile @ 0x1404FB15C (MiContractWsSwapPageFile.c)
 */

BOOLEAN __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 PageFilePte; // rsi
  __int64 v4; // r9
  struct _EX_RUNDOWN_REF *v5; // r12
  unsigned __int64 v6; // rtt
  BOOLEAN result; // al
  volatile signed __int64 *v8; // r13
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int16 v12; // ax
  unsigned int v13; // eax
  unsigned int v14; // edi
  __int64 *v15; // r13
  unsigned int v16; // r14d
  __int16 v17; // ax
  __int64 v18; // r12
  unsigned int Blink_high; // ecx
  unsigned __int64 updated; // rdi
  __int64 v21; // r12
  int v22; // ebx
  __int16 v23; // ax
  unsigned __int64 v24; // rtt
  signed __int32 v25[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-B0h]
  unsigned int v27; // [rsp+5Ch] [rbp-ACh]
  struct _KEVENT Event[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 PteTimeStamp; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  struct _KTHREAD *v31; // [rsp+A8h] [rbp-60h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-58h] BYREF
  int v33[24]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD InputBuffer[3]; // [rsp+128h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v31 = CurrentThread;
  PageFilePte = MiMakePageFilePte(0LL);
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 864);
  _m_prefetchw((const void *)(a1 + 864));
  v6 = *(_QWORD *)(a1 + 864) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 864), v6 + 2, v6)
    || (result = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 864))) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v8 = (volatile signed __int64 *)(a1 + 1016);
    v9 = KeAbPreAcquire(a1 + 1016, 0LL, 0LL, v4);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1016), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1016), v9, a1 + 1016, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    v13 = *(_DWORD *)(a1 + 5336);
    v14 = 0;
    v27 = 0;
    if ( v13 )
    {
      v15 = (__int64 *)(a1 + 5344);
      v16 = v13;
      do
      {
        v30 = *v15;
        v17 = *(_WORD *)(v30 + 164);
        if ( (v17 & 0x40) == 0 && (v17 & 0x10) != 0 )
        {
          memset(Event, 0, sizeof(Event));
          v18 = v30;
          Event[0].Header.WaitListHead.Blink = &Event[0].Header.WaitListHead;
          LOWORD(Event[0].Header.Lock) = 0;
          Event[0].Header.Size = 6;
          Event[0].Header.WaitListHead.Flink = &Event[0].Header.WaitListHead;
          Event[0].Header.SignalState = 0;
          Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v14 | 0x200000000000LL);
          *(_QWORD *)&Event[1].Header.Lock = a1;
          if ( *(_QWORD *)(v30 + 56) >= 0x2000uLL )
          {
            MiQueueSyncModifiedWriterApc(
              a1,
              (__int64)v33,
              (__int64)MiTrimUnusedPageFileRegionsApc,
              (__int64)Event,
              Event);
            Blink_high = HIDWORD(Event[1].Header.WaitListHead.Blink);
            if ( HIDWORD(Event[1].Header.WaitListHead.Blink) )
            {
              do
              {
                InputBuffer[0] = 0x100000000LL;
                InputBuffer[1] = (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) << 12;
                InputBuffer[2] = (unsigned __int64)Blink_high << 12;
                KeResetEvent(Event);
                Status = ZwFsControlFile(
                           *(HANDLE *)(v18 + 184),
                           0LL,
                           (PIO_APC_ROUTINE)MiIrpCompletionApcRoutine,
                           Event,
                           &IoStatusBlock,
                           0x98208u,
                           InputBuffer,
                           0x18u,
                           0LL,
                           0);
                if ( Status == 259 )
                {
                  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
                  Status = IoStatusBlock.Status;
                }
                updated = MiTransferSoftwarePte(PageFilePte, v18, LODWORD(Event[1].Header.WaitListHead.Blink));
                PteTimeStamp = MiGetPteTimeStamp(updated);
                if ( HIDWORD(Event[1].Header.WaitListHead.Blink) )
                {
                  v21 = PteTimeStamp;
                  v22 = HIDWORD(Event[1].Header.WaitListHead.Blink);
                  do
                  {
                    MiReleasePageFileInfo((struct _KEVENT *)a1, updated, 0);
                    updated = MiUpdatePageFileHighInPte(updated, ++v21);
                    --v22;
                  }
                  while ( v22 );
                  v18 = v30;
                }
                if ( Status < 0 )
                  break;
                KeResetEvent(Event);
                Event[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(unsigned int)(HIDWORD(Event[1].Header.WaitListHead.Blink)
                                                                                        + LODWORD(Event[1].Header.WaitListHead.Blink));
                if ( (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) >= *(_QWORD *)v18 )
                  break;
                MiQueueSyncModifiedWriterApc(
                  a1,
                  (__int64)v33,
                  (__int64)MiTrimUnusedPageFileRegionsApc,
                  (__int64)Event,
                  Event);
                Blink_high = HIDWORD(Event[1].Header.WaitListHead.Blink);
              }
              while ( HIDWORD(Event[1].Header.WaitListHead.Blink) );
              v14 = v27;
            }
          }
        }
        ++v14;
        ++v15;
        v27 = v14;
      }
      while ( v14 < v16 );
      CurrentThread = v31;
      v5 = (struct _EX_RUNDOWN_REF *)(a1 + 864);
      v8 = (volatile signed __int64 *)(a1 + 1016);
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    v23 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    MiContractWsSwapPageFile(a1);
    _m_prefetchw(v5);
    v24 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v24 - 2, v24) )
      ExfReleaseRundownProtection(v5);
    result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    *(_QWORD *)(a1 + 968) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    _InterlockedOr(v25, 0);
    *(_QWORD *)(a1 + 960) = 0LL;
  }
  return result;
}
