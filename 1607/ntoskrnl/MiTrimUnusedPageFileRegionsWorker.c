/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiLockWsSwapExclusive @ 0x1400B1F04 (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x1400B2758 (MiUnlockWsSwapExclusive.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400B4370 (MiPageFileLargestBitmapsRun.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14010DBB0 (MiQueueSyncModifiedWriterApc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x14015A910 (ZwFsControlFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x1401F2578 (MiMakePageFilePte.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 *     MiContractWsSwapPageFile @ 0x1404D43A0 (MiContractWsSwapPageFile.c)
 */

char __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rdi
  __int64 UnbiasedInterruptTime; // rax
  unsigned int v5; // r15d
  __int64 *v6; // r12
  __int64 v7; // r13
  __int16 v8; // ax
  unsigned int v9; // eax
  unsigned __int64 updated; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 PteTimeStamp; // r14
  int Blink_high; // edi
  signed __int32 v16[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Event[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v19; // [rsp+94h] [rbp-74h]
  __int64 PageFilePte; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v21; // [rsp+A0h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  int v23; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD InputBuffer[3]; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread;
  PageFilePte = MiMakePageFilePte(0LL);
  v3 = PageFilePte;
  LOBYTE(UnbiasedInterruptTime) = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 864));
  if ( (_BYTE)UnbiasedInterruptTime )
  {
    MiLockWsSwapExclusive((__int64)CurrentThread, a1);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v5 = 0;
    v19 = *(_DWORD *)(a1 + 6296);
    if ( v19 )
    {
      v6 = (__int64 *)(a1 + 6304);
      do
      {
        v7 = *v6;
        v8 = *(_WORD *)(*v6 + 204);
        if ( (v8 & 0x40) == 0 && (v8 & 0x10) != 0 )
        {
          memset(Event, 0, sizeof(Event));
          LOWORD(Event[0].Header.Lock) = 0;
          Event[0].Header.WaitListHead.Blink = &Event[0].Header.WaitListHead;
          Event[0].Header.Size = 6;
          Event[0].Header.WaitListHead.Flink = &Event[0].Header.WaitListHead;
          Event[0].Header.SignalState = 0;
          Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v5 | 0x200000000000LL);
          *(_QWORD *)&Event[1].Header.Lock = a1;
          v9 = MiPageFileLargestBitmapsRun(v7);
          if ( v9 >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(a1, (int)&v23, (int)MiTrimUnusedPageFileRegionsApc, (int)Event, Event);
              if ( !HIDWORD(Event[1].Header.WaitListHead.Blink) )
                break;
              InputBuffer[0] = 0x100000000LL;
              InputBuffer[1] = (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) << 12;
              InputBuffer[2] = (unsigned __int64)HIDWORD(Event[1].Header.WaitListHead.Blink) << 12;
              KeResetEvent(Event);
              Status = ZwFsControlFile(
                         *(HANDLE *)(v7 + 224),
                         0LL,
                         MiIrpCompletionApcRoutine,
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
              updated = MiTransferSoftwarePte(v3, v7, LODWORD(Event[1].Header.WaitListHead.Blink), 3LL);
              PteTimeStamp = MiGetPteTimeStamp(updated, v11, v12);
              if ( HIDWORD(Event[1].Header.WaitListHead.Blink) )
              {
                Blink_high = HIDWORD(Event[1].Header.WaitListHead.Blink);
                do
                {
                  MiReleasePageFileInfo((struct _KEVENT *)a1, updated, 2);
                  updated = MiUpdatePageFileHighInPte(updated, ++PteTimeStamp);
                  --Blink_high;
                }
                while ( Blink_high );
                v3 = PageFilePte;
              }
              if ( Status < 0 )
                break;
              KeResetEvent(Event);
              Event[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(unsigned int)(HIDWORD(Event[1].Header.WaitListHead.Blink)
                                                                                      + LODWORD(Event[1].Header.WaitListHead.Blink));
            }
            while ( (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) < *(_QWORD *)v7 );
          }
        }
        ++v5;
        ++v6;
      }
      while ( v5 < v19 );
      CurrentThread = v21;
    }
    --CurrentThread->SpecialApcDisable;
    MiUnlockWsSwapExclusive((__int64)CurrentThread, a1);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 864));
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    *(_QWORD *)(a1 + 992) = UnbiasedInterruptTime;
    _InterlockedOr(v16, 0);
    *(_QWORD *)(a1 + 984) = 0LL;
  }
  return UnbiasedInterruptTime;
}
