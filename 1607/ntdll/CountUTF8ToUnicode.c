/*
 * XREFs of CountUTF8ToUnicode @ 0x180061DB4
 * Callers:
 *     RtlUTF8ToUnicodeN @ 0x1800619F0 (RtlUTF8ToUnicodeN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUTF8ToUnicode(char *a1, int a2, _DWORD *a3)
{
  int v3; // r9d
  char *v4; // rbx
  unsigned int v5; // r11d
  unsigned int v7; // r9d
  __int64 result; // rax
  unsigned __int64 v9; // r10
  unsigned int v10; // r8d
  char v11; // r9
  char v12; // r8
  int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  char v16; // r8

  v3 = 0;
  v4 = &a1[a2];
  v5 = 0;
  while ( a1 < v4 )
  {
    if ( v3 )
    {
      v12 = *a1++;
      if ( (v12 & 0xC0) != 0x80 )
      {
        --a1;
        a2 += v3 >> 30;
LABEL_27:
        v5 = 263;
        ++a2;
        goto LABEL_28;
      }
      v3 = (v3 << 6) | v12 & 0x3F;
      if ( (v3 & 0x20000000) != 0 )
      {
LABEL_6:
        if ( (unsigned __int64)(v4 - a1) <= 0xD )
        {
          while ( a1 < v4 )
          {
            v7 = *a1++;
            if ( v7 > 0x7F )
              goto LABEL_5;
          }
          v3 = 0;
          break;
        }
        v9 = (unsigned __int64)(v4 - 7);
        while ( (unsigned __int64)a1 < v9 )
        {
          v10 = *a1++;
          if ( v10 <= 0x7F )
          {
            if ( ((unsigned __int8)a1 & 1) == 0 || (v10 = *a1, ++a1, v10 <= 0x7F) )
            {
              if ( ((unsigned __int8)a1 & 2) == 0 )
                goto LABEL_21;
              LOWORD(v10) = *(_WORD *)a1;
              if ( (*(_WORD *)a1 & 0x8080) == 0 )
              {
                a1 += 2;
LABEL_21:
                while ( (unsigned __int64)a1 < v9 )
                {
                  v10 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_41;
                  a1 += 8;
                  if ( (unsigned __int64)a1 >= v9 )
                    break;
                  v10 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_41;
                  a1 += 8;
                }
                break;
              }
LABEL_41:
              ++a1;
              if ( (unsigned __int8)v10 <= 0x7Fu )
                continue;
            }
          }
          v11 = *a1++;
          if ( (v10 & 0x40) == 0 || (v11 & 0xC0) != 0x80 )
          {
LABEL_56:
            a1 -= 2;
            break;
          }
          if ( (v10 & 0x20) != 0 )
          {
            if ( (v10 & 0x10) != 0 )
            {
              if ( ((v11 & 0x3F | ((v10 & 0xF) << 6)) >> 4) - 1 > 0xF )
                goto LABEL_56;
              v16 = *a1 & 0xC0;
              if ( v16 != (char)0x80 || (a1[1] & 0xC0) != v16 )
                goto LABEL_56;
              a1 += 2;
            }
            else
            {
              v13 = v11 & 0x20 | ((v10 & 0xF) << 6) & 0x3E0;
              if ( !v13 || v13 == 864 || (*a1 & 0xC0) != 0x80 )
                goto LABEL_56;
              ++a1;
            }
            --a2;
          }
          else if ( (v10 & 0x1E) == 0 )
          {
            goto LABEL_56;
          }
          --a2;
        }
LABEL_28:
        v3 = 0;
      }
      else if ( (v3 & 0x10000000) != 0 )
      {
        if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
          goto LABEL_27;
      }
      else if ( (v3 & 0x3E0) == 0 || (v3 & 0x3E0) == 0x360 )
      {
        goto LABEL_27;
      }
    }
    else
    {
      v7 = *a1++;
LABEL_5:
      if ( v7 <= 0x7F )
        goto LABEL_6;
      --a2;
      if ( (v7 & 0x40) == 0 )
        goto LABEL_27;
      if ( (v7 & 0x20) != 0 )
      {
        if ( (v7 & 0x10) != 0 )
        {
          v15 = v7 & 0xF;
          if ( v15 > 4 )
            goto LABEL_27;
          v3 = v15 | 0x504D0C00;
        }
        else
        {
          v3 = v7 & 0xF | 0x48228000;
        }
        --a2;
      }
      else
      {
        v14 = v7 & 0x1F;
        if ( v14 <= 1 )
          goto LABEL_27;
        v3 = v14 | 0x800000;
      }
    }
  }
  if ( v3 )
  {
    a2 += (v3 >> 30) + 1;
    v5 = 263;
  }
  result = v5;
  *a3 = 2 * a2;
  return result;
}
