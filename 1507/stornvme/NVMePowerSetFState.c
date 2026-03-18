/*
 * XREFs of NVMePowerSetFState @ 0x1C0005974
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeSetPowerState @ 0x1C000BE78 (NVMeSetPowerState.c)
 */

void __fastcall NVMePowerSetFState(__int64 a1, _DWORD *a2)
{
  char v4; // al
  unsigned __int8 v5; // bl
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // r8
  int v9; // edx
  unsigned __int16 *v10; // r8
  __int64 v11; // rdx

  if ( a2[1] >= 0x18u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: F-State Callback for F%u\n", a2[5]);
    v4 = *((_BYTE *)a2 + 20);
    *(_BYTE *)(a1 + 1122) = v4;
    if ( a2[5] )
      v5 = v4 + *(_BYTE *)(a1 + 1117);
    else
      v5 = *(_BYTE *)(a1 + 1119);
    if ( v5 <= 0x1Fu )
    {
      v6 = *(_QWORD *)(a1 + 1072);
      v7 = -1;
      if ( v5 <= *(_BYTE *)(v6 + 263) && (v8 = v6 + 32 * (v5 + 64LL)) != 0 )
        v9 = *(_DWORD *)(v8 + 4) + *(_DWORD *)(v8 + 8);
      else
        v9 = -1;
      if ( v5 <= *(_BYTE *)(v6 + 263) )
      {
        v10 = (unsigned __int16 *)(v6 + 32 * (v5 + 64LL));
        if ( v10 )
          v7 = *v10 * ((*((_BYTE *)v10 + 3) & 1) != 0 ? 100 : 10000);
      }
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n", v5, v7, v9);
      LOBYTE(v11) = v5;
      NVMeSetPowerState(a1, v11);
      *(_BYTE *)(a1 + 1116) = v5;
    }
    else
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Invalid power state index %u\n", v5);
    }
  }
}
