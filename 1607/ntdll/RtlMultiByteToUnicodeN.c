/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x180018440
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x1800182D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1800183C0 (RtlAnsiCharToUnicodeChar.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF10 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x18009A590 (mbstowcs.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800DDDC0 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v5; // edx
  PWCH v6; // r10
  ULONG v7; // eax
  __int64 v8; // r11
  int v9; // r8d
  unsigned __int8 *v10; // r9
  WCHAR *i; // r10
  int v13; // edi
  __int64 v14; // r14
  ULONG v15; // r11d
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int16 v18; // si
  int v19; // ecx

  v5 = MaxBytesInUnicodeString >> 1;
  v6 = UnicodeString;
  if ( NlsMbCodePageTag )
  {
    v13 = (int)UnicodeString;
    v14 = NlsMbAnsiCodePageTables;
    if ( v5 )
    {
      v15 = BytesInMultiByteString;
      v16 = NlsAnsiToUnicodeData;
      while ( v15 )
      {
        --v5;
        v17 = *(unsigned __int8 *)MultiByteString;
        --v15;
        v18 = NlsLeadByteInfoTable[v17];
        if ( v18 )
        {
          if ( !v15 )
          {
            *v6 = 0;
            LODWORD(v6) = (_DWORD)v6 + 2;
            break;
          }
          v19 = *((unsigned __int8 *)MultiByteString + 1);
          MultiByteString += 2;
          *v6++ = *(_WORD *)(v14 + 2LL * (v19 + v18));
          --v15;
        }
        else
        {
          *v6++ = *(_WORD *)(v17 * 2 + v16);
          ++MultiByteString;
        }
        if ( !v5 )
          break;
      }
    }
    if ( BytesInUnicodeString )
      *BytesInUnicodeString = (_DWORD)v6 - v13;
  }
  else
  {
    v7 = BytesInMultiByteString;
    if ( v5 < BytesInMultiByteString )
      v7 = v5;
    if ( BytesInUnicodeString )
      *BytesInUnicodeString = 2 * v7;
    v8 = NlsAnsiToUnicodeData;
    v9 = v7 & 0x1F;
    v10 = (unsigned __int8 *)&MultiByteString[v7 - v9];
    for ( i = &UnicodeString[v7 - v9]; ; i -= 32 )
    {
      if ( v9 != 1 )
      {
        switch ( v9 )
        {
          case 0:
            goto LABEL_9;
          case 2:
            goto LABEL_42;
          case 3:
            goto LABEL_41;
          case 4:
            goto LABEL_40;
          case 5:
            goto LABEL_39;
          case 6:
            goto LABEL_38;
          case 7:
            goto LABEL_37;
          case 8:
            goto LABEL_36;
          case 9:
            goto LABEL_35;
          case 10:
            goto LABEL_34;
          case 11:
            goto LABEL_33;
          case 12:
            goto LABEL_32;
          case 13:
            goto LABEL_31;
          case 14:
            goto LABEL_30;
          case 15:
            goto LABEL_29;
          case 16:
            goto LABEL_28;
          case 17:
            goto LABEL_27;
          case 18:
            goto LABEL_26;
          case 19:
            goto LABEL_25;
          case 20:
            goto LABEL_24;
          case 21:
            goto LABEL_23;
          case 22:
            goto LABEL_22;
          case 23:
            goto LABEL_21;
          case 24:
            goto LABEL_20;
          case 25:
            goto LABEL_19;
          case 26:
            goto LABEL_18;
          case 27:
            goto LABEL_17;
          case 28:
            goto LABEL_16;
          case 29:
            goto LABEL_15;
          case 30:
            goto LABEL_14;
          case 31:
            goto LABEL_13;
          default:
            i[31] = *(_WORD *)(v8 + 2LL * v10[31]);
LABEL_13:
            i[30] = *(_WORD *)(v8 + 2LL * v10[30]);
LABEL_14:
            i[29] = *(_WORD *)(v8 + 2LL * v10[29]);
LABEL_15:
            i[28] = *(_WORD *)(v8 + 2LL * v10[28]);
LABEL_16:
            i[27] = *(_WORD *)(v8 + 2LL * v10[27]);
LABEL_17:
            i[26] = *(_WORD *)(v8 + 2LL * v10[26]);
LABEL_18:
            i[25] = *(_WORD *)(v8 + 2LL * v10[25]);
LABEL_19:
            i[24] = *(_WORD *)(v8 + 2LL * v10[24]);
LABEL_20:
            i[23] = *(_WORD *)(v8 + 2LL * v10[23]);
LABEL_21:
            i[22] = *(_WORD *)(v8 + 2LL * v10[22]);
LABEL_22:
            i[21] = *(_WORD *)(v8 + 2LL * v10[21]);
LABEL_23:
            i[20] = *(_WORD *)(v8 + 2LL * v10[20]);
LABEL_24:
            i[19] = *(_WORD *)(v8 + 2LL * v10[19]);
LABEL_25:
            i[18] = *(_WORD *)(v8 + 2LL * v10[18]);
LABEL_26:
            i[17] = *(_WORD *)(v8 + 2LL * v10[17]);
LABEL_27:
            i[16] = *(_WORD *)(v8 + 2LL * v10[16]);
LABEL_28:
            i[15] = *(_WORD *)(v8 + 2LL * v10[15]);
LABEL_29:
            i[14] = *(_WORD *)(v8 + 2LL * v10[14]);
LABEL_30:
            i[13] = *(_WORD *)(v8 + 2LL * v10[13]);
LABEL_31:
            i[12] = *(_WORD *)(v8 + 2LL * v10[12]);
LABEL_32:
            i[11] = *(_WORD *)(v8 + 2LL * v10[11]);
LABEL_33:
            i[10] = *(_WORD *)(v8 + 2LL * v10[10]);
LABEL_34:
            i[9] = *(_WORD *)(v8 + 2LL * v10[9]);
LABEL_35:
            i[8] = *(_WORD *)(v8 + 2LL * v10[8]);
LABEL_36:
            i[7] = *(_WORD *)(v8 + 2LL * v10[7]);
LABEL_37:
            i[6] = *(_WORD *)(v8 + 2LL * v10[6]);
LABEL_38:
            i[5] = *(_WORD *)(v8 + 2LL * v10[5]);
LABEL_39:
            i[4] = *(_WORD *)(v8 + 2LL * v10[4]);
LABEL_40:
            i[3] = *(_WORD *)(v8 + 2LL * v10[3]);
LABEL_41:
            i[2] = *(_WORD *)(v8 + 2LL * v10[2]);
LABEL_42:
            i[1] = *(_WORD *)(v8 + 2LL * v10[1]);
            break;
        }
      }
      *i = *(_WORD *)(v8 + 2LL * *v10);
LABEL_9:
      if ( v7 < 0x20 )
        break;
      v9 = 32;
      v7 -= 32;
      v10 -= 32;
    }
  }
  return 0;
}
