/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x18006F940
 * Callers:
 *     toupper @ 0x180089880 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800D2210 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PCHAR v5; // r10
  ULONG v6; // r11d
  PULONG v7; // rdi
  ULONG v8; // r13d
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // r12
  CHAR *v12; // r10
  const WCHAR *v13; // rdi
  __int64 v14; // r9
  unsigned __int16 v15; // r11
  __int64 v17; // rax
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
  unsigned __int16 v31; // r11
  unsigned __int16 v32; // r11
  int v33; // r14d
  __int64 v34; // r12
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rax
  __int16 v38; // dx
  unsigned __int16 v39; // r8
  __int16 v40; // dx
  unsigned int v41; // eax

  v5 = MultiByteString;
  v6 = BytesInUnicodeString >> 1;
  v7 = BytesInMultiByteString;
  v8 = MaxBytesInMultiByteString;
  if ( !NlsMbCodePageTag )
  {
    if ( v6 < MaxBytesInMultiByteString )
      v8 = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = v8;
    v9 = NlsUnicodeToAnsiData;
    v10 = NlsAnsiToUnicodeData;
    v11 = v8 & 0xF;
    v12 = &MultiByteString[v11];
    v13 = &UnicodeString[v11];
    v14 = Nls844UnicodeUpcaseTable;
    while ( (unsigned int)v11 <= 8 )
    {
      if ( (_DWORD)v11 == 8 )
        goto LABEL_70;
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 == 1 )
        {
LABEL_11:
          v15 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 1) + v9));
          if ( v15 >= 0x61u )
          {
            if ( v15 > 0x7Au )
              v15 += *(_WORD *)(v14
                              + 2LL
                              * ((v15 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v14
                                                                   + 2LL
                                                                   * (((v15 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v14 + 2 * ((unsigned __int64)v15 >> 8))))));
            else
              v15 -= 32;
          }
          *(v12 - 1) = *(_BYTE *)(v15 + v9);
          goto LABEL_13;
        }
        if ( (_DWORD)v11 != 2 )
        {
          if ( (_DWORD)v11 != 3 )
          {
            if ( (_DWORD)v11 != 4 )
            {
              if ( (_DWORD)v11 != 5 )
              {
                if ( (_DWORD)v11 != 6 )
                  goto LABEL_75;
                goto LABEL_80;
              }
              goto LABEL_85;
            }
            goto LABEL_90;
          }
          goto LABEL_95;
        }
        goto LABEL_100;
      }
