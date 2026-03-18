/*
 * XREFs of Wmi_CreateControllerCapabilities @ 0x1C0008090
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005AD0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     Register_GetAllExtendedCapability @ 0x1C000AED8 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C000AF98 (Register_GetExtendedCapabilityTotalSize.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

void __fastcall Wmi_CreateControllerCapabilities(__int64 *a1)
{
  int ExtendedCapabilityTotalSize; // edi
  SIZE_T v3; // rdx
  PVOID PoolWithTag; // rax
  __int64 v5; // r8
  int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 i; // rdx
  unsigned int v21; // r8d

  if ( !a1[2] )
  {
    ExtendedCapabilityTotalSize = Register_GetExtendedCapabilityTotalSize(*(_QWORD *)(*a1 + 80));
    v3 = (unsigned int)(ExtendedCapabilityTotalSize + 184);
    *((_DWORD *)a1 + 2) = v3;
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v3, 0x49434858u);
    a1[2] = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *((unsigned int *)a1 + 2));
      v6 = 1;
      *(_DWORD *)a1[2] = *(_DWORD *)(*a1 + 148);
      *(_DWORD *)(a1[2] + 4) = *(unsigned __int16 *)(*a1 + 152);
      *(_DWORD *)(a1[2] + 8) = *(unsigned __int16 *)(*a1 + 156);
      *(_DWORD *)(a1[2] + 12) = *(unsigned __int8 *)(*a1 + 160);
      v7 = *a1;
      v8 = a1[2];
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(*a1 + 200);
      *(_BYTE *)(v8 + 20) = *(_BYTE *)(v7 + 204);
      v9 = *a1;
      v10 = a1[2];
      *(_DWORD *)(v10 + 21) = *(_DWORD *)(*a1 + 205);
      *(_BYTE *)(v10 + 25) = *(_BYTE *)(v9 + 209);
      v11 = *a1;
      v12 = a1[2];
      *(_DWORD *)(v12 + 26) = *(_DWORD *)(*a1 + 210);
      *(_BYTE *)(v12 + 30) = *(_BYTE *)(v11 + 214);
      *(_QWORD *)(a1[2] + 40) = *(_QWORD *)(*a1 + 224);
      v13 = *(_QWORD *)(*(_QWORD *)(*a1 + 80) + 24LL);
      if ( v13 )
      {
        v14 = *(_DWORD *)v13;
        *(_DWORD *)(a1[2] + 48) = HIBYTE(*(_DWORD *)v13);
        *(_DWORD *)(a1[2] + 52) = BYTE2(v14);
        v15 = *(_DWORD *)(v13 + 4);
        *(_DWORD *)(a1[2] + 56) = (unsigned __int8)v15;
        *(_DWORD *)(a1[2] + 60) = (v15 >> 8) & 0x7FF;
        *(_DWORD *)(a1[2] + 64) = HIBYTE(v15);
        v16 = *(_DWORD *)(v13 + 8);
        *(_DWORD *)(a1[2] + 68) = v16 & 0xF;
        *(_DWORD *)(a1[2] + 72) = (unsigned __int8)v16 >> 4;
        *(_DWORD *)(a1[2] + 76) = (v16 >> 26) & 1;
        *(_DWORD *)(a1[2] + 80) = ((v16 >> 11) | v16 & 0x3E00000) >> 16;
        v17 = *(_DWORD *)(v13 + 12);
        *(_DWORD *)(a1[2] + 84) = (unsigned __int8)v17;
        *(_DWORD *)(a1[2] + 88) = HIWORD(v17);
        v18 = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(a1[2] + 92) = v18 & 1;
        *(_DWORD *)(a1[2] + 96) = (v18 >> 1) & 1;
        *(_DWORD *)(a1[2] + 100) = (v18 >> 2) & 1;
        *(_DWORD *)(a1[2] + 104) = (v18 >> 3) & 1;
        *(_DWORD *)(a1[2] + 108) = (v18 >> 4) & 1;
        *(_DWORD *)(a1[2] + 112) = (v18 >> 5) & 1;
        *(_DWORD *)(a1[2] + 116) = (v18 >> 6) & 1;
        *(_DWORD *)(a1[2] + 120) = (v18 >> 7) & 1;
        *(_DWORD *)(a1[2] + 124) = (v18 >> 8) & 1;
        *(_DWORD *)(a1[2] + 128) = (v18 >> 9) & 1;
        *(_DWORD *)(a1[2] + 132) = (v18 >> 10) & 1;
        v5 = (v18 >> 11) & 1;
        *(_DWORD *)(a1[2] + 136) = v5;
        *(_DWORD *)(a1[2] + 140) = (unsigned __int16)v18 >> 12;
        if ( (unsigned __int8)v14 >= 0x20u )
        {
          v19 = *(_DWORD *)(v13 + 28);
          LODWORD(v13) = 1;
          *(_DWORD *)(a1[2] + 144) = v19 & 1;
          for ( i = 148LL; i < 172; i += 4LL )
          {
            v21 = v19 >> v13;
            v13 = (unsigned int)(v13 + 1);
            v5 = v21 & 1;
            *(_DWORD *)(i + a1[2]) = v5;
          }
        }
      }
      if ( !*(_DWORD *)(*(_QWORD *)(*a1 + 96) + 16LL) )
        v6 = 0;
      *(_DWORD *)(a1[2] + 172) = v6;
      if ( ExtendedCapabilityTotalSize )
        Register_GetAllExtendedCapability(*(_QWORD *)(*a1 + 80), a1[2] + 176, v5, v13);
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 64), 2u, 0xEu, 0xBu, (__int64)&WPP_cb071ada7b173da2fd0c6f854bd4e7d5_Traceguids);
      *((_DWORD *)a1 + 2) = 0;
    }
  }
}
