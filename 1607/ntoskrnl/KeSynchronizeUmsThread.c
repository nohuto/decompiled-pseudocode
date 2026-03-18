/*
 * XREFs of KeSynchronizeUmsThread @ 0x14065068C
 * Callers:
 *     PspRundownUmsThreadForApcDelivery @ 0x1406826F4 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInsertQueue @ 0x140085F70 (KeInsertQueue.c)
 *     KiSwapToUmsThreadContinue @ 0x1401DC690 (KiSwapToUmsThreadContinue.c)
 *     KiCopyUchToStagingArea @ 0x140651E48 (KiCopyUchToStagingArea.c)
 */

__int64 __fastcall KeSynchronizeUmsThread(__int64 a1, char a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 496);
  if ( a2 )
  {
    KeInsertQueue(*(PRKQUEUE *)(v2 + 32), *(PLIST_ENTRY *)(v2 + 40));
    *(_DWORD *)(v2 + 80) |= 2u;
    *(_QWORD *)(v2 + 72) = 0LL;
    return KiLeaveGuardedRegionUnsafe(a1);
  }
  else
  {
    KiCopyUchToStagingArea(a1, *(_QWORD *)(v2 + 72));
    *(_QWORD *)(v2 + 72) = 0LL;
    return KiSwapToUmsThreadContinue();
  }
}
