/*
 * XREFs of PopDispatchAcDcCallback @ 0x1406BACCC
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400EDED0 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_14032E84C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
