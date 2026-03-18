/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x1406CFA0C
 * Callers:
 *     VerifierRtlUTF8ToUnicodeN @ 0x140752DAC (VerifierRtlUTF8ToUnicodeN.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x14024AD50 (CountUTF8ToUnicode.c)
 */

NTSTATUS __stdcall RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // r11d
  const CHAR *v6; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  PWSTR v11; // r10
  WCHAR *v12; // rbp
  unsigned int v14; // edx
  char v15; // cl
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  WCHAR *i; // r8
  unsigned int v20; // ecx
  unsigned int v21; // edx
  char v22; // dl
  int v23; // edx
  unsigned int v24; // edx
  bool v25; // zf
  CHAR v26; // cl
  int v27; // edx
  unsigned int v28; // edx
  WCHAR v29; // dx
  unsigned int v30; // ecx

  v5 = 0;
  v6 = &UTF8StringSource[UTF8StringByteCount];
  v7 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v8 = 0;
  v11 = UnicodeStringDestination;
  v12 = &UnicodeStringDestination[v7];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( !UnicodeStringDestination )
  {
    if ( UnicodeStringActualByteCount )
      return CountUTF8ToUnicode((char *)UTF8StringSource, UTF8StringByteCount, UnicodeStringActualByteCount);
    else
      return -1073741811;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_7:
      if ( UTF8StringSource >= v6 )
        goto LABEL_75;
      if ( !v8 )
      {
        v8 = *UTF8StringSource++;
        if ( v8 <= 0x7F )
          goto LABEL_28;
LABEL_10:
        if ( (v8 & 0x40) != 0 )
        {
          if ( (v8 & 0x20) != 0 )
          {
            if ( (v8 & 0x10) == 0 )
            {
              v8 = v8 & 0xF | 0x48228000;
              continue;
            }
            v14 = v8 & 0xF;
            if ( v14 <= 4 )
            {
              v8 = v14 | 0x504D0C00;
              continue;
            }
          }
          else
          {
            v18 = v8 & 0x1F;
            if ( v18 > 1 )
            {
              v8 = v18 | 0x800000;
              continue;
            }
          }
        }
        goto LABEL_35;
      }
      v15 = *UTF8StringSource++;
      if ( (v15 & 0xC0) != 0x80 )
      {
        --UTF8StringSource;
LABEL_35:
        v5 = 263;
        LOWORD(v8) = -3;
        goto LABEL_28;
      }
      v8 = (v8 << 6) | v15 & 0x3F;
      if ( (v8 & 0x20000000) != 0 )
        break;
      if ( (v8 & 0x10000000) != 0 )
      {
        if ( (v8 & 0x800000) == 0 && (v8 & 0x1F0) - 16 > 0xF0 )
          goto LABEL_35;
      }
      else if ( (v8 & 0x3E0) == 0 || (v8 & 0x3E0) == 0x360 )
      {
        goto LABEL_35;
      }
    }
    if ( (v8 & 0x101F0000) > 0x10000000 )
    {
      if ( v11 >= v12 )
        break;
      *v11++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
    }
LABEL_28:
    if ( v11 >= v12 )
      break;
    *v11++ = v8;
    v16 = v6 - UTF8StringSource;
    v17 = v12 - v11;
    if ( (unsigned __int64)(v6 - UTF8StringSource) > 0xD )
    {
      if ( v16 < v17 )
        v17 = v6 - UTF8StringSource;
      for ( i = &v11[v17 - 7]; ; --i )
      {
        while ( 2 )
        {
          if ( v11 >= i )
          {
LABEL_73:
            v8 = 0;
            goto LABEL_7;
          }
          v20 = *UTF8StringSource++;
          if ( v20 <= 0x7F )
          {
            *v11++ = v20;
            if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
            {
              v20 = *UTF8StringSource++;
              if ( v20 > 0x7F )
                break;
              *v11++ = v20;
            }
            if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
              goto LABEL_49;
            v20 = *(unsigned __int16 *)UTF8StringSource;
            if ( (v20 & 0x8080) == 0 )
            {
              UTF8StringSource += 2;
              *v11 = v20 & 0x7F;
              v11[1] = (v20 >> 8) & 0x7F;
              v11 += 2;
LABEL_49:
              while ( v11 < i )
              {
                v21 = *((_DWORD *)UTF8StringSource + 1);
                v20 = *(_DWORD *)UTF8StringSource;
                if ( ((*(_DWORD *)UTF8StringSource | v21) & 0x80808080) != 0 )
                  goto LABEL_52;
                UTF8StringSource += 8;
                *v11 = v20 & 0x7F;
                v11[1] = (v20 >> 8) & 0x7F;
                v11[2] = BYTE2(v20) & 0x7F;
                v11[3] = HIBYTE(v20) & 0x7F;
                v11[4] = v21 & 0x7F;
                v11[5] = (v21 >> 8) & 0x7F;
                v11[6] = BYTE2(v21) & 0x7F;
                v11[7] = HIBYTE(v21) & 0x7F;
                v11 += 8;
              }
              goto LABEL_73;
            }
LABEL_52:
            ++UTF8StringSource;
            if ( (unsigned __int8)v20 <= 0x7Fu )
            {
              *v11++ = (unsigned __int8)v20;
              continue;
            }
          }
          break;
        }
        v22 = *UTF8StringSource++;
        if ( (v20 & 0x40) == 0 || (v22 & 0xC0) != 0x80 )
        {
LABEL_72:
          UTF8StringSource -= 2;
          goto LABEL_73;
        }
        v23 = v22 & 0x3F;
        if ( (v20 & 0x20) != 0 )
        {
          v24 = ((v20 & 0xF) << 6) | v23;
          v25 = (v20 & 0x10) == 0;
          v26 = *UTF8StringSource;
          if ( v25 )
          {
            if ( (v24 & 0x3E0) == 0 || (v24 & 0x3E0) == 0x360 || (v26 & 0xC0) != 0x80 )
              goto LABEL_72;
            ++UTF8StringSource;
            v29 = v26 & 0x3F | ((_WORD)v24 << 6);
          }
          else
          {
            if ( (v24 >> 4) - 1 > 0xF )
              goto LABEL_72;
            if ( (v26 & 0xC0) != 0x80 )
              goto LABEL_72;
            v27 = v26 & 0x3F | (v24 << 6);
            if ( (UTF8StringSource[1] & 0xC0) != 0x80 )
              goto LABEL_72;
            v28 = UTF8StringSource[1] & 0x3F | (v27 << 6);
            UTF8StringSource += 2;
            *v11++ = ((v28 >> 10) & 0x7FF) - 10304;
            v29 = (v28 & 0x3FF) - 9216;
          }
          --i;
        }
        else
        {
          v30 = v20 & 0x1F;
          if ( v30 <= 1 )
            goto LABEL_72;
          v29 = ((_WORD)v30 << 6) | v23;
        }
        *v11++ = v29;
      }
    }
    if ( v17 >= v16 )
    {
      while ( UTF8StringSource < v6 )
      {
        v8 = *UTF8StringSource++;
        if ( v8 > 0x7F )
          goto LABEL_10;
        *v11++ = v8;
      }
      v8 = 0;
LABEL_75:
      if ( v8 )
      {
        v5 = 263;
        if ( v11 < v12 )
          *v11++ = -3;
        else
          v5 = -1073741789;
      }
      if ( UnicodeStringActualByteCount )
        *UnicodeStringActualByteCount = 2 * (v11 - UnicodeStringDestination);
      return v5;
    }
    v8 = 0;
  }
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v11 - UnicodeStringDestination);
  return -1073741789;
}
