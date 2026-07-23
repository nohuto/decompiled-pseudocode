/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x18007C500
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180014CA0 (RtlMultiByteToUnicodeN.c)
 */

NTSTATUS __cdecl RtlConsoleMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH MultiByteString,
        ULONG BytesInMultiByteString,
        PULONG pdwSpecialChar)
{
  ULONG v6; // edi
  ULONG v7; // ebx
  PWCH v8; // r10
  ULONG v9; // r11d
  __int64 v10; // r8
  __int64 v12; // r14
  int v13; // esi
  __int64 v14; // r15
  ULONG v15; // r11d
  __int64 v16; // rax
  unsigned __int16 v17; // di
  __int64 v18; // rcx

  v6 = MaxBytesInUnicodeString;
  v7 = MaxBytesInUnicodeString >> 1;
  v8 = UnicodeString;
  *pdwSpecialChar = 0;
  if ( !NlsMbCodePageTag )
  {
    v9 = BytesInMultiByteString;
    if ( v7 < BytesInMultiByteString )
      v9 = MaxBytesInUnicodeString >> 1;
    if ( BytesInUnicodeString )
      *BytesInUnicodeString = 2 * v9;
    v10 = NlsAnsiToUnicodeData;
    while ( v9 <= 0x10 )
    {
      if ( v9 == 16 )
        goto LABEL_48;
      if ( v9 > 8 )
      {
        if ( v9 != 9 )
        {
          if ( v9 != 10 )
          {
            if ( v9 != 11 )
            {
              if ( v9 != 12 )
              {
                if ( v9 != 13 )
                {
                  if ( v9 != 14 )
                    goto LABEL_50;
                  goto LABEL_52;
                }
LABEL_54:
                if ( MultiByteString[12] < 0x20u )
                  goto LABEL_88;
                v8[12] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 12));
              }
              if ( MultiByteString[11] < 0x20u )
                goto LABEL_88;
              v8[11] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 11));
            }
            if ( MultiByteString[10] < 0x20u )
              goto LABEL_88;
            v8[10] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 10));
          }
          if ( MultiByteString[9] < 0x20u )
            goto LABEL_88;
          v8[9] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 9));
        }
        if ( MultiByteString[8] < 0x20u )
          goto LABEL_88;
        v8[8] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 8));
LABEL_64:
        if ( MultiByteString[7] < 0x20u )
          goto LABEL_88;
        v8[7] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 7));
LABEL_66:
        if ( MultiByteString[6] < 0x20u )
          goto LABEL_88;
        v8[6] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 6));
LABEL_68:
        if ( MultiByteString[5] < 0x20u )
          goto LABEL_88;
        v8[5] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 5));
        goto LABEL_70;
      }
      if ( v9 == 8 )
        goto LABEL_64;
      if ( !v9 )
        goto LABEL_85;
      if ( v9 != 1 )
      {
        if ( v9 != 2 )
        {
          if ( v9 != 3 )
          {
            if ( v9 != 4 )
            {
              if ( v9 != 5 )
              {
                if ( v9 != 6 )
                  goto LABEL_66;
                goto LABEL_68;
              }
LABEL_70:
              if ( MultiByteString[4] < 0x20u )
                goto LABEL_88;
              v8[4] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 4));
            }
            if ( MultiByteString[3] < 0x20u )
              goto LABEL_88;
            v8[3] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 3));
          }
          if ( MultiByteString[2] < 0x20u )
            goto LABEL_88;
          v8[2] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 2));
        }
        if ( MultiByteString[1] < 0x20u )
          goto LABEL_88;
        v8[1] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 1));
      }
      if ( *MultiByteString < 0x20u )
        goto LABEL_88;
      *v8 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)MultiByteString);
LABEL_85:
      if ( v9 <= 0x20 )
        return 0;
      v9 -= 32;
      v8 += 32;
      MultiByteString += 32;
      v6 -= 64;
    }
    if ( v9 <= 0x18 )
    {
      if ( v9 != 24 )
      {
        switch ( v9 )
        {
          case 0x11u:
            goto LABEL_46;
          case 0x12u:
LABEL_44:
            if ( MultiByteString[17] < 0x20u )
              goto LABEL_88;
            v8[17] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 17));
LABEL_46:
            if ( MultiByteString[16] < 0x20u )
              goto LABEL_88;
            v8[16] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 16));
