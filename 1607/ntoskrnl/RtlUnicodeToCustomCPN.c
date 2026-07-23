/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x1406865B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r10d
  ULONG v7; // ebx
  ULONG v8; // edi
  _BYTE *WideCharTable; // r9
  __int64 v10; // r11
  CHAR *v11; // rdx
  WCHAR *v12; // r8
  __int64 v13; // rax
  _WORD *v14; // rsi
  int v15; // edi
  PWCH v16; // r8
  __int64 v17; // rax
  __int16 v18; // r11
  unsigned int v19; // eax

  v6 = BytesInUnicodeString >> 1;
  v7 = MaxBytesInCustomCPString;
  if ( !CustomCP->DBCSCodePage )
  {
    v8 = MaxBytesInCustomCPString;
    if ( v6 < MaxBytesInCustomCPString )
      v8 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v8;
    WideCharTable = CustomCP->WideCharTable;
    v10 = v8 & 0xF;
    v11 = &CustomCPString[v10 - 15];
    v12 = &UnicodeString[v10 - 15];
    while ( (unsigned int)v10 <= 8 )
    {
      if ( (_DWORD)v10 == 8 )
        goto LABEL_32;
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
        {
          if ( (_DWORD)v10 != 2 )
          {
            if ( (_DWORD)v10 != 3 )
            {
              if ( (_DWORD)v10 != 4 )
              {
                if ( (_DWORD)v10 != 5 )
                {
                  if ( (_DWORD)v10 != 6 )
                    goto LABEL_33;
                  goto LABEL_34;
                }
                goto LABEL_35;
              }
              goto LABEL_36;
            }
            goto LABEL_37;
          }
          goto LABEL_38;
        }
        goto LABEL_39;
      }
LABEL_40:
      v8 -= v10;
      LODWORD(v10) = 16;
      if ( !v8 )
        return v7 < v6 ? 0x80000005 : 0;
    }
    if ( (_DWORD)v10 != 9 )
    {
      if ( (_DWORD)v10 != 10 )
      {
        if ( (_DWORD)v10 != 11 )
        {
          if ( (_DWORD)v10 != 12 )
          {
            if ( (_DWORD)v10 != 13 )
            {
              if ( (_DWORD)v10 != 14 )
              {
                if ( (_DWORD)v10 != 15 )
                {
                  v13 = v12[15];
                  v12 += 16;
                  v11 += 16;
                  *(v11 - 1) = WideCharTable[v13];
                }
                *v11 = WideCharTable[*v12];
              }
              v11[1] = WideCharTable[v12[1]];
            }
            v11[2] = WideCharTable[v12[2]];
          }
          v11[3] = WideCharTable[v12[3]];
        }
        v11[4] = WideCharTable[v12[4]];
      }
      v11[5] = WideCharTable[v12[5]];
    }
    v11[6] = WideCharTable[v12[6]];
LABEL_32:
    v11[7] = WideCharTable[v12[7]];
LABEL_33:
    v11[8] = WideCharTable[v12[8]];
LABEL_34:
    v11[9] = WideCharTable[v12[9]];
LABEL_35:
    v11[10] = WideCharTable[v12[10]];
LABEL_36:
    v11[11] = WideCharTable[v12[11]];
LABEL_37:
    v11[12] = WideCharTable[v12[12]];
LABEL_38:
    v11[13] = WideCharTable[v12[13]];
LABEL_39:
    v11[14] = WideCharTable[v12[14]];
    goto LABEL_40;
  }
  v14 = CustomCP->WideCharTable;
  v15 = (int)CustomCPString;
  if ( v6 )
  {
    v16 = UnicodeString;
    do
    {
      if ( !v7 )
        break;
      v17 = *v16++;
      v18 = v14[v17];
      if ( HIBYTE(v18) )
      {
        v19 = v7--;
        if ( v19 < 2 )
          break;
        *CustomCPString++ = HIBYTE(v18);
      }
      *CustomCPString = v18;
      --v7;
      ++CustomCPString;
      --v6;
    }
    while ( v6 );
  }
  if ( BytesInCustomCPString )
    *BytesInCustomCPString = (_DWORD)CustomCPString - v15;
  return v7 < v6 ? 0x80000005 : 0;
}
