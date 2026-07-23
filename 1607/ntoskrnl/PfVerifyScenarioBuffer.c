/*
 * XREFs of PfVerifyScenarioBuffer @ 0x1403EC7A0
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1403E6878 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     StringCchPrintfW @ 0x1400AC770 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PfVerifyScenarioId @ 0x1403EACAC (PfVerifyScenarioId.c)
 *     PfMetadataRecordIsEqual @ 0x1404D8684 (PfMetadataRecordIsEqual.c)
 */

__int64 __fastcall PfVerifyScenarioBuffer(unsigned int *a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // r12
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int *v12; // r11
  unsigned __int64 v13; // rdx
  char *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // r15d
  unsigned int v24; // esi
  int v25; // r10d
  unsigned int v26; // eax
  unsigned int *v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rdi
  unsigned int v33; // r10d
  int v34; // r8d
  int v35; // esi
  unsigned int v36; // r9d
  int v37; // r11d
  int v38; // ebp
  int v39; // ecx
  __int64 v40; // r10
  unsigned int *v41; // r8
  unsigned int v42; // eax
  unsigned __int64 v44; // r9
  unsigned int v45; // r10d
  unsigned int v46; // r14d
  unsigned int v47; // r15d
  unsigned int *v48; // rsi
  unsigned int v49; // r9d
  unsigned int v50; // ebp
  unsigned __int64 v51; // rdi
  unsigned __int16 *v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // r9
  char *v55; // rdx
  int v56; // eax
  int v57; // ecx
  unsigned int *v58; // rcx
  __int64 v59; // r10
  char *v60; // rdx
  unsigned int v61; // edx
  unsigned int v62; // r8d
  int v63; // r9d
  _DWORD *v64; // rcx
  __int64 v65; // r11
  int v66; // eax
  int v67; // eax
  unsigned int v68; // r10d
  int v69; // eax
  _DWORD *v70; // rcx
  __int64 v71; // rdx
  unsigned int *v72; // rcx
  unsigned int v73; // r9d
  unsigned __int16 v74; // dx
  _WORD *v75; // r8
  int v76; // r9d
  unsigned int v77; // r10d
  __int64 v78; // [rsp+20h] [rbp-118h]
  __int64 v79; // [rsp+28h] [rbp-110h]
  int v80; // [rsp+30h] [rbp-108h]
  unsigned int v81; // [rsp+34h] [rbp-104h]
  unsigned int v82; // [rsp+38h] [rbp-100h]
  unsigned __int64 v83; // [rsp+40h] [rbp-F8h]
  int v85; // [rsp+50h] [rbp-E8h]
  char v86; // [rsp+54h] [rbp-E4h]
  unsigned int v87; // [rsp+5Ch] [rbp-DCh]
  int v88; // [rsp+60h] [rbp-D8h]
  unsigned int v89; // [rsp+64h] [rbp-D4h]
  unsigned __int64 v90; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v91; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v92; // [rsp+78h] [rbp-C0h]
  unsigned int *v93; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v94; // [rsp+88h] [rbp-B0h]
  _WORD v95[16]; // [rsp+90h] [rbp-A8h] BYREF
  wchar_t pszDest[40]; // [rsp+B0h] [rbp-88h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a2 < 0x130 )
  {
    v3 = 10;
  }
  else if ( ((unsigned __int8)a1 & 7) != 0 )
  {
    v3 = 15;
  }
  else if ( *a1 == 30 && a1[1] == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v3 = 25;
    }
    else if ( a2 == a1[3] )
    {
      if ( a1[20] > 1 )
      {
        v3 = 27;
      }
      else
      {
        v6 = a1[22];
        v87 = v6;
        if ( v6 > 0x4000
          || (v7 = a1[28], v89 = v7, (unsigned int)v7 > 0x4000)
          || (v8 = a1[24], (unsigned int)v8 > 0x100000)
          || (v9 = a1[26], v9 > 0x400000) )
        {
          v3 = 30;
        }
        else if ( v6 && (_DWORD)v8 && v9 )
        {
          if ( a1[53] - 1 > 7 )
          {
            v3 = 35;
          }
          else if ( PfVerifyScenarioId((__int64)(a1 + 4)) )
          {
            v13 = (unsigned __int64)v12 + v12[21];
            v91 = v13;
            if ( (v13 & 3) != 0 )
            {
              v3 = 38;
            }
            else if ( v13 < (unsigned __int64)v12
                   || (v14 = (char *)v12 + v10, v90 = (unsigned __int64)v12 + v10, v13 >= (unsigned __int64)v12 + v10) )
            {
              v3 = 40;
            }
            else
            {
              v15 = 32LL * v6 + v13 - 1;
              if ( v15 < (unsigned __int64)v12 || v15 >= (unsigned __int64)v14 )
              {
                v3 = 45;
              }
              else
              {
                v16 = (unsigned __int64)v12 + v12[23];
                v92 = v16;
                if ( (v16 & 3) != 0 )
                {
                  v3 = 47;
                }
                else if ( v16 < (unsigned __int64)v12 || v16 >= (unsigned __int64)v14 )
                {
                  v3 = 50;
                }
                else
                {
                  v17 = v16 + 8 * v8 - 1;
                  if ( v17 < (unsigned __int64)v12 || v17 >= (unsigned __int64)v14 )
                  {
                    v3 = 55;
                  }
                  else
                  {
                    v18 = (unsigned __int64)v12 + v12[25];
                    v94 = v18;
                    if ( (v18 & 1) != 0 )
                    {
                      v3 = 57;
                    }
                    else if ( v18 < (unsigned __int64)v12 || v18 >= (unsigned __int64)v14 )
                    {
                      v3 = 60;
                    }
                    else
                    {
                      v19 = v18 + v11 - 1;
                      if ( v19 < (unsigned __int64)v12 || v19 >= (unsigned __int64)v14 )
                      {
                        v3 = 70;
                      }
                      else
                      {
                        v20 = (unsigned __int64)v12 + v12[27];
                        v83 = v20;
                        if ( (v20 & 7) != 0 )
                        {
                          v3 = 72;
                        }
                        else if ( v20 < (unsigned __int64)v12 || v20 >= (unsigned __int64)v14 )
                        {
                          v3 = 73;
                        }
                        else
                        {
                          v21 = v20 + v12[29] - 1LL;
                          if ( v21 < (unsigned __int64)v12 || v21 >= (unsigned __int64)v14 )
                          {
                            v3 = 74;
                          }
                          else
                          {
                            v22 = 96 * v7 + v20 - 1;
                            if ( v22 < (unsigned __int64)v12 || v22 >= (unsigned __int64)v14 )
                            {
                              v3 = 75;
                            }
                            else
                            {
                              v23 = v12[31];
                              if ( v23 > 7 )
                              {
                                v3 = 76;
                              }
                              else
                              {
                                v81 = 0;
                                v24 = v8;
                                v25 = 0;
                                v26 = 0;
                                while ( 1 )
                                {
                                  v27 = (unsigned int *)(v13 + 32LL * v26);
                                  v93 = v27;
                                  v28 = v18 + v27[3];
                                  if ( (v28 & 1) != 0 )
                                  {
                                    v3 = 77;
                                    goto LABEL_66;
                                  }
                                  if ( v28 < (unsigned __int64)v12 || v28 >= (unsigned __int64)v14 )
                                  {
                                    v3 = 80;
                                    goto LABEL_66;
                                  }
                                  v29 = v27[4];
                                  if ( !(_DWORD)v29 )
                                  {
                                    v3 = 90;
                                    goto LABEL_66;
                                  }
                                  if ( (unsigned int)v29 > 0x400 )
                                  {
                                    v3 = 100;
                                    goto LABEL_66;
                                  }
                                  v30 = (unsigned int)(2 * v29 + 2) + v28 - 1;
                                  if ( v30 < (unsigned __int64)v12 || v30 >= (unsigned __int64)v14 )
                                  {
                                    v3 = 110;
                                    goto LABEL_66;
                                  }
                                  if ( *(_WORD *)(v28 + 2 * v29) )
                                  {
                                    v3 = 120;
                                    goto LABEL_66;
                                  }
                                  v31 = v27[1];
                                  if ( v31 > 0x2000 )
                                  {
                                    v3 = 140;
                                    goto LABEL_66;
                                  }
                                  if ( v31 > v24 )
                                  {
                                    v3 = 150;
                                    goto LABEL_66;
                                  }
                                  v32 = (int)*v27;
                                  v82 = v24 - v31;
                                  if ( (_DWORD)v32 == -1 && v31 )
                                  {
                                    v3 = 152;
                                    goto LABEL_66;
                                  }
                                  if ( (_DWORD)v32 != v25 && (_DWORD)v32 != -1 )
                                  {
                                    v3 = 153;
                                    goto LABEL_66;
                                  }
                                  v88 = v31 + v25;
                                  v33 = v27[5];
                                  v34 = (v33 >> 8) & 0x7F;
                                  v86 = v33;
                                  v85 = v34;
                                  if ( v34 == 0 && (v33 & 1) == 0 && (v33 & 0xFE) == 0 )
                                  {
                                    v3 = 155;
                                    goto LABEL_66;
                                  }
                                  v35 = v33 & 1;
                                  if ( (v33 & 1) == 0 && !v27[2] )
                                  {
                                    v3 = 157;
                                    goto LABEL_66;
                                  }
                                  v80 = 0;
                                  v36 = *v27;
                                  v37 = 0;
                                  v38 = 0;
                                  v39 = 0;
                                  if ( (int)v32 < (int)(v32 + v31) )
                                    break;
LABEL_74:
                                  if ( v37 != v93[2] )
                                  {
                                    v3 = 185;
                                    goto LABEL_66;
                                  }
                                  if ( !v35 && (v39 != (unsigned __int8)v33 >> 1 || v38 != v34) )
                                  {
                                    v3 = 187;
                                    goto LABEL_66;
                                  }
                                  v12 = a1;
                                  v26 = v81 + 1;
                                  v24 = v82;
                                  v81 = v26;
                                  if ( v26 >= v87 )
                                  {
                                    v44 = v83;
                                    if ( v82 )
                                    {
                                      v3 = 190;
                                    }
                                    else
                                    {
                                      v45 = v89;
                                      v46 = 0;
                                      v47 = 0;
                                      if ( v89 )
                                      {
                                        while ( 1 )
                                        {
                                          v48 = (unsigned int *)(v44 + 96LL * v47++);
                                          v49 = v47;
                                          v50 = v48[4];
                                          v91 = *((_QWORD *)v48 + 1);
                                          if ( v47 < v45 )
                                            break;
LABEL_87:
                                          v51 = v83 + *v48;
                                          if ( (v51 & 1) != 0 )
                                          {
                                            v3 = 195;
                                            goto LABEL_66;
                                          }
                                          if ( v51 < (unsigned __int64)v12 || v51 >= v90 )
                                          {
                                            v3 = 200;
                                            goto LABEL_66;
                                          }
                                          v52 = (unsigned __int16 *)(v51 + 2LL * v48[1]);
                                          if ( (char *)v52 + 1 < (char *)v12 || (unsigned __int64)v52 + 1 >= v90 )
                                          {
                                            v3 = 210;
                                            goto LABEL_66;
                                          }
                                          if ( *v52 )
                                          {
                                            v3 = 220;
                                            goto LABEL_66;
                                          }
                                          memset(v95, 0, sizeof(v95));
                                          v53 = v48[2];
                                          v54 = v48[3];
                                          v95[13] &= 0xFFE1u;
                                          LODWORD(v79) = v50;
                                          LODWORD(v78) = v53;
                                          StringCchPrintfW(
                                            pszDest,
                                            0x23uLL,
                                            L"\\VOLUME{%08lx%08lx-%08lx}",
                                            v54,
                                            v78,
                                            v79);
                                          v55 = (char *)pszDest - v51;
                                          do
                                          {
                                            v56 = *(unsigned __int16 *)&v55[v51];
                                            v57 = *(unsigned __int16 *)v51 - v56;
                                            if ( v57 )
                                              break;
                                            v51 += 2LL;
                                          }
                                          while ( v56 );
                                          if ( v57 )
                                          {
                                            v3 = 222;
                                            goto LABEL_66;
                                          }
                                          v58 = (unsigned int *)(v83 + v48[5]);
                                          if ( ((unsigned __int8)v58 & 7) != 0 )
                                          {
                                            v3 = 225;
                                            goto LABEL_66;
                                          }
                                          v12 = a1;
                                          if ( v58 < a1 || (unsigned __int64)v58 >= v90 )
                                          {
                                            v3 = 230;
                                            goto LABEL_66;
                                          }
                                          v59 = v48[6];
                                          if ( (unsigned int)v59 < 0x18 )
                                          {
                                            v3 = 240;
                                            goto LABEL_66;
                                          }
                                          v60 = (char *)v58 + v59 - 1;
                                          if ( v60 < (char *)a1 || (unsigned __int64)v60 >= v90 )
                                          {
                                            v3 = 245;
                                            goto LABEL_66;
                                          }
                                          if ( *v58 != 3 )
                                          {
                                            v3 = 250;
                                            goto LABEL_66;
                                          }
                                          v61 = v58[1];
                                          if ( v61 > 0x84000 )
                                          {
                                            v3 = 260;
                                            goto LABEL_66;
                                          }
                                          v62 = a1[31];
                                          v63 = 0;
                                          if ( v62 )
                                          {
                                            v64 = v48 + 9;
                                            v65 = v62;
                                            do
                                            {
                                              v66 = *v64 + v64[7];
                                              ++v64;
                                              v63 += v66;
                                              --v65;
                                            }
                                            while ( v65 );
                                            v12 = a1;
                                          }
                                          if ( v63 != v61 )
                                          {
                                            v3 = 265;
                                            goto LABEL_66;
                                          }
                                          v67 = 24;
                                          if ( v61 )
                                            v67 = 8 * v61 + 16;
                                          if ( v67 != (_DWORD)v59 )
                                          {
                                            v3 = 270;
                                            goto LABEL_66;
                                          }
                                          v68 = v48[8];
                                          if ( v68 > 0x80000 )
                                          {
                                            v3 = 280;
                                            goto LABEL_66;
                                          }
                                          v69 = 0;
                                          if ( v62 )
                                          {
                                            v70 = v48 + 16;
                                            v71 = a1[31];
                                            do
                                            {
                                              v69 += *v70++;
                                              --v71;
                                            }
                                            while ( v71 );
                                          }
                                          if ( v69 != v68 )
                                          {
                                            v3 = 281;
                                            goto LABEL_66;
                                          }
                                          v46 += v69;
                                          v72 = (unsigned int *)(v83 + v48[7]);
                                          if ( ((unsigned __int8)v72 & 1) != 0 )
                                          {
                                            v3 = 283;
                                            goto LABEL_66;
                                          }
                                          v73 = 0;
                                          if ( v68 )
                                          {
                                            while ( v72 >= v12 && (unsigned __int64)v72 < v90 )
                                            {
                                              if ( (unsigned int *)((char *)v72 + 3) < v12
                                                || (unsigned __int64)v72 + 3 >= v90 )
                                              {
                                                v3 = 290;
                                                goto LABEL_66;
                                              }
                                              v74 = *(_WORD *)v72;
                                              if ( *(_WORD *)v72 >= 0x400u )
                                              {
                                                v3 = 300;
                                                goto LABEL_66;
                                              }
                                              v75 = (_WORD *)v72 + v74 + 1;
                                              if ( (unsigned int *)((char *)v75 + 1) < v12
                                                || (unsigned __int64)v75 + 1 >= v90 )
                                              {
                                                v3 = 310;
                                                goto LABEL_66;
                                              }
                                              if ( *((_WORD *)v72 + v74 + 1) )
                                              {
                                                v3 = 320;
                                                goto LABEL_66;
                                              }
                                              ++v73;
                                              v72 = (unsigned int *)(v75 + 1);
                                              if ( v73 >= v68 )
                                                goto LABEL_129;
                                            }
                                            v3 = 285;
                                            goto LABEL_66;
                                          }
LABEL_129:
                                          v45 = v12[28];
                                          if ( v47 >= v45 )
                                            goto LABEL_130;
                                          v44 = v83;
                                        }
                                        while ( !(unsigned __int8)PfMetadataRecordIsEqual(v83 + 96LL * v49, &v91, v50) )
                                        {
                                          v49 = v76 + 1;
                                          if ( v49 >= v77 )
                                            goto LABEL_87;
                                        }
                                        v3 = 192;
                                      }
                                      else
                                      {
LABEL_130:
                                        if ( v46 == v12[30] )
                                        {
                                          if ( v46 > 0x80000 )
                                            v3 = 340;
                                          else
                                            v4 = 1;
                                        }
                                        else
                                        {
                                          v3 = 330;
                                        }
                                      }
                                    }
                                    goto LABEL_66;
                                  }
                                  v25 = v88;
                                  v14 = (char *)v90;
                                  v18 = v94;
                                  v13 = v91;
                                }
                                v40 = v32;
                                v41 = (unsigned int *)(v92 + 4 + 8 * v32);
                                while ( v40 >= 0 && v36 < (unsigned int)v8 )
                                {
                                  if ( v36 != (_DWORD)v32 && *(v41 - 1) <= *(v41 - 3) )
                                  {
                                    v3 = 165;
                                    goto LABEL_66;
                                  }
                                  v42 = *v41;
                                  if ( (*v41 & 1) == 0 && ((v42 >> 4) & 7) > v23 )
                                  {
                                    v3 = 167;
                                    goto LABEL_66;
                                  }
                                  if ( (v42 & 0xE) == 0 )
                                  {
                                    v3 = 173;
                                    goto LABEL_66;
                                  }
                                  if ( (*v41 & 1) != 0 )
                                  {
                                    if ( (v42 & 8) != 0 )
                                    {
                                      v3 = 175;
                                      goto LABEL_66;
                                    }
                                  }
                                  else
                                  {
                                    ++v37;
                                    if ( (v42 & 4) != 0 )
                                      v80 |= 1 << ((v42 >> 4) & 7);
                                    if ( (v42 & 2) != 0 )
                                      v38 |= 1 << ((v42 >> 4) & 7);
                                  }
                                  ++v36;
                                  ++v40;
                                  v41 += 2;
                                  if ( v40 >= (int)(v32 + v31) )
                                  {
                                    v34 = v85;
                                    LOBYTE(v33) = v86;
                                    v39 = v80;
                                    goto LABEL_74;
                                  }
                                }
                                v3 = 160;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v3 = 37;
          }
        }
        else
        {
          v3 = 33;
        }
      }
    }
    else
    {
      v3 = 26;
    }
  }
  else
  {
    v3 = 20;
  }
LABEL_66:
  *a3 = v3;
  return v4;
}
