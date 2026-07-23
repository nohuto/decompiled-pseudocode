/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x180018A20
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x180002994 (EtwpAddDebugInfoEvents.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018940 (RtlUnicodeStringToAnsiString.c)
 *     wcstombs @ 0x18009CB70 (wcstombs.c)
 *     _wctomb_s_l @ 0x1800A091C (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x1800A3140 (_safecrt_wctomb_s.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v7; // edx
  __int64 v8; // r9
  __int64 v9; // r11
  CHAR *v10; // rdx
  const WCHAR *v11; // r8
  __int64 v12; // rax
  int v14; // r11d
  __int64 v15; // rsi
  __int64 v16; // rax
  __int16 v17; // di
  ULONG v18; // eax

  v7 = BytesInUnicodeString >> 1;
  if ( !NlsMbCodePageTag )
  {
    if ( v7 < MaxBytesInMultiByteString )
      MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = MaxBytesInMultiByteString;
    v8 = NlsUnicodeToAnsiData;
    v9 = MaxBytesInMultiByteString & 0xF;
    v10 = &MultiByteString[v9 - 15];
    v11 = &UnicodeString[v9 - 15];
    while ( (unsigned int)v9 <= 8 )
    {
      if ( (_DWORD)v9 == 8 )
        goto LABEL_23;
      if ( !(_DWORD)v9 )
        goto LABEL_31;
      if ( (_DWORD)v9 != 1 )
      {
        if ( (_DWORD)v9 != 2 )
        {
          if ( (_DWORD)v9 != 3 )
          {
            if ( (_DWORD)v9 != 4 )
            {
              if ( (_DWORD)v9 != 5 )
              {
                if ( (_DWORD)v9 != 6 )
                  goto LABEL_24;
                goto LABEL_25;
              }
LABEL_26:
              v10[10] = *(_BYTE *)(v11[10] + v8);
            }
            v10[11] = *(_BYTE *)(v11[11] + v8);
          }
          v10[12] = *(_BYTE *)(v11[12] + v8);
        }
        v10[13] = *(_BYTE *)(v11[13] + v8);
      }
      v10[14] = *(_BYTE *)(v11[14] + v8);
LABEL_31:
      MaxBytesInMultiByteString -= v9;
      LODWORD(v9) = 16;
      if ( !MaxBytesInMultiByteString )
        return 0;
    }
    if ( (_DWORD)v9 != 9 )
    {
      if ( (_DWORD)v9 != 10 )
      {
        if ( (_DWORD)v9 != 11 )
        {
          if ( (_DWORD)v9 != 12 )
          {
            if ( (_DWORD)v9 != 13 )
            {
              if ( (_DWORD)v9 != 14 )
              {
                if ( (_DWORD)v9 != 15 )
                {
                  v12 = v11[15];
                  v11 += 16;
                  v10 += 16;
                  *(v10 - 1) = *(_BYTE *)(v12 + v8);
                }
                *v10 = *(_BYTE *)(*v11 + v8);
              }
              v10[1] = *(_BYTE *)(v11[1] + v8);
            }
            v10[2] = *(_BYTE *)(v11[2] + v8);
          }
          v10[3] = *(_BYTE *)(v11[3] + v8);
        }
        v10[4] = *(_BYTE *)(v11[4] + v8);
      }
      v10[5] = *(_BYTE *)(v11[5] + v8);
    }
    v10[6] = *(_BYTE *)(v11[6] + v8);
LABEL_23:
    v10[7] = *(_BYTE *)(v11[7] + v8);
LABEL_24:
    v10[8] = *(_BYTE *)(v11[8] + v8);
LABEL_25:
    v10[9] = *(_BYTE *)(v11[9] + v8);
    goto LABEL_26;
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
