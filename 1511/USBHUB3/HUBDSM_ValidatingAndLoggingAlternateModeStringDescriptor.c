/*
 * XREFs of HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C0019CA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0006048 (Template_p.c)
 *     HUBDTX_LogAlternateMode @ 0x1C00229F4 (HUBDTX_LogAlternateMode.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C002DF68 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r14d
  int v3; // edi
  __int64 v4; // rbx
  int v5; // r9d
  int v6; // edx
  char v7; // cl
  char v8; // al
  char v9; // cl
  char v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[8]; // [rsp+30h] [rbp-40h] BYREF
  char v15; // [rsp+90h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_DWORD *)(v1 + 240);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00570E8);
  memset(v14, 0, 0x38uLL);
  v6 = *(_DWORD *)(v4 + 4);
  v7 = BYTE5(v14[1]);
  LOWORD(v14[0]) = *(_WORD *)(v1 + 1974);
  HIDWORD(v14[0]) = *(_DWORD *)(v1 + 156);
  v14[5] = v1;
  if ( (v6 & 0x20) != 0 )
    v7 = 1;
  v8 = BYTE4(v14[1]);
  BYTE5(v14[1]) = v7;
  v9 = HIBYTE(v14[1]);
  if ( (v6 & 0x2000) != 0 )
    v9 = 1;
  HIBYTE(v14[1]) = v9;
  v10 = v14[6];
  if ( (v6 & 0x4000) != 0 )
    v8 = 1;
  BYTE4(v14[1]) = v8;
  if ( (*(_DWORD *)(v1 + 1628) & 0x200000) != 0 )
    v10 = 1;
  LOBYTE(v14[6]) = v10;
  v11 = *(_QWORD *)(v1 + 8);
  LODWORD(v14[2]) = *(_DWORD *)(v11 + 220);
  v14[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v14[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned __int8)HUBDESC_InternalValidateStringDescriptor(
                          (int)v1 + 1716,
                          v3,
                          (unsigned int)&v15,
                          v5,
                          *(_QWORD *)(v11 + 1432),
                          (__int64)v14) )
  {
    HUBDTX_LogAlternateMode(v1, v1 + 1716);
  }
  else
  {
    *(_DWORD *)(v1 + 2416) = 1073807392;
    v2 = 4065;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
      Template_p(
        v12,
        &USBHUB3_ETW_EVENT_INVALID_ALTERNATE_MODE_STRING_DESCRIPTOR,
        (const GUID *)(v1 + 1500),
        *(_QWORD *)(v1 + 24));
  }
  ++*(_BYTE *)(*(_QWORD *)(v1 + 2616) + 8LL);
  return v2;
}
