/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C0007010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C001B9FC (Controller_SetControllerGone.c)
 *     RootHub_ForceU0AndWait @ 0x1C00235B0 (RootHub_ForceU0AndWait.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0024564 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0024B90 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned __int8 v6; // dl
  int v7; // eax
  __int64 v8; // rdx
  int v9; // r15d
  unsigned __int8 v10; // cl
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  _DWORD *v17; // r13
  char v18; // cl
  int v19; // r9d
  unsigned int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  unsigned int v24; // ebx
  int v25; // edi
  int v26; // esi
  __int64 v27; // rcx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  KIRQL v32; // si
  int v33; // ebx
  __int64 v34; // rcx
  int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rcx
  int v42; // eax
  unsigned __int16 v43; // r9
  KIRQL v44; // di
  int v45; // ebx
  __int64 v46; // rcx
  int v47; // ebx
  __int64 v48; // rcx
  KIRQL v49; // di
  int v50; // ebx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ebx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // ebx
  __int64 v57; // rcx
  int v58; // ebx
  __int64 v59; // rcx
  __int128 v60; // xmm0
  KIRQL v61; // di
  int v62; // ebx
  __int64 v63; // rcx
  int v64; // ebx
  __int64 v65; // rcx
  int v66; // eax
  KIRQL v67; // di
  int v68; // ebx
  __int64 v69; // rcx
  int v70; // ebx
  __int64 v71; // rcx
  KIRQL v72; // di
  int v73; // ebx
  __int64 v74; // rcx
  unsigned int v75; // ebx
  __int64 v76; // rcx
  KIRQL v77; // di
  int v78; // ebx
  __int64 v79; // rcx
  int v80; // ebx
  __int64 v81; // rcx
  int v82; // ebx
  __int64 v83; // rcx
  int v84; // ebx
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // ebx
  __int64 v88; // rcx
  int v89; // ebx
  __int64 v90; // rcx
  __int64 v91; // rcx
  KIRQL v92; // r15
  int v93; // ebx
  __int64 v94; // rcx
  int v95; // ebx
  unsigned int v96; // ebx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // r8
  KIRQL v100; // si
  __int16 v101; // bx
  __int64 v102; // rcx
  int v103; // edi
  __int64 v104; // rcx
  int v105; // ebx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  unsigned int v109; // ecx
  __int64 v110; // r10
  unsigned int v111; // r10d
  int v112; // r11d
  int v113; // eax
  __int64 v114; // rcx
  signed __int32 v116[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v117; // [rsp+28h] [rbp-100h]
  __int64 v118; // [rsp+30h] [rbp-F8h]
  unsigned int v119; // [rsp+38h] [rbp-F0h]
  unsigned int v120; // [rsp+40h] [rbp-E8h]
  unsigned int v121; // [rsp+48h] [rbp-E0h]
  unsigned int v122; // [rsp+50h] [rbp-D8h]
  unsigned int v123; // [rsp+58h] [rbp-D0h]
  int v124; // [rsp+60h] [rbp-C8h]
  unsigned int v125; // [rsp+70h] [rbp-B8h]
  __int64 v126; // [rsp+78h] [rbp-B0h]
  __int64 v127; // [rsp+80h] [rbp-A8h]
  __int128 v128; // [rsp+88h] [rbp-A0h]
  __int128 v129; // [rsp+98h] [rbp-90h]
  __int128 v130; // [rsp+A8h] [rbp-80h]
  __int64 v131; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v132; // [rsp+C0h] [rbp-68h]
  __int64 v133; // [rsp+C8h] [rbp-60h]
  __int64 v134; // [rsp+D0h] [rbp-58h]
  __int64 v135; // [rsp+D8h] [rbp-50h]

  v127 = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045200);
  v131 = 40LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v131);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v132;
  v6 = *(_BYTE *)(*(_QWORD *)(v4 + 80) + 16LL);
  if ( !v6 || *(_BYTE *)(v4 + 293) )
  {
    v113 = *(unsigned __int8 *)(v4 + 293);
    v114 = *(_QWORD *)(v4 + 64);
    LODWORD(v118) = v113;
    LODWORD(v117) = v6;
    WPP_RECORDER_SF_dd(v114, 2u, 3u, 0xDBu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v117, v118);
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x74u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    goto LABEL_82;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL);
  if ( v7 == -1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x75u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    LOBYTE(v8) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v8);
