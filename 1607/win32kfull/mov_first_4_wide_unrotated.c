/*
 * XREFs of mov_first_4_wide_unrotated @ 0x1C02D52D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall mov_first_4_wide_unrotated(int a1, __int64 a2, int a3, char *a4, __int64 a5)
{
  __int64 v6; // r11
  _WORD *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  char *v10; // rdx
  __int64 v11; // r8
  char *v12; // r9
  _BYTE *v13; // rcx
  char v14; // al
  unsigned __int64 v15; // r10

  v6 = a3;
  v7 = (_WORD *)a5;
  v8 = 4 * a1;
  result = a5 & 3;
  v10 = &a4[v8];
  if ( result <= 3 )
  {
    v11 = 0LL;
    if ( (a5 & 3) != 0 )
    {
      result = (unsigned int)(result - 1);
      if ( (_DWORD)result )
      {
        result = (unsigned int)(result - 1);
        if ( !(_DWORD)result )
        {
          while ( a4 != v10 )
          {
            *v7 = *(_WORD *)a4;
            result = *((unsigned __int16 *)a4 + 1);
            v7[1] = result;
            v7 = (_WORD *)((char *)v7 + v6);
            a4 += 4;
          }
          return result;
        }
        if ( (_DWORD)result != 1 )
          return result;
      }
      if ( a4 != v10 )
      {
        v12 = a4 + 2;
        v13 = (_BYTE *)(a5 + 2);
        do
        {
          *(v13 - 2) = *(v12 - 2);
          *(v13 - 1) = *(v12 - 1);
          v14 = *v12;
          v12 += 4;
          *v13 = v14;
          v13[1] = *(v12 - 3);
          v13 += v6;
          result = (unsigned __int64)(v12 - 2);
        }
        while ( v12 - 2 != v10 );
      }
    }
    else
    {
      v15 = (unsigned __int64)(v10 - a4 + 3) >> 2;
      if ( a4 > v10 )
        v15 = 0LL;
      if ( v15 )
      {
        do
        {
          result = *(unsigned int *)a4;
          ++v11;
          *(_DWORD *)v7 = result;
          a4 += 4;
          v7 = (_WORD *)((char *)v7 + v6);
        }
        while ( v11 != v15 );
      }
    }
  }
  return result;
}