LABEL_48:
            if ( MultiByteString[15] < 0x20u )
              goto LABEL_88;
            v8[15] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 15));
LABEL_50:
            if ( MultiByteString[14] < 0x20u )
              goto LABEL_88;
            v8[14] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 14));
LABEL_52:
            if ( MultiByteString[13] < 0x20u )
              goto LABEL_88;
            v8[13] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 13));
            goto LABEL_54;
          case 0x13u:
LABEL_42:
            if ( MultiByteString[18] < 0x20u )
              goto LABEL_88;
            v8[18] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 18));
            goto LABEL_44;
          case 0x14u:
LABEL_40:
            if ( MultiByteString[19] < 0x20u )
              goto LABEL_88;
            v8[19] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 19));
            goto LABEL_42;
          case 0x15u:
LABEL_38:
            if ( MultiByteString[20] < 0x20u )
              goto LABEL_88;
            v8[20] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 20));
            goto LABEL_40;
          case 0x16u:
LABEL_36:
            if ( MultiByteString[21] < 0x20u )
              goto LABEL_88;
            v8[21] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 21));
            goto LABEL_38;
        }
LABEL_34:
        if ( MultiByteString[22] < 0x20u )
          goto LABEL_88;
        v8[22] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 22));
        goto LABEL_36;
      }
    }
    else
    {
      if ( v9 != 25 )
      {
        if ( v9 != 26 )
        {
          if ( v9 != 27 )
          {
            if ( v9 != 28 )
            {
              if ( v9 != 29 )
              {
                if ( v9 != 30 )
                {
                  if ( v9 != 31 )
                  {
                    if ( MultiByteString[31] < 0x20u )
                      goto LABEL_88;
                    v8[31] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 31));
                  }
                  if ( MultiByteString[30] < 0x20u )
                  {
LABEL_88:
                    *pdwSpecialChar = 1;
                    return RtlMultiByteToUnicodeN(v8, v6, 0LL, MultiByteString, v9);
                  }
                  v8[30] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 30));
                }
                if ( MultiByteString[29] < 0x20u )
                  goto LABEL_88;
                v8[29] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 29));
              }
              if ( MultiByteString[28] < 0x20u )
                goto LABEL_88;
              v8[28] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 28));
            }
            if ( MultiByteString[27] < 0x20u )
              goto LABEL_88;
            v8[27] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 27));
          }
          if ( MultiByteString[26] < 0x20u )
            goto LABEL_88;
          v8[26] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 26));
        }
        if ( MultiByteString[25] < 0x20u )
          goto LABEL_88;
        v8[25] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 25));
      }
      if ( MultiByteString[24] < 0x20u )
        goto LABEL_88;
      v8[24] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 24));
    }
    if ( MultiByteString[23] < 0x20u )
      goto LABEL_88;
    v8[23] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)MultiByteString + 23));
    goto LABEL_34;
  }
  v12 = NlsMbAnsiCodePageTables;
  v13 = (int)UnicodeString;
  if ( v7 )
  {
    v14 = NlsAnsiToUnicodeData;
    v15 = BytesInMultiByteString;
    while ( v15 )
    {
      v16 = *(unsigned __int8 *)MultiByteString;
      --v7;
      --v15;
      v17 = NlsLeadByteInfoTable[v16];
      if ( v17 )
      {
        if ( !v15 )
        {
          *v8 = 0;
          LODWORD(v8) = (_DWORD)v8 + 2;
          break;
        }
        v18 = *((unsigned __int8 *)MultiByteString + 1);
        MultiByteString += 2;
        *v8++ = *(_WORD *)(v12 + 2 * (v17 + v18));
        --v15;
      }
      else
      {
        if ( (unsigned __int8)v16 < 0x20u )
          *pdwSpecialChar = 1;
        *v8++ = *(_WORD *)(v14 + 2LL * *(unsigned __int8 *)MultiByteString++);
      }
      if ( !v7 )
        break;
    }
  }
  if ( BytesInUnicodeString )
    *BytesInUnicodeString = (_DWORD)v8 - v13;
  return 0;
}
