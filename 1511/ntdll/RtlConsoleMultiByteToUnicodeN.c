/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x18007C500
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180014CA0 (RtlMultiByteToUnicodeN.c)
 */

__int64 __fastcall RtlConsoleMultiByteToUnicodeN(
        _WORD *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int8 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  _WORD *v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // r8
  __int64 v12; // r14
  int v13; // esi
  __int64 v14; // r15
  unsigned int v15; // r11d
  __int64 v16; // rax
  unsigned __int16 v17; // di
  __int64 v18; // rcx

  v6 = a2;
  v7 = a2 >> 1;
  v8 = a1;
  *a6 = 0;
  if ( !NlsMbCodePageTag )
  {
    v9 = a5;
    if ( v7 < a5 )
      v9 = a2 >> 1;
    if ( a3 )
      *a3 = 2 * v9;
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
                if ( a4[12] < 0x20u )
                  goto LABEL_88;
                v8[12] = *(_WORD *)(v10 + 2LL * a4[12]);
              }
              if ( a4[11] < 0x20u )
                goto LABEL_88;
              v8[11] = *(_WORD *)(v10 + 2LL * a4[11]);
            }
            if ( a4[10] < 0x20u )
              goto LABEL_88;
            v8[10] = *(_WORD *)(v10 + 2LL * a4[10]);
          }
          if ( a4[9] < 0x20u )
            goto LABEL_88;
          v8[9] = *(_WORD *)(v10 + 2LL * a4[9]);
        }
        if ( a4[8] < 0x20u )
          goto LABEL_88;
        v8[8] = *(_WORD *)(v10 + 2LL * a4[8]);
LABEL_64:
        if ( a4[7] < 0x20u )
          goto LABEL_88;
        v8[7] = *(_WORD *)(v10 + 2LL * a4[7]);
LABEL_66:
        if ( a4[6] < 0x20u )
          goto LABEL_88;
        v8[6] = *(_WORD *)(v10 + 2LL * a4[6]);
LABEL_68:
        if ( a4[5] < 0x20u )
          goto LABEL_88;
        v8[5] = *(_WORD *)(v10 + 2LL * a4[5]);
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
              if ( a4[4] < 0x20u )
                goto LABEL_88;
              v8[4] = *(_WORD *)(v10 + 2LL * a4[4]);
            }
            if ( a4[3] < 0x20u )
              goto LABEL_88;
            v8[3] = *(_WORD *)(v10 + 2LL * a4[3]);
          }
          if ( a4[2] < 0x20u )
            goto LABEL_88;
          v8[2] = *(_WORD *)(v10 + 2LL * a4[2]);
        }
        if ( a4[1] < 0x20u )
          goto LABEL_88;
        v8[1] = *(_WORD *)(v10 + 2LL * a4[1]);
      }
      if ( *a4 < 0x20u )
        goto LABEL_88;
      *v8 = *(_WORD *)(v10 + 2LL * *a4);
LABEL_85:
      if ( v9 <= 0x20 )
        return 0LL;
      v9 -= 32;
      v8 += 32;
      a4 += 32;
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
            if ( a4[17] < 0x20u )
              goto LABEL_88;
            v8[17] = *(_WORD *)(v10 + 2LL * a4[17]);
LABEL_46:
            if ( a4[16] < 0x20u )
              goto LABEL_88;
            v8[16] = *(_WORD *)(v10 + 2LL * a4[16]);
LABEL_48:
            if ( a4[15] < 0x20u )
              goto LABEL_88;
            v8[15] = *(_WORD *)(v10 + 2LL * a4[15]);
LABEL_50:
            if ( a4[14] < 0x20u )
              goto LABEL_88;
            v8[14] = *(_WORD *)(v10 + 2LL * a4[14]);
LABEL_52:
            if ( a4[13] < 0x20u )
              goto LABEL_88;
            v8[13] = *(_WORD *)(v10 + 2LL * a4[13]);
            goto LABEL_54;
          case 0x13u:
LABEL_42:
            if ( a4[18] < 0x20u )
              goto LABEL_88;
            v8[18] = *(_WORD *)(v10 + 2LL * a4[18]);
            goto LABEL_44;
          case 0x14u:
LABEL_40:
            if ( a4[19] < 0x20u )
              goto LABEL_88;
            v8[19] = *(_WORD *)(v10 + 2LL * a4[19]);
            goto LABEL_42;
          case 0x15u:
LABEL_38:
            if ( a4[20] < 0x20u )
              goto LABEL_88;
            v8[20] = *(_WORD *)(v10 + 2LL * a4[20]);
            goto LABEL_40;
          case 0x16u:
LABEL_36:
            if ( a4[21] < 0x20u )
              goto LABEL_88;
            v8[21] = *(_WORD *)(v10 + 2LL * a4[21]);
            goto LABEL_38;
        }
LABEL_34:
        if ( a4[22] < 0x20u )
          goto LABEL_88;
        v8[22] = *(_WORD *)(v10 + 2LL * a4[22]);
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
                    if ( a4[31] < 0x20u )
                      goto LABEL_88;
                    v8[31] = *(_WORD *)(v10 + 2LL * a4[31]);
                  }
                  if ( a4[30] < 0x20u )
                  {
LABEL_88:
                    *a6 = 1;
                    return RtlMultiByteToUnicodeN(v8, v6, 0LL, a4, v9);
                  }
                  v8[30] = *(_WORD *)(v10 + 2LL * a4[30]);
                }
                if ( a4[29] < 0x20u )
                  goto LABEL_88;
                v8[29] = *(_WORD *)(v10 + 2LL * a4[29]);
              }
              if ( a4[28] < 0x20u )
                goto LABEL_88;
              v8[28] = *(_WORD *)(v10 + 2LL * a4[28]);
            }
            if ( a4[27] < 0x20u )
              goto LABEL_88;
            v8[27] = *(_WORD *)(v10 + 2LL * a4[27]);
          }
          if ( a4[26] < 0x20u )
            goto LABEL_88;
          v8[26] = *(_WORD *)(v10 + 2LL * a4[26]);
        }
        if ( a4[25] < 0x20u )
          goto LABEL_88;
        v8[25] = *(_WORD *)(v10 + 2LL * a4[25]);
      }
      if ( a4[24] < 0x20u )
        goto LABEL_88;
      v8[24] = *(_WORD *)(v10 + 2LL * a4[24]);
    }
    if ( a4[23] < 0x20u )
      goto LABEL_88;
    v8[23] = *(_WORD *)(v10 + 2LL * a4[23]);
    goto LABEL_34;
  }
  v12 = NlsMbAnsiCodePageTables;
  v13 = (int)a1;
  if ( v7 )
  {
    v14 = NlsAnsiToUnicodeData;
    v15 = a5;
    while ( v15 )
    {
      v16 = *a4;
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
        v18 = a4[1];
        a4 += 2;
        *v8++ = *(_WORD *)(v12 + 2 * (v17 + v18));
        --v15;
      }
      else
      {
        if ( (unsigned __int8)v16 < 0x20u )
          *a6 = 1;
        *v8++ = *(_WORD *)(v14 + 2LL * *a4++);
      }
      if ( !v7 )
        break;
    }
  }
  if ( a3 )
    *a3 = (_DWORD)v8 - v13;
  return 0LL;
}
