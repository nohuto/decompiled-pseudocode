/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C002FC3C
 * Callers:
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C0019FA0 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1C002EE78 (HUBDESC_GetNextMsOs20Descriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSet(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rdx
  char v5; // bp
  int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // r15
  unsigned int v11; // r14d
  __int64 v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+30h] [rbp-28h]
  int v20; // [rsp+30h] [rbp-28h]
  int v21; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v22; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 **)(a2 + 24);
  v5 = 1;
  v6 = *(unsigned __int16 *)(a2 + 20);
  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 != v6 )
  {
    v19 = *(unsigned __int16 *)(a2 + 20);
    v14 = *(_DWORD *)(a2 + 12);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x157u,
      (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
      v14,
      v19);
    v8 = 188LL;
LABEL_3:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
    v5 = 0;
LABEL_23:
    *(_DWORD *)a2 = 0;
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, 0x15Fu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
    return v5;
  }
  if ( v7 < 0xA )
  {
    v15 = *(_DWORD *)(a2 + 12);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x158u,
      (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
      v15);
    v8 = 189LL;
    goto LABEL_3;
  }
  if ( *v4 != 10 )
  {
    v16 = *v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x159u,
      (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
      v16);
    v8 = 190LL;
    goto LABEL_3;
  }
  v9 = v4[4];
  if ( (_WORD)v6 != v9 )
  {
    v20 = v9;
    v17 = *(unsigned __int16 *)(a2 + 20);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x15Au,
      (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
      v17,
      v20);
    v8 = 191LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)v4 + 1) > *(_DWORD *)(a2 + 16) )
  {
    v21 = *(_DWORD *)(a2 + 16);
    v18 = *((_DWORD *)v4 + 1);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x15Bu,
      (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
      v18,
      v21);
    v8 = 192LL;
    goto LABEL_3;
  }
  v10 = (unsigned __int64)v4 + v9;
  v22 = v4;
  while ( 1 )
  {
    v11 = v4[1];
    if ( v11 >= 8 )
    {
      LODWORD(v13) = v4[1];
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 88),
        2u,
        5u,
        0x15Du,
        (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
        v13);
    }
    else
    {
      v5 = ((unsigned __int8 (__fastcall *)(__int64, __int64, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v4[1]))(
             a1,
             a2,
             v4,
             v10) != 0
         ? v5
         : 0;
      if ( v11 - 1 > 1 && (*(_BYTE *)a2 & 0x18) != 0 )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(a2 + 88),
          2u,
          5u,
          0x15Cu,
          (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 193LL);
        v5 = 0;
      }
    }
    if ( !HUBDESC_GetNextMsOs20Descriptor(v10, &v22) )
      break;
    v4 = v22;
    if ( !v22 )
      goto LABEL_22;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, 0x15Eu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 194LL);
  v5 = 0;
LABEL_22:
  if ( !v5 )
    goto LABEL_23;
  return v5;
}
