/*
 * XREFs of RtlOemToUnicodeN @ 0x14054A010
 * Callers:
 *     FsRtlNotifyUpdateBuffer @ 0x1404AB8A8 (FsRtlNotifyUpdateBuffer.c)
 *     RtlOemStringToUnicodeString @ 0x140549F28 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140685564 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  ULONG v5; // ebx
  ULONG v6; // esi
  PWCH v8; // r10
  ULONG v9; // r11d
  __int64 v10; // r9
  PWCH v11; // rdx
  PCCH v12; // r8
  __int64 v14; // r11
  int v15; // r9d
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  int v19; // ecx

  v5 = BytesInOemString;
  v6 = MaxBytesInUnicodeString >> 1;
  v8 = UnicodeString;
  if ( !(_BYTE)NlsMbOemCodePageTag )
  {
    v9 = BytesInOemString;
    if ( v6 < BytesInOemString )
      v9 = MaxBytesInUnicodeString >> 1;
    if ( BytesInUnicodeString )
      *BytesInUnicodeString = 2 * v9;
    v10 = NlsOemToUnicodeData;
    v11 = UnicodeString + 14;
    v12 = OemString + 14;
    while ( v9 <= 8 )
    {
      if ( v9 == 8 )
        goto LABEL_23;
      if ( v9 )
      {
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
                    goto LABEL_24;
                  goto LABEL_25;
                }
LABEL_26:
                *(v11 - 10) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 10));
              }
              *(v11 - 11) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 11));
            }
            *(v11 - 12) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 12));
          }
          *(v11 - 13) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 13));
        }
        *(v11 - 14) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 14));
      }
      if ( v9 <= 0x10 )
        return v6 < v5 ? 0x80000005 : 0;
      v9 -= 16;
      v12 += 16;
      v11 += 16;
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
                  v11[1] = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 + 1));
                *v11 = *(_WORD *)(v10 + 2LL * *(unsigned __int8 *)v12);
              }
              *(v11 - 1) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 1));
            }
            *(v11 - 2) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 2));
          }
          *(v11 - 3) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 3));
        }
        *(v11 - 4) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 4));
      }
      *(v11 - 5) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 5));
    }
    *(v11 - 6) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 6));
LABEL_23:
    *(v11 - 7) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 7));
LABEL_24:
    *(v11 - 8) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 8));
LABEL_25:
    *(v11 - 9) = *(_WORD *)(v10 + 2LL * *((unsigned __int8 *)v12 - 9));
    goto LABEL_26;
  }
  v14 = NlsMbOemCodePageTables;
  v15 = (int)UnicodeString;
  if ( v6 )
  {
    v16 = NlsOemToUnicodeData;
    while ( v5 )
    {
      v17 = *(unsigned __int8 *)OemString;
      --v6;
      --v5;
      v18 = NlsOemLeadByteInfoTable[v17];
      if ( v18 )
      {
        if ( !v5 )
        {
          *v8 = 0;
          LODWORD(v8) = (_DWORD)v8 + 2;
          break;
        }
        v19 = *((unsigned __int8 *)OemString + 1);
        OemString += 2;
        *v8++ = *(_WORD *)(v14 + 2LL * (v19 + v18));
        --v5;
      }
      else
      {
        *v8++ = *(_WORD *)(v16 + 2 * v17);
        ++OemString;
      }
      if ( !v6 )
        break;
    }
  }
  if ( BytesInUnicodeString )
    *BytesInUnicodeString = (_DWORD)v8 - v15;
  return v6 < v5 ? 0x80000005 : 0;
}
