/*
 * XREFs of Register_ParseCapabilityRegister @ 0x1C004D050
 * Callers:
 *     Register_PrepareHardware @ 0x1C004CB40 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0004950 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008558 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0008C60 (Register_FindFirstExtendedCapability.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0008CB4 (WPP_RECORDER_SF_dddd.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0033D78 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax
  __int64 v4; // rbx
  unsigned __int16 v5; // r9
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  unsigned int v15; // eax
  int v16; // esi
  unsigned int v17; // edi
  int v18; // ebx
  unsigned __int16 v19; // r9
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // ebx
  unsigned __int16 v24; // r9
  unsigned int v25; // ebx
  unsigned int v26; // edi
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
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
      v4 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL);
      v5 = 21;
      v6 = (unsigned __int16)HIWORD(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      v7 = (unsigned __int16)v4;
LABEL_7:
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        4u,
        5u,
        v5,
        (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
        v7,
        v6);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) = v4;
      Etw_ControllerFirmareVersionUpdate(v8, *(_QWORD *)(a1 + 8));
      goto LABEL_8;
    }
    if ( v3 == 4172 || !_stricmp((const char *)(v2 + 200), "QCOM") )
    {
      v4 = (unsigned __int16)*(_DWORD *)(*(_QWORD *)(a1 + 24) + 49440LL);
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 49440LL) & 0xFFF;
      v7 = (unsigned __int8)BYTE1(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 49440LL)) >> 4;
      v5 = 22;
      goto LABEL_7;
    }
  }
LABEL_8:
  v9 = **(_DWORD **)(a1 + 24);
  v10 = (unsigned __int8)v9;
  LODWORD(v43) = BYTE2(v9);
  LODWORD(v34) = HIBYTE(v9);
  WPP_RECORDER_SF_DDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x17u,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v34,
    v43,
    (unsigned __int8)v9);
  v11 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v11 + 216) = HIBYTE(v9);
  *(_BYTE *)(v11 + 217) = BYTE2(v9);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_BYTE *)(v12 + 216);
  if ( v13 )
  {
    if ( *(_BYTE *)(v12 + 217) >= 0x10u || v13 > 1u )
      *(_BYTE *)(v12 + 215) = 1;
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v12 + 64), 4u, 5u, 0x18u, (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) |= 0x1000uLL;
  }
  v14 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v14 + (unsigned __int8)v9;
  v15 = *(_DWORD *)(v14 + 4);
  v16 = (unsigned __int8)v15;
  v17 = HIBYTE(v15);
  v18 = (v15 >> 8) & 0x7FF;
  LODWORD(v53) = HIBYTE(v15);
  LODWORD(v44) = v18;
  LODWORD(v35) = (unsigned __int8)v15;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x19u,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v35,
    v44,
    v53);
  if ( !v16 )
  {
    v19 = 26;
    LODWORD(v36) = 0;
LABEL_42:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      v19,
      (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
      v36);
    return (unsigned int)-1073741811;
  }
  *(_DWORD *)(a1 + 80) = v16;
  if ( (unsigned int)(v18 - 1) > 0x3FF )
  {
    v19 = 27;
    LODWORD(v36) = v18;
    goto LABEL_42;
  }
  *(_DWORD *)(a1 + 84) = v18;
  if ( !v17 )
  {
    v19 = 28;
    LODWORD(v36) = 0;
    goto LABEL_42;
  }
  *(_DWORD *)(a1 + 88) = v17;
  v20 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  *(_DWORD *)(a1 + 92) = 1 << ((v20 >> 4) & 0xF);
  LODWORD(v45) = 1 << ((v20 >> 4) & 0xF);
  LODWORD(v36) = v20 & 0xF;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Du,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v36,
    v45);
  *(_DWORD *)(a1 + 96) = ((v20 >> 11) | v20 & 0x3E00000) >> 16;
  LODWORD(v46) = ((v20 >> 11) | v20 & 0x3E00000) >> 16;
  LODWORD(v37) = (v20 >> 26) & 1;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Eu,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v37,
    v46);
  v21 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 12LL);
  v22 = HIWORD(v21);
  *(_DWORD *)(a1 + 100) = v21;
  v23 = (unsigned __int8)v21;
  LODWORD(v47) = HIWORD(v21);
  LODWORD(v38) = (unsigned __int8)v21;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x1Fu,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v38,
    v47);
  if ( v23 > 0xA )
  {
    v24 = 32;
LABEL_20:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      v24,
      (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( v22 > 0x7FF )
  {
    v24 = 33;
    goto LABEL_20;
  }
  v25 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  LODWORD(v54) = (v25 >> 2) & 1;
  LODWORD(v48) = (v25 >> 1) & 1;
  LODWORD(v39) = v25 & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x22u,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v39,
    v48,
    v54,
    (v25 >> 3) & 1);
  *(_DWORD *)(a1 + 104) = v25;
  LODWORD(v56) = (v25 >> 7) & 1;
  LODWORD(v55) = (v25 >> 6) & 1;
  LODWORD(v49) = (v25 >> 5) & 1;
  LODWORD(v40) = (v25 >> 4) & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x23u,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v40,
    v49,
    v55,
    v56);
  LODWORD(v50) = HIWORD(v25);
  LODWORD(v41) = (unsigned __int16)v25 >> 12;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x24u,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v41,
    v50);
  v26 = 0;
  *(_DWORD *)(a1 + 108) = 0;
  if ( v10 >= 0x20 )
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 28LL);
  if ( (unsigned __int16)((unsigned __int16)v25 >> 12) > 7u )
  {
    LODWORD(v42) = (unsigned __int16)v25 >> 12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      4u,
      5u,
      0x25u,
      (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
      v42);
    v25 = v25 & 0xFFFF0FFF | 0x7000;
  }
  if ( !((unsigned __int16)v25 >> 12) || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x40000LL) != 0 )
    *(_DWORD *)(a1 + 112) = 0;
  else
    *(_DWORD *)(a1 + 112) = (2 << ((unsigned __int16)v25 >> 12)) - 1;
  LODWORD(v42) = *(_DWORD *)(a1 + 112);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x26u,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v42);
  if ( !HIWORD(v25) || (v27 = 4 * ((unsigned __int64)v25 >> 16), v27 >= *(unsigned int *)(a1 + 20)) )
  {
    v19 = 39;
    LODWORD(v36) = HIWORD(v25);
    goto LABEL_42;
  }
  v28 = v27 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v28;
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x28u,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v28);
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  *(_QWORD *)(a1 + 72) = Register_FindFirstExtendedCapability(a1, 0xAu);
  v29 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL);
  if ( !(_DWORD)v29 )
  {
    v19 = 41;
LABEL_35:
    LODWORD(v36) = 0;
    goto LABEL_42;
  }
  v30 = *(_QWORD *)(a1 + 24) + v29;
  *(_QWORD *)(a1 + 48) = v30;
  LODWORD(v51) = v29;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    v30,
    5u,
    0x2Au,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v30,
    v51);
  v31 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( !(_DWORD)v31 )
  {
    v19 = 43;
    goto LABEL_35;
  }
  v32 = *(_QWORD *)(a1 + 24) + v31;
  *(_QWORD *)(a1 + 40) = v32;
  LODWORD(v52) = v31;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    v32,
    5u,
    0x2Cu,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
    v32,
    v52);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) != 1 )
  {
    v19 = 45;
    LODWORD(v36) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    goto LABEL_42;
  }
  return v26;
}
