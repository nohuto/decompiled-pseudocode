/*
 * XREFs of HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0020CAC
 * Callers:
 *     HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x1C0018130 (HUBDSM_ValidatingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C002D464 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheDeviceDescriptor(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // edx
  char v8; // cl
  char v9; // al
  char v10; // cl
  bool v11; // zf
  int v12; // edx
  char v13; // cl
  __int64 v14; // rcx
  _QWORD v16[7]; // [rsp+40h] [rbp-40h] BYREF
  char v17; // [rsp+A0h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 240);
  v2 = a1 + 1716;
  v17 = 0;
  v4 = 4077;
  if ( v1 != 18 )
  {
    if ( v1 )
    {
      *(_DWORD *)(a1 + 2416) = 1073807365;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x48u,
        (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
        v1,
        18);
    }
    else
    {
      *(_DWORD *)(a1 + 2416) = 1073807360;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x49u,
        (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids);
    }
LABEL_15:
    v4 = 4065;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
      Template_p(v5, &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
    return v4;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0057090);
  memset(v16, 0, sizeof(v16));
  v7 = *(_DWORD *)(v6 + 4);
  v8 = BYTE5(v16[1]);
  LOWORD(v16[0]) = *(_WORD *)(a1 + 1974);
  HIDWORD(v16[0]) = *(_DWORD *)(a1 + 156);
  v16[5] = a1;
  if ( (v7 & 0x20) != 0 )
    v8 = 1;
  v9 = BYTE4(v16[1]);
  BYTE5(v16[1]) = v8;
  v10 = HIBYTE(v16[1]);
  if ( (v7 & 0x2000) != 0 )
    v10 = 1;
  v11 = (v7 & 0x4000) == 0;
  v12 = *(_DWORD *)(a1 + 240);
  if ( !v11 )
    v9 = 1;
  HIBYTE(v16[1]) = v10;
  v13 = v16[6];
  BYTE4(v16[1]) = v9;
  if ( (*(_DWORD *)(a1 + 1628) & 0x200000) != 0 )
    v13 = 1;
  LOBYTE(v16[6]) = v13;
  v14 = *(_QWORD *)(a1 + 8);
  LODWORD(v16[2]) = *(_DWORD *)(v14 + 220);
  v16[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v16[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(
                           v2,
                           v12,
                           (unsigned int)v16,
                           (unsigned int)&v17,
                           *(_QWORD *)(v14 + 1432)) )
  {
    *(_DWORD *)(a1 + 2416) = 1073807365;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Au,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      *(_DWORD *)(a1 + 240));
    goto LABEL_15;
  }
  v11 = v17 == 0;
  *(_OWORD *)(a1 + 1972) = *(_OWORD *)v2;
  *(_WORD *)(a1 + 1988) = *(_WORD *)(v2 + 16);
  if ( !v11 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x20000u);
  return v4;
}
