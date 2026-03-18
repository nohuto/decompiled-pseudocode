/*
 * XREFs of FastExpAA_CY @ 0x1C02539B0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00F7288 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0250C08 (AlphaBlendBGRF.c)
 *     Do1141 @ 0x1C025128C (Do1141.c)
 *     Do13 @ 0x1C02513A0 (Do13.c)
 *     Do1319 @ 0x1C0251460 (Do1319.c)
 *     Do3121 @ 0x1C025152C (Do3121.c)
 *     Do3263 @ 0x1C025162C (Do3263.c)
 *     Do35 @ 0x1C0251754 (Do35.c)
 *     Do5225 @ 0x1C0251844 (Do5225.c)
 *     Do6251 @ 0x1C0251994 (Do6251.c)
 *     MappingBGRF @ 0x1C0255E58 (MappingBGRF.c)
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
  __int64 v18; // r8
  int v19; // r11d
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned __int16 *v24; // rsi
  char *v25; // r12
  __int64 v26; // rdx
  int v27; // r14d
  unsigned __int8 *v28; // rdi
  __int64 (__fastcall *v29)(int, int, int, int, __int64, int); // r13
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  __int64 i; // rcx
  unsigned __int8 *v34; // r15
  int v35; // ecx
  int v36; // r13d
  _BYTE *v37; // rdi
  unsigned __int8 *v38; // rsi
  unsigned int v39; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  unsigned __int8 *v44; // rdx
  unsigned __int8 *v45; // r9
  unsigned __int8 *v46; // rdx
  unsigned __int8 *v47; // rdx
  unsigned __int8 *v48; // r8
  _BYTE *v49; // rcx
  unsigned __int8 *v50; // r9
  unsigned __int8 *v51; // rdx
  unsigned __int8 *v52; // rdx
  __int16 v53; // ax
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // [rsp+58h] [rbp-B0h]
  signed int v57; // [rsp+5Ch] [rbp-ACh]
  int v58; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall *v59)(int, int, int, int, int); // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall *v60)(int, int, int, int, __int64, int); // [rsp+70h] [rbp-98h]
  __int64 v61; // [rsp+78h] [rbp-90h]
  __int64 v62; // [rsp+80h] [rbp-88h]
  __int64 v63; // [rsp+88h] [rbp-80h]
  unsigned __int16 *v64; // [rsp+90h] [rbp-78h]
  char *v66; // [rsp+A0h] [rbp-68h]
  unsigned __int8 *v67; // [rsp+A8h] [rbp-60h]
  unsigned __int8 *v68; // [rsp+B0h] [rbp-58h]
  unsigned __int8 *v69; // [rsp+B8h] [rbp-50h]
  char *v70; // [rsp+C0h] [rbp-48h]
  int v71; // [rsp+D8h] [rbp-30h] BYREF
  char v72; // [rsp+E0h] [rbp-28h]
  int v73; // [rsp+118h] [rbp+10h]
  __int64 v74; // [rsp+160h] [rbp+58h]
  unsigned int v75; // [rsp+16Ch] [rbp+64h]
  int v76; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v77)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v78)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v79; // [rsp+1F0h] [rbp+E8h]
  __int64 v80; // [rsp+208h] [rbp+100h]
  __int64 v81; // [rsp+210h] [rbp+108h]
  __int64 v82; // [rsp+258h] [rbp+150h]
  __int64 v83; // [rsp+260h] [rbp+158h]
  __int64 v84; // [rsp+270h] [rbp+168h]
  __int64 v85; // [rsp+278h] [rbp+170h]
  __int64 v86; // [rsp+280h] [rbp+178h]
  int v87; // [rsp+288h] [rbp+180h]
  int v88; // [rsp+28Ch] [rbp+184h]
  int v89; // [rsp+290h] [rbp+188h]
  __int64 v90; // [rsp+298h] [rbp+190h]
  __int64 v91; // [rsp+2A0h] [rbp+198h]
  __int64 v92; // [rsp+2A8h] [rbp+1A0h]
  int v93; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  __int64 v95; // [rsp+2F8h] [rbp+1F0h]
  __int64 v96; // [rsp+300h] [rbp+1F8h]
  __int64 v97; // [rsp+308h] [rbp+200h]
  __int64 v98; // [rsp+310h] [rbp+208h]
  __int64 v99; // [rsp+318h] [rbp+210h]
  __int64 v100; // [rsp+320h] [rbp+218h]
  int v101; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = &v71;
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
  if ( !*(_QWORD *)(a1 + 536) )
    return v75;
  v18 = v80;
  v19 = v101;
  v20 = v99;
  v21 = v100;
  v22 = *(_QWORD *)(v80 + 96);
  v58 = v101;
  **(_WORD **)(v80 + 88) += *(unsigned __int8 *)(v80 + 82);
  *(_WORD *)(v22 - 2) += *(unsigned __int8 *)(v18 + 83);
  v63 = v20 - v19 * *(unsigned __int8 *)(v18 + 82);
  v23 = v81;
  v61 = v81;
  v24 = *(unsigned __int16 **)(v81 + 88);
  v62 = v19 * *(unsigned __int8 *)(v18 + 83) + v21;
  *(_WORD *)(*(_QWORD *)(v81 + 96) - 2LL) += *(unsigned __int8 *)(v81 + 83);
  v57 = (~v72 & 4 | 2u) >> 1;
  v25 = (char *)(*(_QWORD *)(v23 + 32) + 3 * v57);
  v66 = v25;
  v26 = 6 * v57 + v73;
  v27 = v73;
  v67 = (unsigned __int8 *)&v25[v26];
  v68 = (unsigned __int8 *)&v25[v26 + v26];
  v69 = &v68[v26];
  v28 = &v68[v26 + v26];
  v70 = (char *)v28;
  if ( v57 == 1 )
  {
    v59 = GrayFastExpAA_CX;
    v29 = GraySharpenInput;
  }
  else
  {
    v59 = (__int64 (__fastcall *)(int, int, int, int, int))FastExpAA_CX;
    v29 = SharpenInput;
  }
  v30 = *(unsigned __int8 *)(v23 + 80);
  v60 = v29;
  GetFixupScan((__int64)&v71, &v68[v26]);
  v31 = v30 - 1;
  if ( v31 < 0 )
    v71 |= 0x20u;
  GetFixupScan((__int64)&v71, v28);
  if ( v31 - 1 < 0 )
    v71 |= 0x20u;
  Src = (char *)Src + 9;
  v32 = -3;
  do
  {
    for ( i = 0LL; i < 4; ++i )
      (&v66)[i] = (char *)(&v67)[i];
    v70 = v25;
    GetFixupScan((__int64)&v71, v25);
    v34 = v68;
    v29(0, (int)v68, (int)v68, (int)v69, (__int64)v25, v27);
    v25 = v66;
    if ( ++v32 >= 0 )
    {
      v35 = *v24++;
      v56 = v35;
      v36 = v35;
      v64 = v24;
      if ( !v32 )
      {
        v35 += *(unsigned __int8 *)(v61 + 82);
        v56 = v35;
      }
      v37 = Src;
      if ( v36 )
      {
        v38 = v67;
        v39 = v75;
        while ( 1 )
        {
          --v36;
          if ( !v39 )
            return *(unsigned int *)(a1 + 148);
          v40 = v35 - 1;
          if ( !v40 )
          {
            Do5225(v37, (unsigned __int8 *)v25, v38, v34, v27);
            goto LABEL_57;
          }
          v41 = v40 - 1;
          if ( !v41 )
          {
            v52 = v34;
            if ( v36 == 1 )
              v52 = (unsigned __int8 *)v25;
            Do13(v37, v52, v38, v27);
            goto LABEL_57;
          }
          v42 = v41 - 1;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( v43 )
            {
              if ( v43 == 1 )
              {
                switch ( v36 )
                {
                  case 0:
                    v44 = v34;
                    goto LABEL_37;
                  case 1:
                    v45 = (unsigned __int8 *)v25;
                    v46 = v34;
                    goto LABEL_33;
                  case 2:
                    Do3263(v37, (unsigned __int8 *)v25, v38, v34, v27);
                    break;
                  case 3:
                    v45 = v34;
                    v46 = (unsigned __int8 *)v25;
LABEL_33:
                    Do6251(v37, v46, v38, v45, v27);
                    break;
                  case 4:
                    v44 = (unsigned __int8 *)v25;
LABEL_37:
                    Do1319(v37, v44, v38, v27);
                    break;
                }
              }
            }
            else
            {
              switch ( v36 )
              {
                case 0:
                  v47 = v34;
                  goto LABEL_43;
                case 1:
                  v50 = (unsigned __int8 *)v25;
                  v51 = v34;
                  goto LABEL_45;
                case 2:
                  v50 = v34;
                  v51 = (unsigned __int8 *)v25;
LABEL_45:
                  Do3121(v37, v51, v38, v50, v27);
                  break;
                case 3:
                  v47 = (unsigned __int8 *)v25;
LABEL_43:
                  v48 = v38;
                  v49 = v37;
LABEL_52:
                  Do35(v49, v47, v48, v27);
                  break;
              }
            }
          }
          else
          {
            v48 = v38;
            v49 = v37;
            if ( v36 != 1 )
            {
              v47 = v34;
              if ( v36 == 2 )
                v47 = (unsigned __int8 *)v25;
              goto LABEL_52;
            }
            Do1141(v37, (unsigned __int8 *)v25, v38, v34, v27);
          }
LABEL_57:
          memmove(&v37[-v57], v37, v57);
          memmove(&v37[v27], &v37[v27 - (__int64)v57], v57);
          v59(v80, (int)v37, v63, v62, v58);
          v53 = v71;
          if ( (v71 & 0x80u) != 0 )
          {
            v77(&v71);
            v53 = v71;
          }
          if ( (v53 & 0x800) != 0 )
          {
            AlphaBlendBGRF(&v71);
            LOBYTE(v53) = v71;
          }
          if ( (v53 & 0x10) != 0 )
          {
            MappingBGRF(v95, v96, v83, v90);
            v54 = v93 + v90;
            if ( v54 == v91 )
              v54 = v92;
            v90 = v54;
          }
          v78(&v71, v97, v98, v74, v82, v84, v84 + v88, v89, v79);
          v55 = v87 + v84;
          if ( v55 == v85 )
            v55 = v86;
          v74 += v76;
          v39 = v75 - 1;
          v84 = v55;
          v35 = v56;
          --v75;
          if ( !v36 )
          {
            v24 = v64;
            goto LABEL_70;
          }
        }
      }
    }
    v39 = v75;
LABEL_70:
    v29 = v60;
  }
  while ( v39 );
  return *(unsigned int *)(a1 + 148);
}
