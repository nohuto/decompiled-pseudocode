/*
 * XREFs of ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001318C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C001201C (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall VidSchiQueueDeferredVisibilityWorkItem(
        struct _VIDSCH_PRESENT_INFO *a1,
        struct _VIDSCH_GLOBAL *a2,
        __int64 a3,
        __int64 a4)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10440, 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)a2 + 518, 1) )
  {
    DXGADAPTER::AcquireReference(*((DXGADAPTER **)a2 + 2), 3LL, a3, a4);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a2 + 2040), CriticalWorkQueue);
  }
}
