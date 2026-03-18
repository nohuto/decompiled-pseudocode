/*
 * XREFs of KeSynchronizeUmsThread @ 0x140699E8C
 * Callers:
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiInsertQueue @ 0x14017E344 (KiInsertQueue.c)
 *     KiSwapToUmsThreadContinue @ 0x14020BC24 (KiSwapToUmsThreadContinue.c)
 *     KiCopyUchToStagingArea @ 0x14069B6D4 (KiCopyUchToStagingArea.c)
 */

void __fastcall KeSynchronizeUmsThread(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int16 v4; // ax

  v2 = *(_QWORD *)(a1 + 496);
  if ( a2 )
  {
    KiInsertQueue(*(_QWORD *)(v2 + 32), *(__int64 **)(v2 + 40), 0LL, 0);
    *(_DWORD *)(v2 + 80) |= 2u;
    *(_QWORD *)(v2 + 72) = 0LL;
    v4 = *(_WORD *)(a1 + 486) + 1;
    *(_WORD *)(a1 + 486) = v4;
    if ( !v4 && *(_QWORD *)(a1 + 152) != a1 + 152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    KiCopyUchToStagingArea(a1, *(_QWORD *)(v2 + 72));
    *(_QWORD *)(v2 + 72) = 0LL;
    KiSwapToUmsThreadContinue();
  }
}
