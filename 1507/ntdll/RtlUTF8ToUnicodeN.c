/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x18005C940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUTF8ToUnicodeN(_WORD *a1, unsigned int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebp
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  _WORD *v10; // r10
  char *v11; // r11
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _WORD *v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // edx
  char v19; // cl
  unsigned int v20; // edx
  char v21; // dl
  int v22; // edx
  unsigned int v23; // ecx
  __int16 v24; // dx
  unsigned int v25; // edx
  bool v26; // zf
  char v27; // cl
  unsigned int v28; // edx
  int v29; // edx
  char v30; // cl

  v5 = 0;
  v7 = (unsigned __int64)a2 >> 1;
  v8 = 0;
  v10 = a1;
  v11 = &a4[a5];
  v12 = (unsigned __int64)&a1[v7];
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( a4 >= v11 )
        {
          if ( v8 )
          {
            v5 = 263;
            if ( (unsigned __int64)v10 < v12 )
              *v10++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( a3 )
            *a3 = 2 * (v10 - a1);
          return v5;
        }
        if ( !v8 )
        {
          v8 = *a4++;
          if ( v8 <= 0x7F )
          {
LABEL_6:
            if ( (unsigned __int64)v10 >= v12 )
              goto LABEL_77;
            *v10++ = v8;
            v13 = v11 - a4;
            v14 = (__int64)(v12 - (_QWORD)v10) >> 1;
            if ( (unsigned __int64)(v11 - a4) <= 0xD )
            {
              if ( v14 < v13 )
                goto LABEL_47;
              while ( a4 < v11 )
              {
                v8 = *a4++;
                if ( v8 > 0x7F )
                  goto LABEL_36;
                *v10++ = v8;
              }
              goto LABEL_13;
            }
            if ( v13 < v14 )
              v14 = v11 - a4;
            v16 = &v10[v14 - 7];
            if ( v10 >= v16 )
              goto LABEL_47;
            while ( 1 )
            {
              v17 = *a4++;
              if ( v17 > 0x7F )
                goto LABEL_40;
              *v10++ = v17;
              if ( ((unsigned __int8)a4 & 1) != 0 )
              {
                v17 = *a4++;
                if ( v17 > 0x7F )
                  goto LABEL_40;
                *v10++ = v17;
              }
              if ( ((unsigned __int8)a4 & 2) == 0 )
                goto LABEL_27;
              v17 = *(unsigned __int16 *)a4;
              if ( (v17 & 0x8080) == 0 )
              {
                a4 += 2;
                *v10 = v17 & 0x7F;
                v10[1] = (v17 >> 8) & 0x7F;
                v10 += 2;
LABEL_27:
                while ( v10 < v16 )
                {
                  v18 = *((_DWORD *)a4 + 1);
                  v17 = *(_DWORD *)a4;
                  if ( ((*(_DWORD *)a4 | v18) & 0x80808080) != 0 )
                    goto LABEL_48;
                  a4 += 8;
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
LABEL_47:
                v8 = 0;
                goto LABEL_3;
              }
LABEL_48:
              ++a4;
              if ( (unsigned __int8)v17 <= 0x7Fu )
              {
                *v10++ = (unsigned __int8)v17;
                goto LABEL_46;
              }
LABEL_40:
              v21 = *a4++;
              if ( (v17 & 0x40) == 0 || (v21 & 0xC0) != 0x80 )
              {
LABEL_62:
                a4 -= 2;
                goto LABEL_47;
              }
              v22 = v21 & 0x3F;
              if ( (v17 & 0x20) != 0 )
              {
                v25 = ((v17 & 0xF) << 6) | v22;
                v26 = (v17 & 0x10) == 0;
                v27 = *a4;
                if ( v26 )
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v27 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  v24 = v27 & 0x3F | ((_WORD)v25 << 6);
                  ++a4;
                  --v16;
                }
                else
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_62;
                  if ( (v27 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  v29 = v27 & 0x3F | (v25 << 6);
                  v30 = a4[1];
                  if ( (v30 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  a4 += 2;
                  *v10++ = (((v30 & 0x3F | (unsigned int)(v29 << 6)) >> 10) & 0x7FF) - 10304;
                  v24 = (v30 & 0x3F | ((_WORD)v29 << 6) & 0x3FF) - 9216;
                  --v16;
                }
              }
              else
              {
                v23 = v17 & 0x1F;
                if ( v23 <= 1 )
                  goto LABEL_62;
                v24 = ((_WORD)v23 << 6) | v22;
              }
              *v10++ = v24;
              --v16;
LABEL_46:
              if ( v10 >= v16 )
                goto LABEL_47;
            }
          }
LABEL_36:
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
LABEL_64:
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        break;
      }
      v19 = *a4++;
      if ( (v19 & 0xC0) != 0x80 )
      {
        --a4;
        goto LABEL_64;
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
        goto LABEL_64;
      }
      break;
    }
    if ( (v8 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( (unsigned __int64)v10 < v12 )
    {
      *v10++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_77:
    if ( a3 )
      *a3 = 2 * (v10 - a1);
    return 3221225507LL;
  }
  else if ( a3 )
  {
    return CountUTF8ToUnicode(a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
