/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x1404A5820
 * Callers:
 *     toupper @ 0x14014F3AC (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406857C4 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r10d
  PCHAR v8; // rbx
  __int64 v9; // r11
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r9
  CHAR *v13; // rbx
  const WCHAR *v14; // rdi
  unsigned __int16 v15; // r10
  __int64 v17; // rax
  unsigned __int16 v18; // r10
  unsigned __int16 v19; // r10
  unsigned __int16 v20; // r10
  unsigned __int16 v21; // r10
  unsigned __int16 v22; // r10
  unsigned __int16 v23; // r10
  unsigned __int16 v24; // r10
  unsigned __int16 v25; // r10
  unsigned __int16 v26; // r10
  unsigned __int16 v27; // r10
  unsigned __int16 v28; // r10
  unsigned __int16 v29; // r10
  unsigned __int16 v30; // r10
  unsigned __int16 v31; // r10
  unsigned __int16 v32; // r10
  int v33; // esi
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rax
  __int16 v39; // r8
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // r9
  __int16 v42; // r8
  ULONG v43; // eax

  v6 = BytesInUnicodeString >> 1;
  v8 = MultiByteString;
  if ( (_BYTE)NlsMbCodePageTag )
  {
    v33 = (int)MultiByteString;
    if ( v6 )
    {
      v34 = NlsUnicodeToMbAnsiData;
      v35 = NlsMbAnsiCodePageTables;
      v36 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
      v37 = NlsAnsiToUnicodeData;
      do
      {
        if ( !MaxBytesInMultiByteString )
          break;
        v38 = *UnicodeString++;
        v39 = *(_WORD *)(v34 + 2 * v38);
        v40 = NlsLeadByteInfoTable[HIBYTE(v39)];
        if ( v40 )
          v41 = *(_WORD *)(v35 + 2LL * ((unsigned __int8)v39 + v40));
        else
          v41 = *(_WORD *)(v37 + 2LL * (unsigned __int8)v39);
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
        v42 = *(_WORD *)(v34 + 2LL * v41);
        if ( HIBYTE(v42) )
        {
          v43 = MaxBytesInMultiByteString--;
          if ( v43 < 2 )
            break;
          *v8++ = HIBYTE(v42);
        }
        *v8 = v42;
        --MaxBytesInMultiByteString;
        ++v8;
        --v6;
      }
      while ( v6 );
      v33 = (int)MultiByteString;
    }
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = (_DWORD)v8 - v33;
  }
  else
  {
    if ( v6 < MaxBytesInMultiByteString )
      MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = MaxBytesInMultiByteString;
    v9 = NlsUnicodeToAnsiData;
    v10 = NlsAnsiToUnicodeData;
    v11 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
    v12 = MaxBytesInMultiByteString & 0xF;
    v13 = &MultiByteString[v12 - 15];
    v14 = &UnicodeString[v12 - 15];
    do
    {
      if ( (_DWORD)v12 != 1 )
      {
        switch ( (int)v12 )
        {
          case 0:
            goto LABEL_10;
          case 2:
            goto LABEL_86;
          case 3:
            goto LABEL_81;
          case 4:
            goto LABEL_76;
          case 5:
            goto LABEL_71;
          case 6:
            goto LABEL_66;
          case 7:
            goto LABEL_61;
          case 8:
            goto LABEL_56;
          case 9:
            goto LABEL_51;
          case 10:
            goto LABEL_46;
          case 11:
            goto LABEL_41;
          case 12:
            goto LABEL_36;
          case 13:
            goto LABEL_31;
          case 14:
            goto LABEL_26;
          case 15:
            goto LABEL_21;
          default:
            v17 = v14[15];
            v14 += 16;
            v13 += 16;
            v18 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v17 + v9));
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
            *(v13 - 1) = *(_BYTE *)(v18 + v9);
LABEL_21:
            v19 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(*v14 + v9));
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
            *v13 = *(_BYTE *)(v19 + v9);
LABEL_26:
            v20 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[1] + v9));
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
            v13[1] = *(_BYTE *)(v20 + v9);
LABEL_31:
            v21 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[2] + v9));
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
            v13[2] = *(_BYTE *)(v21 + v9);
LABEL_36:
            v22 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[3] + v9));
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
            v13[3] = *(_BYTE *)(v22 + v9);
