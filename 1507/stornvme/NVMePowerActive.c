/*
 * XREFs of NVMePowerActive @ 0x1C00057BC
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0005744 (NVMePerfStateTransition.c)
 */

char __fastcall NVMePowerActive(__int64 a1, __int64 a2)
{
  const char *v2; // r8
  int v5; // eax
  __int64 v6; // r8
  int v7; // ebx

  v2 = "IDLE";
  if ( *(_BYTE *)(a2 + 20) )
    v2 = "ACTIVE";
  StorPortDebugPrint(3LL, "StorNVMe - POWER: %s\n", v2);
  *(_DWORD *)(a1 + 1112) ^= (*(_DWORD *)(a1 + 1112) ^ (4 * *(unsigned __int8 *)(a2 + 20))) & 4;
  v5 = *(_DWORD *)(a1 + 1112);
  if ( *(_BYTE *)(a2 + 20) )
  {
    if ( (v5 & 0x20) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1136);
      *(_DWORD *)(a1 + 1112) = v5 & 0xFFFFFFDF;
      StorPortExtendedFunction(33LL, a1, v6, NVMeFStateIdleTimerCallback);
    }
    StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1144), 0) )
    {
      LOBYTE(v5) = StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State transition already in progress!\n");
    }
    else
    {
      LOBYTE(v5) = NVMePerfStateTransition(a1);
      if ( !(_BYTE)v5 )
        *(_DWORD *)(a1 + 1144) &= ~1u;
    }
  }
  else if ( *(_BYTE *)(a1 + 1121) > 1u )
  {
    if ( *(_DWORD *)(a1 + 1124) == 1 )
      v7 = *(_DWORD *)(a1 + 68);
    else
      v7 = *(_DWORD *)(a1 + 64);
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v7);
    *(_DWORD *)(a1 + 1112) |= 0x20u;
    LOBYTE(v5) = StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1136), NVMeFStateIdleTimerCallback);
  }
  return v5;
}
