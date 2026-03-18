/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0022D90
 * Callers:
 *     HUBDSM_ValidatingBOSDescriptor @ 0x1C001B950 (HUBDSM_ValidatingBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBDTX_CacheBillboardInfo @ 0x1C0024EDC (HUBDTX_CacheBillboardInfo.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0030AD0 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0035B84 (UsbDualRoleFeaturesQueryLocalMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x1C0074F60 (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptor(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // r10
  char v6; // r12
  int v7; // ecx
  volatile signed __int32 *v8; // rbx
  char v9; // al
  char v10; // al
  bool v11; // zf
  char v12; // al
  char v13; // r12
  __int64 v14; // rcx
  unsigned int v15; // r14d
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // al
  int v21; // ecx
  char v22; // dl
  PVOID v23; // rax
  unsigned int v24; // ebx
  __int64 v26; // [rsp+50h] [rbp-59h]
  int v27[14]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v28[16]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+7h]
  __int64 v30; // [rsp+B8h] [rbp+Fh]
  __int64 v31; // [rsp+C0h] [rbp+17h]
  char v32; // [rsp+C8h] [rbp+1Fh]
  _QWORD *v33; // [rsp+D0h] [rbp+27h]
  __int64 v34; // [rsp+D8h] [rbp+2Fh]
  __int64 v35; // [rsp+110h] [rbp+67h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 2040);
  LOBYTE(v35) = 0;
  if ( !v1 )
    v1 = (unsigned __int16 *)(a1 + 1716);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v27, 0, sizeof(v27));
  v4 = BYTE1(v27[3]);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(a1 + 2448);
  v27[1] = *(_DWORD *)(a1 + 156);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = (volatile signed __int32 *)(a1 + 1616);
  *(_QWORD *)&v27[10] = a1;
  if ( (v7 & 0x20) != 0 )
    v4 = 1;
  BYTE1(v27[3]) = v4;
  v9 = HIBYTE(v27[3]);
  if ( (v7 & 0x2000) != 0 )
    v9 = 1;
  HIBYTE(v27[3]) = v9;
  v10 = v27[3];
  if ( (v7 & 0x4000) != 0 )
    v10 = 1;
  v11 = (*(_DWORD *)(a1 + 1628) & 0x200000) == 0;
  LOBYTE(v27[3]) = v10;
  v12 = v27[12];
  if ( !v11 )
    v12 = 1;
  v13 = v6 & 1;
  LOBYTE(v27[12]) = v12;
  v27[4] = *(_DWORD *)(v5 + 220);
  *(_QWORD *)&v27[6] = HUBMISC_LogDescriptorValidationErrorForDevice;
  *(_QWORD *)&v27[8] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  LOWORD(v27[0]) = *(_WORD *)(a1 + 1974);
  v26 = *(_QWORD *)(v5 + 1432);
  v27[2] = *(_DWORD *)(*(_QWORD *)a1 + 92LL);
  if ( !(unsigned __int8)HUBDESC_ValidateBOSDescriptorSet(
                           (int)v1,
                           (int)a1 + 1972,
                           *(_DWORD *)(a1 + 240),
                           (int)v27,
                           v28,
                           a1 + 2176,
                           a1 + 2178,
                           (__int64)&v35,
                           a1 + 2424,
                           a1 + 1616,
                           v26) )
  {
    if ( (*(_DWORD *)(a1 + 1628) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 2416) = 1073807378;
      goto LABEL_44;
    }
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x36u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids);
  }
  if ( (_BYTE)v35 )
    _InterlockedOr(v8, 0x100000u);
  if ( v29 && !*(_QWORD *)(a1 + 2544) )
  {
    v15 = (*(_DWORD *)(v29 + 4) & 0x1F) + 1;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 4LL * v15, 0x64334855u);
    *(_QWORD *)(a1 + 2544) = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x37u,
        (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids);
      goto LABEL_44;
    }
    memmove(PoolWithTag, (const void *)(v29 + 12), 4LL * v15);
    *(_DWORD *)(a1 + 2552) = v15;
  }
  if ( v30 )
  {
    _InterlockedOr(v8, 0x10u);
    if ( (*v8 & 8) == 0 )
      *(_OWORD *)(a1 + 2048) = *(_OWORD *)(v30 + 4);
  }
  if ( v31 )
    HUBDTX_CacheBillboardInfo(a1);
  if ( v34 )
  {
    _InterlockedOr(v8, 0x40000u);
    *(_BYTE *)(a1 + 2632) = *(_BYTE *)(v34 + 21);
    UsbDualRoleFeaturesQueryLocalMachine(a1 + 2624);
    v17 = v34;
    v18 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 2628) = *(_DWORD *)(v34 + 22);
    v19 = *(unsigned int *)(v17 + 22);
    LOBYTE(v17) = 1;
    HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(v18 + 1416), v17, v19);
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 2000) + 4LL) > 1u && v32 == 1 )
  {
    v20 = *(_BYTE *)(a1 + 1976);
    if ( !v20 || v20 == -17 && *(_BYTE *)(a1 + 1977) == 2 && *(_BYTE *)(a1 + 1978) == 1 )
      _InterlockedOr(v8, 4u);
  }
  if ( !v13 )
  {
    if ( v33 )
    {
      v21 = *(_DWORD *)(a1 + 2448) | 1;
      *(_QWORD *)(a1 + 2464) = *v33;
      v22 = *(_BYTE *)(a1 + 2471);
      *(_DWORD *)(a1 + 2448) = v21;
      if ( v22 )
      {
        if ( (*(_DWORD *)(a1 + 2452) & 4) == 0 )
        {
          *(_BYTE *)(a1 + 2036) = *(_BYTE *)(a1 + 2470);
          *(_DWORD *)(a1 + 2448) = v21 | 4;
          *(_BYTE *)(a1 + 2456) = v22;
        }
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 2040) )
  {
    v23 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v1[1], 0x64334855u);
    *(_QWORD *)(a1 + 2040) = v23;
    if ( !v23 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x38u,
        (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids);
LABEL_44:
      v24 = 4065;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        Template_p(v14, &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
      return v24;
    }
    memmove(v23, v1, v1[1]);
  }
  if ( (*v8 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1624), 0x200u);
  v24 = 4077;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1624), 0x20u);
  return v24;
}
