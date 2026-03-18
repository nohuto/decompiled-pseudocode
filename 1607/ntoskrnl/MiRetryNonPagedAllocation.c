/*
 * XREFs of MiRetryNonPagedAllocation @ 0x1400E7E98
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x1400E7060 (MiFindNonPagedPoolPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeAreInterruptsEnabled @ 0x1400516C0 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

__int64 MiRetryNonPagedAllocation()
{
  unsigned int v0; // ebx
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || !(unsigned __int8)KeAreInterruptsEnabled()
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  if ( (unsigned __int64)qword_140324E80 >= 0xA0 )
    return 1LL;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_140324668, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140324640, &LockHandle);
    if ( (unsigned __int64)qword_140324E80 >= 0xA0 )
      break;
    if ( i == 1 )
    {
      if ( byte_14032646C == 1 )
      {
        if ( dword_140326468 == dword_140324680 )
          goto LABEL_22;
        byte_14032646C = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_14032646C )
        {
          dword_140326468 = dword_140324680;
          byte_14032646C = 1;
        }
        goto LABEL_22;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_140324668);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( byte_14032646C == 1 )
    byte_14032646C = 0;
  v0 = 1;
LABEL_22:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
