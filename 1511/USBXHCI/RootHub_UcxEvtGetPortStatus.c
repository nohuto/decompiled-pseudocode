/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C00065A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C001F190 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027F98 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int8 v6; // cl
  __int16 v7; // ax
  int v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // ebx
  __int64 v11; // r13
  char v12; // cl
  unsigned __int16 *v13; // r15
  unsigned int v14; // ebp
  int v15; // edx
  __int16 v16; // ax
  unsigned int v17; // r12d
  unsigned __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // cx
  unsigned __int16 v21; // cx
  int v22; // eax
  __int16 v23; // cx
  unsigned __int16 v24; // cx
  __int16 v25; // ax
  unsigned __int16 v26; // ax
  __int64 v28; // r12
  __int16 v29; // cx
  __int16 v30; // cx
  __int16 v31; // cx
  __int16 v32; // cx
  __int16 v33; // cx
  int v34; // edx
  __int16 v35; // cx
  __int16 v36; // cx
  __int16 v37; // cx
  __int16 v38; // cx
  __int16 v39; // cx
  unsigned __int16 v40; // cx
  unsigned int v41; // eax
  int v42; // edx
  unsigned __int16 v43; // r9
  __int64 v44; // rdx
  unsigned __int16 v45; // cx
  __int16 v46; // dx
  __int64 v47; // rcx
  int v48; // edx
  unsigned __int16 v49; // cx
  unsigned __int16 v50; // ax
  int v51; // r9d
  int v52; // edx
  int v53; // r8d
  __int64 v54; // rcx
  char v55[8]; // [rsp+28h] [rbp-C0h]
  char v56[8]; // [rsp+28h] [rbp-C0h]
  char v57; // [rsp+28h] [rbp-C0h]
  char v58[8]; // [rsp+28h] [rbp-C0h]
  __int64 v59; // [rsp+30h] [rbp-B8h]
  __int64 v60; // [rsp+30h] [rbp-B8h]
  __int64 v62; // [rsp+78h] [rbp-70h] BYREF
  __int64 v63; // [rsp+80h] [rbp-68h]
  __int64 v64; // [rsp+88h] [rbp-60h]
  __int64 v65; // [rsp+90h] [rbp-58h]
  __int64 v66; // [rsp+98h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041228);
  v62 = 40LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v62);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v63;
  v6 = *(_BYTE *)(*(_QWORD *)(v4 + 80) + 16LL);
  if ( !v6 || *(_BYTE *)(v4 + 285) )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v4 + 64),
      2u,
      3u,
      0xD9u,
      (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      v6,
      *(unsigned __int8 *)(v4 + 285));
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x67u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    goto LABEL_62;
  }
  v7 = *(_WORD *)(v63 + 130);
  v8 = 4;
  v9 = *(unsigned __int16 *)(v63 + 132);
  if ( v7 == 2 )
    v8 = 8;
  if ( *(_BYTE *)(v63 + 128) != 0xA3
    || *(_BYTE *)(v63 + 129)
    || (v7 & 0xFFFD) != 0
    || !*(_WORD *)(v63 + 132)
    || v9 > *(_DWORD *)(v3 + 16)
    || *(unsigned __int16 *)(v63 + 134) != v8 )
  {
    v52 = *(unsigned __int8 *)(v63 + 133);
    v53 = *(unsigned __int8 *)(v63 + 132);
    v54 = *(_QWORD *)(v4 + 64);
    v51 = 104;
    goto LABEL_60;
  }
  v10 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 16LL * (v9 - 1));
  v11 = 56LL * (v9 - 1);
  v12 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 1);
  if ( v12 != 2 || *(_WORD *)(v63 + 130) )
  {
    if ( v12 == 3 )
    {
      if ( v10 != -1 )
      {
        v28 = *(_QWORD *)(v63 + 40);
        v14 = 0;
        *(_DWORD *)v28 = 0;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          4u,
          0xAu,
          0x6Eu,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v9,
          v10);
        if ( (_BYTE)KdDebuggerEnabled
          && *(_BYTE *)(v3 + 56)
          && (v47 = *(_QWORD *)(v3 + 8), v48 = 0, (*(_QWORD *)(v47 + 232) & 0x8000000000000LL) != 0)
          && HIBYTE(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 80) + 72LL) + 36LL)) == v9 )
        {
          LOBYTE(v48) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v48,
            10,
            111,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v9);
          v49 = *(_WORD *)v28 & 0xFC04 | 0x2A0;
          v50 = *(_WORD *)(v28 + 2) & 0xFFF6;
          *(_WORD *)v28 = v49;
          v50 &= 0xFF0Fu;
          *(_WORD *)(v28 + 2) = v50;
          LODWORD(v60) = v50;
          *(_DWORD *)v58 = v49;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            4u,
            0xAu,
            0x70u,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *(_QWORD *)v58,
            v60);
        }
        else
        {
          v29 = *(_WORD *)v28 ^ ((unsigned __int8)v10 ^ (unsigned __int8)*(_WORD *)v28) & 1;
          v30 = ((unsigned __int8)v29 ^ (unsigned __int8)(2 * (v10 >> 1))) & 2 ^ v29;
          v31 = ((unsigned __int8)v30 ^ v10 & 0xF8) & 8 ^ v30;
          v32 = ((unsigned __int8)v31 ^ v10 & 0xF0) & 0x10 ^ v31;
          v33 = (v32 ^ v10 & 0xFFE0) & 0x1E0 ^ v32;
          *(_WORD *)v28 = v33;
          if ( (v33 & 0x1E0) == 0x1E0 )
            *(_WORD *)v28 = v33 & 0xFE1F | 0x100;
          if ( (v10 & 0x1000000) != 0 )
            *(_WORD *)v28 = *(_WORD *)v28 & 0xFE1F | 0x140;
          v34 = *(_WORD *)v28 ^ (*(_WORD *)v28 ^ v10 & 0xFE00) & 0x200;
          v35 = *(_WORD *)(v28 + 2) ^ (*(_WORD *)(v28 + 2) ^ (v10 >> 17)) & 1;
          *(_WORD *)v28 = v34;
          v36 = ((unsigned __int8)v35 ^ (unsigned __int8)(8 * (v10 >> 20))) & 8 ^ v35;
          v37 = ((unsigned __int8)v36 ^ (unsigned __int8)(16 * (v10 >> 21))) & 0x10 ^ v36;
          v38 = ((unsigned __int8)v37 ^ (unsigned __int8)(32 * (v10 >> 19))) & 0x20 ^ v37;
          v39 = ((unsigned __int8)v38 ^ (unsigned __int8)((unsigned __int8)(v10 >> 22) << 6)) & 0x40 ^ v38;
          v40 = (v39 ^ (v10 >> 23 << 7)) & 0x80 ^ v39;
          *(_WORD *)(v28 + 2) = v40;
          LODWORD(v60) = v40;
          *(_DWORD *)v56 = v34;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            4u,
            0xAu,
            0x71u,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *(_QWORD *)v56,
            v60);
          if ( *(_WORD *)(v5 + 130) == 2 )
          {
            v41 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 16LL * (v9 - 1) + 8);
            *(_DWORD *)(v28 + 4) = 0;
            if ( *(_WORD *)(*(_QWORD *)(v3 + 48) + v11 + 46) || (v10 & 0x3C00) != 0x400 )
              *(_DWORD *)(v28 + 4) = (v10 >> 10) & 0xF ^ ((v10 >> 10) & 0xF ^ (unsigned __int8)(v10 >> 6)) & 0xF0;
            else
              *(_DWORD *)(v28 + 4) = 68;
            v42 = ((unsigned __int16)(v41 >> 8) ^ *(_WORD *)(v28 + 4) ^ ((unsigned __int16)(v41 >> 8) ^ (unsigned __int16)*(_DWORD *)(v28 + 4)) & 0xF00) & 0xF000 ^ *(_DWORD *)(v28 + 4) ^ ((unsigned __int16)(v41 >> 8) ^ (unsigned __int16)*(_DWORD *)(v28 + 4)) & 0xF00;
            *(_DWORD *)(v28 + 4) = v42;
            v57 = v42;
            LOBYTE(v42) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
              v42,
              10,
              114,
              (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
              v57);
          }
        }
        goto LABEL_23;
      }
      v43 = 109;
      goto LABEL_38;
    }
    v51 = 115;
    v52 = *(unsigned __int8 *)(v63 + 134);
    v53 = *(unsigned __int8 *)(v63 + 133);
    v54 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL);
