/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C00231AC
 * Callers:
 *     HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x1C001B970 (HUBDSM_ValidatingAlternateBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C00307B8 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptorHeader(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // rbx
  char v7; // al
  char v8; // al
  char v9; // al
  bool v10; // zf
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  _OWORD v16[4]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v17[3]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  __int64 v20; // [rsp+C0h] [rbp+27h]
  int v21; // [rsp+C8h] [rbp+2Fh]
  _OWORD *v22; // [rsp+D0h] [rbp+37h]
  char v23; // [rsp+100h] [rbp+67h] BYREF

  v1 = a1 + 1716;
  v3 = 4077;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v16, 0, 0x38uLL);
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *(_QWORD *)(a1 + 8);
  LOWORD(v16[0]) = *(_WORD *)(a1 + 1974);
  DWORD1(v16[0]) = *(_DWORD *)(a1 + 156);
  v7 = BYTE13(v16[0]);
  if ( (v5 & 0x20) != 0 )
    v7 = 1;
  *((_QWORD *)&v16[2] + 1) = a1;
  BYTE13(v16[0]) = v7;
  v8 = HIBYTE(v16[0]);
  if ( (v5 & 0x2000) != 0 )
    v8 = 1;
  HIBYTE(v16[0]) = v8;
  v9 = BYTE12(v16[0]);
  if ( (v5 & 0x4000) != 0 )
    v9 = 1;
  v10 = (*(_DWORD *)(a1 + 1628) & 0x200000) == 0;
  BYTE12(v16[0]) = v9;
  v11 = v16[3];
  if ( !v10 )
    v11 = 1;
  v12 = *(unsigned int *)(a1 + 240);
  LOBYTE(v16[3]) = v11;
  LODWORD(v16[1]) = *(_DWORD *)(v6 + 220);
  *((_QWORD *)&v16[1] + 1) = HUBMISC_LogDescriptorValidationErrorForDevice;
  *(_QWORD *)&v16[2] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned int)v12 >= 5 )
  {
    v14 = *(_QWORD *)(v6 + 1432);
    v21 = v12;
    v17[0] = v16[0];
    v19 = v1;
    v17[1] = v16[1];
    v17[2] = v16[2];
    v18 = *(_QWORD *)&v16[3];
    v20 = v1 + v12;
    memset(v16, 0, sizeof(v16));
    v22 = v16;
    if ( (unsigned __int8)HUBDESC_InternalValidateBOSDescriptor(v1, (unsigned int)v17, (unsigned int)&v23, 0, v14) )
      return v3;
    *(_DWORD *)(a1 + 2416) = 1073807378;
  }
  else
  {
    *(_DWORD *)(a1 + 2416) = 1073807378;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v6 + 1432),
      2u,
      5u,
      0x39u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v12,
      5);
  }
  v3 = 4065;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    Template_p(v13, &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR_HEADER, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
  return v3;
}
