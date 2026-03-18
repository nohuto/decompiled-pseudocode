/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C0003658
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0006C00 (VidSchFlushQueuePackets.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0018954 (VidSchiProcessFlipPendingContextList.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3)
{
  unsigned int i; // edi
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
    VidSchiSetFlipDevice(a1, a3);
  if ( *((_BYTE *)a1 + 51) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(v6, *((_QWORD *)a1 + 330)) )
    {
      *((_QWORD *)a1 + 166) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)a1 + 54, 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
