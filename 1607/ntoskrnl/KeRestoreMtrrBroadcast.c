/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x1403D36E8
 * Callers:
 *     PnprWakeProcessors @ 0x1403DCEB4 (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403DD5DC (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x14079232C (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14012FA64 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  _DWORD Context[4]; // [rsp+20h] [rbp-28h] BYREF
  void *v1; // [rsp+30h] [rbp-18h]

  if ( byte_140307B70 )
  {
    Context[0] = 0;
    Context[1] = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v1 = &KiTargetPhase;
    Context[2] = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)Context);
  }
}
