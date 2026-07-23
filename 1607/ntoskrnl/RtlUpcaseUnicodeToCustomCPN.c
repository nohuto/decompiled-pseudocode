/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1406867DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PCH v7; // r10
  ULONG v8; // ecx
  ULONG v9; // r12d
  _BYTE *WideCharTable; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  CHAR *v13; // r10
  WCHAR *v14; // rsi
  __int64 v15; // rax
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
  USHORT v31; // r11
  PUSHORT DBCSOffsets; // r12
  int v33; // r11d
  _WORD *v34; // rsi
  __int64 v35; // r11
  PWCH v36; // r15
  __int64 v37; // rax
  __int16 v38; // dx
  USHORT v39; // cx
  USHORT v40; // r8
  __int64 v41; // rax
  ULONG v42; // r8d
  __int16 v43; // dx
  unsigned int v44; // eax
  bool v45; // zf
  int v47; // [rsp+0h] [rbp-48h]
  ULONG v48; // [rsp+60h] [rbp+18h]
  ULONG BytesInUnicodeStringa; // [rsp+78h] [rbp+30h]

  v48 = MaxBytesInCustomCPString;
  v7 = CustomCPString;
  v8 = BytesInUnicodeString >> 1;
  BytesInUnicodeStringa = BytesInUnicodeString >> 1;
  if ( !CustomCP->DBCSCodePage )
  {
    v9 = MaxBytesInCustomCPString;
    if ( v8 < MaxBytesInCustomCPString )
      v9 = v8;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v9;
    WideCharTable = CustomCP->WideCharTable;
    v11 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
    v12 = v9 & 0xF;
    v13 = &CustomCPString[v12];
    v14 = &UnicodeString[v12];
    while ( (unsigned int)v12 <= 8 )
    {
      if ( (_DWORD)v12 == 8 )
        goto LABEL_64;
      if ( (_DWORD)v12 )
      {
        if ( (_DWORD)v12 != 1 )
        {
          if ( (_DWORD)v12 != 2 )
          {
            if ( (_DWORD)v12 != 3 )
            {
              if ( (_DWORD)v12 != 4 )
              {
                if ( (_DWORD)v12 != 5 )
                {
                  if ( (_DWORD)v12 != 6 )
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
      v9 -= v12;
      LODWORD(v12) = 16;
      if ( !v9 )
        return v48 < BytesInUnicodeStringa ? 0x80000005 : 0;
    }
    if ( (_DWORD)v12 != 9 )
    {
      if ( (_DWORD)v12 != 10 )
      {
        if ( (_DWORD)v12 != 11 )
        {
          if ( (_DWORD)v12 != 12 )
          {
            if ( (_DWORD)v12 != 13 )
            {
              if ( (_DWORD)v12 != 14 )
              {
                if ( (_DWORD)v12 != 15 )
                {
                  v15 = *v14;
                  v14 += 16;
                  v13 += 16;
                  v16 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[v15]];
                  if ( v16 >= 0x61u )
                  {
                    if ( v16 > 0x7Au )
                      v16 += *(_WORD *)(v11
                                      + 2LL
                                      * ((v16 & 0xF)
                                       + (unsigned int)*(unsigned __int16 *)(v11
                                                                           + 2LL
                                                                           * (((v16 >> 4) & 0xF)
                                                                            + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v16 >> 8))))));
                    else
                      v16 -= 32;
                  }
                  *(v13 - 16) = WideCharTable[v16];
                }
                v17 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 15)]];
                if ( v17 >= 0x61u )
                {
                  if ( v17 > 0x7Au )
                    v17 += *(_WORD *)(v11
                                    + 2LL
                                    * ((v17 & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(v11
                                                                         + 2LL
                                                                         * (((v17 >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v17 >> 8))))));
                  else
                    v17 -= 32;
                }
                *(v13 - 15) = WideCharTable[v17];
              }
              v18 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 14)]];
              if ( v18 >= 0x61u )
              {
                if ( v18 > 0x7Au )
                  v18 += *(_WORD *)(v11
                                  + 2LL
                                  * ((v18 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(v11
                                                                       + 2LL
                                                                       * (((v18 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v18 >> 8))))));
                else
                  v18 -= 32;
              }
              *(v13 - 14) = WideCharTable[v18];
            }
            v19 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 13)]];
            if ( v19 >= 0x61u )
            {
              if ( v19 > 0x7Au )
                v19 += *(_WORD *)(v11
                                + 2LL
                                * ((v19 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v19 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v19 >> 8))))));
              else
                v19 -= 32;
            }
            *(v13 - 13) = WideCharTable[v19];
          }
          v20 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 12)]];
          if ( v20 >= 0x61u )
          {
            if ( v20 > 0x7Au )
              v20 += *(_WORD *)(v11
                              + 2LL
                              * ((v20 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v11
                                                                   + 2LL
                                                                   * (((v20 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v20 >> 8))))));
            else
              v20 -= 32;
          }
          *(v13 - 12) = WideCharTable[v20];
        }
        v21 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 11)]];
        if ( v21 >= 0x61u )
        {
          if ( v21 > 0x7Au )
            v21 += *(_WORD *)(v11
                            + 2LL
                            * ((v21 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v11
                                                                 + 2LL
                                                                 * (((v21 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v21 >> 8))))));
          else
            v21 -= 32;
        }
        *(v13 - 11) = WideCharTable[v21];
      }
      v22 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 10)]];
      if ( v22 >= 0x61u )
      {
        if ( v22 > 0x7Au )
          v22 += *(_WORD *)(v11
                          + 2LL
                          * ((v22 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v11
                                                               + 2LL
                                                               * (((v22 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v22 >> 8))))));
        else
          v22 -= 32;
      }
      *(v13 - 10) = WideCharTable[v22];
    }
    v23 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 9)]];
    if ( v23 >= 0x61u )
    {
      if ( v23 > 0x7Au )
        v23 += *(_WORD *)(v11
                        + 2LL
                        * ((v23 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v23 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v23 >> 8))))));
      else
        v23 -= 32;
    }
    *(v13 - 9) = WideCharTable[v23];
