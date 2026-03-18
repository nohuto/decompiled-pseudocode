/*
 * XREFs of MiRetryNonPagedAllocation @ 0x140019AF0
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x1400198C0 (MiFindNonPagedPoolPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 MiRetryNonPagedAllocation()
{
  unsigned int v0; // ebx
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS v3; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u )
  {
    ++dword_1402E17D8;
    return 0LL;
  }
  else if ( (unsigned __int8)KeAreInterruptsEnabled() )
  {
    if ( ((__int64)KeGetCurrentThread()[1].Queue & 2) != 0 )
    {
      ++dword_1402E17E0;
      return 0LL;
    }
    else if ( (unsigned __int64)qword_140301440 < 0xA0 )
    {
      Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
      v3 = 1;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140300DC0, &LockHandle);
        if ( (unsigned __int64)qword_140301440 >= 0xA0 )
          break;
        if ( v3 == 1 )
        {
          if ( byte_1402FE1AC == 1 )
          {
            if ( dword_1402FE1A8 == dword_140300E00 )
            {
              ++dword_1402E17E4;
              goto LABEL_26;
            }
            byte_1402FE1AC = 0;
          }
        }
        else
        {
          if ( v3 == 258 )
          {
            if ( !byte_1402FE1AC )
            {
              ++dword_1402E17E8;
              dword_1402FE1A8 = dword_140300E00;
              byte_1402FE1AC = 1;
            }
            goto LABEL_26;
          }
          ++dword_1402E17F0;
          Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
        }
        KeResetEvent(&stru_140300DE8);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v3 = KeWaitForSingleObject(&stru_140300DE8, WrFreePage, 0, 0, Timeout);
        if ( v3 == 258 )
          ++dword_1402E17F4;
        else
          ++dword_1402E17F8;
      }
      if ( byte_1402FE1AC == 1 )
      {
        ++dword_1402E17EC;
        byte_1402FE1AC = 0;
      }
      v0 = 1;
LABEL_26:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return v0;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    ++dword_1402E17DC;
    return 0LL;
  }
}
