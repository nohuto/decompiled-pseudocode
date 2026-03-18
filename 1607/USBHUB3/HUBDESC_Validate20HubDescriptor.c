/*
 * XREFs of HUBDESC_Validate20HubDescriptor @ 0x1C002ED18
 * Callers:
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C00083B0 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028C00 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0028C24 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_Validate20HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rbx
  int v8; // ecx
  char v9; // r15
  unsigned int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  unsigned __int16 v13; // bx
  int v14; // eax
  __int64 v15; // rbx
  char v16; // al
  int v17; // r8d
  unsigned int i; // ebx
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  unsigned int v22; // [rsp+40h] [rbp-48h]
  unsigned int v23; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+98h] [rbp+10h]

  v4 = 0;
  v5 = a4;
  if ( !a1 )
  {
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x122u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 2LL);
LABEL_40:
    v9 = 0;
    WPP_RECORDER_SF_(v5, 2u, 5u, 0x12Du, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    return v9;
  }
  if ( !a1[2] )
  {
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x124u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, 0);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 7LL);
    v4 = 2;
  }
  v8 = a1[2];
  v9 = 1;
  v24 = (v8 + 8) / 8;
  v23 = (v8 + 7) / 8;
  v10 = v24 + v23 + 7;
  v22 = v10;
  if ( *a1 < v10 )
  {
    LODWORD(v20) = *a1;
    WPP_RECORDER_SF_dD(
      v5,
      2u,
      5u,
      0x125u,
      (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids,
      v20,
      v24 + v23 + 7);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 1LL);
    v11 = !HUBDESC_ShouldEnforceWin8ValidationImmutable(a3);
    v10 = v22;
    if ( !v11 )
      v4 = 2;
  }
  if ( *a1 > v10 )
  {
    LODWORD(v21) = v10;
    LODWORD(v20) = *a1;
    WPP_RECORDER_SF_dD(v5, 2u, 5u, 0x126u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v20, v21);
    (*(void (__fastcall **)(_QWORD, _QWORD))(a3 + 24))(*(_QWORD *)(a3 + 40), 0LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v12 = a1[1];
  if ( v12 != 41 )
  {
    LODWORD(v20) = v12;
    WPP_RECORDER_SF_d(v5, 2u, 5u, 0x127u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v20);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 6LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a3) )
      v4 = 2;
  }
  v13 = *(_WORD *)(a1 + 3);
  if ( (v13 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v20) = v13;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x128u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v20);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
  }
  if ( (v13 & 0xFF00) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    v14 = v13;
    v15 = a4;
    LODWORD(v20) = v14;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x129u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v20);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
  }
  else
  {
    v15 = a4;
  }
  if ( (a1[7] & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    WPP_RECORDER_SF_(v15, 2u, 5u, 0x12Au, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 5LL);
  }
  v16 = (a1[2] + 1) % 8;
  v17 = v24;
  if ( -1 << v16 != 0xFF && ((unsigned __int8)(-1 << v16) & a1[v24 - 1 + 7]) != 0 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
    WPP_RECORDER_SF_(v15, 2u, 5u, 0x12Bu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 4LL);
    v17 = v24;
  }
  for ( i = 0; i < v23; ++i )
  {
    if ( a1[i + 7 + v17] != 0xFF )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v4 = 2;
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x12Cu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 8LL);
      v17 = v24;
    }
  }
  if ( v4 )
  {
    v5 = a4;
    goto LABEL_40;
  }
  return v9;
}