LABEL_64:
    v24 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 8)]];
    if ( v24 >= 0x61u )
    {
      if ( v24 > 0x7Au )
        v24 += *(_WORD *)(v11
                        + 2LL
                        * ((v24 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v24 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v24 >> 8))))));
      else
        v24 -= 32;
    }
    *(v13 - 8) = WideCharTable[v24];
LABEL_69:
    v25 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 7)]];
    if ( v25 >= 0x61u )
    {
      if ( v25 > 0x7Au )
        v25 += *(_WORD *)(v11
                        + 2LL
                        * ((v25 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v25 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v25 >> 8))))));
      else
        v25 -= 32;
    }
    *(v13 - 7) = WideCharTable[v25];
LABEL_74:
    v26 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 6)]];
    if ( v26 >= 0x61u )
    {
      if ( v26 > 0x7Au )
        v26 += *(_WORD *)(v11
                        + 2LL
                        * ((v26 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v26 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v26 >> 8))))));
      else
        v26 -= 32;
    }
    *(v13 - 6) = WideCharTable[v26];
LABEL_79:
    v27 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 5)]];
    if ( v27 >= 0x61u )
    {
      if ( v27 > 0x7Au )
        v27 += *(_WORD *)(v11
                        + 2LL
                        * ((v27 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v27 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v27 >> 8))))));
      else
        v27 -= 32;
    }
    *(v13 - 5) = WideCharTable[v27];
LABEL_84:
    v28 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 4)]];
    if ( v28 >= 0x61u )
    {
      if ( v28 > 0x7Au )
        v28 += *(_WORD *)(v11
                        + 2LL
                        * ((v28 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v28 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v28 >> 8))))));
      else
        v28 -= 32;
    }
    *(v13 - 4) = WideCharTable[v28];
LABEL_89:
    v29 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 3)]];
    if ( v29 >= 0x61u )
    {
      if ( v29 > 0x7Au )
        v29 += *(_WORD *)(v11
                        + 2LL
                        * ((v29 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v29 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v29 >> 8))))));
      else
        v29 -= 32;
    }
    *(v13 - 3) = WideCharTable[v29];
LABEL_94:
    v30 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 2)]];
    if ( v30 >= 0x61u )
    {
      if ( v30 > 0x7Au )
        v30 += *(_WORD *)(v11
                        + 2LL
                        * ((v30 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v30 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v30 >> 8))))));
      else
        v30 -= 32;
    }
    *(v13 - 2) = WideCharTable[v30];
LABEL_99:
    v31 = CustomCP->MultiByteTable[(unsigned __int8)WideCharTable[*(v14 - 1)]];
    if ( v31 >= 0x61u )
    {
      if ( v31 > 0x7Au )
        v31 += *(_WORD *)(v11
                        + 2LL
                        * ((v31 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v11
                                                             + 2LL
                                                             * (((v31 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v11
                                                                                                  + 2 * ((unsigned __int64)v31 >> 8))))));
      else
        v31 -= 32;
    }
    *(v13 - 1) = WideCharTable[v31];
    goto LABEL_104;
  }
  DBCSOffsets = CustomCP->DBCSOffsets;
  v33 = (int)CustomCPString;
  v34 = CustomCP->WideCharTable;
  v47 = (int)CustomCPString;
  if ( v8 )
  {
    v35 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
    v36 = UnicodeString;
    do
    {
      if ( !MaxBytesInCustomCPString )
        break;
      v37 = *v36++;
      v38 = v34[v37];
      v39 = DBCSOffsets[HIBYTE(v38)];
      if ( v39 )
        v40 = DBCSOffsets[(unsigned __int8)v38 + v39];
      else
        v40 = CustomCP->MultiByteTable[(unsigned __int8)v38];
      if ( v40 >= 0x61u )
      {
        if ( v40 > 0x7Au )
          v40 += *(_WORD *)(v35
                          + 2LL
                          * ((v40 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v35
                                                               + 2LL
                                                               * (((v40 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v35 + 2 * ((unsigned __int64)v40 >> 8))))));
        else
          v40 -= 32;
      }
      v41 = v40;
      v42 = v48;
      v43 = v34[v41];
      if ( HIBYTE(v43) )
      {
        v44 = v48;
        v42 = --v48;
        if ( v44 < 2 )
          break;
        *v7++ = HIBYTE(v43);
      }
      *v7 = v43;
      MaxBytesInCustomCPString = v42 - 1;
      ++v7;
      v45 = BytesInUnicodeStringa-- == 1;
      v48 = MaxBytesInCustomCPString;
    }
    while ( !v45 );
    v33 = v47;
  }
  if ( BytesInCustomCPString )
    *BytesInCustomCPString = (_DWORD)v7 - v33;
  return v48 < BytesInUnicodeStringa ? 0x80000005 : 0;
}
