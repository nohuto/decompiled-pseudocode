/*
 * XREFs of PopFireThermalWmiEvent @ 0x1401EE560
 * Callers:
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 * Callees:
 *     PpmFireWmiEvent @ 0x1401F3774 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PopFireThermalWmiEvent(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PpmFireWmiEvent(&KeGetCurrentPrcb()->PowerState.WmiDispatchPtr, &PPM_THERMAL_POLICY_CHANGE_GUID, 16LL, v3);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
