/*
 * XREFs of Register_ParseCapabilityRegister @ 0x1C0049D30
 * Callers:
 *     Register_PrepareHardware @ 0x1C0049B90 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0002320 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0006650 (Register_FindFirstExtendedCapability.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00066B0 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0032898 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // ebp
  unsigned int v12; // esi
  int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebp
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
  unsigned __int16 v32; // r9
  unsigned __int16 v33; // r9
  __int64 v34; // [rsp+28h] [rbp-40h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  __int64 v36; // [rsp+28h] [rbp-40h]
  __int64 v37; // [rsp+28h] [rbp-40h]
  __int64 v38; // [rsp+28h] [rbp-40h]
  __int64 v39; // [rsp+28h] [rbp-40h]
  __int64 v40; // [rsp+28h] [rbp-40h]
  __int64 v41; // [rsp+28h] [rbp-40h]
  __int64 v42; // [rsp+28h] [rbp-40h]
  __int64 v43; // [rsp+30h] [rbp-38h]
  __int64 v44; // [rsp+30h] [rbp-38h]
  __int64 v45; // [rsp+30h] [rbp-38h]
  __int64 v46; // [rsp+30h] [rbp-38h]
  __int64 v47; // [rsp+30h] [rbp-38h]
  __int64 v48; // [rsp+30h] [rbp-38h]
  __int64 v49; // [rsp+30h] [rbp-38h]
  __int64 v50; // [rsp+30h] [rbp-38h]
  __int64 v51; // [rsp+30h] [rbp-38h]
  __int64 v52; // [rsp+30h] [rbp-38h]
  __int64 v53; // [rsp+38h] [rbp-30h]
  __int64 v54; // [rsp+38h] [rbp-30h]
  __int64 v55; // [rsp+38h] [rbp-30h]
  __int64 v56; // [rsp+40h] [rbp-28h]

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
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
      v30,
      v29);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) = v27;
    Etw_ControllerFirmareVersionUpdate(v31, *(_QWORD *)(a1 + 8));
  }
LABEL_5:
  v4 = **(_DWORD **)(a1 + 24);
  v5 = (unsigned __int8)v4;
  LODWORD(v43) = BYTE2(v4);
  LODWORD(v34) = HIBYTE(v4);
  WPP_RECORDER_SF_DDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x17u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v34,
    v43,
    (unsigned __int8)v4);
  v6 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v6 + 216) = HIBYTE(v4);
  *(_BYTE *)(v6 + 217) = BYTE2(v4);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_BYTE *)(v7 + 216);
  if ( v8 )
  {
    if ( *(_BYTE *)(v7 + 217) >= 0x10u || v8 > 1u )
      *(_BYTE *)(v7 + 215) = 1;
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v7 + 64), 4u, 5u, 0x18u, (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) |= 0x1000uLL;
  }
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v9 + (unsigned __int8)v4;
  v10 = *(_DWORD *)(v9 + 4);
  v11 = (unsigned __int8)v10;
  v12 = HIBYTE(v10);
  v13 = (v10 >> 8) & 0x7FF;
  LODWORD(v53) = HIBYTE(v10);
  LODWORD(v44) = v13;
  LODWORD(v35) = (unsigned __int8)v10;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x19u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v35,
    v44,
    v53);
  if ( !v11 )
  {
    v32 = 26;
    LODWORD(v36) = 0;
LABEL_43:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      v32,
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
      v36);
    return (unsigned int)-1073741811;
  }
  *(_DWORD *)(a1 + 80) = v11;
  if ( (unsigned int)(v13 - 1) > 0x3FF )
  {
    v32 = 27;
    LODWORD(v36) = v13;
    goto LABEL_43;
  }
  *(_DWORD *)(a1 + 84) = v13;
  if ( !v12 )
  {
    v32 = 28;
    LODWORD(v36) = 0;
    goto LABEL_43;
  }
  *(_DWORD *)(a1 + 88) = v12;
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  *(_DWORD *)(a1 + 92) = 1 << ((v14 >> 4) & 0xF);
  LODWORD(v45) = 1 << ((v14 >> 4) & 0xF);
  LODWORD(v36) = v14 & 0xF;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Du,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v36,
    v45);
  *(_DWORD *)(a1 + 96) = ((v14 >> 11) | v14 & 0x3E00000) >> 16;
  LODWORD(v46) = ((v14 >> 11) | v14 & 0x3E00000) >> 16;
  LODWORD(v37) = (v14 >> 26) & 1;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Eu,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v37,
    v46);
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 12LL);
  v16 = HIWORD(v15);
  *(_DWORD *)(a1 + 100) = v15;
  v17 = (unsigned __int8)v15;
  LODWORD(v47) = HIWORD(v15);
  LODWORD(v38) = (unsigned __int8)v15;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Fu,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v38,
    v47);
  if ( v17 > 0xA )
  {
    v33 = 32;
LABEL_35:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      v33,
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( v16 > 0x7FF )
  {
    v33 = 33;
    goto LABEL_35;
  }
  v18 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  LODWORD(v54) = (v18 >> 2) & 1;
  LODWORD(v48) = (v18 >> 1) & 1;
  LODWORD(v39) = v18 & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x22u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v39,
    v48,
    v54,
    (v18 >> 3) & 1);
  *(_DWORD *)(a1 + 104) = v18;
  LODWORD(v56) = (v18 >> 7) & 1;
  LODWORD(v55) = (v18 >> 6) & 1;
  LODWORD(v49) = (v18 >> 5) & 1;
  LODWORD(v40) = (v18 >> 4) & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x23u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v40,
    v49,
    v55,
    v56);
  LODWORD(v50) = HIWORD(v18);
  LODWORD(v41) = (unsigned __int16)v18 >> 12;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x24u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v41,
    v50);
  v19 = 0;
  *(_DWORD *)(a1 + 108) = 0;
  if ( v5 >= 0x20 )
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 28LL);
  if ( (unsigned __int16)((unsigned __int16)v18 >> 12) > 7u )
  {
    LODWORD(v42) = (unsigned __int16)v18 >> 12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      4u,
      5u,
      0x25u,
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
      v42);
    v18 = v18 & 0xFFFF0FFF | 0x7000;
  }
  if ( !((unsigned __int16)v18 >> 12) || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x40000LL) != 0 )
    *(_DWORD *)(a1 + 112) = 0;
  else
    *(_DWORD *)(a1 + 112) = (2 << ((unsigned __int16)v18 >> 12)) - 1;
  LODWORD(v42) = *(_DWORD *)(a1 + 112);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x26u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v42);
  if ( !HIWORD(v18) || (v20 = 4 * ((unsigned __int64)v18 >> 16), v20 >= *(unsigned int *)(a1 + 20)) )
  {
    v32 = 39;
    LODWORD(v36) = HIWORD(v18);
    goto LABEL_43;
  }
  v21 = v20 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v21;
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x28u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v21);
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  *(_QWORD *)(a1 + 72) = Register_FindFirstExtendedCapability(a1, 0xAu);
  v22 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 20LL);
  if ( !v22 )
  {
    v32 = 41;
LABEL_39:
    LODWORD(v36) = 0;
    goto LABEL_43;
  }
  v23 = *(_QWORD *)(a1 + 24) + v22;
  *(_QWORD *)(a1 + 48) = v23;
  LODWORD(v51) = v22;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    v23,
    5u,
    0x2Au,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v23,
    v51);
  v24 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( !v24 )
  {
    v32 = 43;
    goto LABEL_39;
  }
  v25 = *(_QWORD *)(a1 + 24) + v24;
  *(_QWORD *)(a1 + 40) = v25;
  LODWORD(v52) = v24;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    v25,
    5u,
    0x2Cu,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
    v25,
    v52);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) != 1 )
  {
    v32 = 45;
    LODWORD(v36) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    goto LABEL_43;
  }
  return v19;
}
