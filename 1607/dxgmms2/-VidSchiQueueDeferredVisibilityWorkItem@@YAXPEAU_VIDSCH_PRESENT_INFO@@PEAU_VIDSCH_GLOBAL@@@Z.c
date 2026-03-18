/*
 * XREFs of ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0011E8C
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiQueueDeferredVisibilityWorkItem(struct _VIDSCH_PRESENT_INFO *a1, struct _VIDSCH_GLOBAL *a2)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 11728, 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)a2 + 516, 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a2 + 2) + 24LL));
    *((_QWORD *)a2 + 253) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a2 + 2032), CriticalWorkQueue);
  }
}
