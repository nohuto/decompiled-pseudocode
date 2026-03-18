/*
 * XREFs of HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C00225DC
 * Callers:
 *     HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x1C0019650 (HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006048 (Template_p.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C002DF68 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035000 (memmove.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // r9d
  int v4; // edx
  char v5; // al
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  char v8; // cl
  char v9; // al
  char v10; // cl
  __int64 v11; // rcx
  char v12; // r13
  unsigned int v13; // r15d
  unsigned __int16 *v14; // rsi
  unsigned __int16 v15; // ax
  unsigned int v16; // ebx
  void *v18; // rcx
  PVOID PoolWithTag; // rax
  _DWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  _QWORD v24[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+50h]
  unsigned int v27; // [rsp+D0h] [rbp+58h]
  char v28; // [rsp+D8h] [rbp+60h] BYREF

  v1 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00570E8);
  memset(v24, 0, 0x38uLL);
  v4 = *(_DWORD *)(v2 + 4);
  v5 = BYTE5(v24[1]);
  v6 = *(_DWORD *)(v1 + 240);
  v7 = v6;
  LOWORD(v24[0]) = *(_WORD *)(v1 + 1974);
  HIDWORD(v24[0]) = *(_DWORD *)(v1 + 156);
  v24[5] = v1;
  v8 = HIBYTE(v24[1]);
  if ( (v4 & 0x20) != 0 )
    v5 = 1;
  v27 = v6;
  BYTE5(v24[1]) = v5;
  v9 = BYTE4(v24[1]);
  if ( (v4 & 0x2000) != 0 )
    v8 = 1;
  HIBYTE(v24[1]) = v8;
  v10 = v24[6];
  if ( (v4 & 0x4000) != 0 )
    v9 = 1;
  BYTE4(v24[1]) = v9;
  if ( (*(_DWORD *)(v1 + 1628) & 0x200000) != 0 )
    v10 = 1;
  LOBYTE(v24[6]) = v10;
  v11 = *(_QWORD *)(v1 + 8);
  LODWORD(v24[2]) = *(_DWORD *)(v11 + 220);
  v24[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v24[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v23 = *(_QWORD *)(v11 + 1432);
  v12 = HUBDESC_InternalValidateStringDescriptor((int)v1 + 1716, v6, (unsigned int)&v28, v3, v23, (__int64)v24);
  if ( !v12 )
    goto LABEL_21;
  v13 = 0;
  v26 = *(unsigned __int8 *)(v1 + 1716) - 2;
  v6 = v26;
  if ( v26 >> 1 )
  {
    v14 = (unsigned __int16 *)(v1 + 1718);
    do
    {
      v15 = *v14;
      if ( !*v14 )
        break;
      if ( v15 < 0x20u || v15 > 0x7Fu || v15 == 44 )
      {
        v12 = 0;
        LODWORD(v22) = v15;
        WPP_RECORDER_SF_d(v23, 2u, 5u, 0x111u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v22);
        ((void (__fastcall *)(_QWORD, __int64))v24[3])(v24[5], 132LL);
      }
      ++v13;
      ++v14;
    }
    while ( v13 < v26 >> 1 );
    v1 = a1;
    v6 = v26;
    v7 = v27;
  }
  if ( v12 )
    v6 += 2;
  else
LABEL_21:
    WPP_RECORDER_SF_(v23, 2u, 5u, 0x112u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
  if ( v12 )
  {
    v18 = *(void **)(v1 + 2136);
    if ( v18 )
      ExFreePoolWithTag(v18, 0x64334855u);
    if ( (*(_DWORD *)(v1 + 1620) & 0x800) != 0 )
      v7 += 12;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x64334855u);
    *(_QWORD *)(v1 + 2136) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_24;
    *(_DWORD *)(v1 + 2132) = v7;
    memset(PoolWithTag, 0, v7);
    v20 = *(_DWORD **)(v1 + 2136);
    if ( (*(_DWORD *)(v1 + 1616) & 2) != 0 )
    {
      if ( *(_WORD *)(v1 + 1974) < 0x300u )
      {
        *(_QWORD *)v20 = *(_QWORD *)L"MSFT20";
        v21 = *(_DWORD *)L"20";
LABEL_37:
        v20[2] = v21;
        v20 += 3;
        goto LABEL_38;
      }
    }
    else if ( (*(_DWORD *)(v1 + 1620) & 0x800) == 0 )
    {
LABEL_38:
      memmove(v20, (const void *)(v1 + 1718), v6 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1616), 0x40u);
      return 4077;
    }
    *(_QWORD *)v20 = *(_QWORD *)L"MSFT30";
    v21 = *(_DWORD *)L"30";
    goto LABEL_37;
  }
  *(_DWORD *)(v1 + 2416) = 1073807384;
LABEL_24:
  v16 = 4065;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    Template_p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(v1 + 1500),
      *(_QWORD *)(v1 + 24));
  return v16;
}
