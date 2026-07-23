/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x18005C940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // ebp
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  PWSTR v10; // r10
  const CHAR *v11; // r11
  WCHAR *v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  WCHAR *v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // edx
  char v19; // cl
  unsigned int v20; // edx
  char v21; // dl
  int v22; // edx
  unsigned int v23; // ecx
  WCHAR v24; // dx
  unsigned int v25; // edx
  bool v26; // zf
  CHAR v27; // cl
  unsigned int v28; // edx
  int v29; // edx
  CHAR v30; // cl

  v5 = 0;
  v7 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v8 = 0;
  v10 = UnicodeStringDestination;
  v11 = &UTF8StringSource[UTF8StringByteCount];
  v12 = &UnicodeStringDestination[v7];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( UTF8StringSource >= v11 )
        {
          if ( v8 )
          {
            v5 = 263;
            if ( v10 < v12 )
              *v10++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( UnicodeStringActualByteCount )
            *UnicodeStringActualByteCount = 2 * (v10 - UnicodeStringDestination);
          return v5;
        }
        if ( !v8 )
        {
          v8 = *UTF8StringSource++;
          if ( v8 <= 0x7F )
          {
LABEL_6:
            if ( v10 >= v12 )
              goto LABEL_76;
            *v10++ = v8;
            v13 = v11 - UTF8StringSource;
            v14 = v12 - v10;
            if ( (unsigned __int64)(v11 - UTF8StringSource) <= 0xD )
            {
              if ( v14 < v13 )
                goto LABEL_46;
              while ( UTF8StringSource < v11 )
              {
                v8 = *UTF8StringSource++;
                if ( v8 > 0x7F )
                  goto LABEL_35;
                *v10++ = v8;
              }
              goto LABEL_13;
            }
            if ( v13 < v14 )
              v14 = v11 - UTF8StringSource;
            v16 = &v10[v14 - 7];
            if ( v10 >= v16 )
              goto LABEL_46;
            while ( 1 )
            {
              v17 = *UTF8StringSource++;
              if ( v17 > 0x7F )
                goto LABEL_39;
              *v10++ = v17;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v17 = *UTF8StringSource++;
                if ( v17 > 0x7F )
                  goto LABEL_39;
                *v10++ = v17;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_26;
              v17 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v17 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v10 = v17 & 0x7F;
                v10[1] = (v17 >> 8) & 0x7F;
                v10 += 2;
LABEL_26:
                while ( v10 < v16 )
                {
                  v18 = *((_DWORD *)UTF8StringSource + 1);
                  v17 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v18) & 0x80808080) != 0 )
                    goto LABEL_47;
                  UTF8StringSource += 8;
                  *v10 = v17 & 0x7F;
                  v10[1] = (v17 >> 8) & 0x7F;
                  v10[2] = BYTE2(v17) & 0x7F;
                  v10[3] = HIBYTE(v17) & 0x7F;
                  v10[4] = v18 & 0x7F;
                  v10[5] = (v18 >> 8) & 0x7F;
                  v10[6] = BYTE2(v18) & 0x7F;
                  v10[7] = HIBYTE(v18) & 0x7F;
                  v10 += 8;
                }
LABEL_46:
                v8 = 0;
                goto LABEL_3;
              }
LABEL_47:
              ++UTF8StringSource;
              if ( (unsigned __int8)v17 <= 0x7Fu )
              {
                *v10++ = (unsigned __int8)v17;
                goto LABEL_45;
              }
LABEL_39:
              v21 = *UTF8StringSource++;
              if ( (v17 & 0x40) == 0 || (v21 & 0xC0) != 0x80 )
              {
LABEL_61:
                UTF8StringSource -= 2;
                goto LABEL_46;
              }
              v22 = v21 & 0x3F;
              if ( (v17 & 0x20) != 0 )
              {
                v25 = ((v17 & 0xF) << 6) | v22;
                v26 = (v17 & 0x10) == 0;
                v27 = *UTF8StringSource;
                if ( v26 )
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v27 & 0xC0) != 0x80 )
                    goto LABEL_61;
                  v24 = v27 & 0x3F | ((_WORD)v25 << 6);
                  ++UTF8StringSource;
                  --v16;
                }
                else
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_61;
                  if ( (v27 & 0xC0) != 0x80 )
                    goto LABEL_61;
                  v29 = v27 & 0x3F | (v25 << 6);
                  v30 = UTF8StringSource[1];
                  if ( (v30 & 0xC0) != 0x80 )
                    goto LABEL_61;
                  UTF8StringSource += 2;
                  *v10++ = (((v30 & 0x3F | (unsigned int)(v29 << 6)) >> 10) & 0x7FF) - 10304;
                  v24 = (v30 & 0x3F | ((_WORD)v29 << 6) & 0x3FF) - 9216;
                  --v16;
                }
              }
              else
              {
                v23 = v17 & 0x1F;
                if ( v23 <= 1 )
                  goto LABEL_61;
                v24 = ((_WORD)v23 << 6) | v22;
              }
              *v10++ = v24;
              --v16;
LABEL_45:
              if ( v10 >= v16 )
                goto LABEL_46;
            }
          }
LABEL_35:
          if ( (v8 & 0x40) != 0 )
          {
            if ( (v8 & 0x20) != 0 )
            {
              if ( (v8 & 0x10) == 0 )
              {
                v8 = v8 & 0xF | 0x48228000;
                continue;
              }
              v28 = v8 & 0xF;
              if ( v28 <= 4 )
              {
                v8 = v28 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v20 = v8 & 0x1F;
              if ( v20 > 1 )
              {
                v8 = v20 | 0x800000;
                continue;
              }
            }
          }
LABEL_63:
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        break;
      }
      v19 = *UTF8StringSource++;
      if ( (v19 & 0xC0) != 0x80 )
      {
        --UTF8StringSource;
        goto LABEL_63;
      }
      v8 = (v8 << 6) | v19 & 0x3F;
      if ( (v8 & 0x20000000) == 0 )
      {
        if ( (v8 & 0x10000000) != 0 )
        {
          if ( (v8 & 0x800000) != 0 || (v8 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v8 & 0x3E0) != 0 )
        {
          if ( (v8 & 0x3E0) != 0x360 )
            continue;
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        goto LABEL_63;
      }
      break;
    }
    if ( (v8 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( v10 < v12 )
    {
      *v10++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_76:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = 2 * (v10 - UnicodeStringDestination);
    return -1073741789;
  }
  else if ( UnicodeStringActualByteCount )
  {
    return CountUTF8ToUnicode(
             (PWSTR)UTF8StringSource,
             UTF8StringByteCount,
             UnicodeStringActualByteCount,
             UTF8StringSource,
             UTF8StringByteCount);
  }
  else
  {
    return -1073741811;
  }
}
