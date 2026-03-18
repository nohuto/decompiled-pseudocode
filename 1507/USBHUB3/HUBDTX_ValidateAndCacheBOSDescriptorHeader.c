/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C00202D8
 * Callers:
 *     HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x1C00192D0 (HUBDSM_ValidatingAlternateBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C002CB64 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptorHeader(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // edx
  char v6; // cl
  __int64 v7; // rbx
  char v8; // al
  char v9; // cl
  bool v10; // zf
  __int64 v11; // rdx
  char v12; // cl
  __int64 v13; // rbx
  _OWORD v15[4]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v16[3]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  __int64 v19; // [rsp+C0h] [rbp+27h]
  int v20; // [rsp+C8h] [rbp+2Fh]
  _OWORD *v21; // [rsp+D0h] [rbp+37h]
  char v22; // [rsp+100h] [rbp+67h] BYREF

  v1 = a1 + 1716;
  v3 = 4077;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0057090);
  memset(v15, 0, 0x38uLL);
  v5 = *(_DWORD *)(v4 + 4);
  v6 = BYTE13(v15[0]);
  v7 = *(_QWORD *)(a1 + 8);
  LOWORD(v15[0]) = *(_WORD *)(a1 + 1974);
  DWORD1(v15[0]) = *(_DWORD *)(a1 + 156);
  *((_QWORD *)&v15[2] + 1) = a1;
  if ( (v5 & 0x20) != 0 )
    v6 = 1;
  v8 = BYTE12(v15[0]);
  BYTE13(v15[0]) = v6;
  v9 = HIBYTE(v15[0]);
  if ( (v5 & 0x2000) != 0 )
    v9 = 1;
  v10 = (v5 & 0x4000) == 0;
  v11 = *(unsigned int *)(a1 + 240);
  if ( !v10 )
    v8 = 1;
  HIBYTE(v15[0]) = v9;
  v12 = v15[3];
  BYTE12(v15[0]) = v8;
  if ( (*(_DWORD *)(a1 + 1628) & 0x200000) != 0 )
    v12 = 1;
  LODWORD(v15[1]) = *(_DWORD *)(v7 + 220);
  LOBYTE(v15[3]) = v12;
  *((_QWORD *)&v15[1] + 1) = HUBMISC_LogDescriptorValidationErrorForDevice;
  *(_QWORD *)&v15[2] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned int)v11 >= 5 )
  {
    v13 = *(_QWORD *)(v7 + 1432);
    v20 = v11;
    v16[0] = v15[0];
    v18 = v1;
    v16[1] = v15[1];
    v16[2] = v15[2];
    v17 = *(_QWORD *)&v15[3];
    v19 = v1 + v11;
    memset(v15, 0, sizeof(v15));
    v21 = v15;
    if ( (unsigned __int8)HUBDESC_InternalValidateBOSDescriptor(v1, (unsigned int)v16, (unsigned int)&v22, 0, v13) )
      return v3;
    *(_DWORD *)(a1 + 2416) = 1073807378;
  }
  else
  {
    *(_DWORD *)(a1 + 2416) = 1073807378;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v7 + 1432),
      2u,
      5u,
      0x39u,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      v11,
      5);
  }
  v3 = 4065;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    Template_p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
      &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR_HEADER,
      (const GUID *)(a1 + 1500),
      *(_QWORD *)(a1 + 24));
  return v3;
}
