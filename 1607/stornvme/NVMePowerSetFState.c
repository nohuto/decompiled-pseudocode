/*
 * XREFs of NVMePowerSetFState @ 0x1C000813C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C000763C (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C00083F0 (NVMePowerStateGetMaxPower.c)
 *     NVMeSetPowerState @ 0x1C000E534 (NVMeSetPowerState.c)
 */

void __fastcall NVMePowerSetFState(_BYTE *a1, _DWORD *a2)
{
  char v4; // al
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  __int64 PowerState; // rax
  int MaxPower; // eax
  int v10; // r10d
  __int64 v11; // rdx

  if ( a2[1] >= 0x18u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: F-State Callback for F%u\n", a2[5]);
    v4 = *((_BYTE *)a2 + 20);
    a1[1130] = v4;
    if ( a2[5] )
      v5 = v4 + a1[1125];
    else
      v5 = a1[1127];
    if ( v5 <= 0x1Fu )
    {
      NVMeGetPowerState((__int64)a1, v5);
      PowerState = NVMeGetPowerState(v7, v6);
      MaxPower = NVMePowerStateGetMaxPower(PowerState);
      StorPortDebugPrint(
        3LL,
        "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
        v5,
        MaxPower,
        v10);
      LOBYTE(v11) = v5;
      NVMeSetPowerState(a1, v11);
      a1[1124] = v5;
    }
    else
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Invalid power state index %u\n", v5);
    }
  }
}
