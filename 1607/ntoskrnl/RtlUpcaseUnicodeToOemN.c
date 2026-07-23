/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1404A80B0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1404A7C18 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1404A7F54 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
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
  __int64 v29; // rax
  unsigned __int16 v30; // r11
  unsigned __int16 v31; // r11
  unsigned __int16 v32; // r11
  unsigned __int16 v33; // r11
  int v34; // ebx
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rax
  __int16 v40; // dx
  unsigned __int16 v41; // ax
  unsigned __int16 v42; // r8
  __int64 v43; // rax
  ULONG v44; // r8d
  __int16 v45; // dx
  unsigned int v46; // eax
  bool v47; // zf
  ULONG v48; // [rsp+48h] [rbp+10h]
  ULONG BytesInUnicodeStringa; // [rsp+60h] [rbp+28h]

  v48 = MaxBytesInOemString;
  v5 = OemString;
  v6 = BytesInUnicodeString >> 1;
  v8 = MaxBytesInOemString;
  BytesInUnicodeStringa = BytesInUnicodeString >> 1;
  if ( !(_BYTE)NlsMbOemCodePageTag )
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
    v15 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
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
                    goto LABEL_30;
                  goto LABEL_34;
                }
LABEL_38:
                v23 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 5) + v10));
                if ( v23 >= 0x61u )
                {
                  if ( v23 > 0x7Au )
                    v23 += *(_WORD *)(v15
                                    + 2LL
                                    * ((v23 & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(v15
                                                                         + 2LL
                                                                         * (((v23 >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v23 >> 8))))));
                  else
                    v23 -= 32;
                }
                *(v13 - 5) = *(_BYTE *)(v23 + v10);
              }
              v24 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 4) + v10));
              if ( v24 >= 0x61u )
              {
                if ( v24 > 0x7Au )
                  v24 += *(_WORD *)(v15
                                  + 2LL
                                  * ((v24 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(v15
                                                                       + 2LL
                                                                       * (((v24 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v24 >> 8))))));
                else
                  v24 -= 32;
              }
              *(v13 - 4) = *(_BYTE *)(v24 + v10);
            }
            v25 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 3) + v10));
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
            *(v13 - 3) = *(_BYTE *)(v25 + v10);
          }
          v26 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 2) + v10));
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
          *(v13 - 2) = *(_BYTE *)(v26 + v10);
        }
        v27 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 1) + v10));
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
        *(v13 - 1) = *(_BYTE *)(v27 + v10);
      }
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
                  v29 = *v14;
                  v14 += 16;
                  v13 += 16;
                  v30 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(v29 + v10));
                  if ( v30 >= 0x61u )
                  {
                    if ( v30 > 0x7Au )
                      v30 += *(_WORD *)(v15
                                      + 2LL
                                      * ((v30 & 0xF)
                                       + (unsigned int)*(unsigned __int16 *)(v15
                                                                           + 2LL
                                                                           * (((v30 >> 4) & 0xF)
                                                                            + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v30 >> 8))))));
                    else
                      v30 -= 32;
                  }
                  *(v13 - 16) = *(_BYTE *)(v30 + v10);
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
              v32 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 14) + v10));
              if ( v32 >= 0x61u )
              {
                if ( v32 > 0x7Au )
                  v32 += *(_WORD *)(v15
                                  + 2LL
                                  * ((v32 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(v15
                                                                       + 2LL
                                                                       * (((v32 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v32 >> 8))))));
                else
                  v32 -= 32;
              }
              *(v13 - 14) = *(_BYTE *)(v32 + v10);
            }
            v33 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 13) + v10));
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
            *(v13 - 13) = *(_BYTE *)(v33 + v10);
          }
          v16 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 12) + v10));
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
          *(v13 - 12) = *(_BYTE *)(v16 + v10);
        }
        v17 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 11) + v10));
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
        *(v13 - 11) = *(_BYTE *)(v17 + v10);
      }
      v18 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 10) + v10));
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
      *(v13 - 10) = *(_BYTE *)(v18 + v10);
    }
    v19 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 9) + v10));
    if ( v19 >= 0x61u )
    {
      if ( v19 > 0x7Au )
        v19 += *(_WORD *)(v15
                        + 2LL
                        * ((v19 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v15
                                                             + 2LL
                                                             * (((v19 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v15
                                                                                                  + 2 * ((unsigned __int64)v19 >> 8))))));
      else
        v19 -= 32;
    }
    *(v13 - 9) = *(_BYTE *)(v19 + v10);
LABEL_26:
    v20 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 8) + v10));
    if ( v20 >= 0x61u )
    {
      if ( v20 > 0x7Au )
        v20 += *(_WORD *)(v15
                        + 2LL
                        * ((v20 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v15
                                                             + 2LL
                                                             * (((v20 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v15
                                                                                                  + 2 * ((unsigned __int64)v20 >> 8))))));
      else
        v20 -= 32;
    }
    *(v13 - 8) = *(_BYTE *)(v20 + v10);
LABEL_30:
    v21 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 7) + v10));
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
    *(v13 - 7) = *(_BYTE *)(v21 + v10);
LABEL_34:
    v22 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*(v14 - 6) + v10));
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
    *(v13 - 6) = *(_BYTE *)(v22 + v10);
    goto LABEL_38;
  }
  v34 = (int)OemString;
  if ( v6 )
  {
    v35 = NlsOemToUnicodeData;
    v36 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
    v37 = NlsUnicodeToMbOemData;
    v38 = NlsMbOemCodePageTables;
    do
    {
      if ( !v8 )
        break;
      v39 = *UnicodeString++;
      v40 = *(_WORD *)(v37 + 2 * v39);
      v41 = NlsOemLeadByteInfoTable[HIBYTE(v40)];
      if ( v41 )
        v42 = *(_WORD *)(v38 + 2LL * ((unsigned __int8)v40 + v41));
      else
        v42 = *(_WORD *)(v35 + 2LL * (unsigned __int8)v40);
      if ( v42 >= 0x61u )
      {
        if ( v42 > 0x7Au )
          v42 += *(_WORD *)(v36
                          + 2LL
                          * ((v42 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v36
                                                               + 2LL
                                                               * (((v42 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v36 + 2 * ((unsigned __int64)v42 >> 8))))));
        else
          v42 -= 32;
      }
      v43 = v42;
      v44 = v48;
      v45 = *(_WORD *)(v37 + 2 * v43);
      if ( HIBYTE(v45) )
      {
        v46 = v48;
        v44 = --v48;
        if ( v46 < 2 )
          break;
        *v5++ = HIBYTE(v45);
      }
      *v5 = v45;
      v8 = v44 - 1;
      ++v5;
      v47 = BytesInUnicodeStringa-- == 1;
      v48 = v8;
    }
    while ( !v47 );
    v34 = (int)OemString;
  }
  if ( BytesInOemString )
    *BytesInOemString = (_DWORD)v5 - v34;
  return v48 < BytesInUnicodeStringa ? 0x80000005 : 0;
}
