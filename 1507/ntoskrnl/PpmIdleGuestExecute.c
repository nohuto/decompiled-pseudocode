/*
 * XREFs of PpmIdleGuestExecute @ 0x140241D8C
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401E6570 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1401EDBFC (HvlpSetPowerProperty.c)
 */

__int64 __fastcall PpmIdleGuestExecute(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  unsigned int Number; // ecx
  int v5; // r9d
  __int128 v7; // [rsp+28h] [rbp-1A0h] BYREF
  int v8; // [rsp+38h] [rbp-190h]

  v3 = a2;
  if ( a3 != -1 && KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorHvCounters )
  {
    Number = KeGetPcr()->Prcb.Number;
    LODWORD(v7) = 3;
    DWORD2(v7) = HvlpGetLpIndexFromProcessorIndex(Number);
    v8 = v5;
    HvlpSetPowerProperty(&v7);
  }
  if ( v3 )
    __readmsr(0x400000F0u);
  else
    HalProcessorIdle(a1, a2);
  return 0LL;
}