LABEL_82:
    v9 = -1073741810;
    *(_DWORD *)(v5 + 4) = -1073713152;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v127,
             (unsigned int)v9);
  }
  if ( (v7 & 1) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0x76u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    *(_DWORD *)(v5 + 4) = -1073741807;
    v9 = -1073741630;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v127,
             (unsigned int)v9);
  }
  v10 = *(_BYTE *)(v132 + 128);
  v11 = *(unsigned __int8 *)(v132 + 132);
  v12 = *(unsigned __int16 *)(v132 + 130);
  v13 = *(unsigned __int8 *)(v132 + 133);
  v125 = v11;
  if ( v10 != 35 || *(_BYTE *)(v132 + 129) != 3 || !v11 || v11 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v132 + 134) )
  {
    v19 = 119;
    v20 = *(unsigned __int8 *)(v132 + 134);
    v21 = *(unsigned __int8 *)(v132 + 131);
    v111 = *(unsigned __int8 *)(v132 + 130);
    v112 = *(unsigned __int8 *)(v132 + 129);
    v124 = *(unsigned __int8 *)(v132 + 135);
    v123 = v20;
    v122 = v13;
    v121 = v11;
    v120 = v21;
    v119 = v111;
    LODWORD(v118) = v112;
    LODWORD(v117) = v10;
    goto LABEL_17;
  }
  v14 = v11 - 1;
  v15 = 56 * v14;
  v16 = *(_QWORD *)(v3 + 48);
  v17 = (_DWORD *)(16 * v14 + *(_QWORD *)(v3 + 40));
  v126 = 56 * v14;
  v18 = *(_BYTE *)(56 * v14 + v16 + 1);
  if ( v18 != 2 )
  {
    if ( v18 != 3 )
    {
      v109 = *(unsigned __int8 *)(v132 + 134);
      v19 = 175;
      v20 = *(unsigned __int8 *)(v132 + 131);
      v110 = *(_QWORD *)(v3 + 8);
      v21 = *(unsigned __int8 *)(v132 + 130);
      v124 = *(unsigned __int8 *)(v132 + 135);
      v123 = v109;
      v27 = *(_QWORD *)(v110 + 64);
      v122 = v13;
      v121 = v11;
      v120 = v20;
      v119 = v21;
      LODWORD(v118) = 3;
      LODWORD(v117) = 35;
      goto LABEL_18;
    }
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v14,
      10,
      145,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v11,
      v12,
      v13);
    if ( v12 > 0x1B || (v66 = 159383584, !_bittest(&v66, v12)) )
    {
      if ( v13 )
      {
        v19 = 146;
        goto LABEL_16;
      }
    }
    switch ( v12 )
    {
      case 4u:
        v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
        v69 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = *v17;
        v68 = v117;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v69 + 64),
          4u,
          0xAu,
          0x93u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v70 = v68 & 0xE00C200 | 0x10;
        v71 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v70;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v71 + 64),
          4u,
          0xAu,
          0x94u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        *v17 = v70;
        _InterlockedOr(v116, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL), v67);
        v42 = *v17;
        v43 = 149;
        goto LABEL_76;
      case 5u:
        if ( v13 > 5 )
        {
          v19 = 163;
          goto LABEL_16;
        }
        v130 = *(_OWORD *)(*(_QWORD *)(v3 + 8) + 232LL);
        if ( (v130 & 0x80000) == 0 )
          goto LABEL_61;
        if ( !v13 )
          goto LABEL_62;
        v9 = RootHub_ForceU0AndWait(v3, v11);
        if ( v9 < 0 )
          goto LABEL_71;
        v11 = v125;
