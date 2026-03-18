/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0020BD4
 * Callers:
 *     HUBDSM_ValidatingBOSDescriptor @ 0x1C0019CD0 (HUBDSM_ValidatingBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBDTX_CacheBillboardInfo @ 0x1C0022BFC (HUBDTX_CacheBillboardInfo.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C002DDF4 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0032D8C (UsbDualRoleFeaturesQueryLocalMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 *     memset @ 0x1C00355C0 (memset.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x1C00716F0 (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptor(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // r9
  int v6; // ecx
  volatile signed __int32 *v7; // rbx
  char v8; // r12
  char v9; // al
  char v10; // al
  bool v11; // zf
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r14d
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // ecx
  char v21; // dl
  PVOID v22; // rax
  unsigned int v23; // ebx
  _QWORD v25[8]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v26[16]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+7h]
  __int64 v28; // [rsp+B0h] [rbp+Fh]
  __int64 v29; // [rsp+B8h] [rbp+17h]
  _QWORD *v30; // [rsp+C8h] [rbp+27h]
  __int64 v31; // [rsp+D0h] [rbp+2Fh]
  char v32; // [rsp+108h] [rbp+67h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 2040);
  v32 = 0;
  if ( !v1 )
    v1 = (unsigned __int16 *)(a1 + 1716);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
  memset(v25, 0, 0x38uLL);
  v4 = BYTE5(v25[1]);
  v5 = *(_QWORD *)(a1 + 8);
  HIDWORD(v25[0]) = *(_DWORD *)(a1 + 156);
  v6 = *(_DWORD *)(v3 + 4);
  v7 = (volatile signed __int32 *)(a1 + 1616);
  v8 = 0;
  if ( (v6 & 0x20) != 0 )
    v4 = 1;
  v25[5] = a1;
  BYTE5(v25[1]) = v4;
  v9 = HIBYTE(v25[1]);
  if ( (v6 & 0x2000) != 0 )
    v9 = 1;
  HIBYTE(v25[1]) = v9;
  v10 = BYTE4(v25[1]);
  if ( (v6 & 0x4000) != 0 )
    v10 = 1;
  v11 = (*(_DWORD *)(a1 + 1628) & 0x200000) == 0;
  BYTE4(v25[1]) = v10;
  v12 = v25[6];
  if ( !v11 )
    v12 = 1;
  v11 = (*(_BYTE *)(a1 + 2448) & 1) == 0;
  LOBYTE(v25[6]) = v12;
  if ( !v11 )
    v8 = 1;
  LODWORD(v25[2]) = *(_DWORD *)(v5 + 220);
  v25[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v25[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  LOWORD(v25[0]) = *(_WORD *)(a1 + 1974);
  v13 = *(_QWORD *)(v5 + 1432);
  LODWORD(v25[1]) = *(_DWORD *)(*(_QWORD *)a1 + 84LL);
  if ( !(unsigned __int8)((__int64 (__fastcall *)(unsigned __int16 *, _QWORD, _QWORD *, _BYTE *, __int64, __int64, char *, __int64, __int64, __int64))HUBDESC_ValidateBOSDescriptorSet)(
                           v1,
                           *(unsigned int *)(a1 + 240),
                           v25,
                           v26,
                           a1 + 2176,
                           a1 + 2178,
                           &v32,
                           a1 + 2424,
                           a1 + 1616,
                           v13) )
  {
    if ( (*(_DWORD *)(a1 + 1628) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 2416) = 1073807378;
      goto LABEL_39;
    }
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x36u,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids);
  }
  if ( v32 )
    _InterlockedOr(v7, 0x100000u);
  if ( v27 && !*(_QWORD *)(a1 + 2544) )
  {
    v15 = (*(_DWORD *)(v27 + 4) & 0x1F) + 1;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 4LL * v15, 0x64334855u);
    *(_QWORD *)(a1 + 2544) = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x37u,
        (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids);
      goto LABEL_39;
    }
    memmove(PoolWithTag, (const void *)(v27 + 12), 4LL * v15);
    *(_DWORD *)(a1 + 2552) = v15;
  }
  if ( v28 )
  {
    _InterlockedOr(v7, 0x10u);
    if ( (*v7 & 8) == 0 )
      *(_OWORD *)(a1 + 2048) = *(_OWORD *)(v28 + 4);
  }
  if ( v29 )
    HUBDTX_CacheBillboardInfo(a1);
  if ( v31 )
  {
    _InterlockedOr(v7, 0x40000u);
    *(_BYTE *)(a1 + 2632) = *(_BYTE *)(v31 + 21);
    UsbDualRoleFeaturesQueryLocalMachine(a1 + 2624);
    v17 = v31;
    v18 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 2628) = *(_DWORD *)(v31 + 22);
    v19 = *(unsigned int *)(v17 + 22);
    LOBYTE(v17) = 1;
    HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(v18 + 1416), v17, v19);
  }
  if ( !v8 )
  {
    if ( v30 )
    {
      v20 = *(_DWORD *)(a1 + 2448) | 1;
      *(_QWORD *)(a1 + 2464) = *v30;
      v21 = *(_BYTE *)(a1 + 2471);
      *(_DWORD *)(a1 + 2448) = v20;
      if ( v21 )
      {
        if ( (*(_DWORD *)(a1 + 2452) & 4) == 0 )
        {
          *(_BYTE *)(a1 + 2036) = *(_BYTE *)(a1 + 2470);
          *(_DWORD *)(a1 + 2448) = v20 | 4;
          *(_BYTE *)(a1 + 2456) = v21;
        }
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 2040) )
  {
    v22 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v1[1], 0x64334855u);
    *(_QWORD *)(a1 + 2040) = v22;
    if ( !v22 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x38u,
        (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids);
LABEL_39:
      v23 = 4065;
      if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
        Template_p(v14, &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
      return v23;
    }
    memmove(v22, v1, v1[1]);
  }
  if ( (*v7 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1624), 0x200u);
  v23 = 4077;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1624), 0x20u);
  return v23;
}
