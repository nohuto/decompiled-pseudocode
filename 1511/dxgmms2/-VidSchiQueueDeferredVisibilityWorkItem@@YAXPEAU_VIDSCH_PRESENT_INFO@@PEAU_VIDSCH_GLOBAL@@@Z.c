/*
 * XREFs of ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0014678
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiQueueDeferredVisibilityWorkItem(
        struct _VIDSCH_PRESENT_INFO *a1,
        struct _VIDSCH_GLOBAL *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10704, 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)a2 + 506, 1) )
  {
    v5 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a2 + 2) + 24LL));
    if ( v5 <= 0 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5, 1LL, a3, a4);
      *(_QWORD *)(v6 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v6);
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a2 + 1992), CriticalWorkQueue);
  }
}
