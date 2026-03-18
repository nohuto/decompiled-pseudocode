/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C00194A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C0006048 (Template_p.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C002E5C8 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v3; // rbx
  int v4; // edx
  char v5; // cl
  char v6; // al
  char v7; // cl
  bool v8; // zf
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  _QWORD v15[8]; // [rsp+30h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00570E8);
  memset(v15, 0, 0x38uLL);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = BYTE5(v15[1]);
  LOWORD(v15[0]) = *(_WORD *)(v1 + 1974);
  HIDWORD(v15[0]) = *(_DWORD *)(v1 + 156);
  v15[5] = v1;
  if ( (v4 & 0x20) != 0 )
    v5 = 1;
  v6 = BYTE4(v15[1]);
  BYTE5(v15[1]) = v5;
  v7 = HIBYTE(v15[1]);
  if ( (v4 & 0x2000) != 0 )
    v7 = 1;
  v8 = (v4 & 0x4000) == 0;
  v9 = *(unsigned int *)(v1 + 240);
  if ( !v8 )
    v6 = 1;
  HIBYTE(v15[1]) = v7;
  v10 = v15[6];
  BYTE4(v15[1]) = v6;
  if ( (*(_DWORD *)(v1 + 1628) & 0x200000) != 0 )
    v10 = 1;
  LOBYTE(v15[6]) = v10;
  v11 = *(_QWORD *)(v1 + 8);
  LODWORD(v15[2]) = *(_DWORD *)(v11 + 220);
  v15[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v15[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (_DWORD)v9 == *(_DWORD *)(v1 + 1716) )
  {
    if ( (unsigned __int8)HUBDESC_ValidateMSOSExtendedConfigDescriptor(
                            *(_QWORD *)(v1 + 2088),
                            v9,
                            v15,
                            *(_QWORD *)(v11 + 1432)) )
      return v2;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 1432),
      2u,
      5u,
      0x51u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v9,
      v15[0]);
  }
  v2 = 4065;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    Template_p(
      v12,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR,
      (const GUID *)(v1 + 1500),
      *(_QWORD *)(v1 + 24));
  v13 = *(void **)(v1 + 2088);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x64334855u);
    *(_QWORD *)(v1 + 2088) = 0LL;
  }
  return v2;
}
