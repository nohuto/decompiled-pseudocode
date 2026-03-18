/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x1C0005F20
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
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002798C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027F98 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int8 v6; // dl
  int v7; // eax
  unsigned __int8 v8; // cl
  int v9; // ebx
  unsigned int v10; // esi
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r12
  char v14; // cl
  int v15; // edx
  KIRQL v16; // si
  int *v17; // rbp
  int v18; // ebx
  int v19; // edx
  int v20; // ebx
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // r9d
  __int64 v26; // rdx
  int v27; // r9d
  unsigned int v28; // edx
  unsigned int v29; // r8d
  unsigned int v30; // r10d
  unsigned int v31; // r11d
  unsigned int v32; // ebx
  int v33; // esi
  int v34; // ebp
  unsigned int v35; // r10d
  int v36; // r11d
  __int64 v37; // rcx
  unsigned int v38; // ecx
  __int64 v39; // r10
  KIRQL v40; // si
  int *v41; // rbp
  int v42; // ebx
  int v43; // edx
  int v44; // edx
  __int64 v45; // r10
  int v46; // ebx
  int v47; // r9d
  __int64 v48; // rcx
  KIRQL v49; // si
  int *v50; // rbp
  unsigned int v51; // ebx
  int v52; // edx
  int v53; // edx
  int v54; // eax
  int v55; // ebx
  unsigned __int16 v56; // bx
  int v57; // edx
  __int64 v58; // rcx
  KIRQL v59; // si
  int *v60; // rbp
  int v61; // ebx
  int v62; // edx
  int v63; // edx
  KIRQL v64; // si
  int *v65; // rbp
  int v66; // ebx
  int v67; // edx
  int v68; // edx
  KIRQL v69; // si
  int *v70; // rbp
  int v71; // ebx
  int v72; // edx
  int v73; // ebx
  int v74; // edx
  KIRQL v75; // si
  int *v76; // rbp
  int v77; // ebx
  int v78; // edx
  int v79; // ebx
  int v80; // edx
  KIRQL v81; // si
  int *v82; // rbp
  int v83; // ebx
  int v84; // edx
  int v85; // ebx
  int v86; // edx
  KIRQL v87; // si
  int *v88; // rbp
  int v89; // ebx
  int v90; // edx
  int v91; // ebx
  int v92; // edx
  KIRQL v93; // si
  int *v94; // rbp
  int v95; // ebx
  int v96; // edx
  int v97; // ebx
  int v98; // edx
  KIRQL v99; // si
  int *v100; // rbp
  int v101; // ebx
  int v102; // edx
  int v103; // edx
  KIRQL v104; // si
  int *v105; // rbp
  int v106; // ebx
  int v107; // edx
  int v108; // ebx
  int v109; // edx
  KIRQL v110; // si
  int *v111; // rbp
  int v112; // ebx
  int v113; // edx
  int v114; // ebx
  int v115; // edx
  KIRQL v116; // si
  int *v117; // rbp
  int v118; // ebx
  int v119; // edx
  int v120; // ebx
  int v121; // edx
  KIRQL v122; // si
  int *v123; // rbp
  int v124; // ebx
  int v125; // edx
  int v126; // ebx
  int v127; // edx
  KIRQL v128; // si
  int *v129; // rbp
  int v130; // ebx
  int v131; // edx
  int v132; // ebx
  int v133; // edx
  int *v134; // rbp
  int v135; // ebx
  int v136; // edx
  int v137; // eax
  __int64 v138; // rcx
  signed __int32 v139[8]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v140; // [rsp+28h] [rbp-C0h]
  __int64 v141; // [rsp+30h] [rbp-B8h]
  unsigned int v142; // [rsp+38h] [rbp-B0h]
  unsigned int v143; // [rsp+40h] [rbp-A8h]
  unsigned int v144; // [rsp+48h] [rbp-A0h]
  unsigned int v145; // [rsp+50h] [rbp-98h]
  unsigned int v146; // [rsp+58h] [rbp-90h]
  int v147; // [rsp+60h] [rbp-88h]
  int *v148; // [rsp+70h] [rbp-78h]
  __int64 v149; // [rsp+78h] [rbp-70h] BYREF
  __int64 v150; // [rsp+80h] [rbp-68h]
  __int64 v151; // [rsp+88h] [rbp-60h]
  __int64 v152; // [rsp+90h] [rbp-58h]
  __int64 v153; // [rsp+98h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041228);
  v149 = 40LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v149);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v150;
  v6 = *(_BYTE *)(*(_QWORD *)(v4 + 80) + 16LL);
  if ( !v6 || *(_BYTE *)(v4 + 285) )
  {
    v137 = *(unsigned __int8 *)(v4 + 285);
    v138 = *(_QWORD *)(v4 + 64);
    LODWORD(v141) = v137;
    LODWORD(v140) = v6;
    WPP_RECORDER_SF_dd(v138, 2u, 3u, 0xD9u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v140, v141);
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x24u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    goto LABEL_66;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL);
  if ( v7 == -1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x25u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    LOBYTE(v26) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v26);
