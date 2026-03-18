/*
 * XREFs of HUBDESC_InternalValidateStringDescriptor @ 0x1C0030EB8
 * Callers:
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001B990 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001BB10 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0024034 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C002473C (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0024900 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002B31C (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateStringDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  char v13; // r13
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+28h] [rbp-40h]
  unsigned int v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+78h] [rbp+10h]

  v21 = 0;
  v7 = a2;
  if ( (unsigned int)a2 < 2 )
  {
    *a3 = 0;
    v9 = a5;
    v17 = a2;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xEEu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 131LL);
LABEL_14:
    v13 = 0;
    WPP_RECORDER_SF_(v9, 2u, 5u, 0xF4u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    return v13;
  }
  v10 = *a1;
  v9 = a5;
  *a3 = v10;
  if ( v10 > (unsigned int)a2 )
  {
    v21 = 2;
    *a3 = a2;
    WPP_RECORDER_SF_ddd(a5, a2, (__int64)a3, 0xEFu, v15);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 129LL);
  }
  if ( *a1 <= 2u )
  {
    v21 = 2;
    *a3 = v7;
    v18 = v7;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF0u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 130LL);
  }
  v11 = a1[1];
  if ( v11 != 3 )
  {
    v21 = 2;
    v20 = 3;
    LODWORD(v16) = v11;
    WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF1u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v16, v20);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 133LL);
  }
  v12 = *a1;
  v13 = 1;
  if ( (*a1 & 1) != 0 )
  {
    *a3 &= ~1u;
    v21 = 2;
    LODWORD(v19) = *a3;
    LODWORD(v16) = v12;
    WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF2u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v16, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 128LL);
  }
  if ( *a1 != v7 )
  {
    LODWORD(v19) = v7;
    LODWORD(v16) = *a1;
    WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF3u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v16, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 134LL);
  }
  if ( v21 )
    goto LABEL_14;
  return v13;
}
