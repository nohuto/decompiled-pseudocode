/*
 * XREFs of Wmi_CreateControllerCapabilities @ 0x1C0007A80
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0007410 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     Register_GetAllExtendedCapability @ 0x1C000A44C (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C000A504 (Register_GetExtendedCapabilityTotalSize.c)
 *     memset @ 0x1C0011000 (memset.c)
 */

void __fastcall Wmi_CreateControllerCapabilities(__int64 *a1)
{
  int ExtendedCapabilityTotalSize; // edi
  SIZE_T v3; // rdx
  PVOID PoolWithTag; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 i; // rdx
  unsigned int v20; // r8d

  if ( !a1[2] )
  {
    ExtendedCapabilityTotalSize = Register_GetExtendedCapabilityTotalSize(*(_QWORD *)(*a1 + 80));
    v3 = (unsigned int)(ExtendedCapabilityTotalSize + 184);
    *((_DWORD *)a1 + 2) = v3;
    PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, v3, 0x49434858u);
    a1[2] = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *((unsigned int *)a1 + 2));
      *(_DWORD *)a1[2] = *(_DWORD *)(*a1 + 148);
      *(_DWORD *)(a1[2] + 4) = *(unsigned __int16 *)(*a1 + 152);
      *(_DWORD *)(a1[2] + 8) = *(unsigned __int16 *)(*a1 + 156);
      *(_DWORD *)(a1[2] + 12) = *(unsigned __int8 *)(*a1 + 160);
      v6 = *a1;
      v7 = a1[2];
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(*a1 + 200);
      *(_BYTE *)(v7 + 20) = *(_BYTE *)(v6 + 204);
      v8 = *a1;
      v9 = a1[2];
      *(_DWORD *)(v9 + 21) = *(_DWORD *)(*a1 + 205);
      *(_BYTE *)(v9 + 25) = *(_BYTE *)(v8 + 209);
      v10 = *a1;
      v11 = a1[2];
      *(_DWORD *)(v11 + 26) = *(_DWORD *)(*a1 + 210);
      *(_BYTE *)(v11 + 30) = *(_BYTE *)(v10 + 214);
      *(_QWORD *)(a1[2] + 40) = *(_QWORD *)(*a1 + 224);
      v12 = *(_QWORD *)(*(_QWORD *)(*a1 + 80) + 24LL);
      if ( v12 )
      {
        v13 = *(_DWORD *)v12;
        *(_DWORD *)(a1[2] + 48) = HIBYTE(*(_DWORD *)v12);
        *(_DWORD *)(a1[2] + 52) = BYTE2(v13);
        v14 = *(_DWORD *)(v12 + 4);
        *(_DWORD *)(a1[2] + 56) = (unsigned __int8)v14;
        *(_DWORD *)(a1[2] + 60) = (v14 >> 8) & 0x7FF;
        *(_DWORD *)(a1[2] + 64) = HIBYTE(v14);
        v15 = *(_DWORD *)(v12 + 8);
        *(_DWORD *)(a1[2] + 68) = v15 & 0xF;
        *(_DWORD *)(a1[2] + 72) = (unsigned __int8)v15 >> 4;
        *(_DWORD *)(a1[2] + 76) = (v15 >> 26) & 1;
        *(_DWORD *)(a1[2] + 80) = ((v15 >> 11) | v15 & 0x3E00000) >> 16;
        v16 = *(_DWORD *)(v12 + 12);
        *(_DWORD *)(a1[2] + 84) = (unsigned __int8)v16;
        *(_DWORD *)(a1[2] + 88) = HIWORD(v16);
        v17 = *(_DWORD *)(v12 + 16);
        *(_DWORD *)(a1[2] + 92) = v17 & 1;
        *(_DWORD *)(a1[2] + 96) = (v17 >> 1) & 1;
        *(_DWORD *)(a1[2] + 100) = (v17 >> 2) & 1;
        *(_DWORD *)(a1[2] + 104) = (v17 >> 3) & 1;
        *(_DWORD *)(a1[2] + 108) = (v17 >> 4) & 1;
        *(_DWORD *)(a1[2] + 112) = (v17 >> 5) & 1;
        *(_DWORD *)(a1[2] + 116) = (v17 >> 6) & 1;
        *(_DWORD *)(a1[2] + 120) = (v17 >> 7) & 1;
        *(_DWORD *)(a1[2] + 124) = (v17 >> 8) & 1;
        *(_DWORD *)(a1[2] + 128) = (v17 >> 9) & 1;
        *(_DWORD *)(a1[2] + 132) = (v17 >> 10) & 1;
        v5 = (v17 >> 11) & 1;
        *(_DWORD *)(a1[2] + 136) = v5;
        *(_DWORD *)(a1[2] + 140) = (unsigned __int16)v17 >> 12;
        if ( (unsigned __int8)v13 >= 0x20u )
        {
          v18 = *(_DWORD *)(v12 + 28);
          LODWORD(v12) = 1;
          *(_DWORD *)(a1[2] + 144) = v18 & 1;
          for ( i = 148LL; i < 172; i += 4LL )
          {
            v20 = v18 >> v12;
            v12 = (unsigned int)(v12 + 1);
            v5 = v20 & 1;
            *(_DWORD *)(i + a1[2]) = v5;
          }
        }
      }
      *(_DWORD *)(a1[2] + 172) = *(_DWORD *)(*(_QWORD *)(*a1 + 96) + 16LL) != 0;
      if ( ExtendedCapabilityTotalSize )
        Register_GetAllExtendedCapability(*(_QWORD *)(*a1 + 80), a1[2] + 176, v5, v12);
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 64), 2u, 0xEu, 0xBu, (__int64)&WPP_908b54c7d6f6ffe6ea04f25220b9fe46_Traceguids);
      *((_DWORD *)a1 + 2) = 0;
    }
  }
}
