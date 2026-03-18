/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0003618
 * Callers:
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0007F70 (VidSchiRundownUnorderedWaiterContext.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // edi
  _QWORD **v9; // rsi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  if ( a3 != 3 && *(_DWORD *)(a1 + 1016) )
  {
    if ( a3 < 4 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 1016) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 1872), &LockHandle);
        v9 = (_QWORD **)(a1 + 72);
        for ( i = *v9; i != v9; i = (_QWORD *)*i )
          VidSchiRundownUnorderedWaiterContext(i - 3);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
  return v5;
}
