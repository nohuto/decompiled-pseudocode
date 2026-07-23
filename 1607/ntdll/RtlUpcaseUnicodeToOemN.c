/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x18007C940
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18007C3D0 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007C7B0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E3520 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PCHAR v5; // r10
  ULONG v6; // eax
  ULONG v8; // r8d
  ULONG v9; // r13d
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // r12
  CHAR *v13; // r10
  const WCHAR *v14; // rbx
  __int64 v15; // r9
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
  unsigned __int16 v31; // r11
  __int64 v32; // rax
  unsigned __int16 v33; // r11
  int v34; // ebx
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rax
  __int16 v40; // dx
  unsigned __int16 v41; // r8
  __int64 v42; // rax
  ULONG v43; // r8d
  __int16 v44; // dx
  unsigned int v45; // eax
  bool v46; // zf
  ULONG v47; // [rsp+48h] [rbp+10h]
  ULONG BytesInUnicodeStringa; // [rsp+60h] [rbp+28h]

  v47 = MaxBytesInOemString;
  v5 = OemString;
  v6 = BytesInUnicodeString >> 1;
  v8 = MaxBytesInOemString;
  BytesInUnicodeStringa = BytesInUnicodeString >> 1;
  if ( !NlsMbOemCodePageTag )
  {
    v9 = MaxBytesInOemString;
    if ( v6 < MaxBytesInOemString )
      v9 = v6;
    if ( BytesInOemString )
      *BytesInOemString = v9;
    v10 = NlsUnicodeToOemData;
    v11 = NlsOemToUnicodeData;
    v12 = v9 & 0xF;
    v13 = &OemString[v12];
    v14 = &UnicodeString[v12];
    v15 = Nls844UnicodeUpcaseTable;
    while ( (unsigned int)v12 <= 8 )
    {
      if ( (_DWORD)v12 == 8 )
        goto LABEL_26;
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
                    goto LABEL_28;
                  goto LABEL_30;
                }
LABEL_32:
                v25 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 5) + v10));
                if ( v25 >= 0x61u )
                {
                  if ( v25 > 0x7Au )
                    v25 += *(_WORD *)(v15
                                    + 2LL
                                    * ((v25 & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(v15
                                                                         + 2LL
                                                                         * (((v25 >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v25 >> 8))))));
                  else
                    v25 -= 32;
                }
                *(v13 - 5) = *(_BYTE *)(v25 + v10);
              }
              v26 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 4) + v10));
              if ( v26 >= 0x61u )
              {
                if ( v26 > 0x7Au )
                  v26 += *(_WORD *)(v15
                                  + 2LL
                                  * ((v26 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(v15
                                                                       + 2LL
                                                                       * (((v26 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v26 >> 8))))));
                else
                  v26 -= 32;
              }
              *(v13 - 4) = *(_BYTE *)(v26 + v10);
            }
            v27 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 3) + v10));
            if ( v27 >= 0x61u )
            {
              if ( v27 > 0x7Au )
                v27 += *(_WORD *)(v15
                                + 2LL
                                * ((v27 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v15
                                                                     + 2LL
                                                                     * (((v27 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v27 >> 8))))));
              else
                v27 -= 32;
            }
            *(v13 - 3) = *(_BYTE *)(v27 + v10);
          }
          v28 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 2) + v10));
          if ( v28 >= 0x61u )
          {
            if ( v28 > 0x7Au )
              v28 += *(_WORD *)(v15
                              + 2LL
                              * ((v28 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v15
                                                                   + 2LL
                                                                   * (((v28 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v28 >> 8))))));
            else
              v28 -= 32;
          }
          *(v13 - 2) = *(_BYTE *)(v28 + v10);
        }
        v29 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 1) + v10));
        if ( v29 >= 0x61u )
        {
          if ( v29 > 0x7Au )
            v29 += *(_WORD *)(v15
                            + 2LL
                            * ((v29 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v15
                                                                 + 2LL
                                                                 * (((v29 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v29 >> 8))))));
          else
            v29 -= 32;
        }
        *(v13 - 1) = *(_BYTE *)(v29 + v10);
      }
      v9 -= v12;
      LODWORD(v12) = 16;
      if ( !v9 )
        return v47 < BytesInUnicodeStringa ? 0x80000005 : 0;
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
                  v32 = *v14;
                  v14 += 16;
                  v13 += 16;
                  v33 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(v32 + v10));
                  if ( v33 >= 0x61u )
                  {
                    if ( v33 > 0x7Au )
                      v33 += *(_WORD *)(v15
                                      + 2LL
                                      * ((v33 & 0xF)
                                       + (unsigned int)*(unsigned __int16 *)(v15
                                                                           + 2LL
                                                                           * (((v33 >> 4) & 0xF)
                                                                            + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v33 >> 8))))));
                    else
                      v33 -= 32;
                  }
                  *(v13 - 16) = *(_BYTE *)(v33 + v10);
                }
                v31 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 15) + v10));
                if ( v31 >= 0x61u )
                {
                  if ( v31 > 0x7Au )
                    v31 += *(_WORD *)(v15
                                    + 2LL
                                    * ((v31 & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(v15
                                                                         + 2LL
                                                                         * (((v31 >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v31 >> 8))))));
                  else
                    v31 -= 32;
                }
                *(v13 - 15) = *(_BYTE *)(v31 + v10);
              }
              v16 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 14) + v10));
              if ( v16 >= 0x61u )
              {
                if ( v16 > 0x7Au )
                  v16 += *(_WORD *)(v15
                                  + 2LL
                                  * ((v16 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(v15
                                                                       + 2LL
                                                                       * (((v16 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v16 >> 8))))));
                else
                  v16 -= 32;
              }
              *(v13 - 14) = *(_BYTE *)(v16 + v10);
            }
            v17 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 13) + v10));
            if ( v17 >= 0x61u )
            {
              if ( v17 > 0x7Au )
                v17 += *(_WORD *)(v15
                                + 2LL
                                * ((v17 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v15
                                                                     + 2LL
                                                                     * (((v17 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v17 >> 8))))));
              else
                v17 -= 32;
            }
            *(v13 - 13) = *(_BYTE *)(v17 + v10);
          }
          v18 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 12) + v10));
          if ( v18 >= 0x61u )
          {
            if ( v18 > 0x7Au )
              v18 += *(_WORD *)(v15
                              + 2LL
                              * ((v18 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v15
                                                                   + 2LL
                                                                   * (((v18 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v18 >> 8))))));
            else
              v18 -= 32;
          }
          *(v13 - 12) = *(_BYTE *)(v18 + v10);
        }
        v19 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 11) + v10));
        if ( v19 >= 0x61u )
        {
          if ( v19 > 0x7Au )
            v19 += *(_WORD *)(v15
                            + 2LL
                            * ((v19 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v15
                                                                 + 2LL
                                                                 * (((v19 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v19 >> 8))))));
          else
            v19 -= 32;
        }
        *(v13 - 11) = *(_BYTE *)(v19 + v10);
      }
      v20 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 10) + v10));
      if ( v20 >= 0x61u )
      {
        if ( v20 > 0x7Au )
          v20 += *(_WORD *)(v15
                          + 2LL
                          * ((v20 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v15
                                                               + 2LL
                                                               * (((v20 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v20 >> 8))))));
        else
          v20 -= 32;
      }
      *(v13 - 10) = *(_BYTE *)(v20 + v10);
    }
    v21 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 9) + v10));
    if ( v21 >= 0x61u )
    {
      if ( v21 > 0x7Au )
        v21 += *(_WORD *)(v15
                        + 2LL
                        * ((v21 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v15
                                                             + 2LL
                                                             * (((v21 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v15
                                                                                                  + 2 * ((unsigned __int64)v21 >> 8))))));
      else
        v21 -= 32;
    }
    *(v13 - 9) = *(_BYTE *)(v21 + v10);
LABEL_26:
    v22 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 8) + v10));
    if ( v22 >= 0x61u )
    {
      if ( v22 > 0x7Au )
        v22 += *(_WORD *)(v15
                        + 2LL
                        * ((v22 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v15
                                                             + 2LL
                                                             * (((v22 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v15
                                                                                                  + 2 * ((unsigned __int64)v22 >> 8))))));
      else
        v22 -= 32;
    }
    *(v13 - 8) = *(_BYTE *)(v22 + v10);
LABEL_28:
    v23 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 7) + v10));
    if ( v23 >= 0x61u )
    {
      if ( v23 > 0x7Au )
        v23 += *(_WORD *)(v15
                        + 2LL
                        * ((v23 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v15
                                                             + 2LL
                                                             * (((v23 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v15
                                                                                                  + 2 * ((unsigned __int64)v23 >> 8))))));
      else
        v23 -= 32;
    }
    *(v13 - 7) = *(_BYTE *)(v23 + v10);
LABEL_30:
    v24 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 6) + v10));
    if ( v24 >= 0x61u )
    {
      if ( v24 > 0x7Au )
        v24 += *(_WORD *)(v15
                        + 2LL
                        * ((v24 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v15
                                                             + 2LL
                                                             * (((v24 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v15
                                                                                                  + 2 * ((unsigned __int64)v24 >> 8))))));
      else
        v24 -= 32;
    }
    *(v13 - 6) = *(_BYTE *)(v24 + v10);
    goto LABEL_32;
  }
  v34 = (int)OemString;
  if ( v6 )
  {
    v35 = NlsOemToUnicodeData;
    v36 = Nls844UnicodeUpcaseTable;
    v37 = NlsUnicodeToMbOemData;
    v38 = NlsMbOemCodePageTables;
    do
    {
      if ( !v8 )
        break;
      v39 = *UnicodeString++;
      v40 = *(_WORD *)(v37 + 2 * v39);
      if ( NlsOemLeadByteInfoTable[HIBYTE(v40)] )
        v41 = *(_WORD *)(v38 + 2LL * ((unsigned __int8)v40 + (unsigned __int16)NlsOemLeadByteInfoTable[HIBYTE(v40)]));
      else
        v41 = *(_WORD *)(v35 + 2LL * (unsigned __int8)v40);
      if ( v41 >= 0x61u )
      {
        if ( v41 > 0x7Au )
          v41 += *(_WORD *)(v36
                          + 2LL
                          * ((v41 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v36
                                                               + 2LL
                                                               * (((v41 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v36 + 2 * ((unsigned __int64)v41 >> 8))))));
        else
          v41 -= 32;
      }
      v42 = v41;
      v43 = v47;
      v44 = *(_WORD *)(v37 + 2 * v42);
      if ( HIBYTE(v44) )
      {
        v45 = v47;
        v43 = --v47;
        if ( v45 < 2 )
          break;
        *v5++ = HIBYTE(v44);
      }
      *v5 = v44;
      v8 = v43 - 1;
      ++v5;
      v46 = BytesInUnicodeStringa-- == 1;
      v47 = v8;
    }
    while ( !v46 );
    v34 = (int)OemString;
  }
  if ( BytesInOemString )
    *BytesInOemString = (_DWORD)v5 - v34;
  return v47 < BytesInUnicodeStringa ? 0x80000005 : 0;
}
