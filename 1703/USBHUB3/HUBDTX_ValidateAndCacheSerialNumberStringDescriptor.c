/*
 * XREFs of HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0024900
 * Callers:
 *     HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x1C001B290 (HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C0030EB8 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int8 *v4; // rsi
  char v5; // al
  int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  char v9; // al
  bool v10; // cf
  char v11; // al
  __int64 v12; // rcx
  bool v13; // zf
  char v14; // al
  char v15; // al
  void *v16; // rcx
  char v17; // r13
  unsigned int v18; // eax
  unsigned int v19; // r12d
  unsigned int v20; // r14d
  __int64 v21; // rdi
  unsigned __int16 *v22; // rsi
  unsigned __int16 v23; // ax
  unsigned int v24; // ebx
  void *v26; // rcx
  PVOID PoolWithTag; // rax
  _DWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // [rsp+28h] [rbp-41h]
  char v31; // [rsp+30h] [rbp-39h] BYREF
  __int64 v32; // [rsp+38h] [rbp-31h]
  _QWORD v33[16]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v35; // [rsp+D8h] [rbp+6Fh]
  unsigned int v36; // [rsp+E0h] [rbp+77h]
  unsigned int v37; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v33, 0, 0x38uLL);
  v4 = (unsigned __int8 *)(v1 + 1716);
  v5 = BYTE5(v33[1]);
  LOWORD(v33[0]) = *(_WORD *)(v1 + 1974);
  HIDWORD(v33[0]) = *(_DWORD *)(v1 + 156);
  v6 = *(_DWORD *)(v2 + 4);
  v7 = *(_DWORD *)(v1 + 240);
  v8 = v7;
  if ( (v6 & 0x20) != 0 )
    v5 = 1;
  v33[5] = v1;
  BYTE5(v33[1]) = v5;
  v9 = HIBYTE(v33[1]);
  if ( (v6 & 0x2000) != 0 )
    v9 = 1;
  v36 = v7;
  HIBYTE(v33[1]) = v9;
  v10 = (v6 & 0x4000) != 0;
  v11 = BYTE4(v33[1]);
  v12 = *(_QWORD *)(v1 + 8);
  if ( v10 )
    v11 = 1;
  v13 = (*(_DWORD *)(v1 + 1628) & 0x200000) == 0;
  BYTE4(v33[1]) = v11;
  v14 = v33[6];
  if ( !v13 )
    v14 = 1;
  LOBYTE(v33[6]) = v14;
  LODWORD(v33[2]) = *(_DWORD *)(v12 + 220);
  v33[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v33[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v32 = *(_QWORD *)(v12 + 1432);
  v15 = HUBDESC_InternalValidateStringDescriptor((int)v1 + 1716, v7, (unsigned int)&v31, v3, v32, (__int64)v33);
  v16 = &WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids;
  v17 = v15;
  if ( !v15 )
    goto LABEL_21;
  v18 = *v4;
  v19 = 0;
  v37 = v18;
  v7 = v18 - 2;
  v35 = v18 - 2;
  v20 = (v18 - 2) >> 1;
  if ( v20 )
  {
    v21 = v32;
    v22 = (unsigned __int16 *)(v4 + 2);
    do
    {
      v23 = *v22;
      if ( !*v22 )
        break;
      if ( v23 < 0x20u || v23 > 0x7Fu || v23 == 44 )
      {
        v17 = 0;
        LODWORD(v30) = v23;
        WPP_RECORDER_SF_d(v21, 2u, 5u, 0x116u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v30);
        ((void (__fastcall *)(_QWORD, __int64))v33[3])(v33[5], 132LL);
      }
      ++v19;
      ++v22;
    }
    while ( v19 < v20 );
    v1 = a1;
    v16 = &WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids;
    v7 = v35;
    v8 = v36;
    v18 = v37;
  }
  if ( v17 )
    v7 = v18;
  else
LABEL_21:
    WPP_RECORDER_SF_(v32, 2u, 5u, 0x117u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
  if ( v17 )
  {
    v26 = *(void **)(v1 + 2136);
    if ( v26 )
      ExFreePoolWithTag(v26, 0x64334855u);
    if ( (*(_DWORD *)(v1 + 1620) & 0x800) != 0 )
      v8 += 12;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v8, 0x64334855u);
    *(_QWORD *)(v1 + 2136) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_24;
    *(_DWORD *)(v1 + 2132) = v8;
    memset(PoolWithTag, 0, v8);
    v28 = *(_DWORD **)(v1 + 2136);
    if ( (*(_DWORD *)(v1 + 1616) & 2) != 0 )
    {
      if ( *(_WORD *)(v1 + 1974) < 0x300u )
      {
        *(_QWORD *)v28 = *(_QWORD *)L"MSFT20";
        v29 = *(_DWORD *)L"20";
LABEL_37:
        v28[2] = v29;
        v28 += 3;
        goto LABEL_38;
      }
    }
    else if ( (*(_DWORD *)(v1 + 1620) & 0x800) == 0 )
    {
LABEL_38:
      memmove(v28, (const void *)(v1 + 1718), v7 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1616), 0x40u);
      return 4077;
    }
    *(_QWORD *)v28 = *(_QWORD *)L"MSFT30";
    v29 = *(_DWORD *)L"30";
    goto LABEL_37;
  }
  *(_DWORD *)(v1 + 2416) = 1073807384;
LABEL_24:
  v24 = 4065;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    Template_p(
      (__int64)v16,
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(v1 + 1500),
      *(_QWORD *)(v1 + 24));
  return v24;
}