LABEL_66:
    *(_DWORD *)(v5 + 4) = -1073713152;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
  }
  if ( (v7 & 1) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x26u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    *(_DWORD *)(v5 + 4) = -1073741807;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
  }
  v8 = *(_BYTE *)(v150 + 128);
  v9 = *(unsigned __int16 *)(v150 + 130);
  v10 = *(unsigned __int8 *)(v150 + 132);
  v11 = *(unsigned __int8 *)(v150 + 133);
  if ( v8 != 35
    || *(_BYTE *)(v150 + 129) != 1
    || !*(_BYTE *)(v150 + 132)
    || v10 > *(_DWORD *)(v3 + 16)
    || *(_WORD *)(v150 + 134) )
  {
    v27 = 39;
    v28 = *(unsigned __int8 *)(v150 + 134);
    v29 = *(unsigned __int8 *)(v150 + 131);
    v35 = *(unsigned __int8 *)(v150 + 130);
    v36 = *(unsigned __int8 *)(v150 + 129);
    v147 = *(unsigned __int8 *)(v150 + 135);
    v146 = v28;
    v145 = v11;
    v144 = v10;
    v143 = v29;
    v142 = v35;
    LODWORD(v141) = v36;
    LODWORD(v140) = v8;
    goto LABEL_26;
  }
  v12 = v10 - 1;
  v13 = 56 * v12;
  v148 = (int *)(16 * v12 + *(_QWORD *)(v3 + 40));
  v14 = *(_BYTE *)(56 * v12 + *(_QWORD *)(v3 + 48) + 1);
  if ( v14 == 2 )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v12,
      10,
      40,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v10,
      v9,
      v11);
    if ( v9 == 22 || !v11 )
    {
      switch ( v9 )
      {
        case 1:
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v41 = v148;
          v42 = *v148;
          LOBYTE(v43) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v43,
            10,
            42,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          v45 = *(_QWORD *)(v3 + 8);
          if ( (*(_QWORD *)(v45 + 232) & 0x2000000LL) != 0 )
          {
            if ( (v42 & 2) == 0 || (v42 & 0x1E0u) >= 0x60 )
              WPP_RECORDER_SF_(
                *(_QWORD *)(v45 + 64),
                3u,
                0xAu,
                0x2Bu,
                (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
            v46 = v42 & 0xE00C200 | 0x10060;
            v47 = 44;
            v48 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL);
          }
          else
          {
            v46 = v42 & 0xE00C200 | 2;
            v48 = *(_QWORD *)(v45 + 64);
            v47 = 45;
          }
          LOBYTE(v44) = 4;
          WPP_RECORDER_SF_d(v48, v44, 10, v47, (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids, v46);
          *v148 = v46;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v40);
          v23 = *v41;
          v24 = 46;
          goto LABEL_15;
        case 2:
          if ( (int)RootHub_WaitForPendingU3TransitionCompletion(v3, v10, 0LL) < 0 )
          {
            *(_DWORD *)(v5 + 4) = -1073741820;
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(
                     WdfDriverGlobals,
                     a2);
          }
          v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v50 = v148;
          v51 = *v148;
          LOBYTE(v52) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v52,
            10,
            47,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          if ( (v51 & 2) == 0 || (v54 = (v51 >> 5) & 0xF, v54 != 3) && v54 != 15 )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
              2u,
              0xAu,
              0x30u,
              (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
          v55 = v51 & 0xE00C200 | 0x101E0;
          LOBYTE(v53) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v53,
            10,
            49,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v55);
          *v148 = v55;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v49);
          v56 = 50;
          LOBYTE(v57) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v57,
            10,
            50,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v50);
          v58 = *(_QWORD *)(v3 + 48);
          if ( *(int *)(v58 + v13 + 40) > 0 )
            v56 = *(_WORD *)(v58 + v13 + 44);
          ExSetTimer(*(_QWORD *)(v58 + v13 + 32), -10000LL * v56, 0LL, 0LL);
          goto LABEL_16;
        case 8:
          v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v60 = v148;
          v61 = *v148;
          LOBYTE(v62) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v62,
            10,
            51,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          v61 &= 0xE00C000u;
          LOBYTE(v63) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v63,
            10,
            52,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v61);
          *v148 = v61;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v59);
          v23 = *v60;
          v24 = 53;
          goto LABEL_15;
        case 16:
          v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v70 = v148;
          v71 = *v148;
          LOBYTE(v72) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v72,
            10,
            58,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          v73 = v71 & 0xE00C200 | 0x20000;
          LOBYTE(v74) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v74,
            10,
            59,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v73);
          *v148 = v73;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v69);
          v23 = *v70;
          v24 = 60;
          goto LABEL_15;
        case 17:
          v81 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v82 = v148;
          v83 = *v148;
          LOBYTE(v84) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v84,
            10,
            64,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          v85 = v83 & 0xE00C200 | 0x40000;
          LOBYTE(v86) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v86,
            10,
            65,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v85);
          *v148 = v85;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v81);
          v23 = *v82;
          v24 = 66;
          goto LABEL_15;
        case 18:
          v87 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v88 = v148;
          v89 = *v148;
          LOBYTE(v90) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v90,
            10,
            67,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          v91 = v89 & 0xE00C200 | 0x400000;
          LOBYTE(v92) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v92,
            10,
            68,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v91);
          *v148 = v91;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v87);
          v23 = *v88;
          v24 = 69;
          goto LABEL_15;
        case 19:
          v93 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v94 = v148;
          v95 = *v148;
          LOBYTE(v96) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v96,
            10,
            70,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          v97 = v95 & 0xE00C200 | 0x100000;
          LOBYTE(v98) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v98,
            10,
            71,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v97);
          *v148 = v97;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v93);
          v23 = *v94;
          v24 = 72;
          goto LABEL_15;
        case 20:
          v75 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v76 = v148;
          v77 = *v148;
          LOBYTE(v78) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v78,
            10,
            61,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          v79 = v77 & 0xE00C200 | 0x200000;
          LOBYTE(v80) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v80,
            10,
            62,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v79);
          *v148 = v79;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v75);
          v23 = *v76;
          v24 = 63;
          goto LABEL_15;
        case 22:
          if ( v11 > 3 )
          {
            v27 = 54;
            goto LABEL_24;
          }
          v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v65 = v148;
          v66 = *v148;
          LOBYTE(v67) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v67,
            10,
            55,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            *v148);
          v66 &= 0xE000200u;
          LOBYTE(v68) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            v68,
            10,
            56,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v66);
          *v148 = v66;
          _InterlockedOr(v139, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v64);
          v23 = *v65;
          v24 = 57;
          break;
        default:
          v27 = 73;
          goto LABEL_24;
      }
      goto LABEL_15;
    }
    v27 = 41;
    goto LABEL_24;
  }
  if ( v14 != 3 )
  {
    v38 = *(unsigned __int8 *)(v150 + 134);
    v27 = 101;
    v28 = *(unsigned __int8 *)(v150 + 131);
    v39 = *(_QWORD *)(v3 + 8);
    v29 = *(unsigned __int8 *)(v150 + 130);
    v147 = *(unsigned __int8 *)(v150 + 135);
    v146 = v38;
    v37 = *(_QWORD *)(v39 + 64);
    v145 = v11;
    v144 = v10;
    v143 = v28;
    v142 = v29;
    LODWORD(v141) = 1;
    LODWORD(v140) = 35;
    goto LABEL_28;
  }
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v12,
    10,
    74,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v10,
    v9,
    v11);
  if ( v11 )
  {
    v27 = 75;
LABEL_24:
    v28 = *(unsigned __int8 *)(v5 + 134);
    v29 = *(unsigned __int8 *)(v5 + 133);
    v30 = *(unsigned __int8 *)(v5 + 132);
    v31 = *(unsigned __int8 *)(v5 + 131);
    v32 = *(unsigned __int8 *)(v5 + 130);
    v33 = *(unsigned __int8 *)(v5 + 129);
    v34 = *(unsigned __int8 *)(v5 + 128);
    v147 = *(unsigned __int8 *)(v5 + 135);
    v146 = v28;
    v145 = v29;
    v144 = v30;
    v143 = v31;
    v142 = v32;
    LODWORD(v141) = v33;
    LODWORD(v140) = v34;
LABEL_26:
    v37 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL);
