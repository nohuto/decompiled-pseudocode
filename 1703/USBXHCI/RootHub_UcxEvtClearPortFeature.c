/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x1C00067C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Controller_SetControllerGone @ 0x1C001B9FC (Controller_SetControllerGone.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0024564 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0024B90 (WPP_RECORDER_SF_DDDDDDDD.c)
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
  KIRQL v15; // si
  int *v16; // rbp
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  __int64 v25; // rdx
  int v26; // r9d
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // r10d
  unsigned int v30; // r11d
  unsigned int v31; // ebx
  int v32; // esi
  int v33; // ebp
  unsigned int v34; // r10d
  int v35; // r11d
  __int64 v36; // rcx
  unsigned int v37; // ecx
  __int64 v38; // r10
  KIRQL v39; // si
  int *v40; // rbp
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ebx
  unsigned __int16 v45; // r9
  __int64 v46; // rcx
  KIRQL v47; // si
  int *v48; // rbp
  unsigned int v49; // ebx
  __int64 v50; // rcx
  int v51; // eax
  int v52; // ebx
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int16 v55; // bx
  __int64 v56; // rcx
  KIRQL v57; // si
  int *v58; // rbp
  int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rcx
  KIRQL v62; // si
  int *v63; // rbp
  int v64; // ebx
  __int64 v65; // rcx
  __int64 v66; // rcx
  KIRQL v67; // si
  int *v68; // rbp
  int v69; // ebx
  __int64 v70; // rcx
  int v71; // ebx
  __int64 v72; // rcx
  KIRQL v73; // si
  int *v74; // rbp
  int v75; // ebx
  __int64 v76; // rcx
  int v77; // ebx
  __int64 v78; // rcx
  KIRQL v79; // si
  int *v80; // rbp
  int v81; // ebx
  __int64 v82; // rcx
  int v83; // ebx
  __int64 v84; // rcx
  KIRQL v85; // si
  int *v86; // rbp
  int v87; // ebx
  __int64 v88; // rcx
  int v89; // ebx
  __int64 v90; // rcx
  KIRQL v91; // si
  int *v92; // rbp
  int v93; // ebx
  __int64 v94; // rcx
  int v95; // ebx
  __int64 v96; // rcx
  KIRQL v97; // si
  int *v98; // rbp
  int v99; // ebx
  __int64 v100; // rcx
  __int64 v101; // rcx
  KIRQL v102; // si
  int *v103; // rbp
  int v104; // ebx
  __int64 v105; // rcx
  int v106; // ebx
  __int64 v107; // rcx
  KIRQL v108; // si
  int *v109; // rbp
  int v110; // ebx
  __int64 v111; // rcx
  int v112; // ebx
  __int64 v113; // rcx
  KIRQL v114; // si
  int *v115; // rbp
  int v116; // ebx
  __int64 v117; // rcx
  int v118; // ebx
  __int64 v119; // rcx
  KIRQL v120; // si
  int *v121; // rbp
  int v122; // ebx
  __int64 v123; // rcx
  int v124; // ebx
  __int64 v125; // rcx
  KIRQL v126; // si
  int *v127; // rbp
  int v128; // ebx
  __int64 v129; // rcx
  int v130; // ebx
  __int64 v131; // rcx
  int *v132; // rbp
  int v133; // ebx
  __int64 v134; // rcx
  __int64 v135; // rcx
  int v136; // eax
  __int64 v137; // rcx
  signed __int32 v138[8]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v139; // [rsp+28h] [rbp-D0h]
  __int64 v140; // [rsp+30h] [rbp-C8h]
  unsigned int v141; // [rsp+38h] [rbp-C0h]
  unsigned int v142; // [rsp+40h] [rbp-B8h]
  unsigned int v143; // [rsp+48h] [rbp-B0h]
  unsigned int v144; // [rsp+50h] [rbp-A8h]
  unsigned int v145; // [rsp+58h] [rbp-A0h]
  int v146; // [rsp+60h] [rbp-98h]
  int *v147; // [rsp+70h] [rbp-88h]
  __int128 v148; // [rsp+78h] [rbp-80h]
  _QWORD v149[5]; // [rsp+88h] [rbp-70h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045200);
  memset(v149, 0, sizeof(v149));
  LOWORD(v149[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v149);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v149[1];
  v6 = *(_BYTE *)(*(_QWORD *)(v4 + 80) + 16LL);
  if ( !v6 || *(_BYTE *)(v4 + 293) )
  {
    v136 = *(unsigned __int8 *)(v4 + 293);
    v137 = *(_QWORD *)(v4 + 64);
    LODWORD(v140) = v136;
    LODWORD(v139) = v6;
    WPP_RECORDER_SF_dd(v137, 2u, 3u, 0xDBu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v139, v140);
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x24u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
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
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    LOBYTE(v25) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v25);
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
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    *(_DWORD *)(v5 + 4) = -1073741807;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
  }
  v8 = *(_BYTE *)(v149[1] + 128LL);
  v9 = *(unsigned __int16 *)(v149[1] + 130LL);
  v10 = *(unsigned __int8 *)(v149[1] + 132LL);
  v11 = *(unsigned __int8 *)(v149[1] + 133LL);
  if ( v8 != 35
    || *(_BYTE *)(v149[1] + 129LL) != 1
    || !*(_BYTE *)(v149[1] + 132LL)
    || v10 > *(_DWORD *)(v3 + 16)
    || *(_WORD *)(v149[1] + 134LL) )
  {
    v26 = 39;
    v27 = *(unsigned __int8 *)(v149[1] + 134LL);
    v28 = *(unsigned __int8 *)(v149[1] + 131LL);
    v34 = *(unsigned __int8 *)(v149[1] + 130LL);
    v35 = *(unsigned __int8 *)(v149[1] + 129LL);
    v146 = *(unsigned __int8 *)(v149[1] + 135LL);
    v145 = v27;
    v144 = v11;
    v143 = v10;
    v142 = v28;
    v141 = v34;
    LODWORD(v140) = v35;
    LODWORD(v139) = v8;
    goto LABEL_26;
  }
  v12 = v10 - 1;
  v13 = 56 * v12;
  v147 = (int *)(16 * v12 + *(_QWORD *)(v3 + 40));
  v14 = *(_BYTE *)(56 * v12 + *(_QWORD *)(v3 + 48) + 1);
  if ( v14 == 2 )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v12,
      10,
      40,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v10,
      v9,
      v11);
    if ( v9 == 22 || !v11 )
    {
      switch ( v9 )
      {
        case 1:
          v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v40 = v147;
          v41 = *v147;
          v42 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v42 + 64),
            4u,
            0xAu,
            0x2Au,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v43 = *(_QWORD *)(v3 + 8);
          v148 = *(_OWORD *)(v43 + 232);
          if ( (v148 & 0x2000000) != 0 )
          {
            if ( (v41 & 2) == 0 || (v41 & 0x1E0u) >= 0x60 )
              WPP_RECORDER_SF_(
                *(_QWORD *)(v43 + 64),
                3u,
                0xAu,
                0x2Bu,
                (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
            v44 = v41 & 0xE00C200 | 0x10060;
            v43 = *(_QWORD *)(v3 + 8);
            v45 = 44;
          }
          else
          {
            v44 = v41 & 0xE00C200 | 2;
            v45 = 45;
          }
          v46 = *(_QWORD *)(v43 + 64);
          LODWORD(v139) = v44;
          WPP_RECORDER_SF_d(v46, 4u, 0xAu, v45, (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids, v139);
          *v147 = v44;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v39);
          v21 = *v40;
          v22 = 46;
          goto LABEL_15;
        case 2:
          if ( (int)RootHub_WaitForPendingU3TransitionCompletion(v3, v10, 0LL) < 0 )
          {
            *(_DWORD *)(v5 + 4) = -1073741820;
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(
                     WdfDriverGlobals,
                     a2);
          }
          v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v48 = v147;
          v50 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          v49 = v139;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v50 + 64),
            4u,
            0xAu,
            0x2Fu,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          if ( (v49 & 2) == 0 || (v51 = (v49 >> 5) & 0xF, v51 != 3) && v51 != 15 )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
              2u,
              0xAu,
              0x30u,
              (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
          v52 = v49 & 0xE00C200 | 0x101E0;
          v53 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = v52;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v53 + 64),
            4u,
            0xAu,
            0x31u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          *v147 = v52;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v47);
          v54 = *(_QWORD *)(v3 + 8);
          v55 = 50;
          LODWORD(v139) = *v48;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v54 + 64),
            4u,
            0xAu,
            0x32u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v56 = *(_QWORD *)(v3 + 48);
          if ( *(int *)(v56 + v13 + 40) > 0 )
            v55 = *(_WORD *)(v56 + v13 + 44);
          ExSetTimer(*(_QWORD *)(v56 + v13 + 32), -10000LL * v55, 0LL, 0LL);
          goto LABEL_16;
        case 8:
          v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v58 = v147;
          v60 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          v59 = v139;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v60 + 64),
            4u,
            0xAu,
            0x33u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v59 &= 0xE00C000u;
          v61 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = v59;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v61 + 64),
            4u,
            0xAu,
            0x34u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          *v147 = v59;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v57);
          v21 = *v58;
          v22 = 53;
          goto LABEL_15;
        case 16:
          v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v68 = v147;
          v70 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          v69 = v139;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v70 + 64),
            4u,
            0xAu,
            0x3Au,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v71 = v69 & 0xE00C200 | 0x20000;
          v72 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = v71;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v72 + 64),
            4u,
            0xAu,
            0x3Bu,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          *v147 = v71;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v67);
          v21 = *v68;
          v22 = 60;
          goto LABEL_15;
        case 17:
          v79 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v80 = v147;
          v82 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          v81 = v139;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v82 + 64),
            4u,
            0xAu,
            0x40u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v83 = v81 & 0xE00C200 | 0x40000;
          v84 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = v83;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v84 + 64),
            4u,
            0xAu,
            0x41u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          *v147 = v83;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v79);
          v21 = *v80;
          v22 = 66;
          goto LABEL_15;
        case 18:
          v85 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v86 = v147;
          v88 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          v87 = v139;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v88 + 64),
            4u,
            0xAu,
            0x43u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v89 = v87 & 0xE00C200 | 0x400000;
          v90 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = v89;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v90 + 64),
            4u,
            0xAu,
            0x44u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          *v147 = v89;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v85);
          v21 = *v86;
          v22 = 69;
          goto LABEL_15;
        case 19:
          v91 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v92 = v147;
          v94 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          v93 = v139;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v94 + 64),
            4u,
            0xAu,
            0x46u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v95 = v93 & 0xE00C200 | 0x100000;
          v96 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = v95;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v96 + 64),
            4u,
            0xAu,
            0x47u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          *v147 = v95;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v91);
          v21 = *v92;
          v22 = 72;
          goto LABEL_15;
        case 20:
          v73 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v74 = v147;
          v76 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          v75 = v139;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v76 + 64),
            4u,
            0xAu,
            0x3Du,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v77 = v75 & 0xE00C200 | 0x200000;
          v78 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = v77;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v78 + 64),
            4u,
            0xAu,
            0x3Eu,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          *v147 = v77;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v73);
          v21 = *v74;
          v22 = 63;
          goto LABEL_15;
        case 22:
          if ( v11 > 3 )
          {
            v26 = 54;
            goto LABEL_24;
          }
          v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
          v63 = v147;
          v65 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = *v147;
          v64 = v139;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v65 + 64),
            4u,
            0xAu,
            0x37u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          v64 &= 0xE000200u;
          v66 = *(_QWORD *)(v3 + 8);
          LODWORD(v139) = v64;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v66 + 64),
            4u,
            0xAu,
            0x38u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v139);
          *v147 = v64;
          _InterlockedOr(v138, 0);
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v62);
          v21 = *v63;
          v22 = 57;
          break;
        default:
          v26 = 73;
          goto LABEL_24;
      }
      goto LABEL_15;
    }
    v26 = 41;
    goto LABEL_24;
  }
  if ( v14 != 3 )
  {
    v37 = *(unsigned __int8 *)(v149[1] + 134LL);
    v26 = 101;
    v27 = *(unsigned __int8 *)(v149[1] + 131LL);
    v38 = *(_QWORD *)(v3 + 8);
    v28 = *(unsigned __int8 *)(v149[1] + 130LL);
    v146 = *(unsigned __int8 *)(v149[1] + 135LL);
    v145 = v37;
    v36 = *(_QWORD *)(v38 + 64);
    v144 = v11;
    v143 = v10;
    v142 = v27;
    v141 = v28;
    LODWORD(v140) = 1;
    LODWORD(v139) = 35;
    goto LABEL_28;
  }
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v12,
    10,
    74,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v10,
    v9,
    v11);
  if ( v11 )
  {
    v26 = 75;
LABEL_24:
    v27 = *(unsigned __int8 *)(v5 + 134);
    v28 = *(unsigned __int8 *)(v5 + 133);
    v29 = *(unsigned __int8 *)(v5 + 132);
    v30 = *(unsigned __int8 *)(v5 + 131);
    v31 = *(unsigned __int8 *)(v5 + 130);
    v32 = *(unsigned __int8 *)(v5 + 129);
    v33 = *(unsigned __int8 *)(v5 + 128);
    v146 = *(unsigned __int8 *)(v5 + 135);
    v145 = v27;
    v144 = v28;
    v143 = v29;
    v142 = v30;
    v141 = v31;
    LODWORD(v140) = v32;
    LODWORD(v139) = v33;
LABEL_26:
    v36 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL);
