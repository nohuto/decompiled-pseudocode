/*
 * XREFs of NVMeHwFindAdapter @ 0x1C00048B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00043E8 (ControllerAllocateUncachedExtension.c)
 *     ControllerReset @ 0x1C000457C (ControllerReset.c)
 *     GetControllerMaxTransferSize @ 0x1C0004744 (GetControllerMaxTransferSize.c)
 *     IsIntelChatham @ 0x1C00047C8 (IsIntelChatham.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0004828 (NVMeControllerStartFailureEventLog.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeControllerInitPart1 @ 0x1C0006D5C (NVMeControllerInitPart1.c)
 *     GetNVMeRegisterAddress @ 0x1C000EF00 (GetNVMeRegisterAddress.c)
 *     GetRegistrySettings @ 0x1C000EF68 (GetRegistrySettings.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  char v7; // r13
  char v8; // cl
  char v9; // al
  __int16 v10; // r15
  int v11; // eax
  int BusData; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *NVMeRegisterAddress; // rax
  unsigned int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int16 v26; // ax
  int v27; // ecx
  __int64 v28; // r8
  _QWORD *v29; // r14
  __int64 v30; // rdx
  char v31; // r8
  unsigned __int64 v32; // r9
  unsigned __int16 v33; // ax
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned int v36; // r8d
  _QWORD v37[8]; // [rsp+58h] [rbp-19h] BYREF

  v6 = *(_QWORD *)(a5 + 64);
  if ( (*(_DWORD *)(a1 + 20) & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v8 = g_ControllerExtensionIndex;
    v7 = 0;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v8 + 1) & 0xF;
  }
  v9 = *(_BYTE *)(a5 + 197);
  v10 = 64;
  *(_BYTE *)(a1 + 16) = v9;
  if ( v9 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 24) = 2;
      return 2LL;
    }
    StorPortExtendedFunction(45LL, a1, v6);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 28) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 44) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 60) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 76) = *(_OWORD *)(v6 + 64);
    *(_QWORD *)(a1 + 92) = *(_QWORD *)(v6 + 80);
    v11 = *(_DWORD *)(v6 + 88);
    *(_DWORD *)(a1 + 52) |= 4u;
    *(_DWORD *)(a1 + 152) = v11;
  }
  else
  {
    memset(v37, 0, sizeof(v37));
    BusData = StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v37, 64);
    v14 = a1;
    if ( BusData != 64 )
    {
      v18 = 3;
      *(_DWORD *)(a1 + 24) = 3;
      goto LABEL_72;
    }
    *(_DWORD *)(a1 + 4) = v37[0];
    *(_BYTE *)(a1 + 8) = v37[1];
    if ( IsIntelChatham(a1) )
    {
      v15 = v37[3] & 0xFFFFF000;
      v16 = HIDWORD(v37[3]);
    }
    else
    {
      v15 = v37[2] & 0xFFFFC000;
      v16 = HIDWORD(v37[2]);
    }
    *(_QWORD *)(a1 + 104) = v15 | (v16 << 32);
  }
  NVMeRegisterAddress = (__int64 *)GetNVMeRegisterAddress(a1, a5, *(_QWORD *)(a1 + 104));
  *(_QWORD *)(a1 + 112) = NVMeRegisterAddress;
  if ( !NVMeRegisterAddress )
  {
    *(_DWORD *)(a1 + 24) = 4;
    v18 = 3;
LABEL_51:
    v14 = a1;
LABEL_72:
    NVMeControllerStartFailureEventLog(v14);
    return v18;
  }
  v19 = *NVMeRegisterAddress;
  v20 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 128) = v19;
  v21 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v20 + 8);
  *(_DWORD *)(a1 + 136) = 4 << (BYTE4(v21) & 0xF);
  if ( IsIntelChatham(a1) )
    *(_BYTE *)(a1 + 131) = 1;
  v22 = *(_BYTE *)(a1 + 16) == 0;
  *(_DWORD *)(a1 + 140) = 500 * *(unsigned __int8 *)(a1 + 131);
  if ( v22 && !v7 )
    GetRegistrySettings(a1);
  v23 = 1;
  v22 = *(_DWORD *)(a5 + 20) == 1;
  *(_DWORD *)(a1 + 224) = 1048640;
  if ( v22 )
    v23 = 3;
  v22 = *(_BYTE *)(a1 + 16) == 0;
  *(_DWORD *)(a1 + 12) = v23;
  if ( v22 )
  {
    v25 = 1024;
    *(_WORD *)(a1 + 228) = 256;
    if ( *(_DWORD *)(a1 + 32) )
      v25 = *(_DWORD *)(a1 + 32);
    if ( v25 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 128) + 1 )
      v25 = (unsigned __int16)*(_DWORD *)(a1 + 128) + 1;
    v26 = -1;
    if ( v25 < 0xFFFF )
      v26 = v25;
    *(_WORD *)(a1 + 230) = v26;
  }
  else
  {
    v24 = *(_DWORD *)(a1 + 32);
    *(_WORD *)(a1 + 228) = 64;
    if ( v24 && v24 <= 0x40 )
      v10 = v24;
    *(_WORD *)(a1 + 230) = v10;
  }
  v22 = *(_DWORD *)(a5 + 20) == 1;
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 81) = 1;
  *(_BYTE *)(a5 + 145) = 0;
  *(_DWORD *)(a5 + 148) = 1;
  if ( v22 )
  {
    *(_DWORD *)(a5 + 160) = 2;
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
  }
  else
  {
    *(_DWORD *)(a5 + 160) = 1;
  }
  v22 = *(_BYTE *)(a5 + 144) == 0x80;
  *(_DWORD *)(a5 + 216) = 0;
  if ( v22 )
    *(_BYTE *)(a5 + 144) = 2;
  v27 = *(_DWORD *)(a5 + 220) | 0x2A;
  *(_BYTE *)(a5 + 147) = 0;
  *(_DWORD *)(a5 + 220) = v27;
  if ( (*(_DWORD *)(a1 + 52) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v27 | 4;
  if ( !v7 )
  {
    if ( !ControllerAllocateUncachedExtension(a1, a5) )
    {
LABEL_50:
      v18 = 2;
      goto LABEL_51;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v28 = *(unsigned int *)(a1 + 92);
      if ( (_DWORD)v28 )
      {
        v29 = (_QWORD *)(a1 + 3256);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v28) )
        {
          if ( *v29 )
            NVMeZeroMemory(*v29, *(unsigned int *)(a1 + 92));
        }
      }
    }
  }
  if ( !ControllerReset(a1) )
    goto LABEL_50;
  LOBYTE(v30) = 1;
  if ( !(unsigned __int8)NVMeControllerInitPart1(a1, v30) )
    goto LABEL_50;
  v31 = *(_BYTE *)(*(_QWORD *)(a1 + 1080) + 77LL);
  if ( v31 )
    *(_DWORD *)(a1 + 144) = (1 << v31) * (1 << ((*(_BYTE *)(a1 + 134) & 0xF) + 12));
  else
    *(_DWORD *)(a1 + 144) = -1;
  *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
  *(_DWORD *)(a5 + 28) = 513;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = *(_BYTE *)(a1 + 148);
  *(_DWORD *)(a5 + 212) = 1024;
  v33 = *(_WORD *)(a1 + 36);
  if ( v33 )
  {
    LOWORD(v34) = *(_WORD *)(a1 + 162);
    if ( v33 >= (unsigned __int16)v34 )
      LODWORD(v34) = (unsigned __int16)v34;
    else
      LODWORD(v34) = v33;
    v34 = (int)v34;
  }
  else
  {
    v34 = *(unsigned __int16 *)(a1 + 162);
  }
  v35 = *(unsigned __int16 *)(a1 + 230) * v34;
  if ( v35 < 0x400 )
    v35 = 1024LL;
  if ( v35 > v32 )
    LODWORD(v35) = v32;
  *(_DWORD *)(a5 + 204) = v35;
  v36 = *(_DWORD *)(a1 + 148);
  if ( v36 )
    *(_DWORD *)(a5 + 208) = (unsigned int)v35 / v36;
  else
    *(_DWORD *)(a5 + 208) = v35;
  if ( !*(_BYTE *)(a1 + 16) )
    StorPortExtendedFunction(26LL, a1, 2LL);
  *(_DWORD *)(a1 + 20) &= ~2u;
  return 1LL;
}
