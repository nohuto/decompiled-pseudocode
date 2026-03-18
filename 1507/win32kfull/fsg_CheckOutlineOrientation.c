/*
 * XREFs of fsg_CheckOutlineOrientation @ 0x1C00B8150
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 * Callees:
 *     Misoriented @ 0x1C00B8B10 (Misoriented.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall fsg_CheckOutlineOrientation(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // r13
  __int16 v4; // r11
  __int16 v5; // cx
  __int16 v6; // r8
  __int16 v7; // r14
  __int16 v8; // bx
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r10
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int16 v18; // cx
  __int64 v19; // rax
  __int64 v20; // r8
  __int16 v21; // dx
  __int16 v22; // ax
  __int64 v23; // rcx
  int v24; // r9d
  int v25; // ebx
  int v26; // r10d
  int v27; // ecx
  int v28; // r11d
  int v29; // r11d
  int v30; // ecx
  int v31; // r10d
  int v32; // ebx
  int v33; // r8d
  int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int16 v41; // cx
  __int64 v42; // rax
  __int64 v43; // r8
  __int16 v44; // dx
  __int16 v45; // ax
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // r11d
  int v49; // r9d
  int v50; // r10d
  __int64 v51; // rax
  int v52; // ebx
  int v53; // edx
  int v54; // edx
  int v55; // ebx
  int v56; // r10d
  int v57; // r11d
  int v58; // ecx
  int v59; // edi
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // r9
  __int64 v63; // rdi
  __int64 v64; // r8
  int v65; // esi
  __int64 v66; // rcx
  __int16 v67; // r10
  __int64 v68; // r9
  __int16 v69; // r8
  __int64 v70; // rax
  int v71; // edi
  __int64 v72; // rdx
  bool v73; // zf
  __int16 v74; // cx
  __int16 v75; // ax
  int v76; // edx
  int v77; // r10d
  int v78; // r8d
  int v79; // r11d
  __int64 v80; // rax
  int v81; // ecx
  int v82; // ebx
  int v83; // ebx
  int v84; // ecx
  int v85; // r11d
  int v86; // r10d
  int v87; // edi
  int v88; // edx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // r9
  __int64 v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rdx
  signed int v97; // r9d
  __int16 v98; // cx
  __int16 v99; // ax
  int v100; // edx
  int v101; // r10d
  int v102; // r11d
  int v103; // r8d
  int v104; // ebx
  int v105; // ebx
  int v106; // r8d
  int v107; // r11d
  int v108; // r10d
  int v109; // edi
  int v110; // edx
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdi
  __int64 v115; // r10
  __int64 v116; // rbx
  int v117; // edx
  __int64 v118; // rcx
  int v119; // r8d
  __int64 v120; // r9
  int v121; // r11d
  int v122; // ecx
  int v123; // eax
  int v124; // edi
  int v125; // r8d
  int v126; // r11d
  int v127; // eax
  int v128; // ebx
  int v129; // edx
  int v130; // ecx
  unsigned __int16 v131; // si
  unsigned __int16 v132; // bx
  __int16 v133; // ax
  int v134; // r13d
  int v135; // edi
  __int16 v136; // [rsp+38h] [rbp-49h]
  __int16 v137; // [rsp+3Ah] [rbp-47h]
  __int16 v138; // [rsp+3Ch] [rbp-45h]
  __int16 v139; // [rsp+3Eh] [rbp-43h]
  __int16 v140; // [rsp+40h] [rbp-41h]
  __int16 v141; // [rsp+42h] [rbp-3Fh]
  signed int v142; // [rsp+44h] [rbp-3Dh]
  int v143; // [rsp+48h] [rbp-39h]
  __int64 v144; // [rsp+50h] [rbp-31h]
  signed int v145; // [rsp+58h] [rbp-29h]
  int v146; // [rsp+5Ch] [rbp-25h]
  int v147; // [rsp+60h] [rbp-21h]
  __int16 v148; // [rsp+64h] [rbp-1Dh]
  int v149; // [rsp+68h] [rbp-19h]
  __int64 v150; // [rsp+70h] [rbp-11h]
  __int64 v151; // [rsp+78h] [rbp-9h]
  int v152; // [rsp+80h] [rbp-1h]
  int v153; // [rsp+84h] [rbp+3h]
  int v154; // [rsp+88h] [rbp+7h]
  int v155; // [rsp+8Ch] [rbp+Bh]
  int v156; // [rsp+90h] [rbp+Fh]
  int v157; // [rsp+94h] [rbp+13h]
  int v158; // [rsp+98h] [rbp+17h]
  int v159; // [rsp+9Ch] [rbp+1Bh]
  __int16 v160; // [rsp+A0h] [rbp+1Fh]
  __int16 v161; // [rsp+A2h] [rbp+21h]
  __int16 v162; // [rsp+A4h] [rbp+23h]
  __int16 v163; // [rsp+A6h] [rbp+25h]

  v147 = 0;
  if ( *(__int16 *)(a1 + 80) <= 0 )
    return;
  v2 = 0LL;
  v151 = 0LL;
  do
  {
    *(_BYTE *)(v2 + *(_QWORD *)(a1 + 88)) = 0;
    v3 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 2 * v2);
    v4 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2 * v2);
    v137 = v4;
    v148 = v4 - v3 + 1;
    if ( v148 <= 2 )
    {
      v134 = v147;
      goto LABEL_133;
    }
    v141 = -1;
    v5 = -1;
    v160 = -1;
    v6 = -1;
    v138 = -1;
    v161 = -1;
    v7 = -1;
    v139 = -1;
    v8 = 0;
    v162 = -1;
    v140 = -1;
    v163 = -1;
    v149 = 0x7FFFFFFF;
    v9 = 0x7FFFFFFF;
    v146 = 0x7FFFFFFF;
    v142 = 0x80000000;
    v145 = 0x80000000;
    v136 = 0;
    v10 = *(_QWORD *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 32);
    v144 = v10;
    v12 = v3;
    do
    {
      v13 = v8 + v12;
      v14 = *(_DWORD *)(v11 + 4 * v13);
      v150 = v13;
      v143 = v14;
      if ( v14 < v9
        || v14 == v9
        && ((v15 = v5, v16 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v15 + v16))
         || *(_BYTE *)(v13 + v16)
         && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 4 * v13) < *(_DWORD *)(*(_QWORD *)(a1 + 40) + 4 * v15)) )
      {
        v17 = *(_QWORD *)(a1 + 48);
        v18 = v8 + v3;
        v19 = (__int16)(v8 + v3);
        v141 = v8 + v3;
        v160 = v8 + v3;
        v20 = 4 * v19;
        v146 = *(_DWORD *)(4 * v19 + v11);
        if ( *(_BYTE *)(v19 + v17) )
        {
          v10 = v144;
          v152 = 2 * *(_DWORD *)(4 * v19 + v11);
          v153 = 2 * *(_DWORD *)(v20 + v144);
        }
        else
        {
          if ( v18 == v3 )
            v21 = v4;
          else
            v21 = v18 - 1;
          if ( v18 == v4 )
            v22 = v3;
          else
            v22 = v18 + 1;
          v23 = *(_QWORD *)(a1 + 40);
          v24 = *(_DWORD *)(v23 + v20);
          v25 = *(_DWORD *)(v23 + 4LL * v22);
          v26 = *(_DWORD *)(v11 + 4LL * v22);
          v27 = *(_DWORD *)(v23 + 4LL * v21);
          v28 = *(_DWORD *)(v11 + 4LL * v21);
          if ( (*(_BYTE *)(v21 + v17) & 1) != 0 )
          {
            v29 = 2 * v28;
            v30 = 2 * v27;
          }
          else
          {
            v29 = v146 + v28;
            v30 = v24 + v27;
          }
          if ( (*(_BYTE *)(v22 + v17) & 1) != 0 )
          {
            v31 = 2 * v26;
            v32 = 2 * v25;
          }
          else
          {
            v31 = v146 + v26;
            v32 = v24 + v25;
          }
          v33 = 2 * v146;
          v34 = 2 * v24;
          if ( v31 + v29 - 4 * v146 )
          {
            v35 = v29 - v33;
            v36 = v31 - v33;
            v37 = (v31 + v29 - 4 * v146) * (__int64)(v31 + v29 - 4 * v146);
            v38 = v35 * v35 * v32 + v36 * (v36 * v30 + v35 * 2 * v34);
            v152 = (v36 * v36 * v29 + v35 * v36 * 4 * v146 + v35 * v35 * v31) / v37;
            if ( v38 < 0 )
              v153 = -(int)((v37 - v38) / v37);
            else
              v153 = (v38 + v37) / v37;
          }
          else
          {
            v152 = 2 * v146;
            v153 = 2 * v24;
          }
          v10 = v144;
          v8 = v136;
          v4 = v137;
          v13 = v150;
          v14 = v143;
        }
        v6 = v138;
      }
      if ( v14 > v145
        || v14 == v145
        && ((v39 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v6 + v39))
         || *(_BYTE *)(v13 + v39)
         && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 4 * v13) > *(_DWORD *)(*(_QWORD *)(a1 + 40) + 4LL * v6)) )
      {
        v40 = *(_QWORD *)(a1 + 48);
        v41 = v8 + v3;
        v42 = (__int16)(v8 + v3);
        v138 = v8 + v3;
        v161 = v8 + v3;
        v43 = 4 * v42;
        v145 = *(_DWORD *)(4 * v42 + v11);
        if ( *(_BYTE *)(v42 + v40) )
        {
          v154 = 2 * *(_DWORD *)(4 * v42 + v11);
          v155 = 2 * *(_DWORD *)(v43 + v10);
        }
        else
        {
          if ( v41 == v3 )
            v44 = v4;
          else
            v44 = v41 - 1;
          if ( v41 == v4 )
            v45 = v3;
          else
            v45 = v41 + 1;
          v46 = *(_QWORD *)(a1 + 40);
          v47 = *(_DWORD *)(v43 + v46);
          v48 = *(_DWORD *)(v46 + 4LL * v45);
          v49 = *(_BYTE *)(v45 + v40) & 1;
          v50 = *(_DWORD *)(v11 + 4LL * v45);
          v51 = v44;
          v52 = *(_DWORD *)(v46 + 4LL * v44);
          v53 = *(_DWORD *)(v11 + 4LL * v44);
          if ( (*(_BYTE *)(v51 + v40) & 1) != 0 )
          {
            v54 = 2 * v53;
            v55 = 2 * v52;
          }
          else
          {
            v54 = v145 + v53;
            v55 = v47 + v52;
          }
          if ( v49 )
          {
            v56 = 2 * v50;
            v57 = 2 * v48;
          }
          else
          {
            v56 = v145 + v50;
            v57 = v47 + v48;
          }
          v58 = 2 * v145;
          v59 = 2 * v47;
          if ( v56 + v54 - 4 * v145 )
          {
            v60 = v54 - v58;
            v61 = v56 - v58;
            v62 = (v56 + v54 - 4 * v145) * (__int64)(v56 + v54 - 4 * v145);
            v63 = v60 * v60 * v57 + v61 * (v61 * v55 + v60 * 2 * v59);
            v154 = (v60 * v60 * v56 + v62 + v61 * (v61 * v54 + v60 * 4 * v145) - 1) / v62;
            if ( v63 < 0 )
              v155 = -(int)((v62 - v63) / v62);
            else
              v155 = (v63 + v62) / v62;
          }
          else
          {
            v154 = 2 * v145;
            v155 = 2 * v47;
          }
          v14 = v143;
        }
      }
      v64 = v150;
      v65 = *(_DWORD *)(v144 + 4 * v150);
      if ( v65 >= v149 )
      {
        if ( v65 != v149 )
          goto LABEL_81;
        v66 = *(_QWORD *)(a1 + 48);
        if ( *(_BYTE *)(v139 + v66) )
        {
          if ( !*(_BYTE *)(v150 + v66) || v14 <= *(_DWORD *)(v11 + 4LL * v139) )
            goto LABEL_81;
        }
      }
      v67 = v136;
      v68 = *(_QWORD *)(a1 + 48);
      v69 = v136 + v3;
      v70 = (__int16)(v136 + v3);
      v71 = *(_DWORD *)(v144 + 4 * v70);
      v72 = 4 * v70;
      v149 = v71;
      v139 = v136 + v3;
      v73 = *(_BYTE *)(v70 + v68) == 0;
      v162 = v136 + v3;
      if ( v73 )
      {
        if ( v69 == v3 )
          v74 = v137;
        else
          v74 = v69 - 1;
        if ( v69 == v137 )
          v75 = v3;
        else
          v75 = v69 + 1;
        v76 = *(_DWORD *)(v11 + v72);
        v77 = *(_DWORD *)(v144 + 4LL * v75);
        v78 = *(_BYTE *)(v75 + v68) & 1;
        v79 = *(_DWORD *)(v11 + 4LL * v75);
        v80 = v74;
        v81 = *(_DWORD *)(v144 + 4LL * v74);
        v82 = *(_DWORD *)(v11 + 4 * v80);
        if ( (*(_BYTE *)(v80 + v68) & 1) != 0 )
        {
          v83 = 2 * v82;
          v84 = 2 * v81;
        }
        else
        {
          v83 = v76 + v82;
          v84 = v71 + v81;
        }
        if ( v78 )
        {
          v85 = 2 * v79;
          v86 = 2 * v77;
        }
        else
        {
          v85 = v76 + v79;
          v86 = v71 + v77;
        }
        v87 = 2 * v76;
        v88 = 2 * v149;
        if ( v86 + v84 - 4 * v149 )
        {
          v89 = v84 - v88;
          v90 = v86 - v88;
          v91 = (v86 + v84 - 4 * v149) * (__int64)(v86 + v84 - 4 * v149);
          v92 = v89 * v89 * v85 + v90 * (v90 * v83 + v89 * 2 * v87);
          v157 = (v89 * v89 * v86 + v90 * (v89 * 4 * v149 + v90 * v84)) / v91;
          if ( v92 < 0 )
            v156 = -(int)((v91 - v92) / v91);
          else
            v156 = (v92 + v91) / v91;
        }
        else
        {
          v156 = v87;
          v157 = 2 * v149;
        }
        v64 = v150;
        v7 = v140;
LABEL_81:
        v67 = v136;
        goto LABEL_82;
      }
      v64 = v150;
      v156 = 2 * *(_DWORD *)(v11 + 4 * v70);
      v157 = 2 * v71;
LABEL_82:
      if ( v65 > v142
        || v65 == v142
        && ((v93 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v7 + v93))
         || *(_BYTE *)(v64 + v93) && v143 < *(_DWORD *)(v11 + 4LL * v7)) )
      {
        v10 = v144;
        v7 = v67 + v3;
        v94 = *(_QWORD *)(a1 + 48);
        v95 = (__int16)(v67 + v3);
        v96 = 4 * v95;
        v140 = v67 + v3;
        v97 = *(_DWORD *)(v144 + 4 * v95);
        v142 = v97;
        v73 = *(_BYTE *)(v95 + v94) == 0;
        v163 = v67 + v3;
        if ( !v73 )
        {
          v158 = 2 * *(_DWORD *)(v11 + 4 * v95);
          v159 = 2 * v97;
          goto LABEL_107;
        }
        if ( v7 == v3 )
          v98 = v137;
        else
          v98 = v7 - 1;
        if ( v7 == v137 )
          v99 = v3;
        else
          v99 = v7 + 1;
        v100 = *(_DWORD *)(v11 + v96);
        v101 = *(_DWORD *)(v144 + 4LL * v99);
        v102 = *(_DWORD *)(v11 + 4LL * v99);
        v103 = *(_DWORD *)(v144 + 4LL * v98);
        v104 = *(_DWORD *)(v11 + 4LL * v98);
        if ( (*(_BYTE *)(v98 + v94) & 1) != 0 )
        {
          v105 = 2 * v104;
          v106 = 2 * v103;
        }
        else
        {
          v105 = v100 + v104;
          v106 = v97 + v103;
        }
        if ( (*(_BYTE *)(v99 + v94) & 1) != 0 )
        {
          v107 = 2 * v102;
          v108 = 2 * v101;
        }
        else
        {
          v107 = v100 + v102;
          v108 = v97 + v101;
        }
        v109 = 2 * v100;
        v110 = 2 * v97;
        if ( v108 + v106 - 4 * v97 )
        {
          v111 = v106 - v110;
          v112 = v108 - v110;
          v113 = (v108 + v106 - 4 * v142) * (__int64)(v108 + v106 - 4 * v142);
          v114 = v111 * v111 * v107 + v112 * (v112 * v105 + v111 * 2 * v109);
          v159 = (v111 * v111 * v108 - 1 + v113 + v112 * (v111 * 4 * v142 + v112 * v106)) / v113;
          if ( v114 < 0 )
            v158 = -(int)((v113 - v114) / v113);
          else
            v158 = (v114 + v113) / v113;
        }
        else
        {
          v158 = v109;
          v159 = 2 * v97;
        }
      }
      v10 = v144;
LABEL_107:
      v6 = v138;
      v8 = v136 + 1;
      v5 = v141;
      v4 = v137;
      v9 = v146;
      v136 = v8;
      v12 = v3;
    }
    while ( v8 < v148 );
    v115 = *(_QWORD *)(a1 + 32);
    v116 = 4LL * v141;
    v117 = *(_DWORD *)(v116 + v115);
    v118 = 4LL * v138;
    v119 = *(_DWORD *)(v118 + v115) - v117;
    if ( v119 < 0 )
      v119 = v117 - *(_DWORD *)(v118 + v115);
    v120 = *(_QWORD *)(a1 + 40);
    v121 = *(_DWORD *)(v118 + v120);
    v122 = *(_DWORD *)(v116 + v120);
    v123 = v121 - v122;
    if ( v121 - v122 < 0 )
      v123 = v122 - v121;
    v124 = v123 + v119;
    v125 = *(_DWORD *)(v115 + 4LL * v139) - v117;
    if ( v125 < 0 )
      v125 = v117 - *(_DWORD *)(v115 + 4LL * v139);
    v126 = *(_DWORD *)(v120 + 4LL * v139);
    v127 = v126 - v122;
    if ( v126 - v122 < 0 )
      v127 = v122 - v126;
    v128 = v125 + v127;
    if ( *(_DWORD *)(v115 + 4LL * v7) - v117 >= 0 )
      v129 = *(_DWORD *)(v115 + 4LL * v7) - v117;
    else
      v129 = v117 - *(_DWORD *)(v115 + 4LL * v7);
    if ( *(_DWORD *)(v120 + 4LL * v7) - v122 >= 0 )
      v130 = *(_DWORD *)(v120 + 4LL * v7) - v122;
    else
      v130 = v122 - *(_DWORD *)(v120 + 4LL * v7);
    if ( v128 <= v130 + v129 )
    {
      v133 = 1;
      v131 = 3;
      if ( v128 > v124 )
        v133 = 2;
      v132 = v133;
    }
    else
    {
      v131 = 2;
      if ( v130 + v129 <= v124 )
        v132 = 1;
      else
        v132 = 3;
    }
    v134 = v147;
    v135 = Misoriented(v147, 0, (unsigned __int16)v141, v152, a1);
    if ( v135 != (unsigned int)Misoriented(v147, v131, (unsigned __int16)*(&v160 + v131), *((_QWORD *)&v152 + v131), a1) )
      v135 = Misoriented(v147, v132, (unsigned __int16)*(&v160 + v132), *((_QWORD *)&v152 + v132), a1);
    v2 = v151;
    if ( v135 )
      *(_BYTE *)(v151 + *(_QWORD *)(a1 + 88)) |= 1u;
LABEL_133:
    ++v2;
    v147 = v134 + 1;
    v151 = v2;
  }
  while ( v134 + 1 < *(__int16 *)(a1 + 80) );
}
