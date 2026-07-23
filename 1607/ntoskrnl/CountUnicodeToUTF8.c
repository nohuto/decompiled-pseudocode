/*
 * XREFs of CountUnicodeToUTF8 @ 0x140147394
 * Callers:
 *     RtlUnicodeToUTF8N @ 0x140573F04 (RtlUnicodeToUTF8N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(char *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned __int64 v4; // rax
  unsigned int v6; // edx
  char *v7; // rbx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rax
  __int64 result; // rax
  char *v11; // r10
  unsigned int v12; // r8d
  int v13; // r9d
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  int v17; // r8d

  v3 = 0;
  v4 = (unsigned __int64)a2 >> 1;
  v6 = a2 >> 1;
  v7 = &a1[2 * v4];
LABEL_2:
  v8 = 0;
  while ( a1 < v7 )
  {
    if ( v8 )
    {
      ++v6;
      if ( (unsigned int)*(unsigned __int16 *)a1 - 56320 <= 0x3FF )
      {
        v8 = 65533;
        a1 += 2;
      }
LABEL_7:
      if ( v8 - 55296 <= 0x7FF )
      {
        v3 = 263;
        v8 = 65533;
      }
      if ( v8 > 0x7F )
      {
        if ( v8 > 0x7FF )
          ++v6;
        ++v6;
      }
      v9 = (v7 - a1) >> 1;
      if ( v9 <= 0xD )
      {
        while ( a1 < v7 )
        {
          v8 = *(unsigned __int16 *)a1;
          a1 += 2;
          if ( v8 > 0x7F )
            goto LABEL_6;
        }
        goto LABEL_14;
      }
      v11 = &a1[2 * v9 - 14];
LABEL_65:
      if ( a1 >= v11 )
        goto LABEL_2;
      v12 = *(unsigned __int16 *)a1;
      a1 += 2;
      if ( v12 > 0x7F )
      {
        if ( v12 > 0x7FF )
        {
          if ( (v12 & 0xF800) == 0xD800 )
            goto LABEL_58;
          ++v6;
        }
        ++v6;
      }
      if ( ((unsigned __int8)a1 & 2) != 0 )
      {
        v12 = *(unsigned __int16 *)a1;
        a1 += 2;
        if ( v12 > 0x7F )
        {
          if ( v12 > 0x7FF )
          {
            if ( (v12 & 0xF800) == 0xD800 )
              goto LABEL_58;
            ++v6;
          }
          ++v6;
          goto LABEL_35;
        }
      }
      while ( 1 )
      {
LABEL_35:
        if ( a1 >= v11 )
          goto LABEL_2;
        v13 = *((_DWORD *)a1 + 1);
        v14 = *(_DWORD *)a1;
        v15 = *(_DWORD *)a1 | v13;
        if ( (v15 & 0xFF80FF80) != 0 )
        {
          if ( (v15 & 0xF800F800) != 0 )
            goto LABEL_57;
          if ( (v14 & 0xFF800000) != 0 )
            ++v6;
          if ( (v14 & 0xFF80) != 0 )
            ++v6;
          if ( (v13 & 0xFF800000) != 0 )
            ++v6;
          if ( (v13 & 0xFF80) != 0 )
            ++v6;
        }
        v16 = *((_DWORD *)a1 + 3);
        a1 += 8;
        v14 = *(_DWORD *)a1;
        v17 = *(_DWORD *)a1 | v16;
        if ( (v17 & 0xFF80FF80) != 0 )
        {
          if ( (v17 & 0xF800F800) != 0 )
          {
LABEL_57:
            v12 = (unsigned __int16)v14;
            a1 += 2;
            if ( (unsigned __int16)v14 > 0x7Fu )
            {
LABEL_58:
              if ( v12 <= 0x7FF )
                goto LABEL_64;
              if ( v12 - 55296 > 0x7FF )
                goto LABEL_63;
              if ( v12 > 0xDBFF || (unsigned int)*(unsigned __int16 *)a1 - 56320 > 0x3FF )
              {
                a1 -= 2;
                goto LABEL_2;
              }
              a1 += 2;
LABEL_63:
              ++v6;
LABEL_64:
              ++v6;
            }
            goto LABEL_65;
          }
          if ( (v14 & 0xFF800000) != 0 )
            ++v6;
          if ( (v14 & 0xFF80) != 0 )
            ++v6;
          if ( (v16 & 0xFF800000) != 0 )
            ++v6;
          if ( (v16 & 0xFF80) != 0 )
            ++v6;
        }
        a1 += 8;
      }
    }
    v8 = *(unsigned __int16 *)a1;
    a1 += 2;
LABEL_6:
    if ( v8 - 55296 > 0x3FF )
      goto LABEL_7;
    --v6;
  }
  if ( v8 )
  {
    ++v6;
    goto LABEL_7;
  }
LABEL_14:
  result = v3;
  *a3 = v6;
  return result;
}
