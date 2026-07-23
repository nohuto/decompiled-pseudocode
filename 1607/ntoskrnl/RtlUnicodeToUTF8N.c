/*
 * XREFs of RtlUnicodeToUTF8N @ 0x140573F04
 * Callers:
 *     <none>
 * Callees:
 *     CountUnicodeToUTF8 @ 0x140147394 (CountUnicodeToUTF8.c)
 */

NTSTATUS __stdcall RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // esi
  __int64 v6; // r11
  unsigned int v7; // r10d
  int v9; // edi
  PCHAR v10; // rdx
  CHAR *v11; // r11
  const WCHAR *v12; // rbp
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  const WCHAR *i; // r10
  unsigned int v18; // ecx
  int v19; // r8d
  int v20; // ecx
  CHAR v21; // al
  CHAR v22; // al
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // r8d

  v5 = 0;
  v6 = UTF8StringMaxByteCount;
  v7 = 0;
  v9 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8((char *)UnicodeStringSource, UnicodeStringByteCount, UTF8StringActualByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v10 = UTF8StringDestination;
  v11 = &UTF8StringDestination[v6];
  v12 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  while ( 1 )
  {
    do
    {
      if ( UnicodeStringSource >= v12 )
      {
        if ( !v7 )
          goto LABEL_19;
        break;
      }
      if ( v7 )
      {
        v20 = *UnicodeStringSource;
        if ( (unsigned int)(v20 - 56320) <= 0x3FF )
        {
          v7 = v20 + (v7 << 10) - 56613888;
          ++UnicodeStringSource;
        }
        break;
      }
      v7 = *UnicodeStringSource++;
LABEL_8:
      ;
    }
    while ( v7 - 55296 <= 0x3FF );
    if ( v7 - 55296 <= 0x7FF )
    {
      v5 = 263;
      v7 = 65533;
    }
    v13 = 1;
    if ( v7 > 0x7F )
    {
      if ( v7 > 0x7FF )
      {
        if ( v7 > 0xFFFF )
          v13 = 2;
        ++v13;
      }
      ++v13;
    }
    if ( v10 > &v11[-v13] )
    {
      v5 = -1073741789;
      goto LABEL_19;
    }
    if ( v7 > 0x7F )
    {
      if ( v7 > 0x7FF )
      {
        if ( v7 > 0xFFFF )
        {
          *v10++ = (v7 >> 18) | 0xF0;
          v22 = (v7 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v22 = (v7 >> 12) | 0xE0;
        }
        *v10++ = v22;
        v21 = (v7 >> 6) & 0x3F | 0x80;
      }
      else
      {
        v21 = (v7 >> 6) | 0xC0;
      }
      *v10++ = v21;
      LOBYTE(v7) = v7 & 0x3F | 0x80;
    }
    *v10++ = v7;
    v14 = v12 - UnicodeStringSource;
    v15 = v11 - v10;
    if ( v14 > 0xD )
    {
      if ( v15 < v14 )
        v14 = v11 - v10;
      for ( i = &UnicodeStringSource[v14 - 5]; ; --i )
      {
LABEL_28:
        while ( 2 )
        {
          if ( UnicodeStringSource >= i )
            goto LABEL_29;
          v18 = *UnicodeStringSource++;
          if ( v18 <= 0x7F )
          {
            *v10++ = v18;
            if ( ((unsigned __int8)UnicodeStringSource & 2) != 0 )
            {
              v18 = *UnicodeStringSource++;
              if ( v18 > 0x7F )
                break;
              *v10++ = v18;
            }
            if ( UnicodeStringSource >= i )
              goto LABEL_29;
            while ( 1 )
            {
              v19 = *((_DWORD *)UnicodeStringSource + 1);
              v18 = *(_DWORD *)UnicodeStringSource;
              if ( ((*(_DWORD *)UnicodeStringSource | v19) & 0xFF80FF80) != 0 )
                break;
              *v10 = v18;
              UnicodeStringSource += 4;
              v10[2] = v19;
              v10[1] = BYTE2(v18);
              v10[3] = BYTE2(v19);
              v10 += 4;
              if ( UnicodeStringSource >= i )
                goto LABEL_28;
            }
            v18 = (unsigned __int16)v18;
            ++UnicodeStringSource;
            if ( (unsigned __int16)v18 <= 0x7Fu )
            {
              *v10++ = v18;
              continue;
            }
          }
          break;
        }
        if ( v18 > 0x7FF )
        {
          if ( v18 - 55296 <= 0x7FF )
          {
            if ( v18 > 0xDBFF )
            {
              --UnicodeStringSource;
              goto LABEL_29;
            }
            v25 = *UnicodeStringSource++;
            if ( (unsigned int)(v25 - 56320) > 0x3FF )
            {
              UnicodeStringSource -= 2;
              goto LABEL_29;
            }
            v18 = v25 + (v18 << 10) - 56613888;
            *v10++ = (v18 >> 18) | 0xF0;
            v24 = v18 & 0x3F000 | 0x80000;
          }
          else
          {
            v24 = v18 | 0xE0000;
          }
          --i;
          *v10++ = v24 >> 12;
          v23 = v18 & 0xFC0 | 0x2000;
        }
        else
        {
          v23 = v18 | 0x3000;
        }
        *v10 = v23 >> 6;
        v10[1] = v18 & 0x3F | 0x80;
        v10 += 2;
      }
    }
    if ( v15 >= v14 )
      break;
LABEL_29:
    v7 = 0;
  }
  while ( UnicodeStringSource < v12 )
  {
    v7 = *UnicodeStringSource++;
    if ( v7 > 0x7F )
      goto LABEL_8;
    *v10++ = v7;
  }
LABEL_19:
  result = v5;
  *UTF8StringActualByteCount = (_DWORD)v10 - v9;
  return result;
}
