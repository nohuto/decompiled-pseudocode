/*
 * XREFs of NVMePowerSetPerfState @ 0x1C0008214
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0002B60 (NVMePerfStateTransition.c)
 *     NVMeGetPowerState @ 0x1C000763C (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C00083F0 (NVMePowerStateGetMaxPower.c)
 *     NVMeSetPowerState @ 0x1C000E534 (NVMeSetPowerState.c)
 */

char __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  unsigned __int8 v6; // al
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  __int64 PowerState; // rax
  int MaxPower; // eax
  int v11; // r10d
  __int64 v12; // rdx
  int v13; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v4 = *(unsigned __int8 *)(a2 + 16);
    v5 = "Succeeded";
    if ( !*(_BYTE *)(a2 + 12) )
      v5 = "Failed";
    StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State Callback for P%u, PEP %s\n", *(unsigned __int8 *)(a2 + 16), v5);
    if ( *(_BYTE *)(a2 + 12) )
    {
      v6 = *(_BYTE *)(a1 + 1125);
      if ( (unsigned __int8)v4 <= v6 )
      {
        if ( (unsigned __int8)v4 <= 0x1Fu )
        {
          NVMeGetPowerState(a1, v4);
          PowerState = NVMeGetPowerState(v8, v7);
          MaxPower = NVMePowerStateGetMaxPower(PowerState);
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
            v4,
            MaxPower,
            v11);
          LOBYTE(v12) = v4;
          NVMeSetPowerState(a1, v12);
          *(_BYTE *)(a1 + 1127) = v4;
          *(_BYTE *)(a1 + 1124) = v4;
        }
        else
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Power state index %u is invalid\n", v4);
        }
      }
      else
      {
        StorPortDebugPrint(3LL, "StorNVMe - POWER: PS%u is greater than deepest operational power state PS%u\n", v4, v6);
      }
    }
  }
  v13 = *(_DWORD *)(a1 + 1120);
  if ( (v13 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1120) = v13 & 0xFFFFFF7F, LOBYTE(v13) = NVMePerfStateTransition(a1), !(_BYTE)v13) )
  {
    *(_DWORD *)(a1 + 1160) &= ~1u;
  }
  return v13;
}
