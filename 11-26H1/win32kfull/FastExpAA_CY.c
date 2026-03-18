/*
 * XREFs of FastExpAA_CY @ 0x1400F20D0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400F03F4 (MappingBGRF.c)
 *     Do1141 @ 0x1400F0498 (Do1141.c)
 *     Do35 @ 0x1400F05B4 (Do35.c)
 *     AlphaBlendBGRF @ 0x1400F1A88 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400F27B8 (GetFixupScan.c)
 *     Do5225 @ 0x1400F3330 (Do5225.c)
 *     Do3121 @ 0x1402054E0 (Do3121.c)
 *     Do6251 @ 0x140264420 (Do6251.c)
 *     Do1319 @ 0x140309268 (Do1319.c)
 *     Do3263 @ 0x14030933C (Do3263.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall FastExpAA_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  int *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // r11d
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // eax
  char v25; // r10
  __int64 v26; // r8
  int v27; // edi
  __int64 i; // rdx
  unsigned __int8 v29; // bl
  __int64 (__fastcall *v30)(int, int, int, int, int); // rax
  int v31; // edi
  __int64 (__fastcall *v32)(int, int, int, int, __int64, int); // r15
  __int64 v33; // r8
  __int64 v34; // r8
  int v35; // ebx
  unsigned __int8 *v36; // r14
  __int64 j; // rcx
  unsigned __int8 *v38; // r12
  bool v39; // sf
  unsigned int v40; // eax
  int v42; // r13d
  int v43; // ecx
  _BYTE *v44; // rsi
  unsigned __int8 *v45; // r15
  int v46; // ecx
  int v47; // ecx
  unsigned __int8 *v48; // rax
  unsigned __int8 *v49; // r10
  int v50; // r9d
  int v51; // ebx
  _BYTE *v52; // r11
  unsigned __int8 *v53; // r8
  __int64 v54; // rax
  unsigned __int8 *v55; // r12
  _BYTE *v56; // r15
  int v57; // eax
  signed __int64 v58; // r10
  __int64 v59; // r11
  size_t v60; // rbx
  __int16 v61; // ax
  __int64 v62; // rcx
  int v63; // ecx
  unsigned __int8 *v64; // r8
  _BYTE *v65; // rcx
  unsigned __int8 *v66; // rdx
  int v67; // ecx
  unsigned __int8 *v68; // rdx
  int v69; // r9d
  int v70; // edx
  int v71; // r9d
  int v72; // edx
  unsigned __int8 *v73; // rax
  char v74; // [rsp+58h] [rbp-B0h]
  int v75; // [rsp+5Ch] [rbp-ACh]
  int v76; // [rsp+60h] [rbp-A8h]
  int v77; // [rsp+64h] [rbp-A4h]
  unsigned __int16 *v78; // [rsp+68h] [rbp-A0h]
  __int64 v79; // [rsp+70h] [rbp-98h]
  __int128 v80; // [rsp+78h] [rbp-90h]
  __int128 v81; // [rsp+88h] [rbp-80h]
  __int128 v82; // [rsp+98h] [rbp-70h]
  __int64 v83; // [rsp+B8h] [rbp-50h]
  __int64 v84; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall *v85)(int, int, int, int, int); // [rsp+C8h] [rbp-40h]
  __int64 (__fastcall *v86)(int, int, int, int, __int64, int); // [rsp+D0h] [rbp-38h]
  __int64 v87; // [rsp+D8h] [rbp-30h]
  int v88; // [rsp+E8h] [rbp-20h] BYREF
  char v89; // [rsp+F0h] [rbp-18h]
  int v90; // [rsp+128h] [rbp+20h]
  __int64 v91; // [rsp+170h] [rbp+68h]
  unsigned int v92; // [rsp+17Ch] [rbp+74h]
  int v93; // [rsp+184h] [rbp+7Ch]
  void (__fastcall *v94)(int *); // [rsp+1A8h] [rbp+A0h]
  void (__fastcall *v95)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1F8h] [rbp+F0h]
  __int64 v96; // [rsp+200h] [rbp+F8h]
  __int64 v97; // [rsp+218h] [rbp+110h]
  __int64 v98; // [rsp+220h] [rbp+118h]
  __int64 v99; // [rsp+268h] [rbp+160h]
  __int64 v100; // [rsp+270h] [rbp+168h]
  __int64 v101; // [rsp+280h] [rbp+178h]
  __int64 v102; // [rsp+288h] [rbp+180h]
  __int64 v103; // [rsp+290h] [rbp+188h]
  int v104; // [rsp+298h] [rbp+190h]
  int v105; // [rsp+29Ch] [rbp+194h]
  int v106; // [rsp+2A0h] [rbp+198h]
  unsigned __int8 *v107; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int8 *v108; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int8 *v109; // [rsp+2B8h] [rbp+1B0h]
  int v110; // [rsp+2C0h] [rbp+1B8h]
  void *Src; // [rsp+300h] [rbp+1F8h]
  unsigned __int8 *v112; // [rsp+308h] [rbp+200h]
  unsigned __int64 v113; // [rsp+310h] [rbp+208h]
  __int64 v114; // [rsp+318h] [rbp+210h]
  __int64 v115; // [rsp+320h] [rbp+218h]
  __int64 v116; // [rsp+328h] [rbp+220h]
  __int64 v117; // [rsp+330h] [rbp+228h]
  int v118; // [rsp+338h] [rbp+230h]

  v1 = 4LL;
  v87 = a1;
  v3 = (_OWORD *)a1;
  v4 = &v88;
  do
  {
    v5 = v3[1];
    *(_OWORD *)v4 = *v3;
    v6 = v3[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v3[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v3[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v3[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v3[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = v3[1];
  *(_OWORD *)v4 = *v3;
  v13 = v3[2];
  *((_OWORD *)v4 + 1) = v12;
  v14 = v3[3];
  *((_OWORD *)v4 + 2) = v13;
  v15 = v3[4];
  v16 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v14;
  *((_OWORD *)v4 + 4) = v15;
  *((_QWORD *)v4 + 10) = v16;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v17 = v97;
    v18 = v118;
    v19 = v116;
    v20 = v117;
    v21 = *(_QWORD *)(v97 + 96);
    v76 = v118;
    **(_WORD **)(v97 + 88) += *(unsigned __int8 *)(v97 + 82);
    *(_WORD *)(v21 - 2) += *(unsigned __int8 *)(v17 + 83);
    v22 = v98;
    v79 = v98;
    v23 = *(_QWORD *)(v98 + 96);
    v24 = v18 * *(unsigned __int8 *)(v17 + 83);
    v84 = v19 - v18 * *(unsigned __int8 *)(v17 + 82);
    v78 = *(unsigned __int16 **)(v98 + 88);
    *(_WORD *)(v23 - 2) += *(unsigned __int8 *)(v98 + 83);
    v83 = v24 + v20;
    v25 = v89 & 4;
    v74 = v89 & 4;
    *(_QWORD *)&v80 = *(_QWORD *)(v22 + 32) + (-(__int64)((v89 & 4) != 0) & 0xFFFFFFFFFFFFFFFAuLL) + 9;
    v26 = (v89 & 4) != 0 ? 6 : 18;
    v27 = v26 + v90;
    for ( i = 0LL; i < 4; ++i )
      *((_QWORD *)&v80 + i + 1) = v27 + *((_QWORD *)&v80 + i);
    v29 = *(_BYTE *)(v22 + 80);
    v30 = GrayFastExpAA_CX;
    v31 = v27 - v26;
    v32 = GraySharpenInput;
    if ( !v25 )
      v30 = FastExpAA_CX;
    v85 = v30;
    if ( !v25 )
      v32 = SharpenInput;
    v86 = v32;
    GetFixupScan(&v88, *((_QWORD *)&v81 + 1), v26);
    if ( !v29 )
      v88 |= 0x20u;
    GetFixupScan(&v88, v82, v33);
    if ( v29 < 2u )
      v88 |= 0x20u;
    Src = (char *)Src + 9;
    v35 = -3;
    v36 = (unsigned __int8 *)v80;
    while ( 1 )
    {
      for ( j = 0LL; j < 4; ++j )
        *((_QWORD *)&v80 + j) = *((_QWORD *)&v80 + j + 1);
      *(_QWORD *)&v82 = v36;
      GetFixupScan(&v88, v36, v34);
      v38 = (unsigned __int8 *)v81;
      v32(0, v81, v81, *((_QWORD *)&v81 + 1), (__int64)v36, v31);
      v36 = (unsigned __int8 *)v80;
      v39 = ++v35 < 0;
      v77 = v35;
      if ( !v39 )
      {
        v42 = *v78++;
        v43 = v42;
        v75 = v42;
        if ( !v35 )
        {
          v43 = *(unsigned __int8 *)(v79 + 82) + v42;
          v75 = v43;
        }
        v44 = Src;
        if ( v42 )
          break;
      }
      v40 = v92;
LABEL_19:
      if ( !v40 )
        return *(unsigned int *)(v87 + 148);
    }
    v45 = (unsigned __int8 *)*((_QWORD *)&v80 + 1);
    v40 = v92;
    while ( 1 )
    {
      --v42;
      if ( !v40 )
        return *(unsigned int *)(v87 + 148);
      v46 = v43 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( !v47 )
        {
          v48 = v38;
          if ( v42 == 1 )
            v48 = v36;
          v49 = v45;
          v50 = v31 & 3;
          v51 = v31 >> 2;
          v52 = v44;
          v53 = v48;
          if ( v31 >> 2 )
          {
            v54 = -(__int64)v48;
            v55 = &v45[v54];
            v56 = &v44[v54];
            do
            {
              v57 = *v49;
              v49 += 4;
              *v52 = (v57 + 2 * (v57 + 1) + (unsigned int)*v53) >> 2;
              v52 += 4;
              v56[(_QWORD)v53 + 1] = (v53[(_QWORD)v55 + 1] + 2 * (v53[(_QWORD)v55 + 1] + 1) + (unsigned int)v53[1]) >> 2;
              v56[(_QWORD)v53 + 2] = (v53[(_QWORD)v55 + 2] + 2 * (v53[(_QWORD)v55 + 2] + 1) + (unsigned int)v53[2]) >> 2;
              v56[(_QWORD)v53 + 3] = (3 * v55[(_QWORD)v53 + 3] + (unsigned int)v53[3] + 2) >> 2;
              v53 += 4;
              --v51;
            }
            while ( v51 );
            v45 = (unsigned __int8 *)*((_QWORD *)&v80 + 1);
            v38 = (unsigned __int8 *)v81;
          }
          if ( (v31 & 3) != 0 )
          {
            v58 = v49 - v53;
            v59 = v52 - v53;
            do
            {
              v53[v59] = (3 * v53[v58] + (unsigned int)*v53 + 2) >> 2;
              ++v53;
              --v50;
            }
            while ( v50 );
          }
          goto LABEL_37;
        }
        v63 = v47 - 1;
        if ( !v63 )
        {
          v64 = v45;
          v65 = v44;
          if ( v42 == 1 )
          {
            Do1141(v44, v36, v45, v38, v31);
            goto LABEL_37;
          }
          v66 = v38;
          if ( v42 == 2 )
            v66 = v36;
          goto LABEL_51;
        }
        v67 = v63 - 1;
        if ( v67 )
        {
          if ( v67 == 1 )
          {
            switch ( v42 )
            {
              case 0:
                v68 = v38;
                goto LABEL_67;
              case 1:
                v69 = (int)v36;
                v70 = (int)v38;
                goto LABEL_64;
              case 2:
                Do3263((_DWORD)v44, (_DWORD)v36, (_DWORD)v45, (_DWORD)v38, v31);
                break;
              case 3:
                v69 = (int)v38;
                v70 = (int)v36;
LABEL_64:
                Do6251((_DWORD)v44, v70, (_DWORD)v45, v69, v31);
                break;
              case 4:
                v68 = v36;
LABEL_67:
                Do1319(v44, v68, v45, (unsigned int)v31);
                break;
            }
          }
        }
        else
        {
          switch ( v42 )
          {
            case 0:
              v66 = v38;
LABEL_74:
              v64 = v45;
              v65 = v44;
LABEL_51:
              Do35(v65, v66, v64, v31);
              break;
            case 1:
              v71 = (int)v36;
              v72 = (int)v38;
              goto LABEL_77;
            case 2:
              v71 = (int)v38;
              v72 = (int)v36;
LABEL_77:
              Do3121((_DWORD)v44, v72, (_DWORD)v45, v71, v31);
              break;
            case 3:
              v66 = v36;
              goto LABEL_74;
          }
        }
      }
      else
      {
        Do5225((_DWORD)v44, (_DWORD)v36, (_DWORD)v45, (_DWORD)v38, v31);
      }
LABEL_37:
      v60 = (-(__int64)(v74 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3;
      memmove(&v44[-v60], v44, v60);
      memmove(&v44[v31], &v44[v31 - v60], v60);
      v85(v97, (int)v44, v84, v83, v76);
      v61 = v88;
      if ( (v88 & 0x80u) != 0 )
      {
        v94(&v88);
        v61 = v88;
      }
      if ( (v61 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v88);
        LOBYTE(v61) = v88;
      }
      if ( (v61 & 0x10) != 0 )
      {
        MappingBGRF(v112, v113, v100, v107);
        v73 = &v107[v110];
        if ( v73 == v108 )
          v73 = v109;
        v107 = v73;
      }
      v95(&v88, v114, v115, v91, v99, v101, v101 + v105, v106, v96);
      v62 = v104 + v101;
      if ( v62 == v102 )
        v62 = v103;
      v91 += v93;
      v40 = v92 - 1;
      v101 = v62;
      v43 = v75;
      --v92;
      if ( !v42 )
      {
        v35 = v77;
        v32 = v86;
        goto LABEL_19;
      }
    }
  }
  return v92;
}
