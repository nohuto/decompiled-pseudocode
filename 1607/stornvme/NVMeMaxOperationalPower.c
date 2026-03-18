/*
 * XREFs of NVMeMaxOperationalPower @ 0x1C0007984
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0002B60 (NVMePerfStateTransition.c)
 *     NVMeGetPowerState @ 0x1C000763C (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C00083F0 (NVMePowerStateGetMaxPower.c)
 */

void __fastcall NVMeMaxOperationalPower(__int64 a1, __int64 a2)
{
  signed __int8 v4; // r9
  __int64 PowerState; // rax
  int v6; // r10d
  unsigned int MaxPower; // kr00_4
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r11
  signed __int8 v10; // cl
  int v11; // ebp

  if ( *(_DWORD *)(a2 + 4) >= 0x10u && *(_DWORD *)a2 )
  {
    v4 = 0;
    do
    {
      PowerState = NVMeGetPowerState(a1, v4);
      MaxPower = NVMePowerStateGetMaxPower(PowerState);
      v8 = MaxPower / 0x3E8;
      if ( v8 <= v9 )
        break;
      ++v4;
    }
    while ( v4 <= v6 );
    v10 = v4;
    v11 = v4;
    if ( (unsigned __int8)v4 > (unsigned __int8)v6 )
      v10 = v6;
    *(_BYTE *)(a1 + 1128) = v10;
    StorPortDebugPrint(
      3LL,
      "StorNVMe - POWER: Max Op. Power is now %umW so choose PS%u (%umW)\n",
      *(_QWORD *)(a2 + 8),
      (unsigned int)v4,
      MaxPower / 0x3E8);
    if ( (*(_DWORD *)(a1 + 1120) & 4) != 0 && *(unsigned __int8 *)(a1 + 1127) != v11 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1160), 0) )
      {
        *(_DWORD *)(a1 + 1120) |= 0x80u;
      }
      else if ( !NVMePerfStateTransition(a1) )
      {
        *(_DWORD *)(a1 + 1160) &= ~1u;
      }
    }
    *(_QWORD *)(a2 + 8) = v8;
  }
}
