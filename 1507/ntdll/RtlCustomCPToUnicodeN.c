/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x1800CD120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCustomCPToUnicodeN(
        PCPTABLEINFO CustomCP,
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCH CustomCPString,
        ULONG BytesInCustomCPString)
{
  ULONG v6; // r11d
  ULONG v7; // ebx
  ULONG v9; // r10d
  PWCH v10; // rdx
  PUSHORT MultiByteTable; // r9
  PCH v12; // r8
  PUSHORT DBCSOffsets; // r10
  int v14; // esi
  PCH v15; // r8
  __int64 v16; // rcx
  USHORT v17; // ax
  __int64 v18; // rcx

  v6 = BytesInCustomCPString;
  v7 = MaxBytesInUnicodeString >> 1;
  if ( !CustomCP->DBCSCodePage )
  {
    v9 = BytesInCustomCPString;
    if ( v7 < BytesInCustomCPString )
      v9 = MaxBytesInUnicodeString >> 1;
    if ( BytesInUnicodeString )
      *BytesInUnicodeString = 2 * v9;
    v10 = UnicodeString + 14;
    MultiByteTable = CustomCP->MultiByteTable;
    v12 = CustomCPString + 14;
    while ( v9 <= 8 )
    {
      if ( v9 == 8 )
        goto LABEL_32;
      if ( !v9 )
        goto LABEL_40;
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
LABEL_39:
      *(v10 - 14) = MultiByteTable[(unsigned __int8)*(v12 - 14)];
LABEL_40:
      if ( v9 <= 0x10 )
        return v7 < v6 ? 0x80000005 : 0;
      v9 -= 16;
      v12 += 16;
      v10 += 16;
    }
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
              {
                if ( v9 != 15 )
                  v10[1] = MultiByteTable[(unsigned __int8)v12[1]];
                *v10 = MultiByteTable[(unsigned __int8)*v12];
              }
              *(v10 - 1) = MultiByteTable[(unsigned __int8)*(v12 - 1)];
            }
            *(v10 - 2) = MultiByteTable[(unsigned __int8)*(v12 - 2)];
          }
          *(v10 - 3) = MultiByteTable[(unsigned __int8)*(v12 - 3)];
        }
        *(v10 - 4) = MultiByteTable[(unsigned __int8)*(v12 - 4)];
      }
      *(v10 - 5) = MultiByteTable[(unsigned __int8)*(v12 - 5)];
    }
    *(v10 - 6) = MultiByteTable[(unsigned __int8)*(v12 - 6)];
LABEL_32:
    *(v10 - 7) = MultiByteTable[(unsigned __int8)*(v12 - 7)];
LABEL_33:
    *(v10 - 8) = MultiByteTable[(unsigned __int8)*(v12 - 8)];
LABEL_34:
    *(v10 - 9) = MultiByteTable[(unsigned __int8)*(v12 - 9)];
LABEL_35:
    *(v10 - 10) = MultiByteTable[(unsigned __int8)*(v12 - 10)];
LABEL_36:
    *(v10 - 11) = MultiByteTable[(unsigned __int8)*(v12 - 11)];
LABEL_37:
    *(v10 - 12) = MultiByteTable[(unsigned __int8)*(v12 - 12)];
LABEL_38:
    *(v10 - 13) = MultiByteTable[(unsigned __int8)*(v12 - 13)];
    goto LABEL_39;
  }
  DBCSOffsets = CustomCP->DBCSOffsets;
  v14 = (int)UnicodeString;
  if ( v7 )
  {
    v15 = CustomCPString;
    while ( v6 )
    {
      v16 = (unsigned __int8)*v15;
      --v7;
      --v6;
      v17 = DBCSOffsets[v16];
      if ( v17 )
      {
        if ( !v6 )
        {
          *UnicodeString = 0;
          LODWORD(UnicodeString) = (_DWORD)UnicodeString + 2;
          break;
        }
        v18 = (unsigned __int8)v15[1];
        v15 += 2;
        *UnicodeString++ = DBCSOffsets[v17 + v18];
        --v6;
      }
      else
      {
        *UnicodeString++ = CustomCP->MultiByteTable[v16];
        ++v15;
      }
      if ( !v7 )
        break;
    }
  }
  if ( BytesInUnicodeString )
    *BytesInUnicodeString = (_DWORD)UnicodeString - v14;
  return v7 < v6 ? 0x80000005 : 0;
}
