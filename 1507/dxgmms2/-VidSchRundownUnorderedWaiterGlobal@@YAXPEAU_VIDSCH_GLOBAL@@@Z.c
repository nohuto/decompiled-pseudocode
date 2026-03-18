/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001B9C4
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0007FE8 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rdx
  struct _VIDSCH_GLOBAL *i; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
  *((_BYTE *)a1 + 2508) |= 1u;
  if ( *(_QWORD *)((char *)a1 + 932) )
  {
    for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 25);
          i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 200);
          i = *(struct _VIDSCH_GLOBAL **)i )
    {
      VidSchiRundownUnorderedWaiterDevice((__int64)i - 88, v2);
    }
  }
  *((_BYTE *)a1 + 2508) &= ~1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
