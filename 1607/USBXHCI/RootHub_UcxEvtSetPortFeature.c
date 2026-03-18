/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C0006280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C001F5F0 (Controller_SetControllerGone.c)
 *     RootHub_ForceU0AndWait @ 0x1C0027088 (RootHub_ForceU0AndWait.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0027FC0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C00285D0 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int8 v6; // dl
  int v7; // eax
  unsigned __int8 v8; // cl
  int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r13
  char v14; // cl
  KIRQL v15; // di
  int *v16; // rbp
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  int v24; // r15d
  KIRQL v26; // bp
  __int16 v27; // bx
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rcx
  int *v31; // rbx
  __int64 v32; // rdx
  int v33; // r9d
  unsigned int v34; // edx
  unsigned int v35; // r8d
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  unsigned int v38; // ebx
  int v39; // edi
  int v40; // ebp
  unsigned int v41; // r10d
  int v42; // r11d
  __int64 v43; // rcx
  unsigned int v44; // ecx
  __int64 v45; // r10
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  KIRQL v49; // bp
  int v50; // ebx
  __int64 v51; // rcx
  int v52; // edi
  __int64 v53; // rcx
  __int64 v54; // rcx
  int *v55; // rbp
  int v56; // ebx
  __int64 v57; // rcx
  int v58; // ebx
  __int64 v59; // rcx
  KIRQL v60; // bp
  int *v61; // rdi
  int v62; // ebx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // ebx
  __int64 v69; // rcx
  int v70; // ebx
  __int64 v71; // rcx
  KIRQL v72; // bp
  int *v73; // rdi
  int v74; // ebx
  __int64 v75; // rcx
  int v76; // ebx
  __int64 v77; // rcx
  KIRQL v78; // di
  int *v79; // rbp
  int v80; // ebx
  __int64 v81; // rcx
  int v82; // ebx
  __int64 v83; // rcx
  KIRQL v84; // di
  int *v85; // rbp
  int v86; // ebx
  __int64 v87; // rcx
  unsigned int v88; // ebx
  __int64 v89; // rcx
  KIRQL v90; // di
  int *v91; // rbp
  int v92; // ebx
  __int64 v93; // rcx
  int v94; // ebx
  __int64 v95; // rcx
  int *v96; // rbp
  int v97; // ebx
  __int64 v98; // rcx
  int v99; // ebx
  __int64 v100; // rcx
  __int64 v101; // rcx
  int *v102; // rbp
  int v103; // ebx
  __int64 v104; // rcx
  int v105; // ebx
  __int64 v106; // rcx
  __int64 v107; // rcx
  int v108; // ebx
  __int64 v109; // rcx
  int v110; // ebx
  unsigned int v111; // ebx
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // r8
  int *v115; // rdi
  int v116; // ebx
  __int64 v117; // rcx
  __int64 v118; // rcx
  int v119; // eax
  __int64 v120; // rcx
  signed __int32 v121[8]; // [rsp+0h] [rbp-108h] BYREF
  __int64 v122; // [rsp+28h] [rbp-E0h]
  __int64 v123; // [rsp+30h] [rbp-D8h]
  unsigned int v124; // [rsp+38h] [rbp-D0h]
  unsigned int v125; // [rsp+40h] [rbp-C8h]
  unsigned int v126; // [rsp+48h] [rbp-C0h]
  unsigned int v127; // [rsp+50h] [rbp-B8h]
  unsigned int v128; // [rsp+58h] [rbp-B0h]
  int v129; // [rsp+60h] [rbp-A8h]
  int *v130; // [rsp+70h] [rbp-98h]
  KIRQL v131; // [rsp+78h] [rbp-90h]
  __int128 v132; // [rsp+80h] [rbp-88h]
  __int128 v133; // [rsp+90h] [rbp-78h]
  __int64 v134; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v135; // [rsp+A8h] [rbp-60h]
  __int64 v136; // [rsp+B0h] [rbp-58h]
  __int64 v137; // [rsp+B8h] [rbp-50h]
  __int64 v138; // [rsp+C0h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043200);
  v134 = 40LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v134);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v135;
  v6 = *(_BYTE *)(*(_QWORD *)(v4 + 80) + 16LL);
  if ( !v6 || *(_BYTE *)(v4 + 293) )
  {
    v119 = *(unsigned __int8 *)(v4 + 293);
    v120 = *(_QWORD *)(v4 + 64);
    LODWORD(v123) = v119;
    LODWORD(v122) = v6;
    WPP_RECORDER_SF_dd(v120, 2u, 3u, 0xDCu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v122, v123);
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x74u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids);
    goto LABEL_84;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL);
  if ( v7 == -1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x75u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids);
    LOBYTE(v32) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v32);