LABEL_61:
        if ( v13 )
          goto LABEL_63;
LABEL_62:
        v9 = RootHub_WaitForPendingU3TransitionCompletion(v3, v11, 0LL);
        if ( v9 < 0 )
          goto LABEL_71;
LABEL_63:
        v92 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
        if ( v13 == 3 )
          *(_BYTE *)(v15 + *(_QWORD *)(v3 + 48) + 6) = 0;
        v94 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = *v17;
        v93 = v117;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v94 + 64),
          4u,
          0xAu,
          0xA4u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v95 = v93 & 0xE00C200;
        if ( v13 == 4 )
          v96 = v95 | 2;
        else
          v96 = v95 & 0xFFFFFE1F | (32 * (v13 & 0xF | 0x800));
        v97 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v96;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v97 + 64),
          4u,
          0xAu,
          0xA5u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        *v17 = v96;
        _InterlockedOr(v116, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL), v92);
        v98 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = *v17;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v98 + 64),
          4u,
          0xAu,
          0xA6u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        if ( v13 == 3 && (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 232LL) & 0x4000000LL) != 0 )
        {
          LOBYTE(v99) = 1;
          v9 = RootHub_WaitForPendingU3TransitionCompletion(v3, v125, v99);
          if ( v9 < 0 )
            goto LABEL_71;
        }
        goto LABEL_77;
      case 8u:
        v77 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
        v79 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = *v17;
        v78 = v117;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v79 + 64),
          4u,
          0xAu,
          0x99u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v80 = v78 & 0xE00C000 | 0x200;
        v81 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v80;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v81 + 64),
          4u,
          0xAu,
          0x9Au,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        *v17 = v80;
        _InterlockedOr(v116, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL), v77);
        v42 = *v17;
        v43 = 155;
        goto LABEL_76;
      case 0x17u:
        v83 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v17[1];
        v82 = v117;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v83 + 64),
          4u,
          0xAu,
          0x9Du,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v84 = (unsigned __int8)(v13 ^ v82) ^ v82;
        v85 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v84;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v85 + 64),
          4u,
          0xAu,
          0x9Eu,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v17[1] = v84;
        _InterlockedOr(v116, 0);
        v86 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v17[1];
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v86 + 64),
          4u,
          0xAu,
          0x9Fu,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v9 = 0;
        *(_BYTE *)(v15 + *(_QWORD *)(v3 + 48) + 9) = v13;
        *(_DWORD *)(v5 + 4) = 0;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 v127,
                 (unsigned int)v9);
      case 0x18u:
        v88 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v17[1];
        v87 = v117;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v88 + 64),
          4u,
          0xAu,
          0xA0u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v89 = ((unsigned __int16)v87 ^ (unsigned __int16)((_WORD)v13 << 8)) & 0xFF00 ^ v87;
        v90 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v89;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v90 + 64),
          4u,
          0xAu,
          0xA1u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v17[1] = v89;
        _InterlockedOr(v116, 0);
        v91 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v17[1];
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v91 + 64),
          4u,
          0xAu,
          0xA2u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v9 = 0;
        *(_BYTE *)(v15 + *(_QWORD *)(v3 + 48) + 10) = v13;
        *(_DWORD *)(v5 + 4) = 0;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 v127,
                 (unsigned int)v9);
      case 0x1Bu:
        if ( (unsigned __int8)v13 >= 8u )
        {
          v19 = 167;
          goto LABEL_16;
        }
        v100 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
        v102 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = *v17;
        v101 = v117;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v102 + 64),
          4u,
          0xAu,
          0xA8u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v103 = v101 & 0xC200 | ((v13 & 7) << 25);
        v104 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v103;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v104 + 64),
          4u,
          0xAu,
          0xA9u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        *v17 = v103;
        _InterlockedOr(v116, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v126 + 16), v100);
        v42 = *v17;
        v43 = 170;
        break;
      case 0x1Cu:
        v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
        v74 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = *v17;
        v73 = v117;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v74 + 64),
          4u,
          0xAu,
          0x96u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v75 = v73 & 0xE00C200 | 0x80000000;
        v76 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v75;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v76 + 64),
          4u,
          0xAu,
          0x97u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        *v17 = v75;
        _InterlockedOr(v116, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL), v72);
        v42 = *v17;
        v43 = 152;
        goto LABEL_76;
      case 0x1Eu:
        v106 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v17[1];
        v105 = v117;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v106 + 64),
          4u,
          0xAu,
          0xABu,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v105 |= 0x10000u;
        v107 = *(_QWORD *)(v3 + 8);
        LODWORD(v117) = v105;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v107 + 64),
          4u,
          0xAu,
          0xACu,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v117);
        v17[1] = v105;
        _InterlockedOr(v116, 0);
        v42 = v17[1];
        v43 = 173;
        goto LABEL_76;
      default:
        v19 = 174;
        goto LABEL_16;
    }
    goto LABEL_76;
  }
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    v14,
    10,
    120,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v11,
    v12,
    v13);
  if ( v12 - 21 > 1 && v13 )
  {
    v19 = 121;
LABEL_16:
    v20 = *(unsigned __int8 *)(v5 + 134);
    v21 = *(unsigned __int8 *)(v5 + 133);
    v22 = *(unsigned __int8 *)(v5 + 132);
    v23 = *(unsigned __int8 *)(v5 + 131);
    v24 = *(unsigned __int8 *)(v5 + 130);
    v25 = *(unsigned __int8 *)(v5 + 129);
    v26 = *(unsigned __int8 *)(v5 + 128);
    v124 = *(unsigned __int8 *)(v5 + 135);
    v123 = v20;
    v122 = v21;
    v121 = v22;
    v120 = v23;
    v119 = v24;
    LODWORD(v118) = v25;
    LODWORD(v117) = v26;
LABEL_17:
    v27 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL);
