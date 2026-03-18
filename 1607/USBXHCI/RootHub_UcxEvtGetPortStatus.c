/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C0006640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C001F5F0 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C00285D0 (WPP_RECORDER_SF_DDDDDDDD.c)
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
  __int16 v15; // ax
  unsigned int v16; // r12d
  unsigned __int16 v17; // cx
  __int16 v18; // cx
  __int16 v19; // cx
  unsigned __int16 v20; // cx
  int v21; // eax
  __int16 v22; // cx
  unsigned __int16 v23; // cx
  __int16 v24; // ax
  unsigned __int16 v25; // ax
  __int64 v27; // r12
  __int16 v28; // cx
  __int16 v29; // cx
  __int16 v30; // cx
  __int16 v31; // cx
  __int16 v32; // cx
  int v33; // edx
  __int16 v34; // cx
  __int16 v35; // cx
  __int16 v36; // cx
  __int16 v37; // cx
  __int16 v38; // cx
  unsigned __int16 v39; // cx
  unsigned int v40; // eax
  int v41; // edx
  unsigned __int16 v42; // r9
  __int64 v43; // rdx
  unsigned __int16 v44; // cx
  __int16 v45; // dx
  __int64 v46; // rcx
  unsigned __int16 v47; // cx
  unsigned __int16 v48; // ax
  int v49; // r9d
  int v50; // edx
  int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // [rsp+28h] [rbp-C0h]
  __int64 v54; // [rsp+28h] [rbp-C0h]
  __int64 v55; // [rsp+28h] [rbp-C0h]
  __int64 v56; // [rsp+28h] [rbp-C0h]
  __int64 v57; // [rsp+30h] [rbp-B8h]
  __int64 v58; // [rsp+30h] [rbp-B8h]
  __int64 v60; // [rsp+78h] [rbp-70h] BYREF
  __int64 v61; // [rsp+80h] [rbp-68h]
  __int64 v62; // [rsp+88h] [rbp-60h]
  __int64 v63; // [rsp+90h] [rbp-58h]
  __int64 v64; // [rsp+98h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043200);
  v60 = 40LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v60);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v61;
  v6 = *(_BYTE *)(*(_QWORD *)(v4 + 80) + 16LL);
  if ( !v6 || *(_BYTE *)(v4 + 293) )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v4 + 64),
      2u,
      3u,
      0xDCu,
      (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
      v6,
      *(unsigned __int8 *)(v4 + 293));
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x67u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids);
    goto LABEL_62;
  }
  v7 = *(_WORD *)(v61 + 130);
  v8 = 4;
  v9 = *(unsigned __int16 *)(v61 + 132);
  if ( v7 == 2 )
    v8 = 8;
  if ( *(_BYTE *)(v61 + 128) != 0xA3
    || *(_BYTE *)(v61 + 129)
    || (v7 & 0xFFFD) != 0
    || !*(_WORD *)(v61 + 132)
    || v9 > *(_DWORD *)(v3 + 16)
    || *(unsigned __int16 *)(v61 + 134) != v8 )
  {
    v50 = *(unsigned __int8 *)(v61 + 133);
    v51 = *(unsigned __int8 *)(v61 + 132);
    v52 = *(_QWORD *)(v4 + 64);
    v49 = 104;
    goto LABEL_60;
  }
  v10 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 16LL * (v9 - 1));
  v11 = 56LL * (v9 - 1);
  v12 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 1);
  if ( v12 != 2 || *(_WORD *)(v61 + 130) )
  {
    if ( v12 == 3 )
    {
      if ( v10 != -1 )
      {
        v27 = *(_QWORD *)(v61 + 40);
        v14 = 0;
        *(_DWORD *)v27 = 0;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          4u,
          0xAu,
          0x6Eu,
          (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
          v9,
          v10);
        if ( (_BYTE)KdDebuggerEnabled
          && *(_BYTE *)(v3 + 56)
          && (v46 = *(_QWORD *)(v3 + 8), (*(_QWORD *)(v46 + 232) & 0x8000000000000LL) != 0)
          && HIBYTE(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 80) + 72LL) + 36LL)) == v9 )
        {
          LODWORD(v54) = v9;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            4u,
            0xAu,
            0x6Fu,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v54);
          v47 = *(_WORD *)v27 & 0xFC04 | 0x2A0;
          v48 = *(_WORD *)(v27 + 2) & 0xFFF6;
          *(_WORD *)v27 = v47;
          v48 &= 0xFF0Fu;
          *(_WORD *)(v27 + 2) = v48;
          LODWORD(v58) = v48;
          LODWORD(v56) = v47;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            4u,
            0xAu,
            0x70u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v56,
            v58);
        }
        else
        {
          v28 = *(_WORD *)v27 ^ ((unsigned __int8)v10 ^ (unsigned __int8)*(_WORD *)v27) & 1;
          v29 = ((unsigned __int8)v28 ^ (unsigned __int8)(2 * (v10 >> 1))) & 2 ^ v28;
          v30 = ((unsigned __int8)v29 ^ v10 & 0xF8) & 8 ^ v29;
          v31 = ((unsigned __int8)v30 ^ v10 & 0xF0) & 0x10 ^ v30;
          v32 = (v31 ^ v10 & 0xFFE0) & 0x1E0 ^ v31;
          *(_WORD *)v27 = v32;
          if ( (v32 & 0x1E0) == 0x1E0 )
            *(_WORD *)v27 = v32 & 0xFE1F | 0x100;
          if ( (v10 & 0x1000000) != 0 )
            *(_WORD *)v27 = *(_WORD *)v27 & 0xFE1F | 0x140;
          v33 = *(_WORD *)v27 ^ (*(_WORD *)v27 ^ v10 & 0xFE00) & 0x200;
          v34 = *(_WORD *)(v27 + 2) ^ (*(_WORD *)(v27 + 2) ^ (v10 >> 17)) & 1;
          *(_WORD *)v27 = v33;
          v35 = ((unsigned __int8)v34 ^ (unsigned __int8)(8 * (v10 >> 20))) & 8 ^ v34;
          v36 = ((unsigned __int8)v35 ^ (unsigned __int8)(16 * (v10 >> 21))) & 0x10 ^ v35;
          v37 = ((unsigned __int8)v36 ^ (unsigned __int8)(32 * (v10 >> 19))) & 0x20 ^ v36;
          v38 = ((unsigned __int8)v37 ^ (unsigned __int8)((unsigned __int8)(v10 >> 22) << 6)) & 0x40 ^ v37;
          v39 = (v38 ^ (v10 >> 23 << 7)) & 0x80 ^ v38;
          *(_WORD *)(v27 + 2) = v39;
          LODWORD(v58) = v39;
          LODWORD(v54) = v33;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            4u,
            0xAu,
            0x71u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v54,
            v58);
          if ( *(_WORD *)(v5 + 130) == 2 )
          {
            v40 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 16LL * (v9 - 1) + 8);
            *(_DWORD *)(v27 + 4) = 0;
            if ( *(_WORD *)(*(_QWORD *)(v3 + 48) + v11 + 46) || (v10 & 0x3C00) != 0x400 )
              *(_DWORD *)(v27 + 4) = (v10 >> 10) & 0xF ^ ((v10 >> 10) & 0xF ^ (unsigned __int8)(v10 >> 6)) & 0xF0;
            else
              *(_DWORD *)(v27 + 4) = 68;
            v41 = ((unsigned __int16)(v40 >> 8) ^ *(_WORD *)(v27 + 4) ^ ((unsigned __int16)(v40 >> 8) ^ (unsigned __int16)*(_DWORD *)(v27 + 4)) & 0xF00) & 0xF000 ^ *(_DWORD *)(v27 + 4) ^ ((unsigned __int16)(v40 >> 8) ^ (unsigned __int16)*(_DWORD *)(v27 + 4)) & 0xF00;
            *(_DWORD *)(v27 + 4) = v41;
            LODWORD(v55) = v41;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
              4u,
              0xAu,
              0x72u,
              (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
              v55);
          }
        }
        goto LABEL_23;
      }
      v42 = 109;
      goto LABEL_39;
    }
    v49 = 115;
    v50 = *(unsigned __int8 *)(v61 + 134);
    v51 = *(unsigned __int8 *)(v61 + 133);
    v52 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL);