LABEL_84:
    v24 = -1073741810;
    *(_DWORD *)(v5 + 4) = -1073713152;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v24);
  }
  if ( (v7 & 1) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x76u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids);
    *(_DWORD *)(v5 + 4) = -1073741807;
    v24 = -1073741630;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v24);
  }
  v8 = *(_BYTE *)(v135 + 128);
  v9 = *(unsigned __int16 *)(v135 + 130);
  v10 = *(unsigned __int8 *)(v135 + 132);
  v11 = *(unsigned __int8 *)(v135 + 133);
  if ( v8 != 35
    || *(_BYTE *)(v135 + 129) != 3
    || !*(_BYTE *)(v135 + 132)
    || v10 > *(_DWORD *)(v3 + 16)
    || *(_WORD *)(v135 + 134) )
  {
    v33 = 119;
    v34 = *(unsigned __int8 *)(v135 + 134);
    v35 = *(unsigned __int8 *)(v135 + 131);
    v41 = *(unsigned __int8 *)(v135 + 130);
    v42 = *(unsigned __int8 *)(v135 + 129);
    v129 = *(unsigned __int8 *)(v135 + 135);
    v128 = v34;
    v127 = v11;
    v126 = v10;
    v125 = v35;
    v124 = v41;
    LODWORD(v123) = v42;
    LODWORD(v122) = v8;
    goto LABEL_31;
  }
  v12 = v10 - 1;
  v13 = 56 * v12;
  v130 = (int *)(16 * v12 + *(_QWORD *)(v3 + 40));
  v14 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 56 * v12 + 1);
  if ( v14 != 2 )
  {
    if ( v14 != 3 )
    {
      v44 = *(unsigned __int8 *)(v135 + 134);
      v33 = 175;
      v34 = *(unsigned __int8 *)(v135 + 131);
      v45 = *(_QWORD *)(v3 + 8);
      v35 = *(unsigned __int8 *)(v135 + 130);
      v129 = *(unsigned __int8 *)(v135 + 135);
      v128 = v44;
      v43 = *(_QWORD *)(v45 + 64);
      v127 = v11;
      v126 = v10;
      v125 = v34;
      v124 = v35;
      LODWORD(v123) = 3;
      LODWORD(v122) = 35;
      goto LABEL_33;
    }
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v12,
      10,
      145,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v10,
      v9,
      v11);
    if ( v9 != 5 && (unsigned int)(v9 - 23) > 1 )
    {
      if ( v9 == 27 )
      {
LABEL_23:
        if ( (v11 & 0xF8) == 0 )
        {
          v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
          v28 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = *v130;
          v27 = v122;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v28 + 64),
            4u,
            0xAu,
            0xA8u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v29 = v27 & 0xC200 | ((v11 & 7) << 25);
          v30 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v29;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v30 + 64),
            4u,
            0xAu,
            0xA9u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v31 = v130;
          *v130 = v29;
          _InterlockedOr(v121, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v26);
          v21 = *v31;
          v22 = 170;
          goto LABEL_15;
        }
        v33 = 167;
LABEL_29:
        v34 = *(unsigned __int8 *)(v5 + 134);
        v35 = *(unsigned __int8 *)(v5 + 133);
        v36 = *(unsigned __int8 *)(v5 + 132);
        v37 = *(unsigned __int8 *)(v5 + 131);
        v38 = *(unsigned __int8 *)(v5 + 130);
        v39 = *(unsigned __int8 *)(v5 + 129);
        v40 = *(unsigned __int8 *)(v5 + 128);
        v129 = *(unsigned __int8 *)(v5 + 135);
        v128 = v34;
        v127 = v35;
        v126 = v36;
        v125 = v37;
        v124 = v38;
        LODWORD(v123) = v39;
        LODWORD(v122) = v40;
LABEL_31:
        v43 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL);
LABEL_33:
        WPP_RECORDER_SF_DDDDDDDD(v43, v34, v35, v33);
        *(_DWORD *)(v5 + 4) = -1073741820;
        v24 = -1073741823;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v24);
      }
      if ( v11 )
      {
        v33 = 146;
        goto LABEL_29;
      }
    }
    if ( v9 != 27 )
    {
      switch ( v9 )
      {
        case 4:
          v78 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
          v79 = v130;
          v81 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = *v130;
          v80 = v122;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v81 + 64),
            4u,
            0xAu,
            0x93u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v82 = v80 & 0xE00C200 | 0x10;
          v83 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v82;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v83 + 64),
            4u,
            0xAu,
            0x94u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          *v130 = v82;
          _InterlockedOr(v121, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v78);
          v21 = *v79;
          v22 = 149;
          goto LABEL_15;
        case 5:
          if ( v11 > 5 )
          {
            v33 = 163;
            goto LABEL_29;
          }
          v133 = *(_OWORD *)(*(_QWORD *)(v3 + 8) + 232LL);
          if ( (v133 & 0x80000) == 0 )
            goto LABEL_70;
          if ( !v11 )
            goto LABEL_71;
          v24 = RootHub_ForceU0AndWait(v3, v10);
          if ( v24 < 0 )
            goto LABEL_80;
