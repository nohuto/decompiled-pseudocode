/*
 * XREFs of PpmIdleGuestExecute @ 0x1401F3CD0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401AF204 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1401B2EF8 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall PpmIdleGuestExecute(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // ebx
  unsigned int Number; // ecx
  int v6; // r9d
  __int128 v8; // [rsp+28h] [rbp-1A0h] BYREF
  int v9; // [rsp+38h] [rbp-190h]

  v3 = (unsigned int)a3;
  v4 = a2;
  if ( (_DWORD)a3 != -1 && KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorHvCounters )
  {
    Number = KeGetPcr()->Prcb.Number;
    LODWORD(v8) = 3;
    DWORD2(v8) = HvlpGetLpIndexFromProcessorIndex(Number);
    v9 = v6;
    HvlpSetPowerProperty(&v8);
  }
  if ( v4 )
    __readmsr(0x400000F0u);
  else
    HalProcessorIdle(a1, a2, a3, v3);
  return 0LL;
}
