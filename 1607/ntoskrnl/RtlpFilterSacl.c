/*
 * XREFs of RtlpFilterSacl @ 0x140403D34
 * Callers:
 *     SeQuerySecurityDescriptorInfo @ 0x1404038C0 (SeQuerySecurityDescriptorInfo.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall RtlpFilterSacl(__int64 *a1, __int64 a2, _DWORD *a3, char a4)
{
  unsigned __int16 *v4; // rsi
  unsigned int v5; // ebp
  int v9; // r10d
  unsigned __int8 *v10; // r11
  __int64 v11; // rdx
  unsigned int v12; // ecx
  bool v13; // zf
  __int64 result; // rax
  char *v15; // rdi
  unsigned int v16; // ecx
  bool v17; // zf
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx

  v4 = (unsigned __int16 *)(a1 + 1);
  v5 = 0;
  v9 = 8;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( *((_WORD *)a1 + 2) )
  {
    v11 = *((unsigned __int16 *)a1 + 2);
    while ( 1 )
    {
      v12 = *v10;
      if ( v12 <= 0x11 )
        break;
      v18 = v12 - 18;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
          {
            if ( a4 >= 0 )
              goto LABEL_8;
LABEL_7:
            v9 += *((unsigned __int16 *)v10 + 1);
            goto LABEL_8;
          }
LABEL_20:
          v13 = (a4 & 8) == 0;
          goto LABEL_6;
        }
        v13 = (a4 & 0x40) == 0;
      }
      else
      {
        v13 = (a4 & 0x20) == 0;
      }
LABEL_6:
      if ( !v13 )
        goto LABEL_7;
LABEL_8:
      v10 += *((unsigned __int16 *)v10 + 1);
      if ( !--v11 )
        goto LABEL_9;
    }
    if ( v12 == 17 )
    {
      v13 = (a4 & 0x10) == 0;
      goto LABEL_6;
    }
    goto LABEL_20;
  }
LABEL_9:
  result = (v9 + 3) & 0xFFFFFFFC;
  if ( *a3 < (unsigned int)result )
  {
    *a3 = result;
    return result;
  }
  result = *a1;
  v15 = (char *)(a2 + 8);
  *(_QWORD *)a2 = *a1;
  *(_DWORD *)(a2 + 2) = 8;
  if ( *((_WORD *)a1 + 2) )
  {
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)v4;
      if ( v16 <= 0x11 )
        break;
      v20 = v16 - 18;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            if ( a4 >= 0 )
              goto LABEL_18;
LABEL_17:
            memmove(v15, v4, v4[1]);
            ++*(_WORD *)(a2 + 4);
            *(_WORD *)(a2 + 2) += v4[1];
            v15 += v4[1];
            goto LABEL_18;
          }
LABEL_21:
          v17 = (a4 & 8) == 0;
          goto LABEL_16;
        }
        v17 = (a4 & 0x40) == 0;
      }
      else
      {
        v17 = (a4 & 0x20) == 0;
      }
LABEL_16:
      if ( !v17 )
        goto LABEL_17;
LABEL_18:
      ++v5;
      v4 = (unsigned __int16 *)((char *)v4 + v4[1]);
      result = *((unsigned __int16 *)a1 + 2);
      if ( v5 >= (unsigned int)result )
        return result;
    }
    if ( v16 == 17 )
    {
      v17 = (a4 & 0x10) == 0;
      goto LABEL_16;
    }
    goto LABEL_21;
  }
  return result;
}
