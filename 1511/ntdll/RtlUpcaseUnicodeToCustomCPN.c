/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800D5E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeToCustomCPN(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  _BYTE *v6; // r10
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  _BYTE *v12; // r10
  unsigned __int16 *v13; // rsi
  __int64 v14; // rax
  unsigned __int16 v15; // r11
  unsigned __int16 v16; // r11
  unsigned __int16 v17; // r11
  unsigned __int16 v18; // r11
  unsigned __int16 v19; // r11
  unsigned __int16 v20; // r11
  unsigned __int16 v21; // r11
  unsigned __int16 v22; // r11
  unsigned __int16 v23; // r11
  unsigned __int16 v24; // r11
  unsigned __int16 v25; // r11
  unsigned __int16 v26; // r11
  unsigned __int16 v27; // r11
  unsigned __int16 v28; // r11
  unsigned __int16 v29; // r11
  unsigned __int16 v30; // r11
  __int64 v31; // rsi
  int v32; // r11d
  __int64 v33; // r15
  unsigned __int16 *v34; // r12
  __int64 v35; // r11
  __int64 v36; // rax
  __int16 v37; // dx
  unsigned __int16 v38; // r8
  __int64 v39; // rax
  unsigned int v40; // r8d
  __int16 v41; // dx
  unsigned int v42; // eax
  bool v43; // zf
  int v45; // [rsp+40h] [rbp+8h]
  unsigned int v46; // [rsp+50h] [rbp+18h]
  unsigned int v47; // [rsp+68h] [rbp+30h]

  v46 = a3;
  v6 = a2;
  v7 = a6 >> 1;
  v47 = a6 >> 1;
  if ( !*(_WORD *)(a1 + 12) )
  {
    v8 = a3;
    if ( v7 < a3 )
      v8 = v7;
    if ( a4 )
      *a4 = v8;
    v9 = *(_QWORD *)(a1 + 40);
    v10 = Nls844UnicodeUpcaseTable;
    v11 = v8 & 0xF;
    v12 = &a2[v11];
    v13 = &a5[v11];
    while ( (unsigned int)v11 <= 8 )
    {
      if ( (_DWORD)v11 == 8 )
        goto LABEL_64;
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 != 1 )
        {
          if ( (_DWORD)v11 != 2 )
          {
            if ( (_DWORD)v11 != 3 )
            {
              if ( (_DWORD)v11 != 4 )
              {
                if ( (_DWORD)v11 != 5 )
                {
                  if ( (_DWORD)v11 != 6 )
                    goto LABEL_69;
                  goto LABEL_74;
                }
                goto LABEL_79;
              }
              goto LABEL_84;
            }
            goto LABEL_89;
          }
          goto LABEL_94;
        }
        goto LABEL_99;
      }
LABEL_104:
      v8 -= v11;
      LODWORD(v11) = 16;
      if ( !v8 )
        return v46 < v47 ? 0x80000005 : 0;
    }
    if ( (_DWORD)v11 != 9 )
    {
      if ( (_DWORD)v11 != 10 )
      {
        if ( (_DWORD)v11 != 11 )
        {
          if ( (_DWORD)v11 != 12 )
          {
            if ( (_DWORD)v11 != 13 )
            {
              if ( (_DWORD)v11 != 14 )
              {
                if ( (_DWORD)v11 != 15 )
                {
                  v14 = *v13;
                  v13 += 16;
                  v12 += 16;
                  v15 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(v14 + v9));
                  if ( v15 >= 0x61u )
                  {
                    if ( v15 > 0x7Au )
                      v15 += *(_WORD *)(v10
                                      + 2LL
                                      * ((v15 & 0xF)
                                       + (unsigned int)*(unsigned __int16 *)(v10
                                                                           + 2LL
                                                                           * (((v15 >> 4) & 0xF)
                                                                            + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v15 >> 8))))));
                    else
                      v15 -= 32;
                  }
                  *(v12 - 16) = *(_BYTE *)(v15 + v9);
                }
                v16 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 15) + v9));
                if ( v16 >= 0x61u )
                {
                  if ( v16 > 0x7Au )
                    v16 += *(_WORD *)(v10
                                    + 2LL
                                    * ((v16 & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(v10
                                                                         + 2LL
                                                                         * (((v16 >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v16 >> 8))))));
                  else
                    v16 -= 32;
                }
                *(v12 - 15) = *(_BYTE *)(v16 + v9);
              }
              v17 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 14) + v9));
              if ( v17 >= 0x61u )
              {
                if ( v17 > 0x7Au )
                  v17 += *(_WORD *)(v10
                                  + 2LL
                                  * ((v17 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(v10
                                                                       + 2LL
                                                                       * (((v17 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v17 >> 8))))));
                else
                  v17 -= 32;
              }
              *(v12 - 14) = *(_BYTE *)(v17 + v9);
            }
            v18 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 13) + v9));
            if ( v18 >= 0x61u )
            {
              if ( v18 > 0x7Au )
                v18 += *(_WORD *)(v10
                                + 2LL
                                * ((v18 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v10
                                                                     + 2LL
                                                                     * (((v18 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v18 >> 8))))));
              else
                v18 -= 32;
            }
            *(v12 - 13) = *(_BYTE *)(v18 + v9);
          }
          v19 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 12) + v9));
          if ( v19 >= 0x61u )
          {
            if ( v19 > 0x7Au )
              v19 += *(_WORD *)(v10
                              + 2LL
                              * ((v19 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v10
                                                                   + 2LL
                                                                   * (((v19 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v19 >> 8))))));
            else
              v19 -= 32;
          }
          *(v12 - 12) = *(_BYTE *)(v19 + v9);
        }
        v20 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 11) + v9));
        if ( v20 >= 0x61u )
        {
          if ( v20 > 0x7Au )
            v20 += *(_WORD *)(v10
                            + 2LL
                            * ((v20 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v10
                                                                 + 2LL
                                                                 * (((v20 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v20 >> 8))))));
          else
            v20 -= 32;
        }
        *(v12 - 11) = *(_BYTE *)(v20 + v9);
      }
      v21 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 10) + v9));
      if ( v21 >= 0x61u )
      {
        if ( v21 > 0x7Au )
          v21 += *(_WORD *)(v10
                          + 2LL
                          * ((v21 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v10
                                                               + 2LL
                                                               * (((v21 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v21 >> 8))))));
        else
          v21 -= 32;
      }
      *(v12 - 10) = *(_BYTE *)(v21 + v9);
    }
    v22 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 9) + v9));
    if ( v22 >= 0x61u )
    {
      if ( v22 > 0x7Au )
        v22 += *(_WORD *)(v10
                        + 2LL
                        * ((v22 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v22 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v22 >> 8))))));
      else
        v22 -= 32;
    }
    *(v12 - 9) = *(_BYTE *)(v22 + v9);
