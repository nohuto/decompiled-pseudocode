/*
 * XREFs of ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004492C
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180046B90 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     Template_xxxxx @ 0x18011448C (Template_xxxxx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TraceTime(CPartitionVerticalBlankScheduler *this)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xxxxx(
      (_DWORD)this,
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 8),
      *((_QWORD *)this + 9),
      *((_QWORD *)this + 6));
}
