/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x1C0010EBC
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0010DC0 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0010F04 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiCheckYieldExitCondition(struct _VIDSCH_NODE *a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v5; // rcx

  if ( *((_BYTE *)a1 + 1936) && (v5 = *((_QWORD *)a1 + 240)) != 0 && a2 > *((_QWORD *)a1 + 241) + v5 )
  {
    VidSchiStopNodeYield(a1);
    *a3 = 1;
  }
  else
  {
    *a3 = 0;
  }
}
