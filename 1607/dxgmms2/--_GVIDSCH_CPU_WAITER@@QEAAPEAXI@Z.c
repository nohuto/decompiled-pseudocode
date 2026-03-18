/*
 * XREFs of ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C001D168
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x1C000CA60 (VidSchSubmitWaitFromCpu.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
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
