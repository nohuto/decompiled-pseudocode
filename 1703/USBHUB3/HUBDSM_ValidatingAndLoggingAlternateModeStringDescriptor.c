/*
 * XREFs of HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001B990
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0024D28 (HUBDTX_LogAlternateMode.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C0030EB8 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r14d
  int v3; // edi
  __int64 v4; // rbx
  int v5; // r9d
  int v6; // ecx
  char v7; // al
  char v8; // al
  bool v9; // cf
  __int64 v10; // rcx
  char v11; // al
  bool v12; // zf
  char v13; // al
  __int64 v14; // rcx
  _QWORD v16[8]; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+90h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_DWORD *)(v1 + 240);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v16, 0, 0x38uLL);
  v6 = *(_DWORD *)(v4 + 4);
  LOWORD(v16[0]) = *(_WORD *)(v1 + 1974);
  HIDWORD(v16[0]) = *(_DWORD *)(v1 + 156);
  v7 = BYTE5(v16[1]);
  if ( (v6 & 0x20) != 0 )
    v7 = 1;
  v16[5] = v1;
  BYTE5(v16[1]) = v7;
  v8 = HIBYTE(v16[1]);
  if ( (v6 & 0x2000) != 0 )
    v8 = 1;
  v9 = (v6 & 0x4000) != 0;
  v10 = *(_QWORD *)(v1 + 8);
  HIBYTE(v16[1]) = v8;
  v11 = BYTE4(v16[1]);
  if ( v9 )
    v11 = 1;
  v12 = (*(_DWORD *)(v1 + 1628) & 0x200000) == 0;
  BYTE4(v16[1]) = v11;
  v13 = v16[6];
  if ( !v12 )
    v13 = 1;
  LOBYTE(v16[6]) = v13;
  LODWORD(v16[2]) = *(_DWORD *)(v10 + 220);
  v16[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v16[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned __int8)HUBDESC_InternalValidateStringDescriptor(
                          (int)v1 + 1716,
                          v3,
                          (unsigned int)&v17,
                          v5,
                          *(_QWORD *)(v10 + 1432),
                          (__int64)v16) )
  {
    HUBDTX_LogAlternateMode(v1, v1 + 1716);
  }
  else
  {
    *(_DWORD *)(v1 + 2416) = 1073807392;
    v2 = 4065;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
      Template_p(
        v14,
        &USBHUB3_ETW_EVENT_INVALID_ALTERNATE_MODE_STRING_DESCRIPTOR,
        (const GUID *)(v1 + 1500),
        *(_QWORD *)(v1 + 24));
  }
  ++*(_BYTE *)(*(_QWORD *)(v1 + 2616) + 8LL);
  return v2;
}
