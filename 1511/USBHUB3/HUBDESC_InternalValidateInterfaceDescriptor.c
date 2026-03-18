/*
 * XREFs of HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C002AD0C
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B514 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001F70C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002857C (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028A04 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C0029228 (HUBDESC_InternalValidateLastInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateInterfaceDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  unsigned int v9; // eax
  int v10; // r12d
  __int64 v11; // r15
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // bl
  __int64 v16; // r8
  unsigned __int8 v17; // si
  unsigned __int8 v18; // bp
  bool v19; // r13
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  unsigned __int8 v24; // al
  int v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  bool v30; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+98h] [rbp+10h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v31 = 0;
    v5 = &v31;
  }
  v9 = *a1;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = a5;
  v12 = *(_DWORD *)(a2 + 72) - v10;
  *a3 = v9;
  if ( (unsigned __int8)v9 < 9u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 99LL);
    if ( v12 >= 9 )
      *a3 = 9;
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    if ( *a3 < 9 )
    {
      v15 = 1;
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v11, 2u, v14, 0x68u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, *a1, v10, 9);
      goto LABEL_59;
    }
    WPP_RECORDER_SF_DDDD(v11, v13, v14, 0x69u, v26);
  }
  if ( *a1 > 9u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    WPP_RECORDER_SF_DDD(v11, 2u, v16, 0x6Au, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, *a1, v10, 9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 98LL);
  }
  if ( *a3 <= v12 )
  {
    v17 = a1[2];
    v18 = a1[3];
    v19 = (*(_DWORD *)(a2 + 256) & 1) == 0 || v17 != *(_BYTE *)(a2 + 80);
    v30 = (*(_DWORD *)(a2 + 256) & 1) == 0;
    HUBDESC_InternalValidateLastInterface(a2, v5, v11);
    if ( *v5 != 1 )
    {
      if ( v19 )
      {
        if ( _bittest64(*(const signed __int64 **)(a2 + 216), v17) )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          LODWORD(v28) = v17;
          LODWORD(v27) = v10;
          WPP_RECORDER_SF_dD(v11, 2u, 5u, 0x6Cu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v27, v28);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 103LL);
        }
        if ( !v30 && *(_BYTE *)(a2 + 80) > v17 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          LODWORD(v29) = *(unsigned __int8 *)(a2 + 80);
          LODWORD(v28) = v17;
          LODWORD(v27) = v10;
          WPP_RECORDER_SF_DDD(
            v11,
            2u,
            v20,
            0x6Du,
            (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
            v27,
            v28,
            v29);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 106LL);
        }
        if ( v18 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          LODWORD(v29) = v18;
          LODWORD(v28) = v17;
          LODWORD(v27) = v10;
          WPP_RECORDER_SF_DDD(
            v11,
            2u,
            v21,
            0x6Eu,
            (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
            v27,
            v28,
            v29);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 104LL);
        }
        RtlClearAllBits((PRTL_BITMAP)(a2 + 88));
        RtlSetBit((PRTL_BITMAP)(a2 + 208), v17);
        *(_BYTE *)(a2 + 80) = v17;
        ++*(_WORD *)(a2 + 202);
      }
      else
      {
        if ( _bittest64(*(const signed __int64 **)(a2 + 96), v18) )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          LODWORD(v29) = v17;
          LODWORD(v28) = v10;
          LODWORD(v27) = v18;
          WPP_RECORDER_SF_DDD(
            v11,
            2u,
            v22,
            0x6Fu,
            (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
            v27,
            v28,
            v29);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 101LL);
        }
        if ( *(_BYTE *)(a2 + 81) >= v18 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          LODWORD(v29) = *(unsigned __int8 *)(a2 + 81);
          LODWORD(v28) = v18;
          LODWORD(v27) = v10;
          WPP_RECORDER_SF_DDD(
            v11,
            2u,
            v23,
            0x70u,
            (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
            v27,
            v28,
            v29);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 105LL);
        }
      }
      RtlClearAllBits((PRTL_BITMAP)(a2 + 136));
      *(_BYTE *)(a2 + 185) = 0;
      v24 = a1[4];
      *(_DWORD *)(a2 + 256) &= ~2u;
      *(_BYTE *)(a2 + 184) = v24;
      RtlSetBit((PRTL_BITMAP)(a2 + 88), v18);
      *(_BYTE *)(a2 + 81) = v18;
    }
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    LODWORD(v27) = v10;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0x6Bu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v27);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 100LL);
  }
  v15 = 1;
LABEL_59:
  if ( *v5 )
  {
    v15 = 0;
    WPP_RECORDER_SF_(v11, 2u, 5u, 0x71u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
  }
  return v15;
}
