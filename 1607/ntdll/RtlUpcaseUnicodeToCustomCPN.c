/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800DE810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PCH v6; // r10
  ULONG v7; // eax
  ULONG v8; // r12d
  _BYTE *WideCharTable; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  CHAR *v12; // r10
  WCHAR *v13; // rsi
  __int64 v14; // rax
  USHORT v15; // r11
  USHORT v16; // r11
  USHORT v17; // r11
  USHORT v18; // r11
  USHORT v19; // r11
  USHORT v20; // r11
  USHORT v21; // r11
  USHORT v22; // r11
  USHORT v23; // r11
  USHORT v24; // r11
  USHORT v25; // r11
  USHORT v26; // r11
  USHORT v27; // r11
  USHORT v28; // r11
  USHORT v29; // r11
  USHORT v30; // r11
  PUSHORT DBCSOffsets; // r12
  int v32; // r11d
  _WORD *v33; // rsi
  PWCH v34; // r15
  __int64 v35; // r11
  __int64 v36; // rax
  __int16 v37; // dx
  USHORT v38; // r8
  __int64 v39; // rax
  ULONG v40; // r8d
  __int16 v41; // dx
  unsigned int v42; // eax
  bool v43; // zf
  int v45; // [rsp+40h] [rbp+8h]
  ULONG v46; // [rsp+50h] [rbp+18h]
  ULONG BytesInUnicodeStringa; // [rsp+68h] [rbp+30h]

  v46 = MaxBytesInCustomCPString;
  v6 = CustomCPString;
  v7 = BytesInUnicodeString >> 1;
  BytesInUnicodeStringa = BytesInUnicodeString >> 1;
  if ( !CustomCP->DBCSCodePage )
  {
    v8 = MaxBytesInCustomCPString;
    if ( v7 < MaxBytesInCustomCPString )
      v8 = v7;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v8;
    WideCharTable = CustomCP->WideCharTable;
    v10 = Nls844UnicodeUpcaseTable;
    v11 = v8 & 0xF;
    v12 = &CustomCPString[v11];
    v13 = &UnicodeString[v11];
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
        return v46 < BytesInUnicodeStringa ? 0x80000005 : 0;
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
                  v15 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[v14]];
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
                  *(v12 - 16) = WideCharTable[v15];
                }
                v16 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 15)]];
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
                *(v12 - 15) = WideCharTable[v16];
              }
              v17 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 14)]];
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
              *(v12 - 14) = WideCharTable[v17];
            }
            v18 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 13)]];
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
            *(v12 - 13) = WideCharTable[v18];
          }
          v19 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 12)]];
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
          *(v12 - 12) = WideCharTable[v19];
        }
        v20 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 11)]];
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
        *(v12 - 11) = WideCharTable[v20];
      }
      v21 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 10)]];
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
      *(v12 - 10) = WideCharTable[v21];
    }
    v22 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 9)]];
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
    *(v12 - 9) = WideCharTable[v22];
LABEL_64:
    v23 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 8)]];
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
    *(v12 - 8) = WideCharTable[v23];
LABEL_69:
    v24 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 7)]];
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
    *(v12 - 7) = WideCharTable[v24];
LABEL_74:
    v25 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 6)]];
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
    *(v12 - 6) = WideCharTable[v25];
LABEL_79:
    v26 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 5)]];
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
    *(v12 - 5) = WideCharTable[v26];
LABEL_84:
    v27 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 4)]];
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
    *(v12 - 4) = WideCharTable[v27];
LABEL_89:
    v28 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 3)]];
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
    *(v12 - 3) = WideCharTable[v28];
LABEL_94:
    v29 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 2)]];
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
    *(v12 - 2) = WideCharTable[v29];
LABEL_99:
    v30 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v13 - 1)]];
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
    *(v12 - 1) = WideCharTable[v30];
    goto LABEL_104;
  }
  DBCSOffsets = CustomCP->DBCSOffsets;
  v32 = (int)CustomCPString;
  v33 = CustomCP->WideCharTable;
  v45 = (int)CustomCPString;
  if ( v7 )
  {
    v34 = UnicodeString;
    v35 = Nls844UnicodeUpcaseTable;
    do
    {
      if ( !MaxBytesInCustomCPString )
        break;
      v36 = *v34++;
      v37 = v33[v36];
      if ( DBCSOffsets[HIBYTE(v37)] )
        v38 = DBCSOffsets[(unsigned __int8)v37 + DBCSOffsets[HIBYTE(v37)]];
      else
        v38 = CustomCP->MultiByteTable[(unsigned __int8)v37];
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
      v41 = v33[v39];
      if ( HIBYTE(v41) )
      {
        v42 = v46;
        v40 = --v46;
        if ( v42 < 2 )
          break;
        *v6++ = HIBYTE(v41);
      }
      *v6 = v41;
      MaxBytesInCustomCPString = v40 - 1;
      ++v6;
      v43 = BytesInUnicodeStringa-- == 1;
      v46 = MaxBytesInCustomCPString;
    }
    while ( !v43 );
    v32 = v45;
  }
  if ( BytesInCustomCPString )
    *BytesInCustomCPString = (_DWORD)v6 - v32;
  return v46 < BytesInUnicodeStringa ? 0x80000005 : 0;
}
