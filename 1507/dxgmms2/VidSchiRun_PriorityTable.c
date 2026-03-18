/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C00448C4
 * Callers:
 *     VidSchiWorkerThread @ 0x1C0044840 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001880 (VidSchiDecrementContextReference.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0004824 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00048A8 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiIncrementContextReference @ 0x1C0006980 (VidSchiIncrementContextReference.c)
 *     VidSchiRewindPacket @ 0x1C001A004 (VidSchiRewindPacket.c)
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1C002EF10 (VidSchiAdjustWorkerThreadPriority.c)
 */

__int64 __fastcall VidSchiRun_PriorityTable(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rax
  struct _VIDSCH_QUEUE_PACKET *v3; // rdi
  struct _VIDSCH_CONTEXT *v4; // rsi
  char v6; // [rsp+38h] [rbp+10h] BYREF

  do
  {
    v2 = VidSchiScheduleCommandToRun(a1, &v6);
    v3 = (struct _VIDSCH_QUEUE_PACKET *)v2;
    if ( v2 )
    {
      v4 = *(struct _VIDSCH_CONTEXT **)(v2 + 80);
      if ( v6 )
      {
        VidSchiSetTransferContextRunningTime((__int64)v4, 0LL, 0);
        VidSchiRewindPacket((__int64)v3, 0LL, 1, 0);
        VidschiUnselectContext(v4);
      }
      else
      {
        VidSchiIncrementContextReference((__int64)v4);
        VidSchiSubmitQueueCommand(v3);
        VidSchiAdjustWorkerThreadPriority((__int64)v4);
        VidSchiSetTransferContextRunningTime((__int64)v4, 0LL, 0);
        VidschiUnselectContext(v4);
        VidSchiDecrementContextReference(v4, 0);
      }
    }
  }
  while ( !VidSchIsTDRPending((__int64)a1) );
  return VidSchiRecoverFromTDR(a1);
}