LABEL_28:
    WPP_RECORDER_SF_DDDDDDDD(v37, v28, v29, v27);
    *(_DWORD *)(v5 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
  }
  if ( v9 != 29 )
  {
    switch ( v9 )
    {
      case 8:
        v99 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v100 = v148;
        v101 = *v148;
        LOBYTE(v102) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v102,
          10,
          76,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          *v148);
        v101 &= 0xE00C000u;
        LOBYTE(v103) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v103,
          10,
          77,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v101);
        *v148 = v101;
        _InterlockedOr(v139, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v99);
        v23 = *v100;
        v24 = 78;
        goto LABEL_15;
      case 16:
        v104 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v105 = v148;
        v106 = *v148;
        LOBYTE(v107) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v107,
          10,
          79,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          *v148);
        v108 = v106 & 0xE00C200 | 0x20000;
        LOBYTE(v109) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v109,
          10,
          80,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v108);
        *v148 = v108;
        _InterlockedOr(v139, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v104);
        v23 = *v105;
        v24 = 81;
        goto LABEL_15;
      case 19:
        v116 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v117 = v148;
        v118 = *v148;
        LOBYTE(v119) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v119,
          10,
          85,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          *v148);
        v120 = v118 & 0xE00C200 | 0x100000;
        LOBYTE(v121) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v121,
          10,
          86,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v120);
        *v148 = v120;
        _InterlockedOr(v139, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v116);
        v23 = *v117;
        v24 = 87;
        goto LABEL_15;
      case 20:
        v110 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v111 = v148;
        v112 = *v148;
        LOBYTE(v113) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v113,
          10,
          82,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          *v148);
        v114 = v112 & 0xE00C200 | 0x200000;
        LOBYTE(v115) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v115,
          10,
          83,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v114);
        *v148 = v114;
        _InterlockedOr(v139, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v110);
        v23 = *v111;
        v24 = 84;
        goto LABEL_15;
      case 25:
        v122 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v123 = v148;
        v124 = *v148;
        LOBYTE(v125) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v125,
          10,
          88,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          *v148);
        v126 = v124 & 0xE00C200 | 0x400000;
        LOBYTE(v127) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v127,
          10,
          89,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v126);
        *v148 = v126;
        _InterlockedOr(v139, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v122);
        v23 = *v123;
        v24 = 90;
        goto LABEL_15;
      case 26:
        v128 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v129 = v148;
        v130 = *v148;
        LOBYTE(v131) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v131,
          10,
          91,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          *v148);
        v132 = v130 & 0xE00C200 | 0x800000;
        LOBYTE(v133) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v133,
          10,
          92,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v132);
        *v148 = v132;
        _InterlockedOr(v139, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v128);
        v23 = *v129;
        v24 = 93;
        goto LABEL_15;
      case 30:
        v134 = v148;
        v135 = v148[1];
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v15,
          10,
          97,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v135);
        v135 &= ~0x10000u;
        LOBYTE(v136) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v136,
          10,
          98,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v135);
        v148[1] = v135;
        _InterlockedOr(v139, 0);
        v23 = v134[1];
        v24 = 99;
        goto LABEL_15;
      default:
        v27 = 100;
        goto LABEL_24;
    }
  }
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
  v17 = v148;
  v18 = *v148;
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v19,
    10,
    94,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    *v148);
  v20 = v18 & 0xE00C200 | 0x80000;
  LOBYTE(v21) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v21,
    10,
    95,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v20);
  *v148 = v20;
  _InterlockedOr(v139, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v16);
  v23 = *v17;
  v24 = 96;
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
  *(_DWORD *)(v5 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
}
