/*
 * XREFs of NVMePowerInitialize @ 0x1C00050D0
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C0001B70 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeGetAutoPowerStateTransition @ 0x1C000BD94 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000BED4 (NVMeSetAutoPowerStateTransition.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v3; // r15d
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // cl
  int v6; // eax
  __int64 v8; // rdx
  unsigned __int8 i; // r14
  __int64 v10; // rax
  unsigned __int16 *v11; // r10
  unsigned int v12; // r11d
  int v13; // r14d
  unsigned int v14; // ebx
  const char *v15; // rdx
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // r9d
  unsigned __int8 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned int v26; // eax
  bool v27; // zf
  int v28; // eax
  unsigned __int8 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // r11
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned int v35; // ecx
  int v36; // ebx
  __int64 v37; // r9
  const char *v38; // r8
  unsigned __int8 v39; // [rsp+130h] [rbp+67h]
  unsigned __int8 v40; // [rsp+138h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1072);
  v3 = -1;
  v4 = 0;
  v40 = 0;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 60);
  v39 = 0;
  if ( v6 == 4 )
    return 1;
  if ( v6 == 3 )
  {
    NVMeGetAutoPowerStateTransition(a1);
    if ( (*(_DWORD *)(a1 + 1112) & 0x40) == 0 )
    {
      LOBYTE(v8) = 1;
      NVMeSetAutoPowerStateTransition(a1, v8);
      NVMeGetAutoPowerStateTransition(a1);
    }
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Autonomous Power State Transitions ENABLED\n");
    return 1;
  }
  if ( (*(_DWORD *)(a1 + 1112) & 1) == 0 )
  {
    for ( i = 0; i < *(unsigned __int8 *)(v1 + 263) + 1; ++i )
    {
      v10 = *(_QWORD *)(a1 + 1072);
      if ( i > 0x1Fu || i > *(_BYTE *)(v10 + 263) )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = (unsigned __int16 *)(v10 + 32 * (i + 64LL));
        if ( v11 )
        {
          v12 = *v11 * ((*((_BYTE *)v11 + 3) & 1) != 0 ? 100 : 10000);
          goto LABEL_12;
        }
      }
      v12 = -1;
LABEL_12:
      if ( (*((_BYTE *)v11 + 3) & 2) != 0 )
      {
        v39 = v5 + 1;
        if ( v12 < v3 )
          v3 = v12;
      }
      else
      {
        ++v4;
        v40 = i;
      }
      StorPortExtendedFunction(60LL, a1, 0LL, 0LL);
      v5 = v39;
    }
    v13 = v5;
    v14 = 32 * (v5 + 3);
    if ( (unsigned int)StorPortExtendedFunction(0LL, a1, v14, 1701672526LL) )
    {
      v15 = "StorNVMe - POWER: StorPoFx Registration Failed to Allocate PoFxDevice\n";
    }
    else
    {
      if ( (v14 & 3) != 0 )
      {
        if ( v14 )
          memset(0LL, 0, v14);
      }
      else
      {
        v16 = v14 >> 2;
        if ( v16 )
          memset(0LL, 0, 4LL * v16);
      }
      MEMORY[0] = 2;
      MEMORY[4] = 24;
      MEMORY[8] = 1;
      MEMORY[0xC] |= 0x40u;
      MEMORY[0x18] = 2;
      MEMORY[0x1C] = 40;
      MEMORY[0x28] = xmmword_1C0010020;
      if ( *(_DWORD *)(a1 + 60) == 5 )
        MEMORY[0x20] = 1;
      else
        MEMORY[0x20] = v13 + 1;
      if ( MEMORY[0x20] > 1u )
        MEMORY[0xC] |= 0x100u;
      if ( MEMORY[0x20] > 8u )
        MEMORY[0x20] = 8;
      MEMORY[0xC] |= 0x10u;
      MEMORY[0x10] = -1;
      v17 = *(_DWORD *)(a1 + 60);
      if ( (v17 || v3 <= 0x2710) && v17 != 2 )
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
        *(_DWORD *)(a1 + 1112) |= 0x10u;
      }
      v18 = 1;
      MEMORY[0xC] |= 8u;
      v19 = v40 + 1;
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
          v20 = *(_QWORD *)(a1 + 1072);
          if ( v19 > 0x1Fu || v19 > *(_BYTE *)(v20 + 263) )
            v21 = 0LL;
          else
            v21 = v20 + 32 * (v19 + 64LL);
          ++v19;
          v22 = v18;
          v23 = 32 * (v18++ + 2LL);
          v22 *= 32LL;
          *(_DWORD *)(v23 + 24) = -1;
          *(_DWORD *)(v22 + 64) = 1;
          *(_DWORD *)(v22 + 68) = 32;
          v24 = (unsigned int)(*(_DWORD *)(v21 + 4) + *(_DWORD *)(v21 + 8));
          *(_QWORD *)(v22 + 80) = 0LL;
          *(_QWORD *)(v22 + 72) = 10 * v24;
        }
        while ( v18 < MEMORY[0x20] );
      }
      if ( !(unsigned int)StorPortExtendedFunction(48LL, a1, 0LL, 0LL) )
      {
        v27 = *(_DWORD *)(a1 + 80) == -1;
        *(_DWORD *)(a1 + 1112) = (*(_DWORD *)(a1 + 1112) | 5) ^ *(_BYTE *)(a1 + 1112) & 8;
        *(_BYTE *)(a1 + 1121) = MEMORY[0x20];
        *(_QWORD *)(a1 + 1096) = 0LL;
        v28 = 50;
        *(_DWORD *)(a1 + 1132) = 50;
        if ( !v27 )
          v28 = *(_DWORD *)(a1 + 80);
        *(_DWORD *)(a1 + 1128) = v28;
        *(_BYTE *)(a1 + 1122) = 0;
        *(_WORD *)(a1 + 1118) = 0;
        *(_DWORD *)(a1 + 1124) = 0;
        *(_BYTE *)(a1 + 1117) = v40;
        *(_DWORD *)(a1 + 1136) = 100;
        if ( v39 )
        {
          StorPortExtendedFunction(32LL, a1, a1 + 1144, v25);
          StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
          StorPortExtendedFunction(52LL, a1, 0LL, 0LL);
        }
        StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Succeeded\n");
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v4 + 40, 1701672526LL) )
        {
          v29 = 0;
          MEMORY[0] = 1;
          MEMORY[4] = 40;
          MEMORY[0x10] = 3LL;
          MEMORY[0x18] = v4;
          MEMORY[0x1C] = 40;
          if ( v4 )
          {
            v30 = 0LL;
            v31 = 0LL;
            v32 = 2048LL;
            do
            {
              v33 = v31 + MEMORY[0x1C];
              *(_DWORD *)v33 = 1;
              *(_DWORD *)(v33 + 4) = 24;
              v34 = *(_QWORD *)(a1 + 1072);
              if ( v29 <= 0x1Fu && v29 <= *(_BYTE *)(v34 + 263) && v32 + v34 )
                v35 = *(unsigned __int16 *)(v32 + v34) * ((*(_BYTE *)(v32 + v34 + 3) & 1) != 0 ? 100 : 10000);
              else
                v35 = -1;
              *(_QWORD *)(v33 + 16) = v30;
              ++v29;
              ++v30;
              v32 += 32LL;
              v31 += 24LL;
              *(_QWORD *)(v33 + 8) = v35 / 0x3E8;
            }
            while ( v29 < v4 );
          }
          v36 = StorPortExtendedFunction(65LL, a1, 0LL, 0LL);
          if ( v36 )
          {
            StorPortExtendedFunction(1LL, a1, 0LL, v37);
          }
          else
          {
            *(_DWORD *)(a1 + 1112) |= 2u;
            *(_QWORD *)(a1 + 1104) = 0LL;
            *(_BYTE *)(a1 + 1118) = v4;
            *(_BYTE *)(a1 + 1119) = 0;
          }
          v38 = "Failed";
          if ( !v36 )
            v38 = "Succeeded";
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration %s\n", v38);
          NVMeGetAutoPowerStateTransition(a1);
          if ( (*(_DWORD *)(a1 + 1112) & 0x40) != 0 )
          {
            NVMeSetAutoPowerStateTransition(a1, 0LL);
            NVMeGetAutoPowerStateTransition(a1);
          }
          return 1;
        }
        StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration Failed to Allocate Perf Set\n");
        return 0;
      }
      StorPortExtendedFunction(1LL, a1, 0LL, v25);
      v15 = "StorNVMe - POWER: StorPoFx Registration Failed\n";
      v26 = *(_DWORD *)(a1 + 1112) & 0xFFFFFFFA;
      *(_QWORD *)(a1 + 1096) = 0LL;
      *(_DWORD *)(a1 + 1112) = v26;
    }
    StorPortDebugPrint(3LL, v15);
    return 0;
  }
  return 1;
}
