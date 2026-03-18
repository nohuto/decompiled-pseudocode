/*
 * XREFs of NVMeHwFindAdapter @ 0x1C0001570
 * Callers:
 *     <none>
 * Callees:
 *     ControllerReset @ 0x1C0001000 (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00010CC (NVMeControllerStartFailureEventLog.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00013BC (ControllerAllocateUncachedExtension.c)
 *     NVMeControllerInitPart1 @ 0x1C000436C (NVMeControllerInitPart1.c)
 *     GetRegistrySettings @ 0x1C000D914 (GetRegistrySettings.c)
 *     __security_check_cookie @ 0x1C000EAF0 (__security_check_cookie.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  bool v7; // r15
  char v8; // cl
  char v9; // al
  __int16 v10; // r14
  int v11; // eax
  __int16 v13; // cx
  __int16 v14; // dx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *DeviceBase; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned int v21; // ecx
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edx
  __int16 v29; // ax
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // r8
  void **v33; // r15
  void *v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // eax
  char v40; // r8
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned __int16 v44; // ax
  unsigned __int16 v45; // cx
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  _QWORD *v50; // [rsp+20h] [rbp-59h]
  _OWORD v51[2]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v52[8]; // [rsp+50h] [rbp-29h] BYREF

  v6 = *(_QWORD *)(a5 + 64);
  v7 = (*(_DWORD *)(a1 + 20) & 2) != 0;
  if ( (*(_DWORD *)(a1 + 20) & 2) == 0 )
  {
    v8 = g_ControllerExtensionIndex;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v8 + 1) & 0xF;
  }
  v9 = *(_BYTE *)(a5 + 197);
  *(_BYTE *)(a1 + 16) = v9;
  v10 = 64;
  if ( v9 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 24) = 2;
      return 2LL;
    }
    StorPortExtendedFunction(45LL, a1, v6, 88LL, 0);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 28) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 44) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 60) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 76) = *(_OWORD *)(v6 + 64);
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(v6 + 80);
    v11 = *(_DWORD *)(v6 + 84);
    *(_DWORD *)(a1 + 52) |= 4u;
    *(_DWORD *)(a1 + 144) = v11;
  }
  else
  {
    memset(v52, 0, sizeof(v52));
    v50 = v52;
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100)) != 64 )
    {
      v22 = 3;
      *(_DWORD *)(a1 + 24) = 3;
      goto LABEL_89;
    }
    v13 = v52[0];
    v14 = WORD1(v52[0]);
    *(_BYTE *)(a1 + 8) = v52[1];
    *(_WORD *)(a1 + 4) = v13;
    *(_WORD *)(a1 + 6) = v14;
    if ( v13 == -32634 && v14 == 8209 )
    {
      v15 = v52[3] & 0xFFFFF000;
      v16 = HIDWORD(v52[3]);
    }
    else
    {
      v15 = v52[2] & 0xFFFFC000;
      v16 = HIDWORD(v52[2]);
    }
    *(_QWORD *)(a1 + 96) = v15 | (v16 << 32);
  }
  v17 = *(unsigned int *)(a5 + 52);
  DeviceBase = 0LL;
  v19 = *(_QWORD *)(a1 + 96);
  if ( (_DWORD)v17 )
  {
    v20 = *(_QWORD *)(a5 + 56);
    v21 = 0;
    while ( *(_QWORD *)(v20 + 16LL * v21) != v19 )
    {
      if ( ++v21 >= (unsigned int)v17 )
        goto LABEL_19;
    }
    LODWORD(v50) = *(_DWORD *)(v20 + 16LL * v21 + 8);
    DeviceBase = (_QWORD *)StorPortGetDeviceBase(
                             a1,
                             *(unsigned int *)(a5 + 8),
                             *(unsigned int *)(a5 + 4),
                             *(_QWORD *)(v20 + 16LL * v21));
  }
LABEL_19:
  *(_QWORD *)(a1 + 104) = DeviceBase;
  if ( !DeviceBase )
  {
    *(_DWORD *)(a1 + 24) = 4;
    v22 = 3;
LABEL_89:
    NVMeControllerStartFailureEventLog(a1);
    return v22;
  }
  v23 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 120) = *DeviceBase;
  v24 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(v23 + 8);
  *(_DWORD *)(a1 + 128) = 4 << (BYTE4(v24) & 0xF);
  if ( *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209 )
    *(_BYTE *)(a1 + 123) = 1;
  *(_DWORD *)(a1 + 132) = 500 * *(unsigned __int8 *)(a1 + 123);
  if ( !*(_BYTE *)(a1 + 16) && !v7 )
    GetRegistrySettings(a1, v17, DeviceBase, v19);
  v25 = *(_DWORD *)(a5 + 20) == 1;
  v26 = 1;
  *(_DWORD *)(a1 + 216) = 1048640;
  if ( v25 )
    v26 = 3;
  *(_DWORD *)(a1 + 12) = v26;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v27 = *(_DWORD *)(a1 + 32);
    *(_WORD *)(a1 + 220) = 64;
    if ( v27 && v27 <= 0x40 )
      v10 = v27;
    *(_WORD *)(a1 + 222) = v10;
  }
  else
  {
    v28 = 1024;
    *(_WORD *)(a1 + 220) = 256;
    if ( *(_DWORD *)(a1 + 32) )
      v28 = *(_DWORD *)(a1 + 32);
    if ( v28 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 120) + 1 )
      v28 = (unsigned __int16)*(_DWORD *)(a1 + 120) + 1;
    v29 = -1;
    if ( v28 < 0xFFFF )
      v29 = v28;
    *(_WORD *)(a1 + 222) = v29;
  }
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 81) = 1;
  *(_BYTE *)(a5 + 145) = 0;
  *(_DWORD *)(a5 + 148) = 1;
  if ( *(_DWORD *)(a5 + 20) == 1 )
  {
    *(_DWORD *)(a5 + 160) = 2;
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
  }
  else
  {
    *(_DWORD *)(a5 + 160) = 1;
  }
  v25 = *(_BYTE *)(a5 + 144) == 0x80;
  *(_DWORD *)(a5 + 216) = 0;
  if ( v25 )
    *(_BYTE *)(a5 + 144) = 2;
  v30 = *(_DWORD *)(a5 + 220) | 2;
  *(_BYTE *)(a5 + 147) = 0;
  v31 = v30 | 0x28;
  *(_DWORD *)(a5 + 220) = v31;
  if ( (*(_DWORD *)(a1 + 52) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v31 | 4;
  if ( !v7 )
  {
    if ( !ControllerAllocateUncachedExtension(a1, a5) )
    {
LABEL_61:
      v22 = 2;
      goto LABEL_89;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v32 = *(unsigned int *)(a1 + 92);
      if ( (_DWORD)v32 )
      {
        v33 = (void **)(a1 + 11440);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v32, 1701672526LL, a1 + 11440) )
        {
          v34 = *v33;
          if ( *v33 )
          {
            v35 = *(_DWORD *)(a1 + 92);
            if ( (v35 & 3) != 0 )
            {
              if ( v35 )
                memset(v34, 0, *(unsigned int *)(a1 + 92));
            }
            else
            {
              v36 = v35 >> 2;
              if ( v36 )
                memset(v34, 0, 4LL * v36);
            }
          }
        }
      }
    }
  }
  if ( !ControllerReset(a1) )
    goto LABEL_61;
  LOBYTE(v37) = 1;
  if ( !(unsigned __int8)NVMeControllerInitPart1(a1, v37) )
    goto LABEL_61;
  v38 = *(_QWORD *)(a1 + 1072);
  v39 = *(_DWORD *)(v38 + 516);
  if ( v39 > 0xFF )
    v39 = 255;
  *(_DWORD *)(a1 + 140) = v39;
  v40 = *(_BYTE *)(v38 + 77);
  if ( v40 )
    *(_DWORD *)(a1 + 136) = (1 << v40) * (1 << ((*(_BYTE *)(a1 + 126) & 0xF) + 12));
  else
    *(_DWORD *)(a1 + 136) = -1;
  v41 = *(_DWORD *)(a1 + 28);
  v42 = *(_DWORD *)(a1 + 136);
  if ( v41 )
  {
    if ( v41 < v42 )
      v42 = *(_DWORD *)(a1 + 28);
  }
  else if ( v42 > 0x80000 )
  {
    v42 = 0x80000;
  }
  v43 = *(_DWORD *)(a1 + 48);
  if ( v43 && v43 < v42 )
    v42 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a5 + 24) = v42;
  *(_DWORD *)(a5 + 28) = 513;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = *(_BYTE *)(a1 + 140);
  *(_DWORD *)(a5 + 212) = 1024;
  *(_DWORD *)(a5 + 208) = 1024;
  v44 = *(_WORD *)(a1 + 36);
  if ( v44 )
  {
    v45 = *(_WORD *)(a1 + 154);
    v46 = v44;
    if ( v44 >= v45 )
      v46 = v45;
    v47 = *(unsigned __int16 *)(a1 + 222);
    v48 = v46;
  }
  else
  {
    v47 = *(unsigned __int16 *)(a1 + 154);
    v48 = *(unsigned __int16 *)(a1 + 222);
  }
  v49 = v48 * v47;
  if ( v49 < 0x400 )
    v49 = 1024LL;
  if ( v49 > 0xFFFFFFFF )
    LODWORD(v49) = -1;
  *(_DWORD *)(a5 + 204) = v49;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v51[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE;
    v51[1] = GUID_NVME_POWER_IDLE_TIMEOUT;
    StorPortExtendedFunction(26LL, a1, 2LL, v51, v50);
  }
  *(_DWORD *)(a1 + 20) &= ~2u;
  return 1LL;
}