LABEL_18:
    WPP_RECORDER_SF_DDDDDDDD(v27, v20, v21, v19);
    *(_DWORD *)(v5 + 4) = -1073741820;
    v9 = -1073741823;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v127,
             (unsigned int)v9);
  }
  v28 = v12 - 2;
  if ( !v28 )
  {
    v60 = *(_OWORD *)(*(_QWORD *)(v3 + 8) + 232LL);
    v128 = v60;
    if ( (v60 & 0x8000000) != 0 || (v129 = v60, (v60 & 0x80000) != 0) )
    {
      v9 = RootHub_ForceU0AndWait(v3, v11);
      if ( v9 < 0 )
      {
LABEL_71:
        *(_DWORD *)(v5 + 4) = -1073741820;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 v127,
                 (unsigned int)v9);
      }
    }
    v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
    *(_BYTE *)(v15 + *(_QWORD *)(v3 + 48) + 6) = 0;
    v63 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = *v17;
    v62 = v117;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v63 + 64),
      4u,
      0xAu,
      0x81u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
    if ( (v62 & 2) == 0 || (v62 & 0x1E0u) >= 0x60 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        3u,
        0xAu,
        0x82u,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    v64 = v62 & 0xE00C200 | 0x10060;
    v65 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = v64;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v65 + 64),
      4u,
      0xAu,
      0x83u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
    *v17 = v64;
    _InterlockedOr(v116, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL), v61);
    v42 = *v17;
    v43 = 132;
    goto LABEL_76;
  }
  v29 = v28 - 2;
  if ( !v29 )
  {
    v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
    if ( *(_BYTE *)(v15 + *(_QWORD *)(v3 + 48) + 8) )
    {
      v51 = *(_QWORD *)(v3 + 8);
      LODWORD(v117) = v17[1];
      v50 = v117;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v51 + 64),
        4u,
        0xAu,
        0x7Au,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v117);
      v50 &= 0xFFFE0007;
      v52 = *(_QWORD *)(v3 + 8);
      LODWORD(v117) = v50;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v52 + 64),
        4u,
        0xAu,
        0x7Bu,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v117);
      v17[1] = v50;
      _InterlockedOr(v116, 0);
      v54 = *(_QWORD *)(v3 + 8);
      LODWORD(v117) = v17[3];
      v53 = v117;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v54 + 64),
        4u,
        0xAu,
        0x7Cu,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v117);
      v53 &= 0xFFFFC000;
      v55 = *(_QWORD *)(v3 + 8);
      LODWORD(v117) = v53;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v55 + 64),
        4u,
        0xAu,
        0x7Du,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v117);
      v17[3] = v53;
      _InterlockedOr(v116, 0);
      *(_BYTE *)(v15 + *(_QWORD *)(v3 + 48) + 8) = 0;
    }
    v57 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = *v17;
    v56 = v117;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v57 + 64),
      4u,
      0xAu,
      0x7Eu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
    v58 = v56 & 0xE00C200 | 0x10;
    v59 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = v58;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v59 + 64),
      4u,
      0xAu,
      0x7Fu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
    *v17 = v58;
    _InterlockedOr(v116, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL), v49);
    v42 = *v17;
    v43 = 128;
