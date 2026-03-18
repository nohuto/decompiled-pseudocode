/*
 * XREFs of HUBDESC_ValidateDeviceDescriptor @ 0x1C002E198
 * Callers:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C00218E0 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0021B24 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0028A28 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateDeviceDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  int v5; // r12d
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // al
  unsigned __int16 v13; // cx
  int v14; // edx
  unsigned __int16 v15; // cx
  char v16; // r13
  int v17; // eax
  unsigned __int8 v18; // al
  bool v19; // al
  __int64 v20; // rcx
  unsigned __int16 v21; // r9
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  bool ShouldEnforceWin8ValidationMutable; // al
  __int64 v25; // rcx
  unsigned __int8 v26; // al
  __int64 v28; // [rsp+28h] [rbp-30h]

  v5 = 0;
  if ( !a1 )
  {
    v9 = a5;
    WPP_RECORDER_SF_(a5, 2u, 5u, 0xF0u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
    v10 = 79LL;
LABEL_3:
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v10);
LABEL_50:
    v16 = 0;
    WPP_RECORDER_SF_(v9, 2u, 5u, 0xFDu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
    return v16;
  }
  if ( a2 < 2 )
  {
    v9 = a5;
    v11 = 241;
    LODWORD(v28) = a2;
LABEL_6:
    WPP_RECORDER_SF_d(v9, 2u, 5u, v11, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v28);
    v10 = 71LL;
    goto LABEL_3;
  }
  v9 = a5;
  if ( *a1 < 0x12u )
  {
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF2u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 70LL);
    v5 = 2;
  }
  v12 = a1[1];
  if ( v12 != 1 )
  {
    LODWORD(v28) = v12;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF3u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v28);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 77LL);
    v5 = 2;
  }
  if ( a2 < 8 )
  {
    v11 = 244;
    LODWORD(v28) = a2;
    goto LABEL_6;
  }
  v13 = *((_WORD *)a1 + 6);
  if ( (v13 & 0xF000u) > 0x9000
    || (v13 & 0xF00u) > 0x900
    || (v14 = 144, (*((_WORD *)a1 + 6) & 0xF0u) > 0x90)
    || (v13 & 0xFu) > 9 )
  {
    LODWORD(v28) = v13;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF5u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v28);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 69LL);
  }
  if ( a1[4] != 17 || a1[5] || a1[6] )
    goto LABEL_25;
  v15 = *((_WORD *)a1 + 1);
  v14 = 254;
  if ( (unsigned __int16)(v15 - 513) > 0xFEu )
  {
    LODWORD(v28) = v15;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF6u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v28);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 246LL);
    v5 = 2;
LABEL_25:
    v16 = 1;
    goto LABEL_26;
  }
  v16 = 1;
  if ( a4 )
    *a4 = 1;
LABEL_26:
  v17 = *(_DWORD *)(a3 + 4);
  if ( v17 )
  {
    switch ( v17 )
    {
      case 1:
        LOBYTE(v14) = a1[7];
        if ( (unsigned __int8)(v14 - 8) > 0x38u
          || (v22 = 0x100000001000101LL, !_bittest64(&v22, (unsigned int)(v14 - 8))) )
        {
          v21 = 249;
          goto LABEL_44;
        }
        break;
      case 2:
        v23 = a1[7];
        if ( v23 != 64 )
        {
          LODWORD(v28) = v23;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFAu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v28);
          (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
          ShouldEnforceWin8ValidationMutable = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
          LOBYTE(v14) = a1[7];
          if ( ShouldEnforceWin8ValidationMutable )
            v5 = 2;
          if ( (unsigned __int8)(v14 - 8) > 0x38u
            || (v25 = 0x100000001000101LL, !_bittest64(&v25, (unsigned int)(v14 - 8))) )
          {
            v21 = 251;
            goto LABEL_44;
          }
        }
        break;
      case 3:
        v26 = a1[7];
        if ( v26 != 9 )
        {
          LODWORD(v28) = v26;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFCu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v28);
          (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
            v5 = 2;
        }
        break;
    }
  }
  else
  {
    v18 = a1[7];
    if ( v18 != 8 )
    {
      LODWORD(v28) = v18;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF7u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v28);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
      v19 = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
      LOBYTE(v14) = a1[7];
      if ( v19 )
        v5 = 2;
      if ( (unsigned __int8)(v14 - 8) > 0x38u || (v20 = 0x100000001000101LL, !_bittest64(&v20, (unsigned int)(v14 - 8))) )
      {
        v21 = 248;
LABEL_44:
        LODWORD(v28) = (unsigned __int8)v14;
        WPP_RECORDER_SF_d(a5, 2u, 5u, v21, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v28);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
        v5 = 2;
      }
    }
  }
  if ( v5 )
    goto LABEL_50;
  return v16;
}
