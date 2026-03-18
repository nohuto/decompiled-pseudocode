/*
 * XREFs of NVMePowerInitialize @ 0x1C0007AD4
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C0004E80 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeGetPowerState @ 0x1C000763C (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C00083F0 (NVMePowerStateGetMaxPower.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CC78 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000DF1C (NVMeSetAutoPowerStateTransition.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  unsigned int v2; // r14d
  unsigned __int8 v3; // r15
  unsigned __int8 v4; // r9
  int v5; // eax
  __int64 v6; // r13
  __int64 v8; // rdx
  unsigned __int8 i; // r12
  __int64 PowerState; // rax
  __int64 v11; // rcx
  char v12; // r9
  unsigned int MaxPower; // r11d
  int v14; // r13d
  unsigned int v15; // ebx
  const char *v16; // rdx
  int v17; // eax
  unsigned __int8 v18; // r9
  __int64 v19; // rax
  char v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // rdx
  int v23; // r11d
  __int64 v24; // rcx
  unsigned int v25; // eax
  bool v26; // zf
  int v27; // eax
  unsigned __int8 v28; // r10
  __int64 v29; // rbx
  _DWORD *v30; // r9
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r11
  char v35; // r10
  const char *v36; // r8
  unsigned __int8 v37; // [rsp+130h] [rbp+67h]
  unsigned __int8 v38; // [rsp+138h] [rbp+6Fh]

  v2 = -1;
  v3 = 0;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 60);
  v6 = *(_QWORD *)(a1 + 1080);
  v38 = 0;
  v37 = 0;
  if ( v5 == 4 )
    return 1;
  if ( v5 == 3 )
  {
    NVMeGetAutoPowerStateTransition(a1);
    if ( (*(_DWORD *)(a1 + 1120) & 0x40) == 0 )
    {
      LOBYTE(v8) = 1;
      NVMeSetAutoPowerStateTransition(a1, v8);
      NVMeGetAutoPowerStateTransition(a1);
    }
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Autonomous Power State Transitions ENABLED\n");
    return 1;
  }
  if ( (*(_DWORD *)(a1 + 1120) & 1) == 0 )
  {
    for ( i = 0; i < *(unsigned __int8 *)(v6 + 263) + 1; v4 = v37 )
    {
      PowerState = NVMeGetPowerState(a1, i);
      MaxPower = NVMePowerStateGetMaxPower(PowerState);
      if ( (*(_BYTE *)(v11 + 3) & 2) != 0 )
      {
        v37 = v12 + 1;
        if ( MaxPower < v2 )
          v2 = MaxPower;
      }
      else
      {
        ++v3;
        v38 = i;
      }
      StorPortExtendedFunction(60LL, a1, 0LL);
      ++i;
    }
    v14 = v4;
    v15 = 32 * (v4 + 3);
    if ( (unsigned int)StorPortExtendedFunction(0LL, a1, v15) )
    {
      v16 = "StorNVMe - POWER: StorPoFx Registration Failed to Allocate PoFxDevice\n";
    }
    else
    {
      NVMeZeroMemory(0LL, v15);
      MEMORY[0] = 2;
      MEMORY[4] = 24;
      MEMORY[8] = 1;
      MEMORY[0xC] |= 0x40u;
      MEMORY[0x18] = 2;
      MEMORY[0x1C] = 40;
      MEMORY[0x28] = xmmword_1C0010138;
      if ( *(_DWORD *)(a1 + 60) == 5 )
        MEMORY[0x20] = 1;
      else
        MEMORY[0x20] = v14 + 1;
      if ( MEMORY[0x20] > 1u )
        MEMORY[0xC] |= 0x100u;
      if ( MEMORY[0x20] > 8u )
        MEMORY[0x20] = 8;
      MEMORY[0xC] |= 0x10u;
      MEMORY[0x10] = -1;
      v17 = *(_DWORD *)(a1 + 60);
      if ( (v17 || v2 <= 0x2710) && v17 != 2 )
      {
        if ( v17 == 5 )
        {
          MEMORY[0xC] |= 4u;
          MEMORY[0x10] = *(_DWORD *)(a1 + 72);
        }
      }
      else
      {
        MEMORY[0xC] |= 4u;
        *(_DWORD *)(a1 + 1120) |= 0x10u;
      }
      MEMORY[0xC] |= 8u;
      v18 = v38 + 1;
      MEMORY[0x3C] = MEMORY[0x20] - 1;
      MEMORY[0x40] = 1;
      MEMORY[0x44] = 32;
      MEMORY[0x48] = 0LL;
      MEMORY[0x50] = 0LL;
      MEMORY[0x58] = -1;
      if ( MEMORY[0x20] > 1u )
      {
        do
        {
          v19 = NVMeGetPowerState(a1, v18);
          v18 = v20 + 1;
          v22 = 32LL * v21;
          *(_DWORD *)(32 * (v21 + 2LL) + 0x18) = v23;
          *(_DWORD *)(v22 + 64) = 1;
          *(_DWORD *)(v22 + 68) = 32;
          v24 = (unsigned int)(*(_DWORD *)(v19 + 4) + *(_DWORD *)(v19 + 8));
          *(_QWORD *)(v22 + 80) = 0LL;
          *(_QWORD *)(v22 + 72) = 10 * v24;
        }
        while ( v21 + 1 < MEMORY[0x20] );
      }
      if ( !(unsigned int)StorPortExtendedFunction(48LL, a1, 0LL) )
      {
        v26 = *(_DWORD *)(a1 + 80) == -1;
        *(_DWORD *)(a1 + 1120) = (*(_DWORD *)(a1 + 1120) | 5) ^ *(_DWORD *)(a1 + 1120) & 8;
        *(_BYTE *)(a1 + 1129) = MEMORY[0x20];
        *(_QWORD *)(a1 + 1104) = 0LL;
        v27 = 50;
        *(_DWORD *)(a1 + 1140) = 50;
        if ( !v26 )
          v27 = *(_DWORD *)(a1 + 80);
        *(_DWORD *)(a1 + 1136) = v27;
        *(_BYTE *)(a1 + 1130) = 0;
        *(_WORD *)(a1 + 1126) = 0;
        *(_DWORD *)(a1 + 1132) = 0;
        *(_BYTE *)(a1 + 1125) = v38;
        *(_DWORD *)(a1 + 1144) = 100;
        if ( v37 )
        {
          StorPortExtendedFunction(32LL, a1, a1 + 1152);
          StorPortExtendedFunction(51LL, a1, 0LL);
          StorPortExtendedFunction(52LL, a1, 0LL);
        }
        StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Succeeded\n");
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v3 + 40) )
        {
          v28 = 0;
          MEMORY[0] = 1;
          MEMORY[4] = 40;
          MEMORY[0x10] = 3LL;
          MEMORY[0x18] = v3;
          MEMORY[0x1C] = 40;
          if ( v3 )
          {
            v29 = 0LL;
            do
            {
              v30 = (_DWORD *)(v29 + MEMORY[0x1C]);
              *v30 = 1;
              v30[1] = 24;
              v31 = NVMeGetPowerState(a1, v28);
              v32 = NVMePowerStateGetMaxPower(v31);
              *(_QWORD *)(v33 + 16) = v34;
              v28 = v35 + 1;
              v29 += 24LL;
              *(_QWORD *)(v33 + 8) = v32 / 0x3E8;
            }
            while ( v28 < v3 );
          }
          if ( (unsigned int)StorPortExtendedFunction(65LL, a1, 0LL) )
          {
            StorPortExtendedFunction(1LL, a1, 0LL);
            v36 = "Failed";
          }
          else
          {
            v36 = "Succeeded";
            *(_DWORD *)(a1 + 1120) |= 2u;
            *(_QWORD *)(a1 + 1112) = 0LL;
            *(_BYTE *)(a1 + 1126) = v3;
            *(_BYTE *)(a1 + 1127) = 0;
          }
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration %s\n", v36);
          NVMeGetAutoPowerStateTransition(a1);
          if ( (*(_DWORD *)(a1 + 1120) & 0x40) != 0 )
          {
            NVMeSetAutoPowerStateTransition(a1, 0LL);
            NVMeGetAutoPowerStateTransition(a1);
          }
          return 1;
        }
        StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration Failed to Allocate Perf Set\n");
        return 0;
      }
      StorPortExtendedFunction(1LL, a1, 0LL);
      v16 = "StorNVMe - POWER: StorPoFx Registration Failed\n";
      v25 = *(_DWORD *)(a1 + 1120) & 0xFFFFFFFA;
      *(_QWORD *)(a1 + 1104) = 0LL;
      *(_DWORD *)(a1 + 1120) = v25;
    }
    StorPortDebugPrint(3LL, v16);
    return 0;
  }
  return 1;
}
