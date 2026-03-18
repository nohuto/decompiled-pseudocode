/*
 * XREFs of HUBDESC_InternalValidateIADescriptor @ 0x1C002B1B0
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B514 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001F70C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002857C (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028A04 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateIADescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v9; // ebp
  __int64 v10; // r14
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // bl
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // rdx
  int v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+98h] [rbp+10h]

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v27 = 0;
    v5 = &v27;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  v28 = *(_QWORD *)(a2 + 56);
  v12 = *a1;
  *a3 = v12;
  if ( (unsigned __int8)v12 < 8u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 93LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    if ( v11 < 8 )
    {
      v17 = 1;
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x73u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v9, *a1, 8);
      goto LABEL_43;
    }
    *a3 = 8;
    WPP_RECORDER_SF_DDDD(v10, v13, v14, 0x72u, v23);
  }
  if ( *a1 > 8u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    WPP_RECORDER_SF_DDD(v10, 2u, v15, 0x74u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v9, *a1, 8);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 92LL);
  }
  if ( *a3 <= v11 )
  {
    if ( 256 - a1[2] < a1[3] )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v26) = a1[3];
      LODWORD(v25) = a1[2];
      LODWORD(v24) = v9;
      WPP_RECORDER_SF_DDD(v10, 2u, v18, 0x76u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v24, v25, v26);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 97LL);
    }
    v19 = v28;
    if ( a1[3] > *(_BYTE *)(v28 + 4) )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v26) = *(unsigned __int8 *)(v19 + 4);
      LODWORD(v25) = a1[3];
      LODWORD(v24) = v9;
      WPP_RECORDER_SF_DDD(v10, 2u, v20, 0x77u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v24, v25, v26);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL);
    }
    if ( a1[3] + *(unsigned __int16 *)(a2 + 202) > *(unsigned __int8 *)(v19 + 4) )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        *v5 = 2;
      WPP_RECORDER_SF_DDDD(v10, v21, a1[3], 0x78u, v23);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL);
    }
    if ( a1[3] )
      goto LABEL_42;
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    LODWORD(v24) = v9;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x79u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v24);
    v16 = 96LL;
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    LODWORD(v24) = v9;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x75u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v24);
    v16 = 94LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v16);
LABEL_42:
  v17 = 1;
LABEL_43:
  if ( *v5 )
  {
    v17 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x7Au, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
  }
  return v17;
}
