/*
 * XREFs of PoGetProcessorIdleAccounting @ 0x1401FF330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall PoGetProcessorIdleAccounting(_QWORD *a1)
{
  struct _KPRCB *result; // rax
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // rdx

  result = KeGetCurrentPrcb();
  IdleAccounting = result->PowerState.IdleAccounting;
  if ( IdleAccounting )
  {
    if ( a1 )
    {
      result = (struct _KPRCB *)IdleAccounting->TotalTransitions;
      *a1 = result;
    }
  }
  else if ( a1 )
  {
    *a1 = 0LL;
  }
  return result;
}
