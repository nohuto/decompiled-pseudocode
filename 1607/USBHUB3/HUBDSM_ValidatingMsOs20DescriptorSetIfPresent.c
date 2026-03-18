/*
 * XREFs of HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C0019FE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C002FE9C (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBDSM_ValidatingMsOs20DescriptorSetIfPresent(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // al
  char v4; // cl
  char v5; // al
  bool v6; // zf
  char v7; // al
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // si
  __int64 result; // rax
  _QWORD v13[8]; // [rsp+20h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
  memset(v13, 0, 0x38uLL);
  v3 = HIBYTE(v13[1]);
  LOWORD(v13[0]) = *(_WORD *)(v1 + 1974);
  HIDWORD(v13[0]) = *(_DWORD *)(v1 + 156);
  v4 = BYTE5(v13[1]);
  if ( (*(_BYTE *)(v2 + 4) & 0x20) != 0 )
    v4 = 1;
  BYTE5(v13[1]) = v4;
  if ( (*(_DWORD *)(v2 + 4) & 0x2000) != 0 )
    v3 = 1;
  HIBYTE(v13[1]) = v3;
  v5 = BYTE4(v13[1]);
  if ( (*(_DWORD *)(v2 + 4) & 0x4000) != 0 )
    v5 = 1;
  v6 = (*(_DWORD *)(v1 + 1628) & 0x200000) == 0;
  BYTE4(v13[1]) = v5;
  v7 = v13[6];
  if ( !v6 )
    v7 = 1;
  LOBYTE(v13[6]) = v7;
  v8 = *(_DWORD *)(*(_QWORD *)(v1 + 8) + 220LL);
  v13[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v13[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  *(_DWORD *)(v1 + 2460) = *(_DWORD *)(v1 + 240);
  v9 = *(_QWORD *)(v1 + 8);
  LODWORD(v13[2]) = v8;
  v13[5] = v1;
  *(_QWORD *)(v1 + 2536) = *(_QWORD *)(v9 + 1432);
  v11 = HUBDESC_ValidateMsOs20DescriptorSet(v13, v1 + 2448);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v1 + 2448) & 0x200) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 1616), 4u);
  }
  else
  {
    *(_DWORD *)(v1 + 2416) = 1073807389;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      Template_p(
        v10,
        &USBHUB3_ETW_EVENT_INVALID_MSOS20_DESCRIPTOR_SET,
        (const GUID *)(v1 + 1500),
        *(_QWORD *)(v1 + 24),
        v13[0]);
  }
  result = 4065LL;
  if ( v11 == 1 )
    return 4077LL;
  return result;
}
