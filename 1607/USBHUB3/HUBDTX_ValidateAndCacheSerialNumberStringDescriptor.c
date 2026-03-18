/*
 * XREFs of HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0022634
 * Callers:
 *     HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x1C00196A0 (HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C002E1C4 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // r9d
  char v4; // al
  int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  char v8; // al
  bool v9; // cf
  char v10; // al
  __int64 v11; // rcx
  bool v12; // zf
  char v13; // al
  char v14; // r13
  unsigned int v15; // r15d
  unsigned __int16 *v16; // rsi
  unsigned __int16 v17; // ax
  unsigned int v18; // ebx
  void *v20; // rcx
  PVOID PoolWithTag; // rax
  _DWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  _QWORD v26[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+50h]
  unsigned int v29; // [rsp+D0h] [rbp+58h]
  char v30; // [rsp+D8h] [rbp+60h] BYREF

  v1 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
  memset(v26, 0, 0x38uLL);
  v4 = BYTE5(v26[1]);
  LOWORD(v26[0]) = *(_WORD *)(v1 + 1974);
  HIDWORD(v26[0]) = *(_DWORD *)(v1 + 156);
  v5 = *(_DWORD *)(v2 + 4);
  v6 = *(_DWORD *)(v1 + 240);
  v7 = v6;
  if ( (v5 & 0x20) != 0 )
    v4 = 1;
  v26[5] = v1;
  BYTE5(v26[1]) = v4;
  v8 = HIBYTE(v26[1]);
  if ( (v5 & 0x2000) != 0 )
    v8 = 1;
  v29 = v6;
  HIBYTE(v26[1]) = v8;
  v9 = (v5 & 0x4000) != 0;
  v10 = BYTE4(v26[1]);
  v11 = *(_QWORD *)(v1 + 8);
  if ( v9 )
    v10 = 1;
  v12 = (*(_DWORD *)(v1 + 1628) & 0x200000) == 0;
  BYTE4(v26[1]) = v10;
  v13 = v26[6];
  if ( !v12 )
    v13 = 1;
  LOBYTE(v26[6]) = v13;
  LODWORD(v26[2]) = *(_DWORD *)(v11 + 220);
  v26[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v26[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v25 = *(_QWORD *)(v11 + 1432);
  v14 = HUBDESC_InternalValidateStringDescriptor((int)v1 + 1716, v6, (unsigned int)&v30, v3, v25, (__int64)v26);
  if ( !v14 )
    goto LABEL_21;
  v15 = 0;
  v28 = *(unsigned __int8 *)(v1 + 1716) - 2;
  v6 = v28;
  if ( v28 >> 1 )
  {
    v16 = (unsigned __int16 *)(v1 + 1718);
    do
    {
      v17 = *v16;
      if ( !*v16 )
        break;
      if ( v17 < 0x20u || v17 > 0x7Fu || v17 == 44 )
      {
        v14 = 0;
        LODWORD(v24) = v17;
        WPP_RECORDER_SF_d(v25, 2u, 5u, 0x113u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v24);
        ((void (__fastcall *)(_QWORD, __int64))v26[3])(v26[5], 132LL);
      }
      ++v15;
      ++v16;
    }
    while ( v15 < v28 >> 1 );
    v1 = a1;
    v6 = v28;
    v7 = v29;
  }
  if ( v14 )
    v6 += 2;
  else
LABEL_21:
    WPP_RECORDER_SF_(v25, 2u, 5u, 0x114u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
  if ( v14 )
  {
    v20 = *(void **)(v1 + 2136);
    if ( v20 )
      ExFreePoolWithTag(v20, 0x64334855u);
    if ( (*(_DWORD *)(v1 + 1620) & 0x800) != 0 )
      v7 += 12;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x64334855u);
    *(_QWORD *)(v1 + 2136) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_24;
    *(_DWORD *)(v1 + 2132) = v7;
    memset(PoolWithTag, 0, v7);
    v22 = *(_DWORD **)(v1 + 2136);
    if ( (*(_DWORD *)(v1 + 1616) & 2) != 0 )
    {
      if ( *(_WORD *)(v1 + 1974) < 0x300u )
      {
        *(_QWORD *)v22 = *(_QWORD *)L"MSFT20";
        v23 = *(_DWORD *)L"20";
LABEL_37:
        v22[2] = v23;
        v22 += 3;
        goto LABEL_38;
      }
    }
    else if ( (*(_DWORD *)(v1 + 1620) & 0x800) == 0 )
    {
LABEL_38:
      memmove(v22, (const void *)(v1 + 1718), v6 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1616), 0x40u);
      return 4077;
    }
    *(_QWORD *)v22 = *(_QWORD *)L"MSFT30";
    v23 = *(_DWORD *)L"30";
    goto LABEL_37;
  }
  *(_DWORD *)(v1 + 2416) = 1073807384;
LABEL_24:
  v18 = 4065;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    Template_p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(v1 + 1500),
      *(_QWORD *)(v1 + 24));
  return v18;
}