LABEL_60:
    WPP_RECORDER_SF_DDDDDDDD(v52, v50, v51, v49);
    *(_DWORD *)(v5 + 4) = -1073741820;
    v14 = -1073741823;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v14);
  }
  if ( v10 == -1 )
  {
    v42 = 105;
LABEL_39:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      v42,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids);
    LOBYTE(v43) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v43);
LABEL_62:
    *(_DWORD *)(v5 + 4) = -1073713152;
    v14 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v14);
  }
  v13 = *(unsigned __int16 **)(v61 + 40);
  v14 = 0;
  *(_DWORD *)v13 = 0;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    4u,
    0xAu,
    0x6Au,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v9,
    v10);
  v15 = *v13 ^ ((unsigned __int8)v10 ^ (unsigned __int8)*v13) & 1;
  v16 = (v10 >> 5) & 0xF;
  v17 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * (v10 >> 1))) & 2;
  *v13 = v17;
  if ( v16 < 4 || v16 >= 0xB )
  {
    if ( v16 == 2 )
    {
      v44 = v17 | 0x20;
    }
    else
    {
      if ( v16 != 3 )
      {
        if ( v16 == 11 )
        {
          *v13 = v17 | 0x800;
          LODWORD(v53) = v9;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            2u,
            0xAu,
            0x6Bu,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v53);
          goto LABEL_16;
        }
        if ( v16 != 15 )
          goto LABEL_16;
      }
      v44 = v17 | 4;
    }
    *v13 = v44;
  }
LABEL_16:
  v18 = *v13 ^ (*v13 ^ (8 * (v10 >> 3))) & 8;
  v19 = ((unsigned __int8)v18 ^ v10 & 0xF0) & 0x10 ^ v18;
  v20 = (v19 ^ ((unsigned __int16)(v10 >> 9) << 8)) & 0x100 ^ v19;
  v21 = (v10 >> 10) & 0xF;
  *v13 = v20;
  if ( v21 == 2 )
  {
    v45 = 512;
  }
  else
  {
    if ( v21 != 3 )
      goto LABEL_18;
    v45 = 1024;
  }
  *v13 = v45 | v20;
LABEL_18:
  if ( (v10 & 0xC000) != 0 )
    *v13 |= 0x1000u;
  v22 = v13[1] ^ (v13[1] ^ (v10 >> 17)) & 1;
  v23 = ((unsigned __int8)v22 ^ (unsigned __int8)(2 * (v10 >> 18))) & 2 ^ v22;
  v13[1] = v23;
  if ( v16 == 15 )
    v13[1] = v23 & 0xFFFB;
  else
    v13[1] = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(4 * (v10 >> 22))) & 4;
  v24 = v13[1] ^ (v13[1] ^ (8 * (v10 >> 20))) & 8;
  v25 = ((unsigned __int8)v24 ^ (unsigned __int8)(16 * (v10 >> 21))) & 0x10 ^ v24;
  v13[1] = v25;
  LODWORD(v57) = v25;
  LODWORD(v53) = *v13;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    4u,
    0xAu,
    0x6Cu,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v53,
    v57);
  if ( v16 == 15 )
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
