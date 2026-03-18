/*
 * XREFs of HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002B884
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002D434 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001F70C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002857C (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028A04 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0028A28 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateContainerIDCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v9; // r14d
  __int64 v10; // r15
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  char v15; // bl
  int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v20; // [rsp+90h] [rbp+18h]

  v20 = a3;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v19 = 0;
    v5 = &v19;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 < 0x14u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 64LL);
    if ( v11 < 0x14 )
    {
      v15 = 1;
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v10, 2u, v13, 0x7Fu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v9, *a1, 20);
      goto LABEL_25;
    }
    *v5 = 2;
    *a3 = 20;
    WPP_RECORDER_SF_DDDD(v10, v12, v13, 0x7Eu, v17);
  }
  if ( *a1 > 0x14u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x80u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v9, *a1, 20);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 63LL);
  }
  if ( *v20 <= v11 )
  {
    if ( a1[3] )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      LODWORD(v18) = a1[3];
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x82u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v18);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 66LL);
    }
    if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(a1 + 12) == *(_QWORD *)GUID_NULL.Data4 )
    {
      *(_BYTE *)(*(_QWORD *)(a2 + 80) + 40LL) = 1;
      WPP_RECORDER_SF_(v10, 2u, 5u, 0x83u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 153LL);
    }
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v5 = 2;
    LODWORD(v18) = v9;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x81u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 65LL);
  }
  v15 = 1;
LABEL_25:
  if ( *v5 )
  {
    v15 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x84u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
  }
  return v15;
}
