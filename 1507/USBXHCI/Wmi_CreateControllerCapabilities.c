/*
 * XREFs of Wmi_CreateControllerCapabilities @ 0x1C0004A60
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0003DA0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     Register_GetAllExtendedCapability @ 0x1C0007A1C (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C0007AD4 (Register_GetExtendedCapabilityTotalSize.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

void __fastcall Wmi_CreateControllerCapabilities(__int64 *a1)
{
  int ExtendedCapabilityTotalSize; // eax
  POOL_TYPE v3; // ecx
  int v4; // edi
  SIZE_T v5; // rdx
  PVOID PoolWithTag; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 i; // rdx
  unsigned int v22; // r8d

  if ( !a1[2] )
  {
    ExtendedCapabilityTotalSize = Register_GetExtendedCapabilityTotalSize(*(_QWORD *)(*a1 + 80));
    v3 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
    v4 = ExtendedCapabilityTotalSize;
    v5 = (unsigned int)(ExtendedCapabilityTotalSize + 184);
    *((_DWORD *)a1 + 2) = v5;
    PoolWithTag = ExAllocatePoolWithTag(v3, v5, 0x49434858u);
    a1[2] = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *((unsigned int *)a1 + 2));
      *(_DWORD *)a1[2] = *(_DWORD *)(*a1 + 148);
      *(_DWORD *)(a1[2] + 4) = *(unsigned __int16 *)(*a1 + 152);
      *(_DWORD *)(a1[2] + 8) = *(unsigned __int16 *)(*a1 + 156);
      *(_DWORD *)(a1[2] + 12) = *(unsigned __int8 *)(*a1 + 160);
      v8 = *a1;
      v9 = a1[2];
      *(_DWORD *)(v9 + 16) = *(_DWORD *)(*a1 + 200);
      *(_BYTE *)(v9 + 20) = *(_BYTE *)(v8 + 204);
      v10 = *a1;
      v11 = a1[2];
      *(_DWORD *)(v11 + 21) = *(_DWORD *)(*a1 + 205);
      *(_BYTE *)(v11 + 25) = *(_BYTE *)(v10 + 209);
      v12 = *a1;
      v13 = a1[2];
      *(_DWORD *)(v13 + 26) = *(_DWORD *)(*a1 + 210);
      *(_BYTE *)(v13 + 30) = *(_BYTE *)(v12 + 214);
      *(_QWORD *)(a1[2] + 40) = *(_QWORD *)(*a1 + 224);
      v14 = *(_QWORD *)(*(_QWORD *)(*a1 + 80) + 24LL);
      if ( v14 )
      {
        v15 = *(_DWORD *)v14;
        *(_DWORD *)(a1[2] + 48) = HIBYTE(*(_DWORD *)v14);
        *(_DWORD *)(a1[2] + 52) = BYTE2(v15);
        v16 = *(_DWORD *)(v14 + 4);
        *(_DWORD *)(a1[2] + 56) = (unsigned __int8)v16;
        *(_DWORD *)(a1[2] + 60) = (v16 >> 8) & 0x7FF;
        *(_DWORD *)(a1[2] + 64) = HIBYTE(v16);
        v17 = *(_DWORD *)(v14 + 8);
        *(_DWORD *)(a1[2] + 68) = v17 & 0xF;
        *(_DWORD *)(a1[2] + 72) = (unsigned __int8)v17 >> 4;
        *(_DWORD *)(a1[2] + 76) = (v17 >> 26) & 1;
        *(_DWORD *)(a1[2] + 80) = ((v17 >> 11) | v17 & 0x3E00000) >> 16;
        v18 = *(_DWORD *)(v14 + 12);
        *(_DWORD *)(a1[2] + 84) = (unsigned __int8)v18;
        *(_DWORD *)(a1[2] + 88) = HIWORD(v18);
        v19 = *(_DWORD *)(v14 + 16);
        *(_DWORD *)(a1[2] + 92) = v19 & 1;
        *(_DWORD *)(a1[2] + 96) = (v19 >> 1) & 1;
        *(_DWORD *)(a1[2] + 100) = (v19 >> 2) & 1;
        *(_DWORD *)(a1[2] + 104) = (v19 >> 3) & 1;
        *(_DWORD *)(a1[2] + 108) = (v19 >> 4) & 1;
        *(_DWORD *)(a1[2] + 112) = (v19 >> 5) & 1;
        *(_DWORD *)(a1[2] + 116) = (v19 >> 6) & 1;
        *(_DWORD *)(a1[2] + 120) = (v19 >> 7) & 1;
        *(_DWORD *)(a1[2] + 124) = (v19 >> 8) & 1;
        *(_DWORD *)(a1[2] + 128) = (v19 >> 9) & 1;
        *(_DWORD *)(a1[2] + 132) = (v19 >> 10) & 1;
        v7 = (v19 >> 11) & 1;
        *(_DWORD *)(a1[2] + 136) = v7;
        *(_DWORD *)(a1[2] + 140) = (unsigned __int16)v19 >> 12;
        if ( (unsigned __int8)v15 >= 0x20u )
        {
          v20 = *(_DWORD *)(v14 + 28);
          LODWORD(v14) = 1;
          *(_DWORD *)(a1[2] + 144) = v20 & 1;
          for ( i = 148LL; i < 172; i += 4LL )
          {
            v22 = v20 >> v14;
            v14 = (unsigned int)(v14 + 1);
            v7 = v22 & 1;
            *(_DWORD *)(i + a1[2]) = v7;
          }
        }
      }
      *(_DWORD *)(a1[2] + 172) = *(_DWORD *)(*(_QWORD *)(*a1 + 96) + 16LL) != 0;
      if ( v4 )
        Register_GetAllExtendedCapability(*(_QWORD *)(*a1 + 80), a1[2] + 176, v7, v14);
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 64), 2u, 0xEu, 0xBu, (__int64)&WPP_908b54c7d6f6ffe6ea04f25220b9fe46_Traceguids);
      *((_DWORD *)a1 + 2) = 0;
    }
  }
}
