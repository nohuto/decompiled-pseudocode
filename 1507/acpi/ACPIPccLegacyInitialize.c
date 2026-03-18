/*
 * XREFs of ACPIPccLegacyInitialize @ 0x1C0065E90
 * Callers:
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0065F90 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066098 (ACPIAmliEvaluateOsc.c)
 *     AcpiPccInitilizeSubspace @ 0x1C007BDD0 (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccLegacyInitialize(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r8d
  __int64 v3; // rcx
  PVOID PoolWithTag; // rax
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  int v11[4]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[4]; // [rsp+40h] [rbp-30h] BYREF
  char v13; // [rsp+44h] [rbp-2Ch]
  char v14; // [rsp+45h] [rbp-2Bh]
  __int64 v15; // [rsp+4Eh] [rbp-22h]
  int v16; // [rsp+66h] [rbp-Ah]
  int v17; // [rsp+80h] [rbp+10h] BYREF
  int v18; // [rsp+84h] [rbp+14h]
  int v19; // [rsp+88h] [rbp+18h] BYREF
  int v20; // [rsp+8Ch] [rbp+1Ch]

  v18 = HIDWORD(a1);
  v1 = RootDeviceExtension;
  v17 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v17);
  if ( v17 == 2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v3 = *(_QWORD *)(v1 + 704);
    v19 = 0;
    v20 = 1;
    *(_OWORD *)v11 = SB_OSC_PCC_UUID;
    ACPIAmliEvaluateOsc(v3, (int)v11, v2, 2, &v19);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x4D706341u);
    v5 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x210uLL);
      *(_DWORD *)v5 |= 1u;
      v6 = ACPIAmliEvaluatePcch(*(_QWORD *)(v1 + 704), (unsigned int)v12, (int)v5 + 80, (int)v5 + 64, v5 + 56);
      if ( v6 >= 0 )
      {
        if ( !v12[3] && (v13 & 4) != 0 && (v13 & 8) != 0 && (v14 & 1) != 0 )
        {
          *(_DWORD *)(v5 + 104) = v16;
          *(_QWORD *)(v5 + 96) = v15;
          v6 = AcpiPccInitilizeSubspace((PVOID)v5);
          if ( v6 >= 0 )
          {
            v8 = *(_QWORD *)(v5 + 32);
            *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 104);
            *(_QWORD *)(v5 + 16) = v8;
            *(_QWORD *)(v5 + 40) = v8 + 12;
            *(_QWORD *)(v5 + 48) = v8 + 14;
            *(_DWORD *)(v5 + 4) = *(_DWORD *)(v8 + 16);
            v9 = *(_DWORD *)(v8 + 20);
            if ( v9 )
              *(_DWORD *)(v5 + 8) = 0x1E8480 / v9;
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
              *(_DWORD *)v5 |= 2u;
            v10 = *(_DWORD *)v5 & 0xFFFFFFCB;
            AcpiPccLegacySubspace = v5;
            *(_DWORD *)v5 = v10 | 8;
            v5 = 0LL;
          }
        }
        else
        {
          v6 = -1073741823;
        }
      }
      if ( v5 )
        ExFreePoolWithTag((PVOID)v5, 0x4D706341u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
