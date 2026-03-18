/*
 * XREFs of itrp_ELSE @ 0x1C00C4DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall itrp_ELSE(unsigned __int8 *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // r8
  __int16 v3; // r10
  unsigned __int8 *v4; // rax
  char v5; // dl
  unsigned __int8 *v6; // rax
  int v7; // eax
  unsigned __int64 v9; // rax

  v1 = qword_1C0323E90;
  v2 = qword_1C0323E88;
  v3 = 1;
  while ( 1 )
  {
    if ( (unsigned __int64)a1 >= v2 )
    {
      dword_1C0323E80 = 4357;
      return a1;
    }
    if ( (unsigned __int64)a1 < v1 )
      break;
    v4 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) > v2 || v4 < a1 )
      break;
    v5 = *a1++;
    if ( v5 == 89 )
    {
      --v3;
    }
    else if ( v5 == 88 )
    {
      ++v3;
    }
    else
    {
      v6 = v4 - 1;
      if ( (unsigned __int64)v6 < v1 || (unsigned __int64)a1 > v2 || a1 < v6 )
        goto LABEL_29;
      _mm_lfence();
      v1 = qword_1C0323E90;
      v2 = qword_1C0323E88;
      v7 = byte_1C02E1DB0[*v6];
      if ( v7 )
      {
        if ( v7 == 21 )
        {
          if ( (unsigned __int64)a1 >= qword_1C0323E90 && (unsigned __int64)(a1 + 1) <= qword_1C0323E88 && a1 + 1 >= a1 )
          {
            v7 = *a1 + 1;
            goto LABEL_17;
          }
        }
        else
        {
          if ( v7 != 22 )
            goto LABEL_17;
          if ( (unsigned __int64)a1 >= qword_1C0323E90 && (unsigned __int64)(a1 + 1) <= qword_1C0323E88 && a1 + 1 >= a1 )
          {
            v7 = 2 * *a1 + 1;
LABEL_17:
            v9 = (unsigned __int64)&a1[v7];
            a1 = (unsigned __int8 *)v9;
            if ( v9 >= qword_1C0323E90 )
            {
              if ( v9 > qword_1C0323E88 )
                a1 = (unsigned __int8 *)qword_1C0323E88;
              goto LABEL_12;
            }
            dword_1C0323E80 = 4363;
LABEL_30:
            a1 = (unsigned __int8 *)v2;
            goto LABEL_12;
          }
        }
LABEL_29:
        dword_1C0323E80 = 4381;
        goto LABEL_30;
      }
    }
LABEL_12:
    if ( !v3 )
      return a1;
  }
  dword_1C0323E80 = 4381;
  return (unsigned __int8 *)v2;
}
