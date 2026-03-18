/*
 * XREFs of HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0021BAC
 * Callers:
 *     HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x1C0018850 (HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C002E3F4 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateFirstDeviceDescriptorFor20(__int64 a1)
{
  unsigned int v1; // r10d
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
  _QWORD v17[7]; // [rsp+30h] [rbp-40h] BYREF

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
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids,
      v1);
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
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
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(v2, v15, (unsigned int)v17, 0, *(_QWORD *)(v11 + 1432)) )
  {
    *(_DWORD *)(a1 + 2416) = 1073807365;
LABEL_13:
    v4 = 4065;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      Template_p(v5, &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
    return v4;
  }
  *(_DWORD *)(a1 + 148) = *(unsigned __int8 *)(v2 + 7);
  *(_QWORD *)(a1 + 1972) = *(_QWORD *)v2;
  if ( *(_WORD *)(v2 + 8) == 5118 && *(_WORD *)(v2 + 10) == 20992 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x400000u);
  return v4;
}