LABEL_28:
    WPP_RECORDER_SF_DDDDDDDD(v36, v27, v28, v26);
    *(_DWORD *)(v5 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
  }
  if ( v9 != 29 )
  {
    switch ( v9 )
    {
      case 8:
        v97 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v98 = v147;
        v100 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = *v147;
        v99 = v139;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v100 + 64),
          4u,
          0xAu,
          0x4Cu,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        v99 &= 0xE00C000u;
        v101 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = v99;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v101 + 64),
          4u,
          0xAu,
          0x4Du,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        *v147 = v99;
        _InterlockedOr(v138, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v97);
        v21 = *v98;
        v22 = 78;
        goto LABEL_15;
      case 16:
        v102 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v103 = v147;
        v105 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = *v147;
        v104 = v139;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v105 + 64),
          4u,
          0xAu,
          0x4Fu,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        v106 = v104 & 0xE00C200 | 0x20000;
        v107 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = v106;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v107 + 64),
          4u,
          0xAu,
          0x50u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        *v147 = v106;
        _InterlockedOr(v138, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v102);
        v21 = *v103;
        v22 = 81;
        goto LABEL_15;
      case 19:
        v114 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v115 = v147;
        v117 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = *v147;
        v116 = v139;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v117 + 64),
          4u,
          0xAu,
          0x55u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        v118 = v116 & 0xE00C200 | 0x100000;
        v119 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = v118;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v119 + 64),
          4u,
          0xAu,
          0x56u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        *v147 = v118;
        _InterlockedOr(v138, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v114);
        v21 = *v115;
        v22 = 87;
        goto LABEL_15;
      case 20:
        v108 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v109 = v147;
        v111 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = *v147;
        v110 = v139;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v111 + 64),
          4u,
          0xAu,
          0x52u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        v112 = v110 & 0xE00C200 | 0x200000;
        v113 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = v112;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v113 + 64),
          4u,
          0xAu,
          0x53u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        *v147 = v112;
        _InterlockedOr(v138, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v108);
        v21 = *v109;
        v22 = 84;
        goto LABEL_15;
      case 25:
        v120 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v121 = v147;
        v123 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = *v147;
        v122 = v139;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v123 + 64),
          4u,
          0xAu,
          0x58u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        v124 = v122 & 0xE00C200 | 0x400000;
        v125 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = v124;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v125 + 64),
          4u,
          0xAu,
          0x59u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        *v147 = v124;
        _InterlockedOr(v138, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v120);
        v21 = *v121;
        v22 = 90;
        goto LABEL_15;
      case 26:
        v126 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
        v127 = v147;
        v129 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = *v147;
        v128 = v139;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v129 + 64),
          4u,
          0xAu,
          0x5Bu,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        v130 = v128 & 0xE00C200 | 0x800000;
        v131 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = v130;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v131 + 64),
          4u,
          0xAu,
          0x5Cu,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        *v147 = v130;
        _InterlockedOr(v138, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v126);
        v21 = *v127;
        v22 = 93;
        goto LABEL_15;
      case 30:
        v132 = v147;
        v134 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = v147[1];
        v133 = v139;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v134 + 64),
          4u,
          0xAu,
          0x61u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        v133 &= ~0x10000u;
        v135 = *(_QWORD *)(v3 + 8);
        LODWORD(v139) = v133;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v135 + 64),
          4u,
          0xAu,
          0x62u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v139);
        v147[1] = v133;
        _InterlockedOr(v138, 0);
        v21 = v132[1];
        v22 = 99;
        goto LABEL_15;
      default:
        v26 = 100;
        goto LABEL_24;
    }
  }
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL));
  v16 = v147;
  v18 = *(_QWORD *)(v3 + 8);
  LODWORD(v139) = *v147;
  v17 = v139;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v18 + 64),
    4u,
    0xAu,
    0x5Eu,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v139);
  v19 = v17 & 0xE00C200 | 0x80000;
  v20 = *(_QWORD *)(v3 + 8);
  LODWORD(v139) = v19;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v20 + 64),
    4u,
    0xAu,
    0x5Fu,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v139);
  *v147 = v19;
  _InterlockedOr(v138, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)(v13 + *(_QWORD *)(v3 + 48) + 16LL), v15);
  v21 = *v16;
  v22 = 96;
LABEL_15:
  v23 = *(_QWORD *)(v3 + 8);
  LODWORD(v139) = v21;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v23 + 64),
    4u,
    0xAu,
    v22,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v139);
LABEL_16:
  *(_DWORD *)(v5 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
}
