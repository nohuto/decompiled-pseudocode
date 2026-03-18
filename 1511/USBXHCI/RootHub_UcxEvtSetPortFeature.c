/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C00061E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C001F190 (Controller_SetControllerGone.c)
 *     RootHub_ForceU0AndWait @ 0x1C0026A6C (RootHub_ForceU0AndWait.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002798C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027F98 (WPP_RECORDER_SF_DDDDDDDD.c)
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
  int v15; // edx
  KIRQL v16; // di
  int *v17; // rbp
  int v18; // ebx
  int v19; // edx
  int v20; // ebx
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // r9d
  int v25; // r15d
  KIRQL v27; // bp
  int v28; // ebx
  int v29; // edx
  int v30; // edi
  int v31; // edx
  int *v32; // rbx
  __int64 v33; // rdx
  int v34; // r9d
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // r10d
  unsigned int v38; // r11d
  unsigned int v39; // ebx
  int v40; // edi
  int v41; // ebp
  unsigned int v42; // r10d
  int v43; // r11d
  __int64 v44; // rcx
  unsigned int v45; // ecx
  __int64 v46; // r10
  int v47; // ebx
  int v48; // ebx
  int v49; // ebx
  KIRQL v50; // bp
  int v51; // ebx
  int v52; // edx
  int v53; // edi
  int v54; // edx
  int v55; // edx
  int *v56; // rbp
  int v57; // ebx
  int v58; // ebx
  int v59; // edx
  int v60; // edx
  KIRQL v61; // bp
  int *v62; // rdi
  int v63; // ebx
  int v64; // edx
  int v65; // ebx
  int v66; // edx
  int v67; // edx
  int v68; // ebx
  int v69; // ebx
  int v70; // edx
  KIRQL v71; // bp
  int *v72; // rdi
  int v73; // ebx
  int v74; // edx
  int v75; // edx
  int v76; // ebx
  unsigned __int64 v77; // rdx
  KIRQL v78; // di
  int *v79; // rbp
  int v80; // ebx
  int v81; // edx
  int v82; // ebx
  int v83; // edx
  KIRQL v84; // di
  int *v85; // rbp
  int v86; // ebx
  int v87; // edx
  unsigned int v88; // ebx
  int v89; // edx
  KIRQL v90; // di
  int *v91; // rbp
  int v92; // ebx
  int v93; // edx
  int v94; // ebx
  int v95; // edx
  int *v96; // rbp
  int v97; // ebx
  int v98; // ebx
  int v99; // edx
  int v100; // edx
  int *v101; // rbp
  int v102; // ebx
  int v103; // ebx
  int v104; // edx
  int v105; // edx
  int v106; // edx
  int v107; // ebx
  int v108; // edx
  int v109; // ebx
  unsigned int v110; // ebx
  int v111; // edx
  __int64 v112; // r8
  int *v113; // rdi
  int v114; // ebx
  int v115; // edx
  int v116; // eax
  __int64 v117; // rcx
  signed __int32 v118[8]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v119; // [rsp+28h] [rbp-C0h]
  __int64 v120; // [rsp+30h] [rbp-B8h]
  unsigned int v121; // [rsp+38h] [rbp-B0h]
  unsigned int v122; // [rsp+40h] [rbp-A8h]
  unsigned int v123; // [rsp+48h] [rbp-A0h]
  unsigned int v124; // [rsp+50h] [rbp-98h]
  unsigned int v125; // [rsp+58h] [rbp-90h]
  int v126; // [rsp+60h] [rbp-88h]
  int *v127; // [rsp+70h] [rbp-78h]
  KIRQL v128; // [rsp+78h] [rbp-70h]
  __int64 v129; // [rsp+80h] [rbp-68h] BYREF
  __int64 v130; // [rsp+88h] [rbp-60h]
  __int64 v131; // [rsp+90h] [rbp-58h]
  __int64 v132; // [rsp+98h] [rbp-50h]
  __int64 v133; // [rsp+A0h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041228);
  v129 = 40LL;
  v130 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v129);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v130;
  v6 = *(_BYTE *)(*(_QWORD *)(v4 + 80) + 16LL);
  if ( !v6 || *(_BYTE *)(v4 + 285) )
  {
    v116 = *(unsigned __int8 *)(v4 + 285);
    v117 = *(_QWORD *)(v4 + 64);
    LODWORD(v120) = v116;
    LODWORD(v119) = v6;
    WPP_RECORDER_SF_dd(v117, 2u, 3u, 0xD9u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v119, v120);
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x74u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
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
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    LOBYTE(v33) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v33);
LABEL_84:
    v25 = -1073741810;
    *(_DWORD *)(v5 + 4) = -1073713152;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v25);
  }
  if ( (v7 & 1) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x76u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    *(_DWORD *)(v5 + 4) = -1073741807;
    v25 = -1073741630;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v25);
  }
  v8 = *(_BYTE *)(v130 + 128);
  v9 = *(unsigned __int16 *)(v130 + 130);
  v10 = *(unsigned __int8 *)(v130 + 132);
  v11 = *(unsigned __int8 *)(v130 + 133);
  if ( v8 != 35
    || *(_BYTE *)(v130 + 129) != 3
    || !*(_BYTE *)(v130 + 132)
    || v10 > *(_DWORD *)(v3 + 16)
    || *(_WORD *)(v130 + 134) )
  {
    v34 = 119;
    v35 = *(unsigned __int8 *)(v130 + 134);
    v36 = *(unsigned __int8 *)(v130 + 131);
    v42 = *(unsigned __int8 *)(v130 + 130);
    v43 = *(unsigned __int8 *)(v130 + 129);
    v126 = *(unsigned __int8 *)(v130 + 135);
    v125 = v35;
    v124 = v11;
    v123 = v10;
    v122 = v36;
    v121 = v42;
    LODWORD(v120) = v43;
    LODWORD(v119) = v8;
    goto LABEL_31;
  }
  v12 = v10 - 1;
  v13 = 56 * v12;
  v127 = (int *)(16 * v12 + *(_QWORD *)(v3 + 40));
  v14 = *(_BYTE *)(56 * v12 + *(_QWORD *)(v3 + 48) + 1);
  if ( v14 != 2 )
  {
    if ( v14 != 3 )
    {
      v45 = *(unsigned __int8 *)(v130 + 134);
      v34 = 175;
      v35 = *(unsigned __int8 *)(v130 + 131);
      v46 = *(_QWORD *)(v3 + 8);
      v36 = *(unsigned __int8 *)(v130 + 130);
      v126 = *(unsigned __int8 *)(v130 + 135);
      v125 = v45;
      v44 = *(_QWORD *)(v46 + 64);
      v124 = v11;
      v123 = v10;
      v122 = v35;
      v121 = v36;
      LODWORD(v120) = 3;
      LODWORD(v119) = 35;
      goto LABEL_33;
    }
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v12,
      10,
      145,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
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
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v28 = *v127;
          LOBYTE(v29) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v29,
            10,
            168,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v127);
          v30 = v28 & 0xC200 | ((v11 & 7) << 25);
          LOBYTE(v31) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v31,
            10,
            169,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v30);
          v32 = v127;
          *v127 = v30;
          _InterlockedOr(v118, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v27);
          v23 = *v32;
          v24 = 170;
          goto LABEL_15;
        }
        v34 = 167;
