/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x1403F6310
 * Callers:
 *     wcstombs @ 0x14014F774 (wcstombs.c)
 *     _wctomb_s_l @ 0x14014FA78 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x140154154 (_safecrt_wctomb_s.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v7; // edx
  __int64 v8; // r9
  __int64 v9; // r10
  CHAR *v10; // r8
  const WCHAR *v11; // rax
  __int64 v12; // rcx
  int v14; // r10d
  __int64 v15; // rsi
  __int64 v16; // rax
  __int16 v17; // di
  ULONG v18; // eax

  v7 = BytesInUnicodeString >> 1;
  if ( !(_BYTE)NlsMbCodePageTag )
  {
    if ( v7 < MaxBytesInMultiByteString )
      MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = MaxBytesInMultiByteString;
    v8 = NlsUnicodeToAnsiData;
    v9 = MaxBytesInMultiByteString & 0xF;
    v10 = &MultiByteString[v9 - 15];
    v11 = &UnicodeString[v9 - 15];
    while ( 2 )
    {
      switch ( (int)v9 )
      {
        case 0:
          goto LABEL_24;
        case 1:
          goto LABEL_23;
        case 2:
          goto LABEL_22;
        case 3:
          goto LABEL_21;
        case 4:
          goto LABEL_20;
        case 5:
          goto LABEL_19;
        case 6:
          goto LABEL_18;
        case 7:
          goto LABEL_17;
        case 8:
          goto LABEL_16;
        case 9:
          goto LABEL_15;
        case 10:
          goto LABEL_14;
        case 11:
          goto LABEL_13;
        case 12:
          goto LABEL_12;
        case 13:
          goto LABEL_11;
        case 14:
          goto LABEL_10;
        case 15:
          goto LABEL_9;
        default:
          v12 = v11[15];
          v11 += 16;
          v10 += 16;
          *(v10 - 1) = *(_BYTE *)(v12 + v8);
LABEL_9:
          *v10 = *(_BYTE *)(*v11 + v8);
LABEL_10:
          v10[1] = *(_BYTE *)(v11[1] + v8);
LABEL_11:
          v10[2] = *(_BYTE *)(v11[2] + v8);
LABEL_12:
          v10[3] = *(_BYTE *)(v11[3] + v8);
LABEL_13:
          v10[4] = *(_BYTE *)(v11[4] + v8);
LABEL_14:
          v10[5] = *(_BYTE *)(v11[5] + v8);
LABEL_15:
          v10[6] = *(_BYTE *)(v11[6] + v8);
LABEL_16:
          v10[7] = *(_BYTE *)(v11[7] + v8);
LABEL_17:
          v10[8] = *(_BYTE *)(v11[8] + v8);
LABEL_18:
          v10[9] = *(_BYTE *)(v11[9] + v8);
LABEL_19:
          v10[10] = *(_BYTE *)(v11[10] + v8);
LABEL_20:
          v10[11] = *(_BYTE *)(v11[11] + v8);
LABEL_21:
          v10[12] = *(_BYTE *)(v11[12] + v8);
LABEL_22:
          v10[13] = *(_BYTE *)(v11[13] + v8);
LABEL_23:
          v10[14] = *(_BYTE *)(v11[14] + v8);
LABEL_24:
          MaxBytesInMultiByteString -= v9;
          LODWORD(v9) = 16;
          if ( !MaxBytesInMultiByteString )
            return 0;
          continue;
      }
    }
  }
  v14 = (int)MultiByteString;
  if ( v7 )
  {
    v15 = NlsUnicodeToMbAnsiData;
    do
    {
      if ( !MaxBytesInMultiByteString )
        break;
      v16 = *UnicodeString++;
      v17 = *(_WORD *)(v15 + 2 * v16);
      if ( HIBYTE(v17) )
      {
        v18 = MaxBytesInMultiByteString--;
        if ( v18 < 2 )
          break;
        *MultiByteString++ = HIBYTE(v17);
      }
      *MultiByteString = v17;
      --MaxBytesInMultiByteString;
      ++MultiByteString;
      --v7;
    }
    while ( v7 );
  }
  if ( BytesInMultiByteString )
    *BytesInMultiByteString = (_DWORD)MultiByteString - v14;
  return 0;
}
