/*
 * XREFs of ExGetCurrentProcessorCpuUsage @ 0x1402133D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetCurrentProcessorCpuUsage(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = 100
         * (unsigned __int64)CurrentPrcb->IdleThread->SchedulerApc.SpareLong0
         / (CurrentPrcb->KernelTime + CurrentPrcb->UserTime);
  *a1 = 100 - result;
  return result;
}
