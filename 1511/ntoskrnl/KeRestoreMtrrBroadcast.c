/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x1403A76C0
 * Callers:
 *     PnprWakeProcessors @ 0x1403B0D90 (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403B10E8 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x14074E92C (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14012568C (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  _DWORD Context[4]; // [rsp+20h] [rbp-28h] BYREF
  void *v1; // [rsp+30h] [rbp-18h]

  if ( byte_1402E2670 )
  {
    Context[0] = 0;
    Context[1] = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v1 = &KiTargetPhase;
    Context[2] = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)Context);
  }
}
