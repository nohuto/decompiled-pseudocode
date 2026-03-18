/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C0010990
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0010DB0 (VidSchFlushQueuePackets.c)
 *     VidSchFlushDevice @ 0x1C003C560 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiProcessFlipPendingContextList @ 0x1C0002458 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 228, &LockHandle);
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(v6, *((_QWORD *)a1 + 324)) )
    {
      *((_QWORD *)a1 + 167) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)((char *)a1 + 1304), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
