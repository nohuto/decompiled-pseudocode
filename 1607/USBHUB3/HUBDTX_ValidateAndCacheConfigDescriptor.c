/*
 * XREFs of HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0021554
 * Callers:
 *     HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x1C0018BA0 (HUBDSM_ValidatingAlternateConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C0028C54 (HUBDESC_ParseConfigurationDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B76C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheConfigDescriptor(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // r14d
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // r9
  int v7; // edx
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  int v12; // eax
  __int64 v13; // r9
  unsigned __int16 v14; // r9
  bool v15; // zf
  char v16; // al
  PVOID PoolWithTag; // rax
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rax
  _QWORD v22[7]; // [rsp+50h] [rbp-9h] BYREF
  char v23; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 2000);
  v23 = 0;
  v3 = 4077;
  if ( !v1 )
    v1 = a1 + 1716;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
  memset(v22, 0, sizeof(v22));
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 240);
  LOWORD(v22[0]) = *(_WORD *)(a1 + 1974);
  HIDWORD(v22[0]) = *(_DWORD *)(a1 + 156);
  v8 = BYTE5(v22[1]);
  if ( (v5 & 0x20) != 0 )
    v8 = 1;
  v22[5] = a1;
  BYTE5(v22[1]) = v8;
  v9 = HIBYTE(v22[1]);
  if ( (v5 & 0x2000) != 0 )
    v9 = 1;
  HIBYTE(v22[1]) = v9;
  v10 = BYTE4(v22[1]);
  if ( (v5 & 0x4000) != 0 )
    v10 = 1;
  v15 = (*(_DWORD *)(a1 + 1628) & 0x200000) == 0;
  BYTE4(v22[1]) = v10;
  v11 = v22[6];
  if ( !v15 )
    v11 = 1;
  LOBYTE(v22[6]) = v11;
  v12 = *(_DWORD *)(v6 + 220);
  v13 = *(_QWORD *)(v6 + 1432);
  LODWORD(v22[2]) = v12;
  v22[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v22[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(v1, v7, (unsigned int)v22, v13, (__int64)&v23) )
  {
    *(_DWORD *)(a1 + 2416) = 1073807364;
    v14 = 67;
LABEL_47:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v14,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids);
LABEL_48:
    v3 = 4065;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      Template_p(
        LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
        &USBHUB3_ETW_EVENT_INVALID_CONFIGURATION_DESCRIPTOR,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24));
    return v3;
  }
  if ( *(_WORD *)(v1 + 2) != *(_WORD *)(a1 + 1718) )
  {
    *(_DWORD *)(a1 + 2416) = 1073807364;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x44u,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids,
      *(unsigned __int16 *)(v1 + 2),
      *(unsigned __int16 *)(a1 + 1718));
    ((void (__fastcall *)(_QWORD, __int64))v22[3])(v22[5], 61LL);
    goto LABEL_48;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x2000u);
  if ( v23 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1624), 0x40u);
  v15 = *(_BYTE *)(a1 + 1989) == 1;
  if ( *(_BYTE *)(a1 + 1989) > 1u )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1624), 0x80u);
    v15 = *(_BYTE *)(a1 + 1989) == 1;
  }
  if ( v15 && *(_BYTE *)(v1 + 4) > 1u )
  {
    v16 = *(_BYTE *)(a1 + 1976);
    if ( !v16 || v16 == -17 && *(_BYTE *)(a1 + 1977) == 2 && *(_BYTE *)(a1 + 1978) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 4u);
  }
  if ( !*(_QWORD *)(a1 + 2000) )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(v1 + 2), 0x64334855u);
    *(_QWORD *)(a1 + 2000) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v14 = 69;
      goto LABEL_47;
    }
    memmove(PoolWithTag, (const void *)v1, *(unsigned __int16 *)(v1 + 2));
    v1 = *(_QWORD *)(a1 + 2000);
  }
  v18 = HUBDESC_ParseConfigurationDescriptor(v1, v1, -1, -1, -1, -1, -1, 0LL, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  *(_QWORD *)(a1 + 1992) = v18;
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 5) == 9 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 2u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x800u);
    }
    else if ( (*(_DWORD *)(a1 + 1616) & 4) == 0
           && *(_WORD *)(a1 + 1974) > 0x200u
           && (*(_DWORD *)(a1 + 1628) & 0x800) == 0 )
    {
      if ( (v19 = *(_DWORD *)(a1 + 156), v19 == 3) && (*(_DWORD *)(*(_QWORD *)a1 + 720LL) & 1) != 0 || v19 == 2 )
      {
        v20 = HUBDESC_ParseConfigurationDescriptor(
                v1,
                v18,
                *(unsigned __int8 *)(v18 + 2),
                -1,
                8,
                6,
                98,
                0LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
        if ( v20 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x800u);
          *(_QWORD *)(a1 + 1992) = v20;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 1616) & 6) == 6 )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x46u,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids);
  if ( (*(_BYTE *)(v1 + 7) & 0x20) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x100u);
  if ( (*(_DWORD *)(a1 + 1628) & 0x100000) != 0 )
  {
    *(_DWORD *)(a1 + 2416) = 1073807387;
    v14 = 71;
    goto LABEL_47;
  }
  return v3;
}
