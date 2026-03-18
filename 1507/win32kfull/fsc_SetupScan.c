/*
 * XREFs of fsc_SetupScan @ 0x1C00AED9C
 * Callers:
 *     fsc_FillGlyph @ 0x1C00AFD48 (fsc_FillGlyph.c)
 * Callees:
 *     FixPointers @ 0x1C02DDECC (FixPointers.c)
 */

__int64 __fastcall fsc_SetupScan(
        __int16 *a1,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        __int64 *a10)
{
  int v10; // r10d
  int v11; // r11d
  int v12; // r9d
  __int16 v13; // di
  char v14; // bl
  __int64 (__fastcall *v15)(); // rax
  __int64 (__fastcall *v16)(); // rax
  __int64 (__fastcall *v17)(); // rax
  unsigned __int64 *v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rbp
  unsigned __int64 v22; // rdx
  _QWORD *v23; // r15
  unsigned __int64 v24; // rdx
  _QWORD *v25; // r14
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rsi
  unsigned __int64 v28; // rdx
  int v29; // r13d
  unsigned __int64 v30; // r11
  __int64 v31; // rdx
  __int16 v32; // r8
  __int16 v33; // ax
  __int64 v34; // rax
  unsigned __int64 v35; // r11
  unsigned __int64 *v36; // r15
  unsigned __int64 v37; // r9
  int v38; // r11d
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int16 v41; // bp
  unsigned __int64 *v42; // r14
  unsigned __int64 v43; // r8
  _QWORD *v44; // rsi
  unsigned __int64 v45; // r8
  _QWORD *v46; // rdi
  unsigned __int64 v47; // r8
  _QWORD *v48; // rbx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r8
  __int64 v52; // r10
  __int16 v53; // ax
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // r8
  __int64 v60; // rdx
  __int16 v63; // [rsp+80h] [rbp+18h]
  char v64; // [rsp+88h] [rbp+20h]

  v10 = a4;
  v11 = *a1;
  v12 = a1[2];
  v13 = a3;
  dword_1C0322EE8 = a1[1];
  dword_1C0322EEC = a1[3];
  dword_1C0322EF0 = v11;
  dword_1C0322EF4 = v12;
  dword_1C0322EFC = a3;
  dword_1C0322F00 = v10;
  if ( (a2 & 6) == 4 )
  {
    dword_1C0322FF2 = 65538;
    v14 = 1;
    if ( a3 != v11 || (v15 = AddHorizSmartScan, v10 != v12) )
      v15 = AddHorizSmartBand;
    qword_1C0322F98 = (__int64)v15;
    v16 = AddVertSmartScan;
  }
  else
  {
    v14 = 0;
    dword_1C0322FF2 = 1;
    if ( a3 != v11 || (v17 = AddHorizSimpleScan, v10 != v12) )
      v17 = AddHorizSimpleBand;
    qword_1C0322F98 = (__int64)v17;
    v16 = AddVertSimpleScan;
  }
  qword_1C0322FA0 = (__int64)v16;
  v18 = (unsigned __int64 *)qword_1C0322FF8;
  v19 = (8 * (a3 - v10) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v20 = v19 + qword_1C0322FF8;
  qword_1C0322FF8 = v20;
  if ( v20 > qword_1C0323008 )
  {
    qword_1C0322F18 = 0LL;
  }
  else
  {
    qword_1C0322F18 = (__int64)v18;
    if ( v18 )
    {
      v21 = (unsigned __int64 *)v20;
      v22 = v19 + v20;
      qword_1C0322FF8 = v22;
      if ( v22 > qword_1C0323008 )
      {
        qword_1C0322F20 = 0LL;
      }
      else
      {
        qword_1C0322F20 = (__int64)v21;
        if ( v21 )
        {
          v23 = (_QWORD *)v22;
          v24 = v19 + v22;
          qword_1C0322FF8 = v24;
          if ( v24 > qword_1C0323008 )
          {
            qword_1C0322F28 = 0LL;
          }
          else
          {
            qword_1C0322F28 = (__int64)v23;
            if ( v23 )
            {
              v25 = (_QWORD *)v24;
              v26 = v19 + v24;
              qword_1C0322FF8 = v26;
              if ( v26 > qword_1C0323008 )
              {
                qword_1C0322F30 = 0LL;
              }
              else
              {
                qword_1C0322F30 = (__int64)v25;
                if ( v25 )
                {
                  v27 = (_QWORD *)v26;
                  v28 = v19 + v26;
                  qword_1C0322FF8 = v28;
                  if ( v28 > qword_1C0323008 )
                  {
                    qword_1C0322F38 = 0LL;
                  }
                  else
                  {
                    qword_1C0322F38 = (__int64)v27;
                    if ( v27 )
                    {
                      dword_1C0322FEC = 0;
                      v29 = a9;
                      dword_1C0322FE8 = a9;
                      if ( a7 <= 0x7FFFFFF )
                      {
                        v30 = v28;
                        v64 = v14;
                        qword_1C0322FF8 = ((int)((a7 << (v14 + 2)) + 7) & 0xFFFFFFFFFFFFFFF8uLL) + v28;
                        if ( qword_1C0322FF8 <= (unsigned __int64)qword_1C0323008 )
                        {
                          if ( v28 )
                          {
                            if ( a10 != (__int64 *)a10[4] )
                              FixPointers(a10);
                            v31 = *a10;
                            v32 = 0;
                            if ( (__int16)v10 < v13 )
                            {
                              do
                              {
                                while ( *(__int16 *)v31 <= (__int16)v10 )
                                {
                                  v33 = *(_WORD *)(v31 + 2);
                                  v31 = *(_QWORD *)(v31 + 8);
                                  v32 += v33 << v14;
                                }
                                *v18 = v30;
                                LOWORD(v10) = v10 + 1;
                                *v23 = v30;
                                ++v18;
                                ++v23;
                                v34 = 2LL * v32;
                                v35 = v34 + v30;
                                *v21++ = v35;
                                *v25 = v35;
                                v30 = v34 + v35;
                                *v27 = v30;
                                ++v25;
                                ++v27;
                              }
                              while ( (__int16)v10 < v13 );
                              v29 = a9;
                            }
                            if ( (a2 & 2) != 0 )
                              return 0LL;
                            v36 = (unsigned __int64 *)qword_1C0323000;
                            v37 = qword_1C0323010;
                            v38 = a1[1];
                            v63 = a1[3];
                            v39 = (8 * (v63 - v38) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
                            v40 = v39 + qword_1C0323000;
                            qword_1C0323000 = v40;
                            if ( v40 > qword_1C0323010 )
                            {
                              qword_1C0322F58 = 0LL;
                            }
                            else
                            {
                              v41 = 0;
                              qword_1C0322F58 = (__int64)v36;
                              if ( v36 )
                              {
                                v42 = (unsigned __int64 *)v40;
                                v43 = v39 + v40;
                                qword_1C0323000 = v43;
                                if ( v43 > qword_1C0323010 )
                                {
                                  qword_1C0322F60 = 0LL;
                                }
                                else
                                {
                                  qword_1C0322F60 = (__int64)v42;
                                  if ( v42 )
                                  {
                                    v44 = (_QWORD *)v43;
                                    v45 = v39 + v43;
                                    qword_1C0323000 = v45;
                                    if ( v45 > qword_1C0323010 )
                                    {
                                      qword_1C0322F68 = 0LL;
                                    }
                                    else
                                    {
                                      qword_1C0322F68 = (__int64)v44;
                                      if ( v44 )
                                      {
                                        v46 = (_QWORD *)v45;
                                        v47 = v39 + v45;
                                        qword_1C0323000 = v47;
                                        if ( v47 > qword_1C0323010 )
                                        {
                                          qword_1C0322F70 = 0LL;
                                        }
                                        else
                                        {
                                          qword_1C0322F70 = (__int64)v46;
                                          if ( v46 )
                                          {
                                            v48 = (_QWORD *)v47;
                                            v49 = v39 + v47;
                                            qword_1C0323000 = v49;
                                            if ( v49 > qword_1C0323010 )
                                            {
                                              qword_1C0322F78 = 0LL;
                                            }
                                            else
                                            {
                                              qword_1C0322F78 = (__int64)v48;
                                              if ( v48 )
                                              {
                                                if ( a5 )
                                                {
                                                  v60 = v49;
                                                  dword_1C0322F0C = 0x7FFFFFFF;
                                                  v49 += (a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
                                                  qword_1C0323000 = v49;
                                                  if ( v49 > qword_1C0323010 )
                                                    v60 = 0LL;
                                                  qword_1C0322F10 = v60;
                                                }
                                                if ( a8 <= 0x7FFFFFF )
                                                {
                                                  v50 = v49;
                                                  v51 = ((int)((a8 << (v64 + 2)) + 7) & 0xFFFFFFFFFFFFFFF8uLL) + v49;
                                                  qword_1C0323000 = v51;
                                                  if ( v51 <= qword_1C0323010 )
                                                  {
                                                    if ( v50 )
                                                    {
                                                      v52 = a10[1];
                                                      if ( (__int16)v38 < v63 )
                                                      {
                                                        do
                                                        {
                                                          while ( *(__int16 *)v52 <= (__int16)v38 )
                                                          {
                                                            v53 = *(_WORD *)(v52 + 2);
                                                            v52 = *(_QWORD *)(v52 + 8);
                                                            v41 += v53 << v64;
                                                          }
                                                          *v36 = v50;
                                                          LOWORD(v38) = v38 + 1;
                                                          *v44 = v50;
                                                          ++v36;
                                                          ++v44;
                                                          v54 = 2LL * v41;
                                                          v55 = v54 + v50;
                                                          *v42++ = v55;
                                                          *v46 = v55;
                                                          v50 = v54 + v55;
                                                          *v48 = v50;
                                                          ++v46;
                                                          ++v48;
                                                        }
                                                        while ( (__int16)v38 < a1[3] );
                                                        v29 = a9;
                                                      }
                                                      if ( (a2 & 4) == 0 )
                                                        return 0LL;
                                                      if ( v29 >= 0 && (unsigned __int64)v29 <= 0xFFFFFFF )
                                                      {
                                                        v57 = v51;
                                                        v58 = (4 * v29 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
                                                        v59 = v58 + v51;
                                                        qword_1C0323000 = v59;
                                                        if ( v59 > v37 )
                                                        {
                                                          qword_1C0322FD8 = 0LL;
                                                        }
                                                        else
                                                        {
                                                          qword_1C0322FD8 = v57;
                                                          if ( v57 )
                                                          {
                                                            qword_1C0323000 = v58 + v59;
                                                            if ( v58 + v59 > v37 )
                                                            {
                                                              qword_1C0322FE0 = 0LL;
                                                            }
                                                            else
                                                            {
                                                              qword_1C0322FE0 = v59;
                                                              if ( v59 )
                                                                return 0LL;
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
                }
              }
            }
          }
        }
      }
    }
  }
  return 6657LL;
}
