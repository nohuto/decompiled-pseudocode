/*
 * XREFs of sub_1800130C0 @ 0x1800130C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     sub_180001AB4 @ 0x180001AB4 (sub_180001AB4.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

char __fastcall sub_1800130C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  bool v5; // al
  __int64 v6; // r10
  void *v7; // r11
  void *v8; // rcx
  __int64 v9; // rax
  void *v10; // r8
  void *v11; // rcx
  void *v12; // r8
  void *v13; // rcx
  void *v14; // rsi
  void *v15; // r8
  void *v16; // rcx
  void *v17; // r8
  void *v18; // rcx
  void *v19; // r8
  void *v20; // rcx
  void *v21; // r8
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // r11
  void *v25; // rcx
  __int64 v26; // rax
  void *v27; // r8
  void *v28; // rcx
  void *v29; // r8
  void *v30; // rcx
  void *v31; // rsi
  void *v32; // r8
  void *v33; // rcx
  void *v34; // r8
  void *v35; // rcx
  void *v36; // r8
  void *v37; // rcx
  void *v38; // r8
  void *v39; // rcx
  void *v40; // r8
  void *v41; // rcx
  void *v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  int v52; // [rsp+48h] [rbp-B8h] BYREF
  int v53; // [rsp+4Ch] [rbp-B4h] BYREF
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  int v55; // [rsp+54h] [rbp-ACh] BYREF
  int v56; // [rsp+58h] [rbp-A8h] BYREF
  int v57; // [rsp+5Ch] [rbp-A4h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+70h] [rbp-90h] BYREF
  int *v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  void *v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+ACh] [rbp-54h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  void *v67; // [rsp+C0h] [rbp-40h]
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  int *v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  void *v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+ECh] [rbp-14h]
  int *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  void *v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+108h] [rbp+8h]
  int v79; // [rsp+10Ch] [rbp+Ch]
  int *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  void *v82; // [rsp+120h] [rbp+20h]
  int v83; // [rsp+128h] [rbp+28h]
  int v84; // [rsp+12Ch] [rbp+2Ch]
  void *v85; // [rsp+130h] [rbp+30h]
  int v86; // [rsp+138h] [rbp+38h]
  int v87; // [rsp+13Ch] [rbp+3Ch]
  int *v88; // [rsp+140h] [rbp+40h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  void *v90; // [rsp+150h] [rbp+50h]
  int v91; // [rsp+158h] [rbp+58h]
  int v92; // [rsp+15Ch] [rbp+5Ch]
  void *v93; // [rsp+160h] [rbp+60h]
  int v94; // [rsp+168h] [rbp+68h]
  int v95; // [rsp+16Ch] [rbp+6Ch]
  int *v96; // [rsp+170h] [rbp+70h]
  __int64 v97; // [rsp+178h] [rbp+78h]
  int *v98; // [rsp+180h] [rbp+80h]
  __int64 v99; // [rsp+188h] [rbp+88h]
  void *v100; // [rsp+190h] [rbp+90h]
  int v101; // [rsp+198h] [rbp+98h]
  int v102; // [rsp+19Ch] [rbp+9Ch]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v104; // [rsp+1C0h] [rbp+C0h]
  __int64 v105; // [rsp+1C8h] [rbp+C8h]
  void *v106; // [rsp+1D0h] [rbp+D0h]
  int v107; // [rsp+1D8h] [rbp+D8h]
  int v108; // [rsp+1DCh] [rbp+DCh]
  __int64 v109; // [rsp+1E0h] [rbp+E0h]
  __int64 v110; // [rsp+1E8h] [rbp+E8h]
  void *v111; // [rsp+1F0h] [rbp+F0h]
  int v112; // [rsp+1F8h] [rbp+F8h]
  int v113; // [rsp+1FCh] [rbp+FCh]
  int *v114; // [rsp+200h] [rbp+100h]
  __int64 v115; // [rsp+208h] [rbp+108h]
  void *v116; // [rsp+210h] [rbp+110h]
  int v117; // [rsp+218h] [rbp+118h]
  int v118; // [rsp+21Ch] [rbp+11Ch]
  int *v119; // [rsp+220h] [rbp+120h]
  __int64 v120; // [rsp+228h] [rbp+128h]
  void *v121; // [rsp+230h] [rbp+130h]
  int v122; // [rsp+238h] [rbp+138h]
  int v123; // [rsp+23Ch] [rbp+13Ch]
  int *v124; // [rsp+240h] [rbp+140h]
  __int64 v125; // [rsp+248h] [rbp+148h]
  void *v126; // [rsp+250h] [rbp+150h]
  int v127; // [rsp+258h] [rbp+158h]
  int v128; // [rsp+25Ch] [rbp+15Ch]
  void *v129; // [rsp+260h] [rbp+160h]
  int v130; // [rsp+268h] [rbp+168h]
  int v131; // [rsp+26Ch] [rbp+16Ch]
  int *v132; // [rsp+270h] [rbp+170h]
  __int64 v133; // [rsp+278h] [rbp+178h]
  void *v134; // [rsp+280h] [rbp+180h]
  int v135; // [rsp+288h] [rbp+188h]
  int v136; // [rsp+28Ch] [rbp+18Ch]
  void *v137; // [rsp+290h] [rbp+190h]
  int v138; // [rsp+298h] [rbp+198h]
  int v139; // [rsp+29Ch] [rbp+19Ch]

  v4 = *(_QWORD *)(a1 + 48);
  v5 = dword_18003A0E4 == *(_DWORD *)(a2 + 8);
  dword_18003A0E4 = *(_DWORD *)(a2 + 8);
  v6 = *(_QWORD *)(v4 + 40);
  if ( v5 )
  {
    if ( *(_DWORD *)v6 > 5u
      && (*(_QWORD *)(v6 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v6 + 24) & 0x200000000000LL) == *(_QWORD *)(v6 + 24) )
    {
      v24 = &unk_18002B658;
      v25 = *(void **)(a2 + 48);
      v57 = *(_DWORD *)(a2 + 4);
      v60 = &v57;
      LODWORD(v26) = 0;
      v61 = 4LL;
      v27 = &unk_18002B658;
      if ( v25 )
      {
        v27 = v25;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v25 + v26) );
      }
      v28 = *(void **)(a2 + 120);
      v63 = v26 + 1;
      v65 = a2 + 56;
      LODWORD(v26) = 0;
      v62 = v27;
      v29 = &unk_18002B658;
      v64 = 0;
      v66 = 4LL;
      if ( v28 )
      {
        v29 = v28;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v28 + v26) );
      }
      v30 = *(void **)(a2 + 16);
      v31 = &unk_18002B65C;
      v67 = v29;
      v68 = v26 + 1;
      v32 = &unk_18002B65C;
      v53 = *(_DWORD *)a2;
      v70 = &v53;
      LODWORD(v26) = 0;
      v69 = 0;
      v71 = 4LL;
      if ( v30 )
      {
        v32 = v30;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_WORD *)v30 + v26) );
      }
      v33 = *(void **)(a2 + 64);
      v73 = 2 * v26 + 2;
      v46 = *(_DWORD *)(a2 + 24);
      v75 = &v46;
      LODWORD(v26) = 0;
      v72 = v32;
      v34 = &unk_18002B658;
      v74 = 0;
      v76 = 4LL;
      if ( v33 )
      {
        v34 = v33;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v33 + v26) );
      }
      v35 = *(void **)(a2 + 80);
      v78 = v26 + 1;
      v48 = *(_DWORD *)(a2 + 72);
      v80 = &v48;
      LODWORD(v26) = 0;
      v77 = v34;
      v36 = &unk_18002B658;
      v79 = 0;
      v81 = 4LL;
      if ( v35 )
      {
        v36 = v35;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v35 + v26) );
      }
      v37 = *(void **)(a2 + 88);
      v83 = v26 + 1;
      LODWORD(v26) = 0;
      v82 = v36;
      v38 = &unk_18002B65C;
      v84 = 0;
      if ( v37 )
      {
        v38 = v37;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_WORD *)v37 + v26) );
      }
      v39 = *(void **)(a2 + 104);
      v86 = 2 * v26 + 2;
      v50 = *(_DWORD *)(a2 + 96);
      v88 = &v50;
      LODWORD(v26) = 0;
      v85 = v38;
      v40 = &unk_18002B658;
      v87 = 0;
      v89 = 4LL;
      if ( v39 )
      {
        v40 = v39;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v39 + v26) );
      }
      v41 = *(void **)(a2 + 112);
      v91 = v26 + 1;
      LODWORD(v26) = 0;
      v90 = v40;
      v92 = 0;
      if ( v41 )
      {
        v31 = v41;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_WORD *)v41 + v26) );
      }
      v42 = *(void **)(a2 + 40);
      v94 = 2 * v26 + 2;
      v52 = *(_DWORD *)(a2 + 8);
      v96 = &v52;
      v54 = *(_DWORD *)(a2 + 60);
      v98 = &v54;
      LODWORD(v26) = 0;
      v93 = v31;
      v95 = 0;
      v97 = 4LL;
      v99 = 4LL;
      if ( v42 )
      {
        v24 = v42;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v42 + v26) );
      }
      v100 = v24;
      v101 = v26 + 1;
      v102 = 0;
      sub_1800011FC(v6, byte_180032F23, (const GUID *)(v4 + 8), 0LL, 0x13u, &v59);
    }
  }
  else if ( *(_DWORD *)v6 > 5u
         && (*(_QWORD *)(v6 + 16) & 0x200000000000LL) != 0
         && (*(_QWORD *)(v6 + 24) & 0x200000000000LL) == *(_QWORD *)(v6 + 24) )
  {
    v7 = &unk_18002B658;
    v8 = *(void **)(a2 + 48);
    v47 = *(_DWORD *)(a2 + 4);
    v104 = &v47;
    LODWORD(v9) = 0;
    v105 = 4LL;
    v10 = &unk_18002B658;
    if ( v8 )
    {
      v10 = v8;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_BYTE *)v8 + v9) );
    }
    v11 = *(void **)(a2 + 120);
    v107 = v9 + 1;
    v109 = a2 + 56;
    LODWORD(v9) = 0;
    v106 = v10;
    v12 = &unk_18002B658;
    v108 = 0;
    v110 = 4LL;
    if ( v11 )
    {
      v12 = v11;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_BYTE *)v11 + v9) );
    }
    v13 = *(void **)(a2 + 16);
    v14 = &unk_18002B65C;
    v111 = v12;
    v112 = v9 + 1;
    v15 = &unk_18002B65C;
    v56 = *(_DWORD *)a2;
    v114 = &v56;
    LODWORD(v9) = 0;
    v113 = 0;
    v115 = 4LL;
    if ( v13 )
    {
      v15 = v13;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)v13 + v9) );
    }
    v16 = *(void **)(a2 + 64);
    v117 = 2 * v9 + 2;
    v49 = *(_DWORD *)(a2 + 24);
    v119 = &v49;
    LODWORD(v9) = 0;
    v116 = v15;
    v17 = &unk_18002B658;
    v118 = 0;
    v120 = 4LL;
    if ( v16 )
    {
      v17 = v16;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_BYTE *)v16 + v9) );
    }
    v18 = *(void **)(a2 + 80);
    v122 = v9 + 1;
    v55 = *(_DWORD *)(a2 + 72);
    v124 = &v55;
    LODWORD(v9) = 0;
    v121 = v17;
    v19 = &unk_18002B658;
    v123 = 0;
    v125 = 4LL;
    if ( v18 )
    {
      v19 = v18;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_BYTE *)v18 + v9) );
    }
    v20 = *(void **)(a2 + 88);
    v127 = v9 + 1;
    LODWORD(v9) = 0;
    v126 = v19;
    v21 = &unk_18002B65C;
    v128 = 0;
    if ( v20 )
    {
      v21 = v20;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)v20 + v9) );
    }
    v22 = *(void **)(a2 + 104);
    v130 = 2 * v9 + 2;
    v51 = *(_DWORD *)(a2 + 96);
    v132 = &v51;
    LODWORD(v9) = 0;
    v129 = v21;
    v131 = 0;
    v133 = 4LL;
    if ( v22 )
    {
      v7 = v22;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_BYTE *)v22 + v9) );
    }
    v23 = *(void **)(a2 + 112);
    v135 = v9 + 1;
    LODWORD(v9) = 0;
    v134 = v7;
    v136 = 0;
    if ( v23 )
    {
      v14 = v23;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)v23 + v9) );
    }
    v137 = v14;
    v138 = 2 * v9 + 2;
    v139 = 0;
    sub_1800011FC(v6, byte_18003353E, (const GUID *)(v4 + 8), 0LL, 0x10u, &v103);
  }
  sub_180014A2C(a1, SRWLock);
  v43 = *(_QWORD *)(a1 + 48);
  v44 = *(_DWORD *)(a2 + 4);
  if ( v44 != *(_DWORD *)(v43 + 92) && (v44 != *(_DWORD *)(v43 + 84) || *(int *)(v43 + 84) >= 0) )
    sub_180001AB4(v43 + 88, a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
