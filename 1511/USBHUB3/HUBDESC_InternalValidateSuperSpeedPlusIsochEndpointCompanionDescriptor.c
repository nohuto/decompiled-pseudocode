/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C002AA04
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B514 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001F70C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002857C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_Dddd @ 0x1C0028764 (WPP_RECORDER_SF_Dddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028A04 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0028A28 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  __int64 v7; // r9
  int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // r12d
  bool v13; // zf
  __int64 v14; // r15
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 result; // rax
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+10h]

  v7 = 0LL;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    a4 = &v24;
    v24 = 0;
  }
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *a1;
  v12 = *(_DWORD *)(a2 + 72) - v10;
  v13 = *(_DWORD *)(a2 + 4) == 3;
  v25 = v12;
  *a3 = v11;
  if ( !v13 || !*(_DWORD *)(a2 + 16) )
  {
    v14 = a5;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0x5Fu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v10);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 205LL);
    *a4 = 2;
    goto LABEL_33;
  }
  v14 = a5;
  if ( (unsigned __int8)v11 < 8u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 208LL, a3, 0LL);
    if ( v12 >= 8 )
      *a3 = 8;
    v16 = *a3;
    *a4 = 2;
    if ( v16 < 8 )
    {
      *a4 = 1;
      result = WPP_RECORDER_SF_DDD(
                 v14,
                 2u,
                 v15,
                 0x60u,
                 (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
                 *a1,
                 v10,
                 8);
      goto LABEL_33;
    }
    WPP_RECORDER_SF_DDDD(v14, 8LL, v15, 0x61u, v21);
  }
  if ( *a1 > 8u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *a4 = 2;
    WPP_RECORDER_SF_DDD(v14, 2u, v18, 0x62u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, *a1, v10, 8);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 207LL);
  }
  v19 = *(_DWORD *)(a2 + 256);
  if ( (v19 & 8) != 0 )
  {
    *(_DWORD *)(a2 + 256) = v19 & 0xFFFFFFD7 | 0x20;
    if ( *a3 > v25 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        *a4 = 2;
      LODWORD(v22) = v10;
      WPP_RECORDER_SF_d(v14, 2u, 5u, 0x64u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v22);
      v20 = 209LL;
LABEL_23:
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v20);
      goto LABEL_33;
    }
    if ( *((_WORD *)a1 + 1) )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *a4 = 2;
      LODWORD(v23) = *((unsigned __int16 *)a1 + 1);
      LODWORD(v22) = v10;
      WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x65u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v22, v23);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 210LL);
    }
    result = (unsigned int)(*((_DWORD *)a1 + 1) - 49153);
    if ( (unsigned int)result > 0xFF3FFE )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *a4 = 2;
      WPP_RECORDER_SF_Dddd(v14, a2, (__int64)a3, v7, v21);
      v20 = 211LL;
      goto LABEL_23;
    }
LABEL_33:
    if ( !*a4 )
      return result;
    return WPP_RECORDER_SF_(v14, 2u, 5u, 0x67u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
  }
  LODWORD(v22) = v10;
  WPP_RECORDER_SF_d(v14, 2u, 5u, 0x63u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v22);
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 206LL);
  *a4 = 2;
  return WPP_RECORDER_SF_(v14, 2u, 5u, 0x67u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
}
