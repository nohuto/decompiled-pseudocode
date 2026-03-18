/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x1401DD1DC
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400F5160 (MiPageFileLargestBitmapsRun.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     MiUnlockWsSwapExclusive @ 0x1400F5E18 (MiUnlockWsSwapExclusive.c)
 *     MiLockWsSwapExclusive @ 0x1400F5E60 (MiLockWsSwapExclusive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x140150D40 (ZwFsControlFile.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1401DD0B0 (MiQueueSyncModifiedWriterApc.c)
 *     MiContractWsSwapPageFile @ 0x1403B592C (MiContractWsSwapPageFile.c)
 */

char __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 UnbiasedInterruptTime; // rax
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  __int64 *v6; // r12
  __int64 v7; // r14
  unsigned int v8; // eax
  int Blink_high; // r13d
  unsigned __int64 v10; // rbx
  signed __int32 v12[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Event[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v15; // [rsp+90h] [rbp-78h]
  unsigned __int64 v16; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  int v19[24]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD InputBuffer[3]; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = 0LL;
  LOBYTE(UnbiasedInterruptTime) = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 872));
  if ( (_BYTE)UnbiasedInterruptTime )
  {
    MiLockWsSwapExclusive((__int64)CurrentThread, a1);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v4 = *(_DWORD *)(a1 + 5720);
    v5 = 0;
    v15 = v4;
    if ( v4 )
    {
      v6 = (__int64 *)(a1 + 5728);
      do
      {
        v7 = *v6;
        if ( (*(_BYTE *)(*v6 + 204) & 0x50) == 0x10 )
        {
          memset(Event, 0, sizeof(Event));
          LOWORD(Event[0].Header.Lock) = 0;
          Event[0].Header.WaitListHead.Blink = &Event[0].Header.WaitListHead;
          Event[0].Header.Size = 6;
          Event[0].Header.WaitListHead.Flink = &Event[0].Header.WaitListHead;
          Event[0].Header.SignalState = 0;
          Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v5 | 0x200000000000LL);
          *(_QWORD *)&Event[1].Header.Lock = a1;
          v8 = MiPageFileLargestBitmapsRun(v7);
          if ( v8 >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v19,
                (__int64)MiTrimUnusedPageFileRegionsApc,
                (__int64)Event,
                Event);
              if ( !HIDWORD(Event[1].Header.WaitListHead.Blink) )
                break;
              InputBuffer[0] = 0x100000000LL;
              InputBuffer[1] = (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) << 12;
              InputBuffer[2] = (unsigned __int64)HIDWORD(Event[1].Header.WaitListHead.Blink) << 12;
              KeResetEvent(Event);
              Status = ZwFsControlFile(
                         *(HANDLE *)(v7 + 224),
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
              MI_SET_PAGING_FILE_INFO((__int64)&v16, &v17, v7, (int)Event[1].Header.WaitListHead.Blink, 3);
              Blink_high = HIDWORD(Event[1].Header.WaitListHead.Blink);
              if ( HIDWORD(Event[1].Header.WaitListHead.Blink) )
              {
                v10 = v16;
                do
                {
                  MiReleasePageFileInfo(a1, v10, 2);
                  v10 = (unsigned int)v10 ^ ((v10 & 0xFFFFFFFF00000000uLL) + 0x100000000LL);
                  --Blink_high;
                }
                while ( Blink_high );
                v16 = v10;
              }
              if ( Status < 0 )
                break;
              KeResetEvent(Event);
              Event[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(unsigned int)(HIDWORD(Event[1].Header.WaitListHead.Blink)
                                                                                      + LODWORD(Event[1].Header.WaitListHead.Blink));
            }
            while ( (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) < *(_QWORD *)v7 );
            v4 = v15;
          }
        }
        ++v5;
        ++v6;
      }
      while ( v5 < v4 );
    }
    --CurrentThread->SpecialApcDisable;
    MiUnlockWsSwapExclusive((__int64)CurrentThread, a1);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 872));
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    *(_QWORD *)(a1 + 1000) = UnbiasedInterruptTime;
    _InterlockedOr(v12, 0);
    *(_QWORD *)(a1 + 992) = 0LL;
  }
  return UnbiasedInterruptTime;
}
