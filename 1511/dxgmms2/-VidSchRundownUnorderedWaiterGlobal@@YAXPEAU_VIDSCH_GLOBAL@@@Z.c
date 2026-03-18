/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0022098
 * Callers:
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C00166F8 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1)
{
  struct _VIDSCH_GLOBAL *i; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 228, &LockHandle);
  *((_BYTE *)a1 + 2468) |= 1u;
  if ( *(_QWORD *)((char *)a1 + 940) )
  {
    for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 26);
          i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 208);
          i = *(struct _VIDSCH_GLOBAL **)i )
    {
      VidSchiRundownUnorderedWaiterDevice((__int64)i - 88);
    }
  }
  *((_BYTE *)a1 + 2468) &= ~1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
