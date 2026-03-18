/*
 * XREFs of HUBPDO_ValidateConfigurationDescriptor @ 0x1C0010A60
 * Callers:
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0010C40 (HUBPDO_ValidateSelectConfigUrb.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_c @ 0x1C0001B58 (WPP_RECORDER_SF_c.c)
 *     HUBPDO_ValidateBuffer @ 0x1C0010A2C (HUBPDO_ValidateBuffer.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002A83C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBPDO_ValidateConfigurationDescriptor(__int64 a1, unsigned __int8 *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // edx
  char v9; // cl
  char v10; // cl
  char v11; // al
  char v12; // cl
  __int64 v13; // rcx
  unsigned __int16 v15; // ax
  _QWORD v17[7]; // [rsp+40h] [rbp-40h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0057090);
  memset(v17, 0, sizeof(v17));
  v8 = *(_DWORD *)(v7 + 4);
  LOWORD(v17[0]) = *(_WORD *)(a1 + 1974);
  HIDWORD(v17[0]) = *(_DWORD *)(a1 + 156);
  v9 = BYTE5(v17[1]);
  if ( (v8 & 0x20) != 0 )
    v9 = 1;
  v17[5] = a1;
  BYTE5(v17[1]) = v9;
  v10 = HIBYTE(v17[1]);
  v11 = BYTE4(v17[1]);
  if ( (v8 & 0x2000) != 0 )
    v10 = 1;
  HIBYTE(v17[1]) = v10;
  v12 = v17[6];
  if ( (v8 & 0x4000) != 0 )
    v11 = 1;
  BYTE4(v17[1]) = v11;
  if ( (*(_DWORD *)(a1 + 1628) & 0x200000) != 0 )
    v12 = 1;
  LOBYTE(v17[6]) = v12;
  v13 = *(_QWORD *)(a1 + 8);
  LODWORD(v17[2]) = *(_DWORD *)(v13 + 220);
  v17[3] = &HUBMISC_LogDescriptorValidationErrorForDevice;
  v17[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( a2[1] != 2 )
  {
    WPP_RECORDER_SF_c(
      *(_QWORD *)(v13 + 1432),
      2u,
      5u,
      0x18u,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      a2[1]);
    return (unsigned int)-1073737984;
  }
  if ( *a2 < 9u )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v13 + 1432),
      2u,
      5u,
      0x19u,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      *a2,
      9);
    return (unsigned int)-1073737984;
  }
  v15 = *((_WORD *)a2 + 1);
  if ( !v15 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v13 + 1432), 2u, 5u, 0x1Au, (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids);
    return (unsigned int)-1073737984;
  }
  HUBPDO_ValidateBuffer((__int64)a2, v15);
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                           (_DWORD)a2,
                           a3,
                           (unsigned int)v17,
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                           0LL) )
    return (unsigned int)-1073737984;
  return v6;
}
