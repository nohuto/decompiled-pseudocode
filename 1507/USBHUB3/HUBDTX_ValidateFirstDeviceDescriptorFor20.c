/*
 * XREFs of HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0020EF0
 * Callers:
 *     HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x1C0017DD0 (HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C002D464 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateFirstDeviceDescriptorFor20(__int64 a1)
{
  unsigned int v1; // r10d
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
  _QWORD v16[7]; // [rsp+30h] [rbp-40h] BYREF

  v1 = *(_DWORD *)(a1 + 240);
  v2 = a1 + 1716;
  v4 = 4077;
  if ( v1 < 8 )
  {
    *(_DWORD *)(a1 + 2416) = v1 != 0 ? 1073807365 : 1073807360;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Bu,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      v1);
    goto LABEL_13;
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
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(v2, v12, (unsigned int)v16, 0, *(_QWORD *)(v14 + 1432)) )
  {
    *(_DWORD *)(a1 + 2416) = 1073807365;
LABEL_13:
    v4 = 4065;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
      Template_p(v5, &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
    return v4;
  }
  *(_DWORD *)(a1 + 148) = *(unsigned __int8 *)(v2 + 7);
  *(_QWORD *)(a1 + 1972) = *(_QWORD *)v2;
  if ( *(_WORD *)(v2 + 8) == 5118 && *(_WORD *)(v2 + 10) == 20992 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x400000u);
  return v4;
}