LABEL_60:
    WPP_RECORDER_SF_DDDDDDDD(v54, v52, v53, v51);
    *(_DWORD *)(v5 + 4) = -1073741820;
    v14 = -1073741823;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v14);
  }
  if ( v10 == -1 )
  {
    v43 = 105;
LABEL_38:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      v43,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    LOBYTE(v44) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v44);
LABEL_62:
    *(_DWORD *)(v5 + 4) = -1073713152;
    v14 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v14);
  }
  v13 = *(unsigned __int16 **)(v63 + 40);
  v14 = 0;
  *(_DWORD *)v13 = 0;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    4u,
    0xAu,
    0x6Au,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v9,
    v10);
  v16 = *v13 ^ ((unsigned __int8)v10 ^ (unsigned __int8)*v13) & 1;
  v17 = (v10 >> 5) & 0xF;
  v18 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(2 * (v10 >> 1))) & 2;
  *v13 = v18;
  if ( v17 < 4 || v17 >= 0xB )
  {
    if ( v17 == 2 )
    {
      v45 = v18 | 0x20;
    }
    else
    {
      if ( v17 != 3 )
      {
        if ( v17 == 11 )
        {
          *v13 = v18 | 0x800;
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v15,
            10,
            107,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v9);
          goto LABEL_16;
        }
        if ( v17 != 15 )
          goto LABEL_16;
      }
      v45 = v18 | 4;
    }
    *v13 = v45;
  }
