/*
 * XREFs of ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C0006E1C
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C0006CC0 (VidSchSubmitWaitFromCpu.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

VIDSCH_CPU_WAITER *__fastcall VIDSCH_CPU_WAITER::`scalar deleting destructor'(VIDSCH_CPU_WAITER *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 4);
  if ( v2 != (char *)this + 40 && v2 )
    ExFreePoolWithTag(v2, 0);
  operator delete(this);
  return this;
}
