/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C005ACEC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0002F60 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0003308 (RaidUnitPoFxActivateComponent.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0038884 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortGetDeviceType @ 0x1C005A758 (PortGetDeviceType.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C005B068 (PortWdmGetDeviceCapabilities.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  int v4; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  char **DeviceType; // rbx
  unsigned int v7; // r14d
  _DWORD *PoolWithTag; // rsi
  int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  int AccessState; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  unsigned int v33; // r8d
  _BYTE v35[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v36[4]; // [rsp+40h] [rbp-78h] BYREF

  if ( *(_QWORD *)(a1 + 24) && (v4 = *(_DWORD *)(a1 + 40)) != 0 && (unsigned int)(v4 - 5) > 1 )
  {
    RaidUnitPoFxActivateComponent(a1, 0, 1LL, v35);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F);
    v7 = 4 * (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4 | 2);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72536152u);
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v36);
    *(_OWORD *)&SecurityContext->SecurityQos = v36[0];
    *(_OWORD *)&SecurityContext->DesiredAccess = v36[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v36[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v36[3];
    v9 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v9;
    if ( *((_BYTE *)DeviceType + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v9 | 0x80;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88));
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
      {
        v11 = PoolWithTag[1];
        *PoolWithTag = 1572865;
        PoolWithTag[1] ^= (HIDWORD(SecurityContext->SecurityQos) ^ v11) & 1;
        v12 = PoolWithTag[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 2;
        PoolWithTag[1] = v12;
        v13 = v12 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v12) & 4;
        PoolWithTag[1] = v13;
        v14 = v13 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v13) & 8;
        PoolWithTag[1] = v14;
        v15 = v14 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v14) & 0x10;
        PoolWithTag[1] = v15;
        v16 = v15 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v15) & 0x20;
        PoolWithTag[1] = v16;
        v17 = v16 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v16) & 0x40;
        PoolWithTag[1] = v17;
        v18 = v17 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v17) & 0x80;
        PoolWithTag[1] = v18;
        v19 = v18 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v18) & 0x100;
        PoolWithTag[1] = v19;
        v20 = v19 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v19) & 0x200;
        PoolWithTag[1] = v20;
        PoolWithTag[1] = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        PoolWithTag[3] = HIDWORD(SecurityContext->AccessState);
        v21 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v21 + 4839) == 1 && *(_BYTE *)(v21 + 4838) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 88) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        PoolWithTag[1] &= ~0x800u;
        PoolWithTag[2] = AccessState;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9LL, v10, (__int64)PoolWithTag, v7) >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
        {
          v23 = HIDWORD(SecurityContext->SecurityQos) ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 1;
          HIDWORD(SecurityContext->SecurityQos) = v23;
          v24 = ((unsigned __int8)v23 ^ (unsigned __int8)PoolWithTag[1]) & 2 ^ v23;
          HIDWORD(SecurityContext->SecurityQos) = v24;
          v25 = ((unsigned __int8)v24 ^ (unsigned __int8)PoolWithTag[1]) & 4 ^ v24;
          HIDWORD(SecurityContext->SecurityQos) = v25;
          v26 = ((unsigned __int8)v25 ^ (unsigned __int8)PoolWithTag[1]) & 8 ^ v25;
          HIDWORD(SecurityContext->SecurityQos) = v26;
          v27 = ((unsigned __int8)v26 ^ (unsigned __int8)PoolWithTag[1]) & 0x10 ^ v26;
          HIDWORD(SecurityContext->SecurityQos) = v27;
          v28 = ((unsigned __int8)v27 ^ (unsigned __int8)PoolWithTag[1]) & 0x20 ^ v27;
          HIDWORD(SecurityContext->SecurityQos) = v28;
          v29 = ((unsigned __int8)v28 ^ (unsigned __int8)PoolWithTag[1]) & 0x40 ^ v28;
          HIDWORD(SecurityContext->SecurityQos) = v29;
          v30 = ((unsigned __int8)v29 ^ (unsigned __int8)PoolWithTag[1]) & 0x80 ^ v29;
          HIDWORD(SecurityContext->SecurityQos) = v30;
          v31 = ((unsigned __int16)v30 ^ (unsigned __int16)PoolWithTag[1]) & 0x100 ^ v30;
          HIDWORD(SecurityContext->SecurityQos) = v31;
          v32 = ((unsigned __int16)v31 ^ (unsigned __int16)PoolWithTag[1]) & 0x200 ^ v31;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          HIDWORD(SecurityContext->SecurityQos) = v32 ^ (v32 ^ (PoolWithTag[1] << 7)) & 0x20000;
          HIDWORD(SecurityContext->AccessState) = PoolWithTag[3];
          LODWORD(SecurityContext->AccessState) = PoolWithTag[2];
          if ( (PoolWithTag[1] & 0x800) != 0 )
          {
            *(_DWORD *)(a1 + 1536) |= 0x10u;
            RaidUnitSetDefaultWriteCachePolicy(a1);
          }
        }
        else
        {
          HIDWORD(SecurityContext->SecurityQos) ^= (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 0x10;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x72536152u);
    }
    RaidUnitPoFxIdleComponent(a1, 0, 0, v35);
    v33 = 0;
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    v33 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v33);
}