LABEL_16:
  v19 = *v13 ^ (*v13 ^ (8 * (v10 >> 3))) & 8;
  v20 = ((unsigned __int8)v19 ^ v10 & 0xF0) & 0x10 ^ v19;
  v21 = (v20 ^ ((unsigned __int16)(v10 >> 9) << 8)) & 0x100 ^ v20;
  v22 = (v10 >> 10) & 0xF;
  *v13 = v21;
  if ( v22 == 2 )
  {
    v46 = 512;
  }
  else
  {
    if ( v22 != 3 )
      goto LABEL_18;
    v46 = 1024;
  }
  *v13 = v46 | v21;
LABEL_18:
  if ( (v10 & 0xC000) != 0 )
    *v13 |= 0x1000u;
  v23 = v13[1] ^ (v13[1] ^ (v10 >> 17)) & 1;
  v24 = ((unsigned __int8)v23 ^ (unsigned __int8)(2 * (v10 >> 18))) & 2 ^ v23;
  v13[1] = v24;
  if ( v17 == 15 )
    v13[1] = v24 & 0xFFFB;
  else
    v13[1] = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(4 * (v10 >> 22))) & 4;
  v25 = v13[1] ^ (v13[1] ^ (8 * (v10 >> 20))) & 8;
  v26 = ((unsigned __int8)v25 ^ (unsigned __int8)(16 * (v10 >> 21))) & 0x10 ^ v25;
  v13[1] = v26;
  LODWORD(v59) = v26;
  *(_DWORD *)v55 = *v13;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    4u,
    0xAu,
    0x6Cu,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    *(_QWORD *)v55,
    v59);
  if ( v17 == 15 )
  {
    *(_DWORD *)(v5 + 4) = 1;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v14);
  }
LABEL_23:
  *(_DWORD *)(v5 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v14);
}
