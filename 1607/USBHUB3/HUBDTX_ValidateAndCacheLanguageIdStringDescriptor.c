/*
 * XREFs of HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0021D8C
 * Callers:
 *     HUBDSM_ValidatingLanguageIdStringDescriptor @ 0x1C0018D10 (HUBDSM_ValidatingLanguageIdStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C002E1C4 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheLanguageIdStringDescriptor(__int64 a1)
{
  int v1; // edi
  unsigned __int8 *v2; // r15
  unsigned int v4; // r14d
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // ecx
  char v8; // al
  char v9; // al
  bool v10; // cf
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf
  char v14; // al
  __int64 v15; // rcx
  SIZE_T v16; // rbx
  PVOID PoolWithTag; // rax
  _QWORD v19[8]; // [rsp+30h] [rbp-40h] BYREF
  char v20; // [rsp+90h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 240);
  v2 = (unsigned __int8 *)(a1 + 1716);
  v4 = 4077;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
  memset(v19, 0, 0x38uLL);
  v7 = *(_DWORD *)(v5 + 4);
  LOWORD(v19[0]) = *(_WORD *)(a1 + 1974);
  HIDWORD(v19[0]) = *(_DWORD *)(a1 + 156);
  v8 = BYTE5(v19[1]);
  if ( (v7 & 0x20) != 0 )
    v8 = 1;
  v19[5] = a1;
  BYTE5(v19[1]) = v8;
  v9 = HIBYTE(v19[1]);
  if ( (v7 & 0x2000) != 0 )
    v9 = 1;
  v10 = (v7 & 0x4000) != 0;
  v11 = *(_QWORD *)(a1 + 8);
  HIBYTE(v19[1]) = v9;
  v12 = BYTE4(v19[1]);
  if ( v10 )
    v12 = 1;
  v13 = (*(_DWORD *)(a1 + 1628) & 0x200000) == 0;
  BYTE4(v19[1]) = v12;
  v14 = v19[6];
  if ( !v13 )
    v14 = 1;
  LOBYTE(v19[6]) = v14;
  LODWORD(v19[2]) = *(_DWORD *)(v11 + 220);
  v19[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v19[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned __int8)HUBDESC_InternalValidateStringDescriptor(
                          (_DWORD)v2,
                          v1,
                          (unsigned int)&v20,
                          v6,
                          *(_QWORD *)(v11 + 1432),
                          (__int64)v19) )
  {
    v16 = *v2;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v16, 0x64334855u);
    *(_QWORD *)(a1 + 2008) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v2, v16);
      return v4;
    }
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Du,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids);
  }
  else
  {
    *(_DWORD *)(a1 + 2416) = 1073807380;
  }
  v4 = 4065;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    Template_p(v15, &USBHUB3_ETW_EVENT_INVALID_LANGUAGE_ID_DESCRIPTOR, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
  return v4;
}