LABEL_29:
        v35 = *(unsigned __int8 *)(v5 + 134);
        v36 = *(unsigned __int8 *)(v5 + 133);
        v37 = *(unsigned __int8 *)(v5 + 132);
        v38 = *(unsigned __int8 *)(v5 + 131);
        v39 = *(unsigned __int8 *)(v5 + 130);
        v40 = *(unsigned __int8 *)(v5 + 129);
        v41 = *(unsigned __int8 *)(v5 + 128);
        v126 = *(unsigned __int8 *)(v5 + 135);
        v125 = v35;
        v124 = v36;
        v123 = v37;
        v122 = v38;
        v121 = v39;
        LODWORD(v120) = v40;
        LODWORD(v119) = v41;
LABEL_31:
        v44 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL);
LABEL_33:
        WPP_RECORDER_SF_DDDDDDDD(v44, v35, v36, v34);
        *(_DWORD *)(v5 + 4) = -1073741820;
        v25 = -1073741823;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v25);
      }
      if ( v11 )
      {
        v34 = 146;
        goto LABEL_29;
      }
    }
    if ( v9 != 27 )
    {
      v77 = 0x1C0000000uLL;
      switch ( v9 )
      {
        case 4:
          v78 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v79 = v127;
          v80 = *v127;
          LOBYTE(v81) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v81,
            10,
            147,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v127);
          v82 = v80 & 0xE00C200 | 0x10;
          LOBYTE(v83) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v83,
            10,
            148,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v82);
          *v127 = v82;
          _InterlockedOr(v118, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v78);
          v23 = *v79;
          v24 = 149;
          goto LABEL_15;
        case 5:
          if ( v11 > 5 )
          {
            v34 = 163;
            goto LABEL_29;
          }
          if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 232LL) & 0x80000LL) == 0 )
            goto LABEL_70;
          if ( !v11 )
            goto LABEL_71;
          v25 = RootHub_ForceU0AndWait(v3, v10);
          if ( v25 < 0 )
            goto LABEL_80;
