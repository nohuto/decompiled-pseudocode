/*
 * XREFs of HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0023C0C
 * Callers:
 *     HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x1C001A6F0 (HUBDSM_ValidatingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C00310F0 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheDeviceDescriptor(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // ecx
  char v8; // al
  char v9; // al
  bool v10; // cf
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf
  char v14; // al
  int v15; // edx
  _QWORD v17[7]; // [rsp+40h] [rbp-40h] BYREF
  char v18; // [rsp+A0h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 240);
  v2 = a1 + 1716;
  v18 = 0;
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
        (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
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
        (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids);
    }
LABEL_15:
    v4 = 4065;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      Template_p(v5, &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
    return v4;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v17, 0, sizeof(v17));
  v7 = *(_DWORD *)(v6 + 4);
  LOWORD(v17[0]) = *(_WORD *)(a1 + 1974);
  HIDWORD(v17[0]) = *(_DWORD *)(a1 + 156);
  v8 = BYTE5(v17[1]);
  if ( (v7 & 0x20) != 0 )
    v8 = 1;
  v17[5] = a1;
  BYTE5(v17[1]) = v8;
  v9 = HIBYTE(v17[1]);
  if ( (v7 & 0x2000) != 0 )
    v9 = 1;
  v10 = (v7 & 0x4000) != 0;
  v11 = *(_QWORD *)(a1 + 8);
  HIBYTE(v17[1]) = v9;
  v12 = BYTE4(v17[1]);
  if ( v10 )
    v12 = 1;
  v13 = (*(_DWORD *)(a1 + 1628) & 0x200000) == 0;
  BYTE4(v17[1]) = v12;
  v14 = v17[6];
  if ( !v13 )
    v14 = 1;
  v15 = *(_DWORD *)(a1 + 240);
  LOBYTE(v17[6]) = v14;
  LODWORD(v17[2]) = *(_DWORD *)(v11 + 220);
  v17[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v17[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(
                           v2,
                           v15,
                           (unsigned int)v17,
                           (unsigned int)&v18,
                           *(_QWORD *)(v11 + 1432)) )
  {
    *(_DWORD *)(a1 + 2416) = 1073807365;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Au,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      *(_DWORD *)(a1 + 240));
    goto LABEL_15;
  }
  v13 = v18 == 0;
  *(_OWORD *)(a1 + 1972) = *(_OWORD *)v2;
  *(_WORD *)(a1 + 1988) = *(_WORD *)(v2 + 16);
  if ( !v13 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x20000u);
  return v4;
}
