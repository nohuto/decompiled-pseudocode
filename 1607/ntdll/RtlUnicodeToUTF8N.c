/*
 * XREFs of RtlUnicodeToUTF8N @ 0x18005FF40
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
  NTSTATUS v5; // esi
  __int64 v6; // r11
  unsigned int v7; // r10d
  int v9; // ebx
  PCHAR v10; // rdx
  CHAR *v11; // r11
  const WCHAR *v12; // rbp
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  const WCHAR *v17; // r10
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // eax
  CHAR v22; // al
  CHAR v23; // al
  int v24; // r8d
  int v25; // ecx

  v5 = 0;
  v6 = UTF8StringMaxByteCount;
  v7 = 0;
  v9 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( UTF8StringDestination )
  {
    if ( (UnicodeStringByteCount & 1) == 0 )
    {
      v10 = UTF8StringDestination;
      v11 = &UTF8StringDestination[v6];
      v12 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
LABEL_5:
      while ( UnicodeStringSource < v12 )
      {
        if ( v7 )
        {
          v25 = *UnicodeStringSource;
          if ( (unsigned int)(v25 - 56320) <= 0x3FF )
          {
            v7 = v25 + (v7 << 10) - 56613888;
            ++UnicodeStringSource;
          }
          goto LABEL_9;
        }
        v7 = *UnicodeStringSource++;
LABEL_8:
        if ( v7 - 55296 > 0x3FF )
        {
LABEL_9:
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
            result = -1073741789;
LABEL_20:
            *UTF8StringActualByteCount = (_DWORD)v10 - v9;
            return result;
          }
          if ( v7 > 0x7F )
          {
            if ( v7 > 0x7FF )
            {
              if ( v7 > 0xFFFF )
              {
                *v10++ = (v7 >> 18) | 0xF0;
                v23 = (v7 >> 12) & 0x3F | 0x80;
              }
              else
              {
                v23 = (v7 >> 12) | 0xE0;
              }
              *v10++ = v23;
              v22 = (v7 >> 6) & 0x3F | 0x80;
            }
            else
            {
              v22 = (v7 >> 6) | 0xC0;
            }
            *v10++ = v22;
            LOBYTE(v7) = v7 & 0x3F | 0x80;
          }
          *v10++ = v7;
          v14 = v12 - UnicodeStringSource;
          v15 = v11 - v10;
          if ( v14 <= 0xD )
          {
            if ( v15 < v14 )
              goto LABEL_31;
            while ( UnicodeStringSource < v12 )
            {
              v7 = *UnicodeStringSource++;
              if ( v7 > 0x7F )
                goto LABEL_8;
              *v10++ = v7;
            }
LABEL_19:
            result = v5;
            goto LABEL_20;
          }
          if ( v15 < v14 )
            v14 = v11 - v10;
          v17 = &UnicodeStringSource[v14 - 5];
          if ( UnicodeStringSource < v17 )
          {
            while ( 1 )
            {
              v18 = *UnicodeStringSource++;
              if ( v18 <= 0x7F )
              {
                *v10++ = v18;
                if ( ((unsigned __int8)UnicodeStringSource & 2) != 0 )
                {
                  v18 = *UnicodeStringSource++;
                  if ( v18 > 0x7F )
                    goto LABEL_32;
                  *v10++ = v18;
                }
                if ( UnicodeStringSource >= v17 )
                  break;
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
                  if ( UnicodeStringSource >= v17 )
                    goto LABEL_31;
                }
                v18 = (unsigned __int16)v18;
                ++UnicodeStringSource;
                if ( (unsigned __int16)v18 <= 0x7Fu )
                {
                  *v10++ = v18;
                  goto LABEL_37;
                }
              }
LABEL_32:
              if ( v18 <= 0x7FF )
              {
                v21 = v18 | 0x3000;
              }
              else
              {
                if ( v18 - 55296 <= 0x7FF )
                {
                  if ( v18 > 0xDBFF )
                  {
                    --UnicodeStringSource;
                    break;
                  }
                  v24 = *UnicodeStringSource++;
                  if ( (unsigned int)(v24 - 56320) > 0x3FF )
                  {
                    UnicodeStringSource -= 2;
                    v7 = 0;
                    goto LABEL_5;
                  }
                  v18 = v24 + (v18 << 10) - 56613888;
                  *v10++ = (v18 >> 18) | 0xF0;
                  v20 = v18 & 0x3F000 | 0x80000;
                }
                else
                {
                  v20 = v18 | 0xE0000;
                }
                --v17;
                *v10++ = v20 >> 12;
                v21 = v18 & 0xFC0 | 0x2000;
              }
              *v10 = v21 >> 6;
              --v17;
              v10[1] = v18 & 0x3F | 0x80;
              v10 += 2;
LABEL_37:
              if ( UnicodeStringSource >= v17 )
              {
                v7 = 0;
                goto LABEL_5;
              }
            }
          }
LABEL_31:
          v7 = 0;
        }
      }
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_9;
    }
    return -1073741581;
  }
  else if ( UTF8StringActualByteCount )
  {
    return CountUnicodeToUTF8(
             (PCHAR)UnicodeStringSource,
             UnicodeStringByteCount,
             UTF8StringActualByteCount,
             UnicodeStringSource,
             UnicodeStringByteCount);
  }
  else
  {
    return -1073741811;
  }
}
