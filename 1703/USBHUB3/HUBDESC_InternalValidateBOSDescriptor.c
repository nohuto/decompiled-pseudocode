/*
 * XREFs of HUBDESC_InternalValidateBOSDescriptor @ 0x1C00307B8
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C00231AC (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0030AD0 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002B31C (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002B6D4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateBOSDescriptor(unsigned __int8 *a1, __int64 a2, _DWORD *a3, int *a4, __int64 a5)
{
  int *v5; // rsi
  char v9; // r13
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v20;
    v20 = 0;
  }
  if ( a3 )
    *a3 = 5;
  v9 = 1;
  if ( !a1 )
  {
    *v5 = 1;
    v10 = a5;
    WPP_RECORDER_SF_(a5, 2u, 5u, 0xDDu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    v11 = 27LL;
LABEL_28:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v11);
    goto LABEL_29;
  }
  v10 = a5;
  if ( *(_DWORD *)(a2 + 72) < 5u )
  {
    *v5 = 1;
    WPP_RECORDER_SF_dD(
      v10,
      2u,
      5u,
      0xDEu,
      (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids,
      *(_DWORD *)(a2 + 72),
      5);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 23LL);
  }
  if ( a1[1] != 15 )
  {
    *v5 = 2;
    LODWORD(v19) = 15;
    LODWORD(v18) = a1[1];
    WPP_RECORDER_SF_dD(v10, 2u, 5u, 0xDFu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v18, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 24LL);
  }
  if ( *a1 < 5u )
  {
    *v5 = 2;
    WPP_RECORDER_SF_ddd(v10, a2, (__int64)a3, 0xE0u, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 21LL);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
  if ( *a1 > 5u )
  {
    WPP_RECORDER_SF_ddd(v10, a2, (__int64)a3, 0xE1u, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 20LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    if ( a3 )
      *a3 = *a1;
  }
  v12 = *((_WORD *)a1 + 1);
  if ( v12 < 5u )
  {
    LODWORD(v18) = v12;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0xE2u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
  }
  if ( *((unsigned __int16 *)a1 + 1) < *a1 + 2 * (unsigned int)a1[4] )
  {
    WPP_RECORDER_SF_ddd(v10, a2, (__int64)a3, 0xE3u, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
  }
  if ( !a1[4] )
  {
    WPP_RECORDER_SF_(v10, 2u, 5u, 0xE4u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    WPP_RECORDER_SF_ddd(v10, v13, v14, 0xE5u, v17);
    v11 = 29LL;
    goto LABEL_28;
  }
LABEL_29:
  if ( *v5 )
  {
    v9 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0xE6u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
  }
  return v9;
}