LABEL_64:
    v23 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 8) + v9));
    if ( v23 >= 0x61u )
    {
      if ( v23 > 0x7Au )
        v23 += *(_WORD *)(v10
                        + 2LL
                        * ((v23 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v23 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v23 >> 8))))));
      else
        v23 -= 32;
    }
    *(v12 - 8) = *(_BYTE *)(v23 + v9);
LABEL_69:
    v24 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 7) + v9));
    if ( v24 >= 0x61u )
    {
      if ( v24 > 0x7Au )
        v24 += *(_WORD *)(v10
                        + 2LL
                        * ((v24 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v24 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v24 >> 8))))));
      else
        v24 -= 32;
    }
    *(v12 - 7) = *(_BYTE *)(v24 + v9);
LABEL_74:
    v25 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 6) + v9));
    if ( v25 >= 0x61u )
    {
      if ( v25 > 0x7Au )
        v25 += *(_WORD *)(v10
                        + 2LL
                        * ((v25 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v25 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v25 >> 8))))));
      else
        v25 -= 32;
    }
    *(v12 - 6) = *(_BYTE *)(v25 + v9);
LABEL_79:
    v26 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 5) + v9));
    if ( v26 >= 0x61u )
    {
      if ( v26 > 0x7Au )
        v26 += *(_WORD *)(v10
                        + 2LL
                        * ((v26 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v26 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v26 >> 8))))));
      else
        v26 -= 32;
    }
    *(v12 - 5) = *(_BYTE *)(v26 + v9);