LABEL_41:
            v23 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[4] + v9));
            if ( v23 >= 0x61u )
            {
              if ( v23 > 0x7Au )
                v23 += *(_WORD *)(v11
                                + 2LL
                                * ((v23 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v23 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v23 >> 8))))));
              else
                v23 -= 32;
            }
            v13[4] = *(_BYTE *)(v23 + v9);
LABEL_46:
            v24 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[5] + v9));
            if ( v24 >= 0x61u )
            {
              if ( v24 > 0x7Au )
                v24 += *(_WORD *)(v11
                                + 2LL
                                * ((v24 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v24 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v24 >> 8))))));
              else
                v24 -= 32;
            }
            v13[5] = *(_BYTE *)(v24 + v9);
LABEL_51:
            v25 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[6] + v9));
            if ( v25 >= 0x61u )
            {
              if ( v25 > 0x7Au )
                v25 += *(_WORD *)(v11
                                + 2LL
                                * ((v25 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v25 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v25 >> 8))))));
              else
                v25 -= 32;
            }
            v13[6] = *(_BYTE *)(v25 + v9);
LABEL_56:
            v26 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[7] + v9));
            if ( v26 >= 0x61u )
            {
              if ( v26 > 0x7Au )
                v26 += *(_WORD *)(v11
                                + 2LL
                                * ((v26 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v26 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v26 >> 8))))));
              else
                v26 -= 32;
            }
            v13[7] = *(_BYTE *)(v26 + v9);
LABEL_61:
            v27 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[8] + v9));
            if ( v27 >= 0x61u )
            {
              if ( v27 > 0x7Au )
                v27 += *(_WORD *)(v11
                                + 2LL
                                * ((v27 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v27 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v27 >> 8))))));
              else
                v27 -= 32;
            }
            v13[8] = *(_BYTE *)(v27 + v9);
LABEL_66:
            v28 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[9] + v9));
            if ( v28 >= 0x61u )
            {
              if ( v28 > 0x7Au )
                v28 += *(_WORD *)(v11
                                + 2LL
                                * ((v28 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v28 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v28 >> 8))))));
              else
                v28 -= 32;
            }
            v13[9] = *(_BYTE *)(v28 + v9);
LABEL_71:
            v29 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[10] + v9));
            if ( v29 >= 0x61u )
            {
              if ( v29 > 0x7Au )
                v29 += *(_WORD *)(v11
                                + 2LL
                                * ((v29 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v29 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v29 >> 8))))));
              else
                v29 -= 32;
            }
            v13[10] = *(_BYTE *)(v29 + v9);
LABEL_76:
            v30 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[11] + v9));
            if ( v30 >= 0x61u )
            {
              if ( v30 > 0x7Au )
                v30 += *(_WORD *)(v11
                                + 2LL
                                * ((v30 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v30 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v30 >> 8))))));
              else
                v30 -= 32;
            }
            v13[11] = *(_BYTE *)(v30 + v9);
LABEL_81:
            v31 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[12] + v9));
            if ( v31 >= 0x61u )
            {
              if ( v31 > 0x7Au )
                v31 += *(_WORD *)(v11
                                + 2LL
                                * ((v31 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v31 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v31 >> 8))))));
              else
                v31 -= 32;
            }
            v13[12] = *(_BYTE *)(v31 + v9);
LABEL_86:
            v32 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[13] + v9));
            if ( v32 >= 0x61u )
            {
              if ( v32 > 0x7Au )
                v32 += *(_WORD *)(v11
                                + 2LL
                                * ((v32 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v11
                                                                     + 2LL
                                                                     * (((v32 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v32 >> 8))))));
              else
                v32 -= 32;
            }
            v13[13] = *(_BYTE *)(v32 + v9);
            break;
        }
      }
      v15 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)(v14[14] + v9));
      if ( v15 >= 0x61u )
      {
        if ( v15 > 0x7Au )
          v15 += *(_WORD *)(v11
                          + 2LL
                          * ((v15 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v11
                                                               + 2LL
                                                               * (((v15 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v15 >> 8))))));
        else
          v15 -= 32;
      }
      v13[14] = *(_BYTE *)(v15 + v9);
LABEL_10:
      MaxBytesInMultiByteString -= v12;
      LODWORD(v12) = 16;
    }
    while ( MaxBytesInMultiByteString );
  }
  return 0;
}
