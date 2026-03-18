/*
 * XREFs of FastExpAA_CY @ 0x1C0256A20
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0009D98 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0253DB8 (AlphaBlendBGRF.c)
 *     Do1141 @ 0x1C0254400 (Do1141.c)
 *     Do13 @ 0x1C0254514 (Do13.c)
 *     Do1319 @ 0x1C02545D4 (Do1319.c)
 *     Do3121 @ 0x1C02546A0 (Do3121.c)
 *     Do3263 @ 0x1C02547A0 (Do3263.c)
 *     Do35 @ 0x1C02548C8 (Do35.c)
 *     Do5225 @ 0x1C02549B8 (Do5225.c)
 *     Do6251 @ 0x1C0254B08 (Do6251.c)
 *     MappingBGRF @ 0x1C0258E78 (MappingBGRF.c)
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
  __int64 v24; // rcx
  __int16 v25; // ax
  unsigned __int16 *v26; // rsi
  char *v27; // r12
  __int64 v28; // rdx
  int v29; // r14d
  unsigned __int8 *v30; // rdi
  __int64 (__fastcall *v31)(int, int, int, int, __int64, int); // r13
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  __int64 i; // rcx
  unsigned __int8 *v36; // r15
  int v37; // ecx
  int v38; // r13d
  _BYTE *v39; // rdi
  unsigned __int8 *v40; // rsi
  unsigned int v41; // eax
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned __int8 *v46; // rdx
  unsigned __int8 *v47; // r9
  unsigned __int8 *v48; // rdx
  unsigned __int8 *v49; // rdx
  unsigned __int8 *v50; // r8
  _BYTE *v51; // rcx
  unsigned __int8 *v52; // r9
  unsigned __int8 *v53; // rdx
  unsigned __int8 *v54; // rdx
  __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // [rsp+58h] [rbp-B0h]
  int v59; // [rsp+5Ch] [rbp-ACh]
  signed int v60; // [rsp+64h] [rbp-A4h]
  __int64 (__fastcall *v61)(int, int, int, int, int); // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall *v62)(int, int, int, int, __int64, int); // [rsp+70h] [rbp-98h]
  __int64 v63; // [rsp+78h] [rbp-90h]
  unsigned __int16 *v64; // [rsp+80h] [rbp-88h]
  __int64 v66; // [rsp+90h] [rbp-78h]
  char *v67; // [rsp+98h] [rbp-70h]
  unsigned __int8 *v68; // [rsp+A0h] [rbp-68h]
  unsigned __int8 *v69; // [rsp+A8h] [rbp-60h]
  unsigned __int8 *v70; // [rsp+B0h] [rbp-58h]
  char *v71; // [rsp+B8h] [rbp-50h]
  __int64 v72; // [rsp+C8h] [rbp-40h]
  int v73; // [rsp+D8h] [rbp-30h] BYREF
  char v74; // [rsp+E0h] [rbp-28h]
  int v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  unsigned int v77; // [rsp+16Ch] [rbp+64h]
  int v78; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v79)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v80)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  __int64 v82; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  __int64 v84; // [rsp+258h] [rbp+150h]
  __int64 v85; // [rsp+260h] [rbp+158h]
  __int64 v86; // [rsp+270h] [rbp+168h]
  __int64 v87; // [rsp+278h] [rbp+170h]
  __int64 v88; // [rsp+280h] [rbp+178h]
  int v89; // [rsp+288h] [rbp+180h]
  int v90; // [rsp+28Ch] [rbp+184h]
  int v91; // [rsp+290h] [rbp+188h]
  __int64 v92; // [rsp+298h] [rbp+190h]
  __int64 v93; // [rsp+2A0h] [rbp+198h]
  __int64 v94; // [rsp+2A8h] [rbp+1A0h]
  int v95; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  __int64 v97; // [rsp+2F8h] [rbp+1F0h]
  __int64 v98; // [rsp+300h] [rbp+1F8h]
  __int64 v99; // [rsp+308h] [rbp+200h]
  __int64 v100; // [rsp+310h] [rbp+208h]
  __int64 v101; // [rsp+318h] [rbp+210h]
  __int64 v102; // [rsp+320h] [rbp+218h]
  int v103; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = &v73;
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
    return v77;
  v18 = v82;
  v19 = v103;
  v20 = v101;
  v21 = v102;
  v22 = *(_QWORD *)(v82 + 96);
  v59 = v103;
  **(_WORD **)(v82 + 88) += *(unsigned __int8 *)(v82 + 82);
  *(_WORD *)(v22 - 2) += *(unsigned __int8 *)(v18 + 83);
  v66 = v20 - v19 * *(unsigned __int8 *)(v18 + 82);
  v23 = v83;
  v63 = v83;
  v24 = *(_QWORD *)(v83 + 96);
  v25 = *(unsigned __int8 *)(v83 + 83);
  v26 = *(unsigned __int16 **)(v83 + 88);
  v72 = v19 * *(unsigned __int8 *)(v18 + 83) + v21;
  *(_WORD *)(v24 - 2) += v25;
  v60 = (~v74 & 4 | 2u) >> 1;
  v27 = (char *)(*(_QWORD *)(v23 + 32) + 3 * v60);
  v67 = v27;
  v28 = 6 * v60 + v75;
  v29 = v75;
  v68 = (unsigned __int8 *)&v27[v28];
  v69 = (unsigned __int8 *)&v27[v28 + v28];
  v70 = &v69[v28];
  v30 = &v69[v28 + v28];
  v71 = (char *)v30;
  if ( v60 == 1 )
  {
    v61 = GrayFastExpAA_CX;
    v31 = GraySharpenInput;
  }
  else
  {
    v61 = (__int64 (__fastcall *)(int, int, int, int, int))FastExpAA_CX;
    v31 = SharpenInput;
  }
  v32 = *(unsigned __int8 *)(v23 + 80);
  v62 = v31;
  GetFixupScan((__int64)&v73, &v69[v28]);
  v33 = v32 - 1;
  if ( v33 < 0 )
    v73 |= 0x20u;
  GetFixupScan((__int64)&v73, v30);
  if ( v33 - 1 < 0 )
    v73 |= 0x20u;
  Src = (char *)Src + 9;
  v34 = -3;
  do
  {
    for ( i = 0LL; i < 4; ++i )
      (&v67)[i] = (char *)(&v68)[i];
    v71 = v27;
    GetFixupScan((__int64)&v73, v27);
    v36 = v69;
    v31(0, (int)v69, (int)v69, (int)v70, (__int64)v27, v29);
    v27 = v67;
    if ( ++v34 >= 0 )
    {
      v37 = *v26++;
      v58 = v37;
      v38 = v37;
      v64 = v26;
      if ( !v34 )
      {
        v37 += *(unsigned __int8 *)(v63 + 82);
        v58 = v37;
      }
      v39 = Src;
      if ( v38 )
      {
        v40 = v68;
        v41 = v77;
        while ( 1 )
        {
          --v38;
          if ( !v41 )
            return *(unsigned int *)(a1 + 148);
          v42 = v37 - 1;
          if ( !v42 )
          {
            Do5225(v39, (unsigned __int8 *)v27, v40, v36, v29);
            goto LABEL_57;
          }
          v43 = v42 - 1;
          if ( !v43 )
          {
            v54 = v36;
            if ( v38 == 1 )
              v54 = (unsigned __int8 *)v27;
            Do13(v39, v54, v40, v29);
            goto LABEL_57;
          }
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              if ( v45 == 1 )
              {
                switch ( v38 )
                {
                  case 0:
                    v46 = v36;
                    goto LABEL_37;
                  case 1:
                    v47 = (unsigned __int8 *)v27;
                    v48 = v36;
                    goto LABEL_33;
                  case 2:
                    Do3263(v39, (unsigned __int8 *)v27, v40, v36, v29);
                    break;
                  case 3:
                    v47 = v36;
                    v48 = (unsigned __int8 *)v27;
LABEL_33:
                    Do6251(v39, v48, v40, v47, v29);
                    break;
                  case 4:
                    v46 = (unsigned __int8 *)v27;
LABEL_37:
                    Do1319(v39, v46, v40, v29);
                    break;
                }
              }
            }
            else
            {
              switch ( v38 )
              {
                case 0:
                  v49 = v36;
                  goto LABEL_43;
                case 1:
                  v52 = (unsigned __int8 *)v27;
                  v53 = v36;
                  goto LABEL_45;
                case 2:
                  v52 = v36;
                  v53 = (unsigned __int8 *)v27;
LABEL_45:
                  Do3121(v39, v53, v40, v52, v29);
                  break;
                case 3:
                  v49 = (unsigned __int8 *)v27;
LABEL_43:
                  v50 = v40;
                  v51 = v39;
LABEL_52:
                  Do35(v51, v49, v50, v29);
                  break;
              }
            }
          }
          else
          {
            v50 = v40;
            v51 = v39;
            if ( v38 != 1 )
            {
              v49 = v36;
              if ( v38 == 2 )
                v49 = (unsigned __int8 *)v27;
              goto LABEL_52;
            }
            Do1141(v39, (unsigned __int8 *)v27, v40, v36, v29);
          }
LABEL_57:
          memmove(&v39[-v60], v39, v60);
          memmove(&v39[v29], &v39[v29 - (__int64)v60], v60);
          v61(v82, (int)v39, v66, v72, v59);
          v55 = v73;
          if ( (v73 & 0x80u) != 0 )
          {
            v79(&v73);
            v55 = v73;
          }
          if ( (v55 & 0x800) != 0 )
          {
            AlphaBlendBGRF(&v73);
            LOBYTE(v55) = v73;
          }
          if ( (v55 & 0x10) != 0 )
          {
            MappingBGRF(v97, v98, v85, v92);
            v56 = v95 + v92;
            if ( v56 == v93 )
              v56 = v94;
            v92 = v56;
          }
          v80(&v73, v99, v100, v76, v84, v86, v86 + v90, v91, v81);
          v57 = v89 + v86;
          if ( v57 == v87 )
            v57 = v88;
          v76 += v78;
          v41 = v77 - 1;
          v86 = v57;
          v37 = v58;
          --v77;
          if ( !v38 )
          {
            v26 = v64;
            goto LABEL_70;
          }
        }
      }
    }
    v41 = v77;
LABEL_70:
    v31 = v62;
  }
  while ( v41 );
  return *(unsigned int *)(a1 + 148);
}