LABEL_70:
          if ( v11 )
            goto LABEL_72;
LABEL_71:
          v25 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, 0LL);
          if ( v25 < 0 )
            goto LABEL_80;
LABEL_72:
          v128 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          if ( v11 == 3 )
            *(_BYTE *)(v13 + *(_QWORD *)(v3 + 48) + 6) = 0;
          v107 = *v127;
          LOBYTE(v106) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v106,
            10,
            164,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v127);
          v109 = v107 & 0xE00C200;
          if ( v11 == 4 )
            v110 = v109 | 2;
          else
            v110 = v109 & 0xFFFFFE1F | (32 * (v11 & 0xF | 0x800));
          LOBYTE(v108) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v108,
            10,
            165,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v110);
          *v127 = v110;
          _InterlockedOr(v118, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v128);
          LOBYTE(v111) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v111,
            10,
            166,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v127);
          if ( v11 == 3 && (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 232LL) & 0x4000000LL) != 0 )
          {
            LOBYTE(v112) = 1;
            v25 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, v112);
            if ( v25 < 0 )
              goto LABEL_80;
          }
          goto LABEL_16;
        case 8:
          v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v91 = v127;
          v92 = *v127;
          LOBYTE(v93) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v93,
            10,
            153,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v127);
          v94 = v92 & 0xE00C000 | 0x200;
          LOBYTE(v95) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v95,
            10,
            154,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v94);
          *v127 = v94;
          _InterlockedOr(v118, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v90);
          v23 = *v91;
          v24 = 155;
          goto LABEL_15;
        case 23:
          v96 = v127;
          v97 = v127[1];
          LOBYTE(v77) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v77,
            10,
            157,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v97);
          v98 = (unsigned __int8)(v11 ^ v97) ^ v97;
          LOBYTE(v99) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v99,
            10,
            158,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v98);
          v127[1] = v98;
          _InterlockedOr(v118, 0);
          LOBYTE(v100) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v100,
            10,
            159,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v96[1]);
          *(_BYTE *)(v13 + *(_QWORD *)(v3 + 48) + 9) = v11;
          goto LABEL_16;
        case 24:
          v101 = v127;
          v102 = v127[1];
          LOBYTE(v77) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v77,
            10,
            160,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v102);
          v103 = ((unsigned __int16)v102 ^ (unsigned __int16)((_WORD)v11 << 8)) & 0xFF00 ^ v102;
          LOBYTE(v104) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v104,
            10,
            161,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v103);
          v127[1] = v103;
          _InterlockedOr(v118, 0);
          LOBYTE(v105) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v105,
            10,
            162,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v101[1]);
          *(_BYTE *)(v13 + *(_QWORD *)(v3 + 48) + 10) = v11;
          goto LABEL_16;
        case 28:
          v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v85 = v127;
          v86 = *v127;
          LOBYTE(v87) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v87,
            10,
            150,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v127);
          v88 = v86 & 0xE00C200 | 0x80000000;
          LOBYTE(v89) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v89,
            10,
            151,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v88);
          *v127 = v88;
          _InterlockedOr(v118, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v84);
          v23 = *v85;
          v24 = 152;
          goto LABEL_15;
        case 30:
          v113 = v127;
          v114 = v127[1];
          LOBYTE(v77) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v77,
            10,
            171,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v114);
          v114 |= 0x10000u;
          LOBYTE(v115) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v115,
            10,
            172,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v114);
          v127[1] = v114;
          _InterlockedOr(v118, 0);
          v23 = v113[1];
          v24 = 173;
          goto LABEL_15;
        default:
          v34 = 174;
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
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v10,
    v9,
    v11);
  if ( (unsigned int)(v9 - 21) > 1 && v11 )
  {
    v34 = 121;
    goto LABEL_29;
  }
  if ( v9 == 8 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
    v17 = v127;
    v18 = *v127;
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v19,
      10,
      133,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      *v127);
    v20 = v18 & 0xE00C000 | 0x200;
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v21,
      10,
      134,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v20);
    *v127 = v20;
    _InterlockedOr(v118, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v16);
    v23 = *v17;
    v24 = 135;
    goto LABEL_15;
  }
  v47 = v9 - 2;
  if ( !v47 )
  {
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 232LL) & 0x8000000LL) != 0 )
    {
      v25 = RootHub_ForceU0AndWait(v3, v10);
      if ( v25 < 0 )
      {
LABEL_80:
        *(_DWORD *)(v5 + 4) = -1073741820;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v25);
      }
    }
    v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
    *(_BYTE *)(v13 + *(_QWORD *)(v3 + 48) + 6) = 0;
    v72 = v127;
    v73 = *v127;
    LOBYTE(v74) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v74,
      10,
      129,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      *v127);
    if ( (v73 & 2) == 0 || (v73 & 0x1E0u) >= 0x60 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        3u,
        0xAu,
        0x82u,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    v76 = v73 & 0xE00C200 | 0x10060;
    LOBYTE(v75) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v75,
      10,
      131,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v76);
    *v127 = v76;
    _InterlockedOr(v118, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v71);
    v23 = *v72;
    v24 = 132;
    goto LABEL_15;
  }
  v48 = v47 - 2;
  if ( !v48 )
  {
    v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
    v62 = v127;
    if ( *(_BYTE *)(v13 + *(_QWORD *)(v3 + 48) + 8) )
    {
      v63 = v127[1];
      LOBYTE(v60) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        v60,
        10,
        122,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v63);
      v63 &= 0xFFFE0007;
      LOBYTE(v64) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        v64,
        10,
        123,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v63);
      v127[1] = v63;
      _InterlockedOr(v118, 0);
      v65 = v62[3];
      LOBYTE(v66) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        v66,
        10,
        124,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v65);
      v65 &= 0xFFFFC000;
      LOBYTE(v67) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        v67,
        10,
        125,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v65);
      v62[3] = v65;
      _InterlockedOr(v118, 0);
      *(_BYTE *)(v13 + *(_QWORD *)(v3 + 48) + 8) = 0;
    }
    v68 = *v62;
    LOBYTE(v60) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v60,
      10,
      126,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      *v62);
    v69 = v68 & 0xE00C200 | 0x10;
    LOBYTE(v70) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v70,
      10,
      127,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v69);
    *v62 = v69;
    _InterlockedOr(v118, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v61);
    v23 = *v62;
    v24 = 128;
    goto LABEL_15;
  }
  v49 = v48 - 17;
  if ( !v49 )
  {
    if ( v11 > 5 )
    {
      v34 = 136;
      goto LABEL_29;
    }
    v56 = v127;
    v57 = v127[1];
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v15,
      10,
      137,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v57);
    v58 = (v11 << 28) | v57 & 0xFFFFFFF;
    LOBYTE(v59) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v59,
      10,
      138,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v58);
    v127[1] = v58;
    _InterlockedOr(v118, 0);
    v23 = v56[1];
    v24 = 139;
LABEL_15:
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v22,
      10,
      v24,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v23);
LABEL_16:
    v25 = 0;
    goto LABEL_17;
  }
  if ( v49 != 1 )
  {
    v34 = 144;
    goto LABEL_29;
  }
  if ( v11 > 3 )
  {
    v34 = 140;
    goto LABEL_29;
  }
  v25 = 0;
  if ( v11 == 3 )
    LOBYTE(v11) = 0;
  v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
  v51 = *v127;
  LOBYTE(v52) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v52,
    10,
    141,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    *v127);
  v53 = v51 & 0xE000200 | ((v11 & 3) << 14);
  LOBYTE(v54) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v54,
    10,
    142,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v53);
  *v127 = v53;
  _InterlockedOr(v118, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v50);
  LOBYTE(v55) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v55,
    10,
    143,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    *v127);
LABEL_17:
  *(_DWORD *)(v5 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v25);
}
