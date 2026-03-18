/*
 * XREFs of HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C0022414
 * Callers:
 *     HUBDSM_ValidatingLanguageSpecificProductIdString @ 0x1C0018180 (HUBDSM_ValidatingLanguageSpecificProductIdString.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006048 (Template_p.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C002DF68 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035000 (memmove.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheProductIdStringDescriptor(__int64 a1)
{
  int v1; // edi
  unsigned __int8 *v2; // r15
  unsigned int v4; // r14d
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // edx
  char v8; // cl
  char v9; // al
  char v10; // cl
  char v11; // cl
  __int64 v12; // rcx
  __int64 v13; // rcx
  SIZE_T v14; // rbx
  PVOID PoolWithTag; // rax
  _QWORD v17[8]; // [rsp+30h] [rbp-40h] BYREF
  char v18; // [rsp+90h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 240);
  v2 = (unsigned __int8 *)(a1 + 1716);
  v4 = 4077;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00570E8);
  memset(v17, 0, 0x38uLL);
  v7 = *(_DWORD *)(v5 + 4);
  v8 = BYTE5(v17[1]);
  LOWORD(v17[0]) = *(_WORD *)(a1 + 1974);
  HIDWORD(v17[0]) = *(_DWORD *)(a1 + 156);
  v17[5] = a1;
  if ( (v7 & 0x20) != 0 )
    v8 = 1;
  v9 = BYTE4(v17[1]);
  BYTE5(v17[1]) = v8;
  v10 = HIBYTE(v17[1]);
  if ( (v7 & 0x2000) != 0 )
    v10 = 1;
  HIBYTE(v17[1]) = v10;
  v11 = v17[6];
  if ( (v7 & 0x4000) != 0 )
    v9 = 1;
  BYTE4(v17[1]) = v9;
  if ( (*(_DWORD *)(a1 + 1628) & 0x200000) != 0 )
    v11 = 1;
  LOBYTE(v17[6]) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  LODWORD(v17[2]) = *(_DWORD *)(v12 + 220);
  v17[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v17[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned __int8)HUBDESC_InternalValidateStringDescriptor(
                          (_DWORD)v2,
                          v1,
                          (unsigned int)&v18,
                          v6,
                          *(_QWORD *)(v12 + 1432),
                          (__int64)v17) )
  {
    v14 = *v2;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v14, 0x64334855u);
    *(_QWORD *)(a1 + 2016) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v2, v14);
      return v4;
    }
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x52u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids);
  }
  else
  {
    *(_DWORD *)(a1 + 2416) = 1073807383;
  }
  v4 = 4065;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    Template_p(
      v13,
      &USBHUB3_ETW_EVENT_INVALID_PRODUCT_ID_STRING_DESCRIPTOR,
      (const GUID *)(a1 + 1500),
      *(_QWORD *)(a1 + 24));
  return v4;
}
