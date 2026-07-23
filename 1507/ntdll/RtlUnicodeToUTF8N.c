/*
 * XREFs of RtlUnicodeToUTF8N @ 0x180059DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // ebp
  unsigned int v6; // r10d
  int v8; // edi
  PCHAR v9; // rax
  const WCHAR *v10; // rbx
  CHAR *v11; // rsi
  int v12; // ecx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  const WCHAR *v16; // r10
  unsigned int v17; // edx
  int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  CHAR v21; // cl
  _BYTE *v22; // rax
  int v23; // r8d
  int v24; // edx

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8(
               (PCHAR)UnicodeStringSource,
               UnicodeStringByteCount,
               UTF8StringActualByteCount,
               UnicodeStringSource,
               UnicodeStringByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v9 = UTF8StringDestination;
  v10 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  v11 = &UTF8StringDestination[UTF8StringMaxByteCount];
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( UnicodeStringSource >= v10 )
      {
        if ( !v6 )
          goto LABEL_19;
        break;
      }
      if ( v6 )
      {
        v24 = *UnicodeStringSource;
        if ( (unsigned int)(v24 - 56320) <= 0x3FF )
        {
          v6 = v24 + (v6 << 10) - 56613888;
          ++UnicodeStringSource;
        }
        break;
      }
      v6 = *UnicodeStringSource++;
LABEL_8:
      ;
    }
    while ( v6 - 55296 <= 0x3FF );
    if ( v6 - 55296 <= 0x7FF )
    {
      v5 = 263;
      v6 = 65533;
    }
    v12 = 1;
    if ( v6 > 0x7F )
    {
      if ( v6 > 0x7FF )
      {
        if ( v6 > 0xFFFF )
          v12 = 2;
        ++v12;
      }
      ++v12;
    }
    if ( v9 > &v11[-v12] )
    {
      *UTF8StringActualByteCount = (_DWORD)v9 - v8;
      return -1073741789;
    }
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        *v9++ = (v6 >> 6) | 0xC0;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
      else
      {
        if ( v6 > 0xFFFF )
        {
          *v9++ = (v6 >> 18) | 0xF0;
          v21 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v21 = (v6 >> 12) | 0xE0;
        }
        *v9 = v21;
        v22 = v9 + 1;
        *v22 = (v6 >> 6) & 0x3F | 0x80;
        v9 = v22 + 1;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
    }
    *v9++ = v6;
    v13 = v10 - UnicodeStringSource;
    v14 = v11 - v9;
    if ( v13 <= 0xD )
      break;
    if ( v14 < v13 )
      v13 = v11 - v9;
    v16 = &UnicodeStringSource[v13 - 5];
    if ( UnicodeStringSource < v16 )
    {
      while ( 1 )
      {
        v17 = *UnicodeStringSource++;
        if ( v17 <= 0x7F )
        {
          *v9++ = v17;
          if ( ((unsigned __int8)UnicodeStringSource & 2) != 0 )
          {
            v17 = *UnicodeStringSource++;
            if ( v17 > 0x7F )
              goto LABEL_31;
            *v9++ = v17;
          }
          if ( UnicodeStringSource >= v16 )
            break;
          while ( 1 )
          {
            v18 = *((_DWORD *)UnicodeStringSource + 1);
            v17 = *(_DWORD *)UnicodeStringSource;
            if ( ((*(_DWORD *)UnicodeStringSource | v18) & 0xFF80FF80) != 0 )
              break;
            *v9 = v17;
            UnicodeStringSource += 4;
            v9[2] = v18;
            v9[1] = BYTE2(v17);
            v9[3] = BYTE2(v18);
            v9 += 4;
            if ( UnicodeStringSource >= v16 )
              goto LABEL_30;
          }
          v17 = (unsigned __int16)v17;
          ++UnicodeStringSource;
          if ( (unsigned __int16)v17 <= 0x7Fu )
          {
            *v9++ = v17;
            goto LABEL_34;
          }
        }
LABEL_31:
        if ( v17 > 0x7FF )
        {
          if ( v17 - 55296 <= 0x7FF )
          {
            if ( v17 > 0xDBFF )
            {
              --UnicodeStringSource;
              break;
            }
            v23 = *UnicodeStringSource++;
            if ( (unsigned int)(v23 - 56320) > 0x3FF )
            {
              UnicodeStringSource -= 2;
              v6 = 0;
              goto LABEL_5;
            }
            v17 = v23 + (v17 << 10) - 56613888;
            *v9++ = (v17 >> 18) | 0xF0;
            v20 = v17 & 0x3F000 | 0x80000;
          }
          else
          {
            v20 = v17 | 0xE0000;
          }
          --v16;
          *v9++ = v20 >> 12;
          v19 = v17 & 0xFC0 | 0x2000;
        }
        else
        {
          v19 = v17 | 0x3000;
        }
        *v9 = v19 >> 6;
        --v16;
        v9[1] = v17 & 0x3F | 0x80;
        v9 += 2;
LABEL_34:
        if ( UnicodeStringSource >= v16 )
        {
          v6 = 0;
          goto LABEL_5;
        }
      }
    }
LABEL_30:
    v6 = 0;
  }
  if ( v14 < v13 )
    goto LABEL_30;
  while ( UnicodeStringSource < v10 )
  {
    v6 = *UnicodeStringSource++;
    if ( v6 > 0x7F )
      goto LABEL_8;
    *v9++ = v6;
  }
LABEL_19:
  *UTF8StringActualByteCount = (_DWORD)v9 - v8;
  return v5;
}
