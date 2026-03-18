/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C0002C18
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C000ED10 (VidSchFlushQueuePackets.c)
 *     VidSchiReportHwHang @ 0x1C0027844 (VidSchiReportHwHang.c)
 *     VidSchFlushDevice @ 0x1C0041290 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C00051FC (VidSchiSetFlipDevice.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C00116F0 (VidSchiProcessFlipPendingContextList.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3)
{
  unsigned int i; // edi
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
    VidSchiSetFlipDevice(a1, a3, 0);
  if ( *((_BYTE *)a1 + 51) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(v6, *((_QWORD *)a1 + 371)) )
    {
      *((_QWORD *)a1 + 171) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)((char *)a1 + 1336), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
