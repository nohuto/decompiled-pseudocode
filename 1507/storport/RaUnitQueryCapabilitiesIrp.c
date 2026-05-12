/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C004E658
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000EFC8 (RaidUnitPoFxActivateComponent.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0033DF8 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C004E9D4 (PortWdmGetDeviceCapabilities.c)
 *     PortGetDeviceType @ 0x1C004FABC (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  int v4; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 DeviceType; // rbx
  unsigned int v9; // r14d
  _DWORD *PoolWithTag; // rsi
  int v11; // eax
  char v12; // r8
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rax
  int AccessState; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // r8d
  _BYTE v37[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v38[4]; // [rsp+40h] [rbp-78h] BYREF

  if ( *(_QWORD *)(a1 + 24) && (v4 = *(_DWORD *)(a1 + 40)) != 0 && (unsigned int)(v4 - 5) > 1 )
  {
    RaidUnitPoFxActivateComponent(a1, 0, 1LL, v37);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F, v6, v7);
    v9 = 4 * (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4 | 2);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72536152u);
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v38);
    *(_OWORD *)&SecurityContext->SecurityQos = v38[0];
    *(_OWORD *)&SecurityContext->DesiredAccess = v38[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v38[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v38[3];
    v11 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v11;
    if ( *(_BYTE *)(DeviceType + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v11 | 0x80;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88));
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
      {
        v13 = PoolWithTag[1];
        *PoolWithTag = 1572865;
        PoolWithTag[1] ^= (HIDWORD(SecurityContext->SecurityQos) ^ v13) & 1;
        v14 = PoolWithTag[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 2;
        PoolWithTag[1] = v14;
        v15 = v14 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v14) & 4;
        PoolWithTag[1] = v15;
        v16 = v15 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v15) & 8;
        PoolWithTag[1] = v16;
        v17 = v16 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v16) & 0x10;
        PoolWithTag[1] = v17;
        v18 = v17 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v17) & 0x20;
        PoolWithTag[1] = v18;
        v19 = v18 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v18) & 0x40;
        PoolWithTag[1] = v19;
        v20 = v19 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v19) & 0x80;
        PoolWithTag[1] = v20;
        v21 = v20 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v20) & 0x100;
        PoolWithTag[1] = v21;
        v22 = v21 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v21) & 0x200;
        PoolWithTag[1] = v22;
        PoolWithTag[1] = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        PoolWithTag[3] = HIDWORD(SecurityContext->AccessState);
        v23 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v23 + 4839) == 1 && *(_BYTE *)(v23 + 4838) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 88) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        PoolWithTag[1] &= ~0x800u;
        PoolWithTag[2] = AccessState;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9LL, v12, (__int64)PoolWithTag, v9) >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
        {
          v25 = HIDWORD(SecurityContext->SecurityQos) ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 1;
          HIDWORD(SecurityContext->SecurityQos) = v25;
          v26 = ((unsigned __int8)v25 ^ (unsigned __int8)PoolWithTag[1]) & 2 ^ v25;
          HIDWORD(SecurityContext->SecurityQos) = v26;
          v27 = ((unsigned __int8)v26 ^ (unsigned __int8)PoolWithTag[1]) & 4 ^ v26;
          HIDWORD(SecurityContext->SecurityQos) = v27;
          v28 = ((unsigned __int8)v27 ^ (unsigned __int8)PoolWithTag[1]) & 8 ^ v27;
          HIDWORD(SecurityContext->SecurityQos) = v28;
          v29 = ((unsigned __int8)v28 ^ (unsigned __int8)PoolWithTag[1]) & 0x10 ^ v28;
          HIDWORD(SecurityContext->SecurityQos) = v29;
          v30 = ((unsigned __int8)v29 ^ (unsigned __int8)PoolWithTag[1]) & 0x20 ^ v29;
          HIDWORD(SecurityContext->SecurityQos) = v30;
          v31 = ((unsigned __int8)v30 ^ (unsigned __int8)PoolWithTag[1]) & 0x40 ^ v30;
          HIDWORD(SecurityContext->SecurityQos) = v31;
          v32 = ((unsigned __int8)v31 ^ (unsigned __int8)PoolWithTag[1]) & 0x80 ^ v31;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          v33 = ((unsigned __int16)v32 ^ (unsigned __int16)PoolWithTag[1]) & 0x100 ^ v32;
          HIDWORD(SecurityContext->SecurityQos) = v33;
          v34 = ((unsigned __int16)v33 ^ (unsigned __int16)PoolWithTag[1]) & 0x200 ^ v33;
          HIDWORD(SecurityContext->SecurityQos) = v34;
          HIDWORD(SecurityContext->SecurityQos) = v34 ^ (v34 ^ (PoolWithTag[1] << 7)) & 0x20000;
          HIDWORD(SecurityContext->AccessState) = PoolWithTag[3];
          LODWORD(SecurityContext->AccessState) = PoolWithTag[2];
          if ( (PoolWithTag[1] & 0x800) != 0 )
          {
            *(_DWORD *)(a1 + 1520) |= 0x10u;
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
    RaidUnitPoFxIdleComponent(a1, 0, 0, v37);
    v35 = 0;
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    v35 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v35);
}