LABEL_84:
    v27 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 4) + v9));
    if ( v27 >= 0x61u )
    {
      if ( v27 > 0x7Au )
        v27 += *(_WORD *)(v10
                        + 2LL
                        * ((v27 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v27 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v27 >> 8))))));
      else
        v27 -= 32;
    }
    *(v12 - 4) = *(_BYTE *)(v27 + v9);
LABEL_89:
    v28 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 3) + v9));
    if ( v28 >= 0x61u )
    {
      if ( v28 > 0x7Au )
        v28 += *(_WORD *)(v10
                        + 2LL
                        * ((v28 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v28 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v28 >> 8))))));
      else
        v28 -= 32;
    }
    *(v12 - 3) = *(_BYTE *)(v28 + v9);
LABEL_94:
    v29 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 2) + v9));
    if ( v29 >= 0x61u )
    {
      if ( v29 > 0x7Au )
        v29 += *(_WORD *)(v10
                        + 2LL
                        * ((v29 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v29 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v29 >> 8))))));
      else
        v29 -= 32;
    }
    *(v12 - 2) = *(_BYTE *)(v29 + v9);
LABEL_99:
    v30 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*(v13 - 1) + v9));
    if ( v30 >= 0x61u )
    {
      if ( v30 > 0x7Au )
        v30 += *(_WORD *)(v10
                        + 2LL
                        * ((v30 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v10
                                                             + 2LL
                                                             * (((v30 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v10
                                                                                                  + 2 * ((unsigned __int64)v30 >> 8))))));
      else
        v30 -= 32;
    }
    *(v12 - 1) = *(_BYTE *)(v30 + v9);
    goto LABEL_104;
  }
  v31 = *(_QWORD *)(a1 + 56);
  v32 = (int)a2;
  v33 = *(_QWORD *)(a1 + 40);
  v45 = (int)a2;
  if ( v7 )
  {
    v34 = a5;
    v35 = Nls844UnicodeUpcaseTable;
    do
    {
      if ( !a3 )
        break;
      v36 = *v34++;
      v37 = *(_WORD *)(v33 + 2 * v36);
      if ( *(_WORD *)(v31 + 2LL * HIBYTE(v37)) )
        v38 = *(_WORD *)(v31
                       + 2 * ((unsigned __int8)v37 + (unsigned __int64)*(unsigned __int16 *)(v31 + 2LL * HIBYTE(v37))));
      else
        v38 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * (unsigned __int8)v37);
      if ( v38 >= 0x61u )
      {
        if ( v38 > 0x7Au )
          v38 += *(_WORD *)(v35
                          + 2LL
                          * ((v38 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v35
                                                               + 2LL
                                                               * (((v38 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v35 + 2 * ((unsigned __int64)v38 >> 8))))));
        else
          v38 -= 32;
      }
      v39 = v38;
      v40 = v46;
      v41 = *(_WORD *)(v33 + 2 * v39);
      if ( HIBYTE(v41) )
      {
        v42 = v46;
        v40 = --v46;
        if ( v42 < 2 )
          break;
        *v6++ = HIBYTE(v41);
      }
      *v6 = v41;
      a3 = v40 - 1;
      ++v6;
      v43 = v47-- == 1;
      v46 = a3;
    }
    while ( !v43 );
    v32 = v45;
  }
  if ( a4 )
    *a4 = (_DWORD)v6 - v32;
  return v46 < v47 ? 0x80000005 : 0;
}
