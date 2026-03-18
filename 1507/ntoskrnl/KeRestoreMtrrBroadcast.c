/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x1403FA0DC
 * Callers:
 *     PnprWakeProcessors @ 0x14040146C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140401918 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x1407D292C (KiInitializeMTRR.c)
 * Callees:
 *     KeIpiGenericCall @ 0x140156B40 (KeIpiGenericCall.c)
 */

ULONG_PTR KeRestoreMtrrBroadcast()
{
  ULONG_PTR result; // rax
  _DWORD Context[4]; // [rsp+20h] [rbp-28h] BYREF
  void *v2; // [rsp+30h] [rbp-18h]

  if ( byte_140332AF0 )
  {
    Context[0] = 0;
    Context[1] = KeNumberProcessors_0 - 1;
    Context[2] = 0;
    v2 = &KiTargetPhase;
    return KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)Context);
  }
  return result;
}
