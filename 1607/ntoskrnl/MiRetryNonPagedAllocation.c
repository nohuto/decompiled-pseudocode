/*
 * XREFs of MiRetryNonPagedAllocation @ 0x1400E5D38
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x1400E4F00 (MiFindNonPagedPoolPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
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
  if ( (unsigned __int64)qword_140324EC0 >= 0xA0 )
    return 1LL;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_1403246A8, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140324680, &LockHandle);
    if ( (unsigned __int64)qword_140324EC0 >= 0xA0 )
      break;
    if ( i == 1 )
    {
      if ( byte_1403264AC == 1 )
      {
        if ( dword_1403264A8 == dword_1403246C0 )
          goto LABEL_22;
        byte_1403264AC = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_1403264AC )
        {
          dword_1403264A8 = dword_1403246C0;
          byte_1403264AC = 1;
        }
        goto LABEL_22;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_1403246A8);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( byte_1403264AC == 1 )
    byte_1403264AC = 0;
  v0 = 1;
LABEL_22:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