LABEL_76:
    v108 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = v42;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v108 + 64),
      4u,
      0xAu,
      v43,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
LABEL_77:
    v9 = 0;
    *(_DWORD *)(v5 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v127,
             (unsigned int)v9);
  }
  v30 = v29 - 4;
  if ( !v30 )
  {
    v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
    v46 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = *v17;
    v45 = v117;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v46 + 64),
      4u,
      0xAu,
      0x85u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
    v47 = v45 & 0xE00C000 | 0x200;
    v48 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = v47;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v48 + 64),
      4u,
      0xAu,
      0x86u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
    *v17 = v47;
    _InterlockedOr(v116, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL), v44);
    v42 = *v17;
    v43 = 135;
    goto LABEL_76;
  }
  v31 = v30 - 13;
  if ( !v31 )
  {
    if ( v13 > 5 )
    {
      v19 = 136;
      goto LABEL_16;
    }
    v39 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = v17[1];
    v38 = v117;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v39 + 64),
      4u,
      0xAu,
      0x89u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
    v40 = (v13 << 28) | v38 & 0xFFFFFFF;
    v41 = *(_QWORD *)(v3 + 8);
    LODWORD(v117) = v40;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v41 + 64),
      4u,
      0xAu,
      0x8Au,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v117);
    v17[1] = v40;
    _InterlockedOr(v116, 0);
    v42 = v17[1];
    v43 = 139;
    goto LABEL_76;
  }
  if ( v31 != 1 )
  {
    v19 = 144;
    goto LABEL_16;
  }
  if ( v13 > 3 )
  {
    v19 = 140;
    goto LABEL_16;
  }
  v9 = 0;
  if ( v13 == 3 )
    LOBYTE(v13) = 0;
  v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + *(_QWORD *)(v3 + 48) + 16LL));
  v34 = *(_QWORD *)(v3 + 8);
  LODWORD(v117) = *v17;
  v33 = v117;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v34 + 64),
    4u,
    0xAu,
    0x8Du,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v117);
  v35 = v33 & 0xE000200 | ((v13 & 3) << 14);
  v36 = *(_QWORD *)(v3 + 8);
  LODWORD(v117) = v35;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v36 + 64),
    4u,
    0xAu,
    0x8Eu,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v117);
  *v17 = v35;
  _InterlockedOr(v116, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 48) + v126 + 16), v32);
  v37 = *(_QWORD *)(v3 + 8);
  LODWORD(v117) = *v17;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v37 + 64),
    4u,
    0xAu,
    0x8Fu,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v117);
  *(_DWORD *)(v5 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v127,
           (unsigned int)v9);
}