LABEL_13:
      v8 -= v11;
      LODWORD(v11) = 16;
      if ( !v8 )
        return 0;
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
                  v17 = *v13;
                  v13 += 16;
                  v12 += 16;
                  v18 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v17 + v9));
                  if ( v18 >= 0x61u )
                  {
                    if ( v18 > 0x7Au )
                      v18 += *(_WORD *)(v14
                                      + 2LL
                                      * ((v18 & 0xF)
                                       + (unsigned int)*(unsigned __int16 *)(v14
                                                                           + 2LL
                                                                           * (((v18 >> 4) & 0xF)
                                                                            + (unsigned int)*(unsigned __int16 *)(v14 + 2 * ((unsigned __int64)v18 >> 8))))));
                    else
                      v18 -= 32;
                  }
                  *(v12 - 16) = *(_BYTE *)(v18 + v9);
                }
                v19 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 15) + v9));
                if ( v19 >= 0x61u )
                {
                  if ( v19 > 0x7Au )
                    v19 += *(_WORD *)(v14
                                    + 2LL
                                    * ((v19 & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(v14
                                                                         + 2LL
                                                                         * (((v19 >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(v14 + 2 * ((unsigned __int64)v19 >> 8))))));
                  else
                    v19 -= 32;
                }
                *(v12 - 15) = *(_BYTE *)(v19 + v9);
              }
              v20 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 14) + v9));
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                  v20 += *(_WORD *)(v14
                                  + 2LL
                                  * ((v20 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(v14
                                                                       + 2LL
                                                                       * (((v20 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(v14 + 2 * ((unsigned __int64)v20 >> 8))))));
                else
                  v20 -= 32;
              }
              *(v12 - 14) = *(_BYTE *)(v20 + v9);
            }
            v21 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 13) + v9));
            if ( v21 >= 0x61u )
            {
              if ( v21 > 0x7Au )
                v21 += *(_WORD *)(v14
                                + 2LL
                                * ((v21 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v14
                                                                     + 2LL
                                                                     * (((v21 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v14 + 2 * ((unsigned __int64)v21 >> 8))))));
              else
                v21 -= 32;
            }
            *(v12 - 13) = *(_BYTE *)(v21 + v9);
          }
          v22 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 12) + v9));
          if ( v22 >= 0x61u )
          {
            if ( v22 > 0x7Au )
              v22 += *(_WORD *)(v14
                              + 2LL
                              * ((v22 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v14
                                                                   + 2LL
                                                                   * (((v22 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v14 + 2 * ((unsigned __int64)v22 >> 8))))));
            else
              v22 -= 32;
          }
          *(v12 - 12) = *(_BYTE *)(v22 + v9);
        }
        v23 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 11) + v9));
        if ( v23 >= 0x61u )
        {
          if ( v23 > 0x7Au )
            v23 += *(_WORD *)(v14
                            + 2LL
                            * ((v23 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v14
                                                                 + 2LL
                                                                 * (((v23 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v14 + 2 * ((unsigned __int64)v23 >> 8))))));
          else
            v23 -= 32;
        }
        *(v12 - 11) = *(_BYTE *)(v23 + v9);
      }
      v24 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 10) + v9));
      if ( v24 >= 0x61u )
      {
        if ( v24 > 0x7Au )
          v24 += *(_WORD *)(v14
                          + 2LL
                          * ((v24 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v14
                                                               + 2LL
                                                               * (((v24 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v14 + 2 * ((unsigned __int64)v24 >> 8))))));
        else
          v24 -= 32;
      }
      *(v12 - 10) = *(_BYTE *)(v24 + v9);
    }
    v25 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 9) + v9));
    if ( v25 >= 0x61u )
    {
      if ( v25 > 0x7Au )
        v25 += *(_WORD *)(v14
                        + 2LL
                        * ((v25 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v14
                                                             + 2LL
                                                             * (((v25 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v14
                                                                                                  + 2 * ((unsigned __int64)v25 >> 8))))));
      else
        v25 -= 32;
    }
    *(v12 - 9) = *(_BYTE *)(v25 + v9);
LABEL_70:
    v26 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 8) + v9));
    if ( v26 >= 0x61u )
    {
      if ( v26 > 0x7Au )
        v26 += *(_WORD *)(v14
                        + 2LL
                        * ((v26 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v14
                                                             + 2LL
                                                             * (((v26 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v14
                                                                                                  + 2 * ((unsigned __int64)v26 >> 8))))));
      else
        v26 -= 32;
    }
    *(v12 - 8) = *(_BYTE *)(v26 + v9);
LABEL_75:
    v27 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 7) + v9));
    if ( v27 >= 0x61u )
    {
      if ( v27 > 0x7Au )
        v27 += *(_WORD *)(v14
                        + 2LL
                        * ((v27 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v14
                                                             + 2LL
                                                             * (((v27 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v14
                                                                                                  + 2 * ((unsigned __int64)v27 >> 8))))));
      else
        v27 -= 32;
    }
    *(v12 - 7) = *(_BYTE *)(v27 + v9);
LABEL_80:
    v28 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 6) + v9));
    if ( v28 >= 0x61u )
    {
      if ( v28 > 0x7Au )
        v28 += *(_WORD *)(v14
                        + 2LL
                        * ((v28 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v14
                                                             + 2LL
                                                             * (((v28 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v14
                                                                                                  + 2 * ((unsigned __int64)v28 >> 8))))));
      else
        v28 -= 32;
    }
    *(v12 - 6) = *(_BYTE *)(v28 + v9);
LABEL_85:
    v29 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 5) + v9));
    if ( v29 >= 0x61u )
    {
      if ( v29 > 0x7Au )
        v29 += *(_WORD *)(v14
                        + 2LL
                        * ((v29 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v14
                                                             + 2LL
                                                             * (((v29 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v14
                                                                                                  + 2 * ((unsigned __int64)v29 >> 8))))));
      else
        v29 -= 32;
    }
    *(v12 - 5) = *(_BYTE *)(v29 + v9);
LABEL_90:
    v30 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 4) + v9));
    if ( v30 >= 0x61u )
    {
      if ( v30 > 0x7Au )
        v30 += *(_WORD *)(v14
                        + 2LL
                        * ((v30 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v14
                                                             + 2LL
                                                             * (((v30 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v14
                                                                                                  + 2 * ((unsigned __int64)v30 >> 8))))));
      else
        v30 -= 32;
    }
    *(v12 - 4) = *(_BYTE *)(v30 + v9);
LABEL_95:
    v31 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 3) + v9));
    if ( v31 >= 0x61u )
    {
      if ( v31 > 0x7Au )
        v31 += *(_WORD *)(v14
                        + 2LL
                        * ((v31 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v14
                                                             + 2LL
                                                             * (((v31 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v14
                                                                                                  + 2 * ((unsigned __int64)v31 >> 8))))));
      else
        v31 -= 32;
    }
    *(v12 - 3) = *(_BYTE *)(v31 + v9);
LABEL_100:
    v32 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*(v13 - 2) + v9));
    if ( v32 >= 0x61u )
    {
      if ( v32 > 0x7Au )
        v32 += *(_WORD *)(v14
                        + 2LL
                        * ((v32 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v14
                                                             + 2LL
                                                             * (((v32 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v14
                                                                                                  + 2 * ((unsigned __int64)v32 >> 8))))));
      else
        v32 -= 32;
    }
    *(v12 - 2) = *(_BYTE *)(v32 + v9);
    goto LABEL_11;
  }
  v33 = (int)MultiByteString;
  if ( v6 )
  {
    v34 = NlsUnicodeToMbAnsiData;
    v35 = Nls844UnicodeUpcaseTable;
    v36 = NlsAnsiToUnicodeData;
    do
    {
      if ( !v8 )
        break;
      v37 = *UnicodeString++;
      v38 = *(_WORD *)(v34 + 2 * v37);
      if ( NlsLeadByteInfoTable[HIBYTE(v38)] )
        v39 = *(_WORD *)(NlsMbAnsiCodePageTables
                       + 2
                       * ((unsigned __int8)v38 + (unsigned __int64)(unsigned __int16)NlsLeadByteInfoTable[HIBYTE(v38)]));
      else
        v39 = *(_WORD *)(v36 + 2LL * (unsigned __int8)v38);
      if ( v39 >= 0x61u )
      {
        if ( v39 > 0x7Au )
          v39 += *(_WORD *)(v35
                          + 2LL
                          * ((v39 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v35
                                                               + 2LL
                                                               * (((v39 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v35 + 2 * ((unsigned __int64)v39 >> 8))))));
        else
          v39 -= 32;
      }
      v40 = *(_WORD *)(v34 + 2LL * v39);
      if ( HIBYTE(v40) )
      {
        v41 = v8--;
        if ( v41 < 2 )
          break;
        *v5++ = HIBYTE(v40);
      }
      *v5 = v40;
      --v8;
      ++v5;
      --v6;
    }
    while ( v6 );
    v7 = BytesInMultiByteString;
    v33 = (int)MultiByteString;
  }
  if ( v7 )
    *v7 = (_DWORD)v5 - v33;
  return 0;
}
