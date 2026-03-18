/*
 * XREFs of HUBDESC_InternalValidateConfigDescriptor @ 0x1C0028E10
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B514 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001F70C (WPP_RECORDER_SF_DDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028A04 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateConfigDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v9; // rbp
  __int64 v10; // r8
  char v11; // r14
  __int64 v12; // r8
  __int64 v13; // r10
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]
  int v22; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v22 = 0;
    v5 = &v22;
  }
  v9 = a5;
  v10 = 9LL;
  *a3 = 9;
  v11 = 1;
  if ( *a1 < 9u )
  {
    *v5 = 1;
    WPP_RECORDER_SF_DDD(v9, 2u, 9LL, 0x11u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, *a1, 9, 9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 55LL);
    v10 = 9LL;
  }
  if ( *a1 > 9u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v5 = 2;
    LODWORD(v21) = v12;
    LODWORD(v20) = v12;
    LODWORD(v19) = *a1;
    WPP_RECORDER_SF_DDD(v9, 2u, v12, 0x12u, v13, v19, v20, v21);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 54LL);
  }
  if ( a1[1] != 2 )
  {
    *v5 = 1;
    LODWORD(v21) = 2;
    LODWORD(v20) = 2;
    LODWORD(v19) = a1[1];
    WPP_RECORDER_SF_DDD(v9, 2u, v10, 0x13u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v19, v20, v21);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 58LL);
  }
  v14 = *(_DWORD *)(a2 + 72);
  if ( *a3 <= v14 )
  {
    v15 = 9 * (a1[4] + 1);
    if ( v15 > v14 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v20) = v15;
      LODWORD(v19) = *(_DWORD *)(a2 + 72);
      WPP_RECORDER_SF_dD(v9, 2u, 5u, 0x15u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v19, v20);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 57LL);
    }
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
    if ( (unsigned int)*((unsigned __int16 *)a1 + 1) > *(_DWORD *)(a2 + 72) )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v21) = *(_DWORD *)(a2 + 72);
      LODWORD(v20) = v21;
      LODWORD(v19) = *((unsigned __int16 *)a1 + 1);
      WPP_RECORDER_SF_DDD(v9, 2u, v16, 0x16u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v19, v20, v21);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 61LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    }
    if ( *((unsigned __int16 *)a1 + 1) < v15 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v21) = *(_DWORD *)(a2 + 72);
      LODWORD(v20) = v15;
      LODWORD(v19) = *((unsigned __int16 *)a1 + 1);
      WPP_RECORDER_SF_DDD(v9, 2u, v17, 0x17u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v19, v20, v21);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 62LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    }
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    WPP_RECORDER_SF_(v9, 2u, 5u, 0x14u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 56LL);
  }
  if ( *v5 )
  {
    v11 = 0;
    WPP_RECORDER_SF_(v9, 2u, 5u, 0x18u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
  }
  return v11;
}
