/*
 * XREFs of Register_ParseCapabilityRegister @ 0x1C004EF20
 * Callers:
 *     Register_PrepareHardware @ 0x1C004ED78 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0004CD0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008D60 (WPP_RECORDER_SF_DDD.c)
 *     Register_FindFirstExtendedCapability @ 0x1C00096D0 (Register_FindFirstExtendedCapability.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0009728 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0030C28 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // r14d
  unsigned int v13; // esi
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  __int64 v27; // rbx
  unsigned __int16 v28; // r9
  int v29; // edx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  char *v33; // r8
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  unsigned __int16 v36; // r9
  unsigned __int16 v37; // r9
  __int64 v38; // [rsp+28h] [rbp-80h]
  __int64 v39; // [rsp+28h] [rbp-80h]
  __int64 v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+28h] [rbp-80h]
  __int64 v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+28h] [rbp-80h]
  __int64 v44; // [rsp+28h] [rbp-80h]
  __int64 v45; // [rsp+28h] [rbp-80h]
  __int64 v46; // [rsp+28h] [rbp-80h]
  __int64 v47; // [rsp+30h] [rbp-78h]
  __int64 v48; // [rsp+30h] [rbp-78h]
  __int64 v49; // [rsp+30h] [rbp-78h]
  __int64 v50; // [rsp+30h] [rbp-78h]
  __int64 v51; // [rsp+30h] [rbp-78h]
  __int64 v52; // [rsp+30h] [rbp-78h]
  __int64 v53; // [rsp+30h] [rbp-78h]
  __int64 v54; // [rsp+30h] [rbp-78h]
  __int64 v55; // [rsp+30h] [rbp-78h]
  __int64 v56; // [rsp+30h] [rbp-78h]
  __int64 v57; // [rsp+38h] [rbp-70h]
  __int64 v58; // [rsp+38h] [rbp-70h]
  __int64 v59; // [rsp+38h] [rbp-70h]
  __int64 v60; // [rsp+40h] [rbp-68h]
  _OWORD v61[2]; // [rsp+50h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v2 + 224) == -1LL )
  {
    v3 = *(_WORD *)(v2 + 152);
    if ( v3 == 7023 )
    {
      v27 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL);
      v28 = 21;
      v29 = (unsigned __int16)HIWORD(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      v30 = (unsigned __int16)v27;
    }
    else
    {
      if ( v3 != 4172 && _stricmp((const char *)(v2 + 200), "QCOM") )
        goto LABEL_5;
      v27 = (unsigned __int16)*(_DWORD *)(*(_QWORD *)(a1 + 24) + 49440LL);
      v29 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 49440LL) & 0xFFF;
      v30 = (unsigned __int8)BYTE1(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 49440LL)) >> 4;
      v28 = 22;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      4u,
      5u,
      v28,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
      v30,
      v29);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) = v27;
    Etw_ControllerFirmareVersionUpdate(v31, *(_QWORD *)(a1 + 8));
  }
LABEL_5:
  v4 = **(_DWORD **)(a1 + 24);
  v5 = (unsigned __int8)v4;
  LODWORD(v47) = BYTE2(v4);
  LODWORD(v38) = HIBYTE(v4);
  WPP_RECORDER_SF_DDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x17u,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v38,
    v47,
    (unsigned __int8)v4);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  *(_BYTE *)(v6 + 217) = BYTE2(v4);
  *(_BYTE *)(v6 + 216) = HIBYTE(v4);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_BYTE *)(v8 + 216);
  if ( v9 )
  {
    if ( *(_BYTE *)(v8 + 217) >= 0x10u || v9 > 1u )
      *(_BYTE *)(v8 + 215) = 1;
  }
  else
  {
    v61[1] = 0x1000uLL;
    WPP_RECORDER_SF_(*(_QWORD *)(v8 + 64), 4u, 5u, 0x18u, (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids);
    v32 = *(_QWORD *)(a1 + 8);
    v61[0] = 0x1000uLL;
    v33 = (char *)v61 - v32;
    v34 = (_QWORD *)(v32 + 232);
    v35 = 2LL;
    do
    {
      *v34 |= *(_QWORD *)((char *)v34 + (_QWORD)v33 - 232);
      ++v34;
      --v35;
    }
    while ( v35 );
  }
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v10 + (unsigned __int8)v4;
  v11 = *(_DWORD *)(v10 + 4);
  v12 = (unsigned __int8)v11;
  v13 = HIBYTE(v11);
  v14 = (v11 >> 8) & 0x7FF;
  LODWORD(v57) = HIBYTE(v11);
  LODWORD(v48) = v14;
  LODWORD(v39) = (unsigned __int8)v11;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x19u,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v39,
    v48,
    v57);
  if ( !v12 )
  {
    v36 = 26;
    LODWORD(v40) = 0;
LABEL_45:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      v36,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
      v40);
    return (unsigned int)-1073741811;
  }
  *(_DWORD *)(a1 + 80) = v12;
  if ( (unsigned int)(v14 - 1) > 0x3FF )
  {
    v36 = 27;
    LODWORD(v40) = v14;
    goto LABEL_45;
  }
  *(_DWORD *)(a1 + 84) = v14;
  if ( !v13 )
  {
    v36 = 28;
    LODWORD(v40) = 0;
    goto LABEL_45;
  }
  *(_DWORD *)(a1 + 88) = v13;
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  *(_DWORD *)(a1 + 92) = 1 << ((v15 >> 4) & 0xF);
  LODWORD(v49) = 1 << ((v15 >> 4) & 0xF);
  LODWORD(v40) = v15 & 0xF;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Du,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v40,
    v49);
  *(_DWORD *)(a1 + 96) = ((v15 >> 11) | v15 & 0x3E00000) >> 16;
  LODWORD(v50) = ((v15 >> 11) | v15 & 0x3E00000) >> 16;
  LODWORD(v41) = (v15 >> 26) & 1;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Eu,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v41,
    v50);
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 12LL);
  v17 = HIWORD(v16);
  *(_DWORD *)(a1 + 100) = v16;
  v18 = (unsigned __int8)v16;
  LODWORD(v51) = HIWORD(v16);
  LODWORD(v42) = (unsigned __int8)v16;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Fu,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v42,
    v51);
  if ( v18 > 0xA )
  {
    v37 = 32;
LABEL_37:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      v37,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( v17 > 0x7FF )
  {
    v37 = 33;
    goto LABEL_37;
  }
  v19 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  LODWORD(v58) = (v19 >> 2) & 1;
  LODWORD(v52) = (v19 >> 1) & 1;
  LODWORD(v43) = v19 & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x22u,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v43,
    v52,
    v58,
    (v19 >> 3) & 1);
  *(_DWORD *)(a1 + 104) = v19;
  LODWORD(v60) = (v19 >> 7) & 1;
  LODWORD(v59) = (v19 >> 6) & 1;
  LODWORD(v53) = (v19 >> 5) & 1;
  LODWORD(v44) = (v19 >> 4) & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x23u,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v44,
    v53,
    v59,
    v60);
  LODWORD(v54) = HIWORD(v19);
  LODWORD(v45) = (unsigned __int16)v19 >> 12;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x24u,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v45,
    v54);
  *(_DWORD *)(a1 + 108) = 0;
  if ( v5 >= 0x20 )
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 28LL);
  if ( (unsigned __int16)((unsigned __int16)v19 >> 12) > 7u )
  {
    LODWORD(v46) = (unsigned __int16)v19 >> 12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      4u,
      5u,
      0x25u,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
      v46);
    v19 = v19 & 0xFFFF0FFF | 0x7000;
  }
  if ( (v19 & 0xF000) == 0 || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x40000LL) != 0 )
    *(_DWORD *)(a1 + 112) = 0;
  else
    *(_DWORD *)(a1 + 112) = (2 << ((unsigned __int16)v19 >> 12)) - 1;
  LODWORD(v46) = *(_DWORD *)(a1 + 112);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x26u,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v46);
  if ( !HIWORD(v19) || (v20 = 4 * ((unsigned __int64)v19 >> 16), v20 >= *(unsigned int *)(a1 + 20)) )
  {
    LODWORD(v40) = HIWORD(v19);
    v36 = 39;
    goto LABEL_45;
  }
  v21 = v20 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v21;
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x28u,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v21);
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  *(_QWORD *)(a1 + 72) = Register_FindFirstExtendedCapability(a1, 0xAu);
  v22 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 20LL);
  if ( !v22 )
  {
    v36 = 41;
LABEL_41:
    LODWORD(v40) = 0;
    goto LABEL_45;
  }
  v23 = *(_QWORD *)(a1 + 24) + v22;
  *(_QWORD *)(a1 + 48) = v23;
  LODWORD(v55) = v22;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    v23,
    5u,
    0x2Au,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v23,
    v55);
  v24 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( !v24 )
  {
    v36 = 43;
    goto LABEL_41;
  }
  v25 = *(_QWORD *)(a1 + 24) + v24;
  *(_QWORD *)(a1 + 40) = v25;
  LODWORD(v56) = v24;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    v25,
    5u,
    0x2Cu,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
    v25,
    v56);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) != 1 )
  {
    v36 = 45;
    LODWORD(v40) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    goto LABEL_45;
  }
  return v7;
}
