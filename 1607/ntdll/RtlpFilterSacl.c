/*
 * XREFs of RtlpFilterSacl @ 0x1800E106C
 * Callers:
 *     RtlQuerySecurityObject @ 0x1800D4C80 (RtlQuerySecurityObject.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpFilterSacl(__int64 *a1, __int64 a2, _DWORD *a3, char a4)
{
  unsigned __int16 *v4; // rsi
  unsigned int v5; // ebp
  int v9; // r10d
  unsigned __int8 *v10; // r11
  __int64 i; // rdx
  unsigned int v12; // ecx
  bool v13; // zf
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  __int64 result; // rax
  char *v17; // rdi
  unsigned int v18; // ecx
  bool v19; // zf
  unsigned int v20; // ecx
  unsigned int v21; // ecx

  v4 = (unsigned __int16 *)(a1 + 1);
  v5 = 0;
  v9 = 8;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( *((_WORD *)a1 + 2) )
  {
    for ( i = *((unsigned __int16 *)a1 + 2); i; --i )
    {
      v12 = *v10;
      if ( v12 > 0x11 )
      {
        v14 = v12 - 18;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 == 1 )
            {
              if ( a4 < 0 )
                goto LABEL_15;
              goto LABEL_16;
            }
LABEL_5:
            v13 = (a4 & 8) == 0;
            goto LABEL_14;
          }
          v13 = (a4 & 0x40) == 0;
        }
        else
        {
          v13 = (a4 & 0x20) == 0;
        }
      }
      else
      {
        if ( v12 != 17 )
          goto LABEL_5;
        v13 = (a4 & 0x10) == 0;
      }
LABEL_14:
      if ( !v13 )
LABEL_15:
        v9 += *((unsigned __int16 *)v10 + 1);
LABEL_16:
      v10 += *((unsigned __int16 *)v10 + 1);
    }
  }
  result = (v9 + 3) & 0xFFFFFFFC;
  if ( *a3 < (unsigned int)result )
  {
    *a3 = result;
    return result;
  }
  result = *a1;
  v17 = (char *)(a2 + 8);
  *(_QWORD *)a2 = *a1;
  *(_DWORD *)(a2 + 2) = 8;
  if ( *((_WORD *)a1 + 2) )
  {
    do
    {
      v18 = *(unsigned __int8 *)v4;
      if ( v18 > 0x11 )
      {
        v20 = v18 - 18;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 )
            {
              if ( a4 < 0 )
                goto LABEL_32;
              goto LABEL_33;
            }
LABEL_22:
            v19 = (a4 & 8) == 0;
            goto LABEL_31;
          }
          v19 = (a4 & 0x40) == 0;
        }
        else
        {
          v19 = (a4 & 0x20) == 0;
        }
      }
      else
      {
        if ( v18 != 17 )
          goto LABEL_22;
        v19 = (a4 & 0x10) == 0;
      }
LABEL_31:
      if ( !v19 )
      {
LABEL_32:
        memmove(v17, v4, v4[1]);
        ++*(_WORD *)(a2 + 4);
        *(_WORD *)(a2 + 2) += v4[1];
        v17 += v4[1];
      }
LABEL_33:
      ++v5;
      v4 = (unsigned __int16 *)((char *)v4 + v4[1]);
      result = *((unsigned __int16 *)a1 + 2);
    }
    while ( v5 < (unsigned int)result );
  }
  return result;
}
