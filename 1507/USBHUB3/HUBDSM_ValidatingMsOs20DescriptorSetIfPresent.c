/*
 * XREFs of HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C00195E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C002EF0C (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBDSM_ValidatingMsOs20DescriptorSetIfPresent(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // dl
  char v4; // cl
  char v5; // cl
  bool v6; // zf
  __int64 v7; // rax
  char v8; // cl
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // si
  __int64 result; // rax
  _QWORD v14[8]; // [rsp+20h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0057090);
  memset(v14, 0, 0x38uLL);
  v3 = BYTE5(v14[1]);
  LOWORD(v14[0]) = *(_WORD *)(v1 + 1974);
  HIDWORD(v14[0]) = *(_DWORD *)(v1 + 156);
  v4 = HIBYTE(v14[1]);
  if ( (*(_BYTE *)(v2 + 4) & 0x20) != 0 )
    v3 = 1;
  BYTE5(v14[1]) = v3;
  if ( (*(_DWORD *)(v2 + 4) & 0x2000) != 0 )
    v4 = 1;
  HIBYTE(v14[1]) = v4;
  v5 = BYTE4(v14[1]);
  if ( (*(_DWORD *)(v2 + 4) & 0x4000) != 0 )
    v5 = 1;
  v6 = (*(_DWORD *)(v1 + 1628) & 0x200000) == 0;
  v7 = *(_QWORD *)(v1 + 8);
  BYTE4(v14[1]) = v5;
  v8 = v14[6];
  if ( !v6 )
    v8 = 1;
  LOBYTE(v14[6]) = v8;
  v9 = *(_DWORD *)(v7 + 220);
  v14[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v14[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  *(_DWORD *)(v1 + 2460) = *(_DWORD *)(v1 + 240);
  v10 = *(_QWORD *)(v1 + 8);
  LODWORD(v14[2]) = v9;
  v14[5] = v1;
  *(_QWORD *)(v1 + 2536) = *(_QWORD *)(v10 + 1432);
  v12 = HUBDESC_ValidateMsOs20DescriptorSet(v14, v1 + 2448);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v1 + 2448) & 0x200) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 1616), 4u);
  }
  else
  {
    *(_DWORD *)(v1 + 2416) = 1073807389;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
      Template_p(
        v11,
        &USBHUB3_ETW_EVENT_INVALID_MSOS20_DESCRIPTOR_SET,
        (const GUID *)(v1 + 1500),
        *(_QWORD *)(v1 + 24),
        v14[0]);
  }
  result = 4065LL;
  if ( v12 == 1 )
    return 4077LL;
  return result;
}
