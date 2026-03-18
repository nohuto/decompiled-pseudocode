/*
 * XREFs of NVMePowerSetPerfState @ 0x1C0005C74
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0005744 (NVMePerfStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000BE78 (NVMeSetPowerState.c)
 */

char __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // r8
  int v10; // edx
  unsigned __int16 *v11; // r8
  __int64 v12; // rdx
  int v13; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v4 = *(unsigned __int8 *)(a2 + 16);
    v5 = "Failed";
    if ( *(_BYTE *)(a2 + 12) )
      v5 = "Succeeded";
    StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State Callback for P%u, PEP %s\n", *(unsigned __int8 *)(a2 + 16), v5);
    if ( *(_BYTE *)(a2 + 12) )
    {
      v6 = *(_BYTE *)(a1 + 1117);
      if ( (unsigned __int8)v4 <= v6 )
      {
        if ( (unsigned __int8)v4 <= 0x1Fu )
        {
          v7 = *(_QWORD *)(a1 + 1072);
          v8 = -1;
          if ( (unsigned __int8)v4 <= *(_BYTE *)(v7 + 263) && (v9 = v7 + 32 * ((unsigned __int8)v4 + 64LL)) != 0 )
            v10 = *(_DWORD *)(v9 + 4) + *(_DWORD *)(v9 + 8);
          else
            v10 = -1;
          if ( (unsigned __int8)v4 <= *(_BYTE *)(v7 + 263) )
          {
            v11 = (unsigned __int16 *)(v7 + 32 * ((unsigned __int8)v4 + 64LL));
            if ( v11 )
              v8 = *v11 * ((*((_BYTE *)v11 + 3) & 1) != 0 ? 100 : 10000);
          }
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
            v4,
            v8,
            v10);
          LOBYTE(v12) = v4;
          NVMeSetPowerState(a1, v12);
          *(_BYTE *)(a1 + 1119) = v4;
          *(_BYTE *)(a1 + 1116) = v4;
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
  v13 = *(_DWORD *)(a1 + 1112);
  if ( (v13 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1112) = v13 & 0xFFFFFF7F, LOBYTE(v13) = NVMePerfStateTransition(a1), !(_BYTE)v13) )
  {
    *(_DWORD *)(a1 + 1144) &= ~1u;
  }
  return v13;
}