LABEL_70:
          if ( v11 )
            goto LABEL_72;
LABEL_71:
          v24 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, 0LL);
          if ( v24 < 0 )
            goto LABEL_80;
LABEL_72:
          v131 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
          if ( v11 == 3 )
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 6) = 0;
          v109 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = *v130;
          v108 = v122;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v109 + 64),
            4u,
            0xAu,
            0xA4u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v110 = v108 & 0xE00C200;
          if ( v11 == 4 )
            v111 = v110 | 2;
          else
            v111 = v110 & 0xFFFFFE1F | (32 * (v11 & 0xF | 0x800));
          v112 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v111;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v112 + 64),
            4u,
            0xAu,
            0xA5u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          *v130 = v111;
          _InterlockedOr(v121, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v131);
          v113 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = *v130;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v113 + 64),
            4u,
            0xAu,
            0xA6u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          if ( v11 == 3 && (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 232LL) & 0x4000000LL) != 0 )
          {
            LOBYTE(v114) = 1;
            v24 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, v114);
            if ( v24 < 0 )
              goto LABEL_80;
          }
          goto LABEL_16;
        case 8:
          v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
          v91 = v130;
          v93 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = *v130;
          v92 = v122;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v93 + 64),
            4u,
            0xAu,
            0x99u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v94 = v92 & 0xE00C000 | 0x200;
          v95 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v94;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v95 + 64),
            4u,
            0xAu,
            0x9Au,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          *v130 = v94;
          _InterlockedOr(v121, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v90);
          v21 = *v91;
          v22 = 155;
          goto LABEL_15;
        case 23:
          v96 = v130;
          v98 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v130[1];
          v97 = v122;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v98 + 64),
            4u,
            0xAu,
            0x9Du,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v99 = (unsigned __int8)(v11 ^ v97) ^ v97;
          v100 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v99;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v100 + 64),
            4u,
            0xAu,
            0x9Eu,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v130[1] = v99;
          _InterlockedOr(v121, 0);
          v101 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v96[1];
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v101 + 64),
            4u,
            0xAu,
            0x9Fu,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 9) = v11;
          goto LABEL_16;
        case 24:
          v102 = v130;
          v104 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v130[1];
          v103 = v122;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v104 + 64),
            4u,
            0xAu,
            0xA0u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v105 = ((unsigned __int16)v103 ^ (unsigned __int16)((_WORD)v11 << 8)) & 0xFF00 ^ v103;
          v106 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v105;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v106 + 64),
            4u,
            0xAu,
            0xA1u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v130[1] = v105;
          _InterlockedOr(v121, 0);
          v107 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v102[1];
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v107 + 64),
            4u,
            0xAu,
            0xA2u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 10) = v11;
          goto LABEL_16;
        case 28:
          v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
          v85 = v130;
          v87 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = *v130;
          v86 = v122;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v87 + 64),
            4u,
            0xAu,
            0x96u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v88 = v86 & 0xE00C200 | 0x80000000;
          v89 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v88;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v89 + 64),
            4u,
            0xAu,
            0x97u,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          *v130 = v88;
          _InterlockedOr(v121, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v84);
          v21 = *v85;
          v22 = 152;
          goto LABEL_15;
        case 30:
          v115 = v130;
          v117 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v130[1];
          v116 = v122;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v117 + 64),
            4u,
            0xAu,
            0xABu,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v116 |= 0x10000u;
          v118 = *(_QWORD *)(v3 + 8);
          LODWORD(v122) = v116;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v118 + 64),
            4u,
            0xAu,
            0xACu,
            (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
            v122);
          v130[1] = v116;
          _InterlockedOr(v121, 0);
          v21 = v115[1];
          v22 = 173;
          goto LABEL_15;
        default:
          v33 = 174;
          goto LABEL_29;
      }
    }
    goto LABEL_23;
  }
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v12,
    10,
    120,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v10,
    v9,
    v11);
  if ( (unsigned int)(v9 - 21) > 1 && v11 )
  {
    v33 = 121;
    goto LABEL_29;
  }
  if ( v9 == 8 )
  {
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
    v16 = v130;
    v18 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = *v130;
    v17 = v122;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v18 + 64),
      4u,
      0xAu,
      0x85u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
    v19 = v17 & 0xE00C000 | 0x200;
    v20 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = v19;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v20 + 64),
      4u,
      0xAu,
      0x86u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
    *v130 = v19;
    _InterlockedOr(v121, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v15);
    v21 = *v16;
    v22 = 135;
    goto LABEL_15;
  }
  v46 = v9 - 2;
  if ( !v46 )
  {
    v132 = *(_OWORD *)(*(_QWORD *)(v3 + 8) + 232LL);
    if ( (v132 & 0x8000000) != 0 )
    {
      v24 = RootHub_ForceU0AndWait(v3, v10);
      if ( v24 < 0 )
      {
LABEL_80:
        *(_DWORD *)(v5 + 4) = -1073741820;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v24);
      }
    }
    v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
    *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 6) = 0;
    v73 = v130;
    v75 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = *v130;
    v74 = v122;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v75 + 64),
      4u,
      0xAu,
      0x81u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
    if ( (v74 & 2) == 0 || (v74 & 0x1E0u) >= 0x60 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        3u,
        0xAu,
        0x82u,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids);
    v76 = v74 & 0xE00C200 | 0x10060;
    v77 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = v76;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v77 + 64),
      4u,
      0xAu,
      0x83u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
    *v130 = v76;
    _InterlockedOr(v121, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v72);
    v21 = *v73;
    v22 = 132;
    goto LABEL_15;
  }
  v47 = v46 - 2;
  if ( !v47 )
  {
    v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
    v61 = v130;
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 8) )
    {
      v63 = *(_QWORD *)(v3 + 8);
      LODWORD(v122) = v130[1];
      v62 = v122;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v63 + 64),
        4u,
        0xAu,
        0x7Au,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v122);
      v62 &= 0xFFFE0007;
      v64 = *(_QWORD *)(v3 + 8);
      LODWORD(v122) = v62;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v64 + 64),
        4u,
        0xAu,
        0x7Bu,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v122);
      v130[1] = v62;
      _InterlockedOr(v121, 0);
      v66 = *(_QWORD *)(v3 + 8);
      LODWORD(v122) = v61[3];
      v65 = v122;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v66 + 64),
        4u,
        0xAu,
        0x7Cu,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v122);
      v65 &= 0xFFFFC000;
      v67 = *(_QWORD *)(v3 + 8);
      LODWORD(v122) = v65;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v67 + 64),
        4u,
        0xAu,
        0x7Du,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v122);
      v61[3] = v65;
      _InterlockedOr(v121, 0);
      *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 8) = 0;
    }
    v69 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = *v61;
    v68 = v122;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v69 + 64),
      4u,
      0xAu,
      0x7Eu,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
    v70 = v68 & 0xE00C200 | 0x10;
    v71 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = v70;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v71 + 64),
      4u,
      0xAu,
      0x7Fu,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
    *v61 = v70;
    _InterlockedOr(v121, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v60);
    v21 = *v61;
    v22 = 128;
    goto LABEL_15;
  }
  v48 = v47 - 17;
  if ( !v48 )
  {
    if ( v11 > 5 )
    {
      v33 = 136;
      goto LABEL_29;
    }
    v55 = v130;
    v57 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = v130[1];
    v56 = v122;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v57 + 64),
      4u,
      0xAu,
      0x89u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
    v58 = (v11 << 28) | v56 & 0xFFFFFFF;
    v59 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = v58;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v59 + 64),
      4u,
      0xAu,
      0x8Au,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
    v130[1] = v58;
    _InterlockedOr(v121, 0);
    v21 = v55[1];
    v22 = 139;
