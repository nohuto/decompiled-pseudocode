/*
 * XREFs of RtlUnicodeToUTF8N @ 0x18005FF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToUTF8N(_BYTE *a1, unsigned int a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v6; // r11
  unsigned int v7; // r10d
  int v9; // ebx
  _BYTE *v10; // rdx
  _BYTE *v11; // r11
  unsigned int *v12; // rbp
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 result; // rax
  unsigned int *v17; // r10
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // eax
  char v22; // al
  char v23; // al
  int v24; // r8d
  int v25; // ecx

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v9 = (int)a1;
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
    if ( (a5 & 1) == 0 )
    {
      v10 = a1;
      v11 = &a1[v6];
      v12 = (unsigned int *)((char *)a4 + 2 * ((unsigned __int64)a5 >> 1));
LABEL_5:
      while ( a4 < v12 )
      {
        if ( v7 )
        {
          v25 = *(unsigned __int16 *)a4;
          if ( (unsigned int)(v25 - 56320) <= 0x3FF )
          {
            v7 = v25 + (v7 << 10) - 56613888;
            a4 = (unsigned int *)((char *)a4 + 2);
          }
          goto LABEL_9;
        }
        v7 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
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
            result = 3221225507LL;
LABEL_20:
            *a3 = (_DWORD)v10 - v9;
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
          v14 = ((char *)v12 - (char *)a4) >> 1;
          v15 = v11 - v10;
          if ( v14 <= 0xD )
          {
            if ( v15 < v14 )
              goto LABEL_31;
            while ( a4 < v12 )
            {
              v7 = *(unsigned __int16 *)a4;
              a4 = (unsigned int *)((char *)a4 + 2);
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
          v17 = (unsigned int *)((char *)a4 + 2 * v14 - 10);
          if ( a4 < v17 )
          {
            while ( 1 )
            {
              v18 = *(unsigned __int16 *)a4;
              a4 = (unsigned int *)((char *)a4 + 2);
              if ( v18 <= 0x7F )
              {
                *v10++ = v18;
                if ( ((unsigned __int8)a4 & 2) != 0 )
                {
                  v18 = *(unsigned __int16 *)a4;
                  a4 = (unsigned int *)((char *)a4 + 2);
                  if ( v18 > 0x7F )
                    goto LABEL_32;
                  *v10++ = v18;
                }
                if ( a4 >= v17 )
                  break;
                while ( 1 )
                {
                  v19 = a4[1];
                  v18 = *a4;
                  if ( ((*a4 | v19) & 0xFF80FF80) != 0 )
                    break;
                  *v10 = v18;
                  a4 += 2;
                  v10[2] = v19;
                  v10[1] = BYTE2(v18);
                  v10[3] = BYTE2(v19);
                  v10 += 4;
                  if ( a4 >= v17 )
                    goto LABEL_31;
                }
                v18 = (unsigned __int16)v18;
                a4 = (unsigned int *)((char *)a4 + 2);
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
                    a4 = (unsigned int *)((char *)a4 - 2);
                    break;
                  }
                  v24 = *(unsigned __int16 *)a4;
                  a4 = (unsigned int *)((char *)a4 + 2);
                  if ( (unsigned int)(v24 - 56320) > 0x3FF )
                  {
                    --a4;
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
                v17 = (unsigned int *)((char *)v17 - 2);
                *v10++ = v20 >> 12;
                v21 = v18 & 0xFC0 | 0x2000;
              }
              *v10 = v21 >> 6;
              v17 = (unsigned int *)((char *)v17 - 2);
              v10[1] = v18 & 0x3F | 0x80;
              v10 += 2;
LABEL_37:
              if ( a4 >= v17 )
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
    return 3221225715LL;
  }
  else if ( a3 )
  {
    return CountUnicodeToUTF8(a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