LABEL_15:
    v23 = *(_QWORD *)(v3 + 8);
    LODWORD(v122) = v21;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v23 + 64),
      4u,
      0xAu,
      v22,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v122);
LABEL_16:
    v24 = 0;
    goto LABEL_17;
  }
  if ( v48 != 1 )
  {
    v33 = 144;
    goto LABEL_29;
  }
  if ( v11 > 3 )
  {
    v33 = 140;
    goto LABEL_29;
  }
  v24 = 0;
  if ( v11 == 3 )
    LOBYTE(v11) = 0;
  v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16));
  v51 = *(_QWORD *)(v3 + 8);
  LODWORD(v122) = *v130;
  v50 = v122;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v51 + 64),
    4u,
    0xAu,
    0x8Du,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v122);
  v52 = v50 & 0xE000200 | ((v11 & 3) << 14);
  v53 = *(_QWORD *)(v3 + 8);
  LODWORD(v122) = v52;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v53 + 64),
    4u,
    0xAu,
    0x8Eu,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v122);
  *v130 = v52;
  _InterlockedOr(v121, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v13 + 16), v49);
  v54 = *(_QWORD *)(v3 + 8);
  LODWORD(v122) = *v130;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v54 + 64),
    4u,
    0xAu,
    0x8Fu,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v122);
LABEL_17:
  *(_DWORD *)(v5 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v24);
}
